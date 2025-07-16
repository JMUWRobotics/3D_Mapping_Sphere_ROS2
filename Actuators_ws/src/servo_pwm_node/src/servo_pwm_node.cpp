#include <wiringPi.h>
#include "rclcpp/rclcpp.hpp"
#include "logitech_msgs/msg/controller.hpp"

#define SERVO1 24   // WiringPi pin for servo 1
#define SERVO2 1  // WiringPi pin for servo 2

class ServoPWMNode : public rclcpp::Node
{
public:
  ServoPWMNode() : Node("servo_pwm_node")
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
  }

private:
  void controller_callback(const logitech_msgs::msg::Controller::SharedPtr msg)
  {
    //RCLCPP_INFO(this->get_logger(), "Received motor: %d, servop: %d, servomid: %d",
    //            msg->motor_value, msg->servop, msg->servomid);

    int servo_pulse = map_value(msg->servop, 0, 180, 32, 270);  // Map 0–180 deg to PWM
    pwmWrite(SERVO1, servo_pulse);

    
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

    pwmWrite(SERVO2, map_value(servo2_pos_, 0, 180, 50, 250));
  }

  int map_value(int x, int in_min, int in_max, int out_min, int out_max)
  {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
  }

  int servo2_pos_;
  int wave_direction_;
  rclcpp::Subscription<logitech_msgs::msg::Controller>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
    
  wiringPiSetup();  // Initialize WiringPi
  rclcpp::spin(std::make_shared<ServoPWMNode>());
  rclcpp::shutdown();
  return 0;
}