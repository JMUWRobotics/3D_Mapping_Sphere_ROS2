// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "logitech_msgs/msg/controller.h"


#ifndef LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_H_
#define LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Controller in the package logitech_msgs.
typedef struct logitech_msgs__msg__Controller
{
  int32_t motor_value;
  int32_t servop;
  int32_t servomid;
} logitech_msgs__msg__Controller;

// Struct for a sequence of logitech_msgs__msg__Controller.
typedef struct logitech_msgs__msg__Controller__Sequence
{
  logitech_msgs__msg__Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} logitech_msgs__msg__Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_H_
