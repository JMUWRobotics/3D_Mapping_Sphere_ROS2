import rclpy
from rclpy.node import Node
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu, MagneticField
from geometry_msgs.msg import Quaternion, Vector3
import board
import busio
import adafruit_bno08x
from adafruit_bno08x.i2c import BNO08X_I2C

class IMUPublisher(Node):
    def __init__(self):
        super().__init__('bno08x_imu_publisher')
        self.publisher_imu = self.create_publisher(Imu, '/imu/data_raw', 10)
        self.publisher_mag = self.create_publisher(MagneticField, '/imu/mag', 10)
        self.timer = self.create_timer(0.01, self.publish_imu_data)  # 50Hz

        i2c = busio.I2C(board.SCL, board.SDA, frequency=400000)
        self.bno = BNO08X_I2C(i2c)

        self.bno.enable_feature(adafruit_bno08x.BNO_REPORT_ACCELEROMETER)
        self.bno.enable_feature(adafruit_bno08x.BNO_REPORT_GYROSCOPE)
        self.bno.enable_feature(adafruit_bno08x.BNO_REPORT_MAGNETOMETER)
        self.bno.enable_feature(adafruit_bno08x.BNO_REPORT_GAME_ROTATION_VECTOR)

    def publish_imu_data(self):
        msg = Imu()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "imu_link"

        # Get sensor data
        accel_x, accel_y, accel_z = self.bno.acceleration
        gyro_x, gyro_y, gyro_z = self.bno.gyro
        mag_x, mag_y, mag_z = self.bno.magnetic
        quat_x, quat_y, quat_z, quat_w = self.bno.game_quaternion

        # Fill IMU message
        msg.linear_acceleration = Vector3(x=accel_x, y=accel_y, z=accel_z)
        msg.angular_velocity = Vector3(x=gyro_x, y=gyro_y, z=gyro_z)
        msg.orientation = Quaternion(x=quat_x, y=quat_y, z=quat_z, w=quat_w)

        # Publish IMU message
        self.publisher_imu.publish(msg)

        # Publish Magnetometer data
        mag_msg = MagneticField()
        mag_msg.header = msg.header
        mag_msg.magnetic_field = Vector3(x=mag_x, y=mag_y, z=mag_z)
        self.publisher_mag.publish(mag_msg)

        #self.get_logger().info(f"Published IMU Data: {msg}")

def main(args=None):
    rclpy.init(args=args)
    node = IMUPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

