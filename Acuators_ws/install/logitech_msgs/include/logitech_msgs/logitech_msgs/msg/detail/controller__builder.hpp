// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "logitech_msgs/msg/controller.hpp"


#ifndef LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
#define LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "logitech_msgs/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace logitech_msgs
{

namespace msg
{

namespace builder
{

class Init_Controller_servomid
{
public:
  explicit Init_Controller_servomid(::logitech_msgs::msg::Controller & msg)
  : msg_(msg)
  {}
  ::logitech_msgs::msg::Controller servomid(::logitech_msgs::msg::Controller::_servomid_type arg)
  {
    msg_.servomid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::logitech_msgs::msg::Controller msg_;
};

class Init_Controller_servop
{
public:
  explicit Init_Controller_servop(::logitech_msgs::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_servomid servop(::logitech_msgs::msg::Controller::_servop_type arg)
  {
    msg_.servop = std::move(arg);
    return Init_Controller_servomid(msg_);
  }

private:
  ::logitech_msgs::msg::Controller msg_;
};

class Init_Controller_motor_value
{
public:
  Init_Controller_motor_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_servop motor_value(::logitech_msgs::msg::Controller::_motor_value_type arg)
  {
    msg_.motor_value = std::move(arg);
    return Init_Controller_servop(msg_);
  }

private:
  ::logitech_msgs::msg::Controller msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::logitech_msgs::msg::Controller>()
{
  return logitech_msgs::msg::builder::Init_Controller_motor_value();
}

}  // namespace logitech_msgs

#endif  // LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
