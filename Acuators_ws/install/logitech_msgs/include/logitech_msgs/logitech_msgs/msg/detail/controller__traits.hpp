// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "logitech_msgs/msg/controller.hpp"


#ifndef LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__TRAITS_HPP_
#define LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "logitech_msgs/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace logitech_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Controller & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_value
  {
    out << "motor_value: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_value, out);
    out << ", ";
  }

  // member: servop
  {
    out << "servop: ";
    rosidl_generator_traits::value_to_yaml(msg.servop, out);
    out << ", ";
  }

  // member: servomid
  {
    out << "servomid: ";
    rosidl_generator_traits::value_to_yaml(msg.servomid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Controller & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_value: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_value, out);
    out << "\n";
  }

  // member: servop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servop: ";
    rosidl_generator_traits::value_to_yaml(msg.servop, out);
    out << "\n";
  }

  // member: servomid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servomid: ";
    rosidl_generator_traits::value_to_yaml(msg.servomid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Controller & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace logitech_msgs

namespace rosidl_generator_traits
{

[[deprecated("use logitech_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const logitech_msgs::msg::Controller & msg,
  std::ostream & out, size_t indentation = 0)
{
  logitech_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use logitech_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const logitech_msgs::msg::Controller & msg)
{
  return logitech_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<logitech_msgs::msg::Controller>()
{
  return "logitech_msgs::msg::Controller";
}

template<>
inline const char * name<logitech_msgs::msg::Controller>()
{
  return "logitech_msgs/msg/Controller";
}

template<>
struct has_fixed_size<logitech_msgs::msg::Controller>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<logitech_msgs::msg::Controller>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<logitech_msgs::msg::Controller>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__TRAITS_HPP_
