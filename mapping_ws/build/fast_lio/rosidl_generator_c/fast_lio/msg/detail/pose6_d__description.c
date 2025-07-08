// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fast_lio:msg/Pose6D.idl
// generated code does not contain a copyright notice

#include "fast_lio/msg/detail/pose6_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fast_lio
const rosidl_type_hash_t *
fast_lio__msg__Pose6D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0x0f, 0x33, 0xa8, 0x0f, 0x60, 0x37, 0xcf,
      0x0c, 0x17, 0x71, 0xc1, 0x9d, 0xca, 0x86, 0x86,
      0xff, 0x22, 0xac, 0xbf, 0xaa, 0xd5, 0x6e, 0x2e,
      0x0a, 0x13, 0xc3, 0xb9, 0xac, 0x7f, 0x78, 0x40,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char fast_lio__msg__Pose6D__TYPE_NAME[] = "fast_lio/msg/Pose6D";

// Define type names, field names, and default values
static char fast_lio__msg__Pose6D__FIELD_NAME__offset_time[] = "offset_time";
static char fast_lio__msg__Pose6D__FIELD_NAME__acc[] = "acc";
static char fast_lio__msg__Pose6D__FIELD_NAME__gyr[] = "gyr";
static char fast_lio__msg__Pose6D__FIELD_NAME__vel[] = "vel";
static char fast_lio__msg__Pose6D__FIELD_NAME__pos[] = "pos";
static char fast_lio__msg__Pose6D__FIELD_NAME__rot[] = "rot";

static rosidl_runtime_c__type_description__Field fast_lio__msg__Pose6D__FIELDS[] = {
  {
    {fast_lio__msg__Pose6D__FIELD_NAME__offset_time, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fast_lio__msg__Pose6D__FIELD_NAME__acc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fast_lio__msg__Pose6D__FIELD_NAME__gyr, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fast_lio__msg__Pose6D__FIELD_NAME__vel, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fast_lio__msg__Pose6D__FIELD_NAME__pos, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fast_lio__msg__Pose6D__FIELD_NAME__rot, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
fast_lio__msg__Pose6D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fast_lio__msg__Pose6D__TYPE_NAME, 19, 19},
      {fast_lio__msg__Pose6D__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# the preintegrated Lidar states at the time of IMU measurements in a frame\n"
  "float64  offset_time # the offset time of IMU measurement w.r.t the first lidar point\n"
  "float64[3] acc       # the preintegrated total acceleration (global frame) at the Lidar origin\n"
  "float64[3] gyr       # the unbiased angular velocity (body frame) at the Lidar origin\n"
  "float64[3] vel       # the preintegrated velocity (global frame) at the Lidar origin\n"
  "float64[3] pos       # the preintegrated position (global frame) at the Lidar origin\n"
  "float64[9] rot       # the preintegrated rotation (global frame) at the Lidar origin";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fast_lio__msg__Pose6D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fast_lio__msg__Pose6D__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 597, 597},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fast_lio__msg__Pose6D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fast_lio__msg__Pose6D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
