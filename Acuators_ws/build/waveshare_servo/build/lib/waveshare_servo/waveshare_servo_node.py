import rclpy
from rclpy.node import Node
from STservo_sdk import *  # Uses STServo SDK library
from logitech_msgs.msg import Controller
from sensor_msgs.msg import Imu
from scipy.spatial.transform import Rotation as R
import math
import time

class WaveshareServoNode(Node):
    def __init__(self):
        super().__init__('waveshare_servo_node')

        # Parameters
        self.STS_ID = 1
        self.BAUDRATE = 1000000
        self.DEVICENAME = "/dev/ttyACM0"
        self.STS_MOVING_SPEED0 = 2400
        self.STS_MOVING_SPEED1 = -2400
        self.STS_MOVING_ACC = 50
        self.index = 0
        self.sts_move_speed = [self.STS_MOVING_SPEED0, 0, self.STS_MOVING_SPEED1, 0]
        self.pitch = 0.0
        
        # PID Controller parameters
        self.kp = 50.0    # Proportional gain (tune this)
        self.ki = 0.1     # Integral gain (tune this)
        self.kd = 10.0    # Derivative gain (tune this)
        
        # PID state variables
        self.target_pitch = -17.5  # Target angle (negative because robot is upside down)
        self.previous_error = 0.0
        self.integral_error = 0.0
        self.previous_time = time.time()
        
        # Control limits
        self.max_speed = 4000
        self.manual_control = False

        # STServo SDK setup
        self.portHandler = PortHandler(self.DEVICENAME)
        self.packetHandler = sts(self.portHandler)

        if not self.portHandler.openPort():
            self.get_logger().error("Failed to open the port")
            rclpy.shutdown()
            return

        if not self.portHandler.setBaudRate(self.BAUDRATE):
            self.get_logger().error("Failed to set the baudrate")
            self.portHandler.closePort()
            rclpy.shutdown()
            return

        self.get_logger().info("Port opened and baudrate set successfully")

        # Set wheel mode
        sts_comm_result, sts_error = self.packetHandler.WheelMode(self.STS_ID)
        if sts_comm_result != COMM_SUCCESS:
            self.get_logger().error(self.packetHandler.getTxRxResult(sts_comm_result))
        elif sts_error != 0:
            self.get_logger().error(self.packetHandler.getRxPacketError(sts_error))
        else:
            self.get_logger().info("Wheel mode enabled")

        # Subscribe to controller topic
        self.subscription = self.create_subscription(
            Controller,
            'controller',
            self.controller_callback,
            10
        )
        
        # Subscribe to IMU topic
        self.imu_subscription = self.create_subscription(
            Imu,
            '/livox/imu',
            self.imu_callback,
            10
        )
        
        # Create timer for PID control loop
        self.pid_timer = self.create_timer(0.01, self.pid_control_loop)  # 100Hz control loop

    def imu_callback(self, msg):
        # Get accelerometer data
        accel_x = msg.linear_acceleration.x
        accel_y = msg.linear_acceleration.y
        accel_z = msg.linear_acceleration.z
        
        # Try different pitch calculation (inverted or different axis)
        # Option 1: Invert the pitch
        #self.pitch = -math.degrees(math.atan2(accel_x, math.sqrt(accel_y*accel_y + accel_z*accel_z)))
        
        # Option 2: Use Y-axis instead of X-axis
        #self.pitch = math.degrees(math.atan2(accel_y, math.sqrt(accel_x*accel_x + accel_z*accel_z)))
        
        # Option 3: Use Z-axis as reference
        self.pitch = math.degrees(math.atan2(accel_x, accel_z))

    def pid_control_loop(self):
        """PID control loop for balance control"""
        if not self.manual_control:
            current_time = time.time()
            dt = current_time - self.previous_time
            
            if dt > 0:  # Avoid division by zero
                # Calculate error (negative target because robot is upside down)
                error = self.target_pitch - self.pitch  # -17.5 - self.pitch
                
                # Proportional term
                proportional = self.kp * error
                
                # Integral term
                self.integral_error += error * dt
                integral = self.ki * self.integral_error
                
                # Derivative term
                derivative = self.kd * (error - self.previous_error) / dt
                
                # PID output
                pid_output = proportional + integral + derivative
                
                # Limit output to servo speed range
                speed_command = max(-self.max_speed, min(self.max_speed, pid_output))
                
                # Send command to servo
                self.send_servo_command(int(speed_command))
                
                # Update previous values
                self.previous_error = error
                self.previous_time = current_time
                
                # Log PID values (reduce frequency for readability)
                if int(current_time * 10) % 10 == 0:  # Log every 1 second
                    self.get_logger().info(
                        f"Pitch: {self.pitch:.2f}°, Error: {error:.2f}°, PID: {pid_output:.0f}, Speed: {speed_command:.0f}"
                    )

    def send_servo_command(self, speed):
        """Send speed command to servo"""
        try:
            # Invert the speed command if control direction is wrong
            inverted_speed = -speed  # Try this if the servo responds backwards
            
            sts_comm_result, sts_error = self.packetHandler.WriteSpec(
                self.STS_ID, inverted_speed, self.STS_MOVING_ACC  # Use inverted_speed instead of speed
            )
            
            if sts_comm_result != COMM_SUCCESS:
                self.get_logger().error(self.packetHandler.getTxRxResult(sts_comm_result))
            elif sts_error != 0:
                self.get_logger().error(self.packetHandler.getRxPacketError(sts_error))
                
        except Exception as e:
            self.get_logger().error(f"Exception while writing to servo: {str(e)}")

    def controller_callback(self, msg):
        """Manual controller input - can override PID or set target"""
        raw_input = max(-100, min(100, msg.motor_value))
        
        # If controller input is significant, switch to manual mode
        if abs(raw_input) > 5:
            self.manual_control = True
            speed_val = abs(raw_input) * -40
            direction = 0 if raw_input >= 0 else 1
            self.send_servo_command(speed_val if direction == 0 else -speed_val)
            self.get_logger().info(f"Manual mode - Speed: {speed_val}")
        else:
            # Switch back to automatic PID control
            if self.manual_control:
                self.get_logger().info("Switching to PID control")
                # Reset PID state when switching back
                self.integral_error = 0.0
                self.previous_error = 0.0
                self.previous_time = time.time()
            self.manual_control = False

    def destroy_node(self):
        self.portHandler.closePort()
        self.get_logger().info("Closed port and exiting node")
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = WaveshareServoNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down node via keyboard interrupt")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()