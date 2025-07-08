// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice
#include "logitech_msgs/msg/detail/controller__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "logitech_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "logitech_msgs/msg/detail/controller__struct.h"
#include "logitech_msgs/msg/detail/controller__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Controller__ros_msg_type = logitech_msgs__msg__Controller;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
bool cdr_serialize_logitech_msgs__msg__Controller(
  const logitech_msgs__msg__Controller * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: motor_value
  {
    cdr << ros_message->motor_value;
  }

  // Field name: servop
  {
    cdr << ros_message->servop;
  }

  // Field name: servomid
  {
    cdr << ros_message->servomid;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
bool cdr_deserialize_logitech_msgs__msg__Controller(
  eprosima::fastcdr::Cdr & cdr,
  logitech_msgs__msg__Controller * ros_message)
{
  // Field name: motor_value
  {
    cdr >> ros_message->motor_value;
  }

  // Field name: servop
  {
    cdr >> ros_message->servop;
  }

  // Field name: servomid
  {
    cdr >> ros_message->servomid;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
size_t get_serialized_size_logitech_msgs__msg__Controller(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Controller__ros_msg_type * ros_message = static_cast<const _Controller__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: motor_value
  {
    size_t item_size = sizeof(ros_message->motor_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: servop
  {
    size_t item_size = sizeof(ros_message->servop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: servomid
  {
    size_t item_size = sizeof(ros_message->servomid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
size_t max_serialized_size_logitech_msgs__msg__Controller(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: motor_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: servop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: servomid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = logitech_msgs__msg__Controller;
    is_plain =
      (
      offsetof(DataType, servomid) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
bool cdr_serialize_key_logitech_msgs__msg__Controller(
  const logitech_msgs__msg__Controller * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: motor_value
  {
    cdr << ros_message->motor_value;
  }

  // Field name: servop
  {
    cdr << ros_message->servop;
  }

  // Field name: servomid
  {
    cdr << ros_message->servomid;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
size_t get_serialized_size_key_logitech_msgs__msg__Controller(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Controller__ros_msg_type * ros_message = static_cast<const _Controller__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: motor_value
  {
    size_t item_size = sizeof(ros_message->motor_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: servop
  {
    size_t item_size = sizeof(ros_message->servop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: servomid
  {
    size_t item_size = sizeof(ros_message->servomid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logitech_msgs
size_t max_serialized_size_key_logitech_msgs__msg__Controller(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: motor_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: servop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: servomid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = logitech_msgs__msg__Controller;
    is_plain =
      (
      offsetof(DataType, servomid) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Controller__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const logitech_msgs__msg__Controller * ros_message = static_cast<const logitech_msgs__msg__Controller *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_logitech_msgs__msg__Controller(ros_message, cdr);
}

static bool _Controller__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  logitech_msgs__msg__Controller * ros_message = static_cast<logitech_msgs__msg__Controller *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_logitech_msgs__msg__Controller(cdr, ros_message);
}

static uint32_t _Controller__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_logitech_msgs__msg__Controller(
      untyped_ros_message, 0));
}

static size_t _Controller__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_logitech_msgs__msg__Controller(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Controller = {
  "logitech_msgs::msg",
  "Controller",
  _Controller__cdr_serialize,
  _Controller__cdr_deserialize,
  _Controller__get_serialized_size,
  _Controller__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Controller__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Controller,
  get_message_typesupport_handle_function,
  &logitech_msgs__msg__Controller__get_type_hash,
  &logitech_msgs__msg__Controller__get_type_description,
  &logitech_msgs__msg__Controller__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, logitech_msgs, msg, Controller)() {
  return &_Controller__type_support;
}

#if defined(__cplusplus)
}
#endif
