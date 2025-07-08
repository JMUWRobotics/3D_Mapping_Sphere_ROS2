// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "logitech_msgs/msg/detail/controller__rosidl_typesupport_introspection_c.h"
#include "logitech_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "logitech_msgs/msg/detail/controller__functions.h"
#include "logitech_msgs/msg/detail/controller__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  logitech_msgs__msg__Controller__init(message_memory);
}

void logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_fini_function(void * message_memory)
{
  logitech_msgs__msg__Controller__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_member_array[3] = {
  {
    "motor_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(logitech_msgs__msg__Controller, motor_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(logitech_msgs__msg__Controller, servop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servomid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(logitech_msgs__msg__Controller, servomid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_members = {
  "logitech_msgs__msg",  // message namespace
  "Controller",  // message name
  3,  // number of fields
  sizeof(logitech_msgs__msg__Controller),
  false,  // has_any_key_member_
  logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_member_array,  // message members
  logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_init_function,  // function to initialize message memory (memory has to be allocated)
  logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle = {
  0,
  &logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_members,
  get_message_typesupport_handle_function,
  &logitech_msgs__msg__Controller__get_type_hash,
  &logitech_msgs__msg__Controller__get_type_description,
  &logitech_msgs__msg__Controller__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_logitech_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, logitech_msgs, msg, Controller)() {
  if (!logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle.typesupport_identifier) {
    logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &logitech_msgs__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
