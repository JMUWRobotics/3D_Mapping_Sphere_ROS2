#include <wiringPi.h>
#include "rclcpp/rclcpp.hpp"
#include "logitech_msgs/msg/controller.hpp"

#define SERVO1 24   // WiringPi pin for servo 1
#define SERVO2 1  // WiringPi pin for servo 2

class ServoPWMNode : public rclcpp::Node
{
public:
  ServoPWMNode() : Node("servo_pwm_node"), servo1_current_(90), servo1_target_(90), servo2_pos_(90), wave_direction_(1)
  {
    RCLCPP_INFO(this->get_logger(), "Initializing WiringPi...");
    //wiringPiSetup();  // Initialize WiringPi

    pinMode(SERVO1, PWM_OUTPUT);
    pinMode(SERVO2, PWM_OUTPUT);

    pwmSetMode(PWM_MODE_MS);
    pwmSetClock(192);
    pwmSetRange(2000);

    subscription_ = this->create_subscription<logitech_msgs::msg::Controller>(  
      "controller", 10,
      std::bind(&ServoPWMNode::controller_callback, this, std::placeholders::_1));
    
    // Timer for smooth servo movement updates
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(20),  // 50Hz update rate
      std::bind(&ServoPWMNode::update_servos, this));
  }

private:
  void controller_callback(const logitech_msgs::msg::Controller::SharedPtr msg)
  {
    // Set target position for smooth interpolation
    servo1_target_ = msg->servop;

    switch (msg->servomid)
    {
      case 0:  // up
        if (servo2_pos_ < 110)
          servo2_pos_ += 1;
        break;

      case 1:  // down
        if (servo2_pos_ > 70)
          servo2_pos_ -= 1;
        break;

      case 2:  // wave
        servo2_pos_ += wave_direction_;
        if (servo2_pos_ >= 110 || servo2_pos_ <= 70)
          wave_direction_ *= -1;  // reverse direction
        break;

      case 3:
      default:
        break;  // no change
    }
  }

  void update_servos()
  {
    // Smooth interpolation for servo1 (adjust smoothing_factor for speed)
    float smoothing_factor = 0.1f;  // Lower = smoother, Higher = faster response
    servo1_current_ += (servo1_target_ - servo1_current_) * smoothing_factor;
    
    // Apply PWM values
    int servo1_pulse = map_value(static_cast<int>(servo1_current_), 0, 180, 32, 270);
    pwmWrite(SERVO1, servo1_pulse);
    
    int servo2_pulse = map_value(servo2_pos_, 0, 180, 50, 250);
    pwmWrite(SERVO2, servo2_pulse);
  }

  int map_value(int x, int in_min, int in_max, int out_min, int out_max)
  {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
  }

  float servo1_current_;   // Current position with smooth interpolation
  int servo1_target_;      // Target position from controller
  int servo2_pos_;
  int wave_direction_;
  rclcpp::Subscription<logitech_msgs::msg::Controller>::SharedPtr subscription_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
    
  wiringPiSetup();  // Initialize WiringPi
  rclcpp::spin(std::make_shared<ServoPWMNode>());
  rclcpp::shutdown();
  return 0;
}