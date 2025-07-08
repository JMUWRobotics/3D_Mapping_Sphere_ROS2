#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "logitech_msgs/msg/controller.hpp"

using std::placeholders::_1;

class LogitechController : public rclcpp::Node
{
public:
  LogitechController()
  : Node("logitech_controller")
  {
    publisher_ = this->create_publisher<logitech_msgs::msg::Controller>("controller", 10);
    subscription_ = this->create_subscription<sensor_msgs::msg::Joy>(
      "/joy", 10, std::bind(&LogitechController::joy_callback, this, _1));
  }

private:
  void joy_callback(const sensor_msgs::msg::Joy::SharedPtr msg)
  {
    auto output = logitech_msgs::msg::Controller();

    // Left stick Y-axis (-1 to 1) -> motor_value (-100 to 100)
    output.motor_value = static_cast<int>(msg->axes[1] * 100.0);

    // Right stick X-axis (-1 to 1) -> servop (-90 to 90)
    output.servop = static_cast<int>(95 + (msg->axes[3] * 30.0));

    // Button mapping
    if (msg->buttons[4])      // LB
      output.servomid = 0;    // up
    else if (msg->buttons[5]) // RB
      output.servomid = 1;    // down
    else if (msg->buttons[1]) // B button (red on F710)
      output.servomid = 2;    // wave
    else
      output.servomid = 3;    // no update

    publisher_->publish(output);
  }
  rclcpp::Publisher<logitech_msgs::msg::Controller>::SharedPtr publisher_;
  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<LogitechController>());
  rclcpp::shutdown();
  return 0;
}
