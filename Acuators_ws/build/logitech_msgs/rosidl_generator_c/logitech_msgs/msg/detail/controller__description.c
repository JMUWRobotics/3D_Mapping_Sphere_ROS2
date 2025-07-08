// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

#include "logitech_msgs/msg/detail/controller__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_logitech_msgs
const rosidl_type_hash_t *
logitech_msgs__msg__Controller__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x44, 0x24, 0x04, 0x44, 0x60, 0xd1, 0x63,
      0xb0, 0x1a, 0x94, 0xf8, 0x83, 0x46, 0x53, 0x8e,
      0x9a, 0x79, 0x94, 0x01, 0x96, 0x35, 0x8c, 0x91,
      0x23, 0xf1, 0xb6, 0x1a, 0xbf, 0xd8, 0x5e, 0xd1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char logitech_msgs__msg__Controller__TYPE_NAME[] = "logitech_msgs/msg/Controller";

// Define type names, field names, and default values
static char logitech_msgs__msg__Controller__FIELD_NAME__motor_value[] = "motor_value";
static char logitech_msgs__msg__Controller__FIELD_NAME__servop[] = "servop";
static char logitech_msgs__msg__Controller__FIELD_NAME__servomid[] = "servomid";

static rosidl_runtime_c__type_description__Field logitech_msgs__msg__Controller__FIELDS[] = {
  {
    {logitech_msgs__msg__Controller__FIELD_NAME__motor_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {logitech_msgs__msg__Controller__FIELD_NAME__servop, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {logitech_msgs__msg__Controller__FIELD_NAME__servomid, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
logitech_msgs__msg__Controller__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {logitech_msgs__msg__Controller__TYPE_NAME, 28, 28},
      {logitech_msgs__msg__Controller__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 motor_value\n"
  "int32 servop\n"
  "int32 servomid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
logitech_msgs__msg__Controller__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {logitech_msgs__msg__Controller__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
logitech_msgs__msg__Controller__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *logitech_msgs__msg__Controller__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
