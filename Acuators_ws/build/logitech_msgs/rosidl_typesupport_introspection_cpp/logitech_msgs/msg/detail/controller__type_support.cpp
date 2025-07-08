// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "logitech_msgs/msg/detail/controller__functions.h"
#include "logitech_msgs/msg/detail/controller__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace logitech_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Controller_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) logitech_msgs::msg::Controller(_init);
}

void Controller_fini_function(void * message_memory)
{
  auto typed_message = static_cast<logitech_msgs::msg::Controller *>(message_memory);
  typed_message->~Controller();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Controller_message_member_array[3] = {
  {
    "motor_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(logitech_msgs::msg::Controller, motor_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "servop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(logitech_msgs::msg::Controller, servop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "servomid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(logitech_msgs::msg::Controller, servomid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Controller_message_members = {
  "logitech_msgs::msg",  // message namespace
  "Controller",  // message name
  3,  // number of fields
  sizeof(logitech_msgs::msg::Controller),
  false,  // has_any_key_member_
  Controller_message_member_array,  // message members
  Controller_init_function,  // function to initialize message memory (memory has to be allocated)
  Controller_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Controller_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Controller_message_members,
  get_message_typesupport_handle_function,
  &logitech_msgs__msg__Controller__get_type_hash,
  &logitech_msgs__msg__Controller__get_type_description,
  &logitech_msgs__msg__Controller__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace logitech_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<logitech_msgs::msg::Controller>()
{
  return &::logitech_msgs::msg::rosidl_typesupport_introspection_cpp::Controller_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, logitech_msgs, msg, Controller)() {
  return &::logitech_msgs::msg::rosidl_typesupport_introspection_cpp::Controller_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
