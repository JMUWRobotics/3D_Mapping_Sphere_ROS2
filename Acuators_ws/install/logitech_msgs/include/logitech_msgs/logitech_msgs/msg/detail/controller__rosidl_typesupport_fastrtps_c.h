// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice
#ifndef LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "logitech_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "logitech_msgs/msg/detail/controller__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
bool cdr_serialize_logitech_msgs__msg__Controller(
  const logitech_msgs__msg__Controller * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
bool cdr_deserialize_logitech_msgs__msg__Controller(
  eprosima::fastcdr::Cdr &,
  logitech_msgs__msg__Controller * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
size_t get_serialized_size_logitech_msgs__msg__Controller(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
size_t max_serialized_size_logitech_msgs__msg__Controller(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
bool cdr_serialize_key_logitech_msgs__msg__Controller(
  const logitech_msgs__msg__Controller * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
size_t get_serialized_size_key_logitech_msgs__msg__Controller(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
size_t max_serialized_size_key_logitech_msgs__msg__Controller(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, logitech_msgs, msg, Controller)();

#ifdef __cplusplus
}
#endif

#endif  // LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
