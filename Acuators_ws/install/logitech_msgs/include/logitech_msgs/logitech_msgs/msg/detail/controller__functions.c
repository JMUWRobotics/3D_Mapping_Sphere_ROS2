// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice
#include "logitech_msgs/msg/detail/controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
logitech_msgs__msg__Controller__init(logitech_msgs__msg__Controller * msg)
{
  if (!msg) {
    return false;
  }
  // motor_value
  // servop
  // servomid
  return true;
}

void
logitech_msgs__msg__Controller__fini(logitech_msgs__msg__Controller * msg)
{
  if (!msg) {
    return;
  }
  // motor_value
  // servop
  // servomid
}

bool
logitech_msgs__msg__Controller__are_equal(const logitech_msgs__msg__Controller * lhs, const logitech_msgs__msg__Controller * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_value
  if (lhs->motor_value != rhs->motor_value) {
    return false;
  }
  // servop
  if (lhs->servop != rhs->servop) {
    return false;
  }
  // servomid
  if (lhs->servomid != rhs->servomid) {
    return false;
  }
  return true;
}

bool
logitech_msgs__msg__Controller__copy(
  const logitech_msgs__msg__Controller * input,
  logitech_msgs__msg__Controller * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_value
  output->motor_value = input->motor_value;
  // servop
  output->servop = input->servop;
  // servomid
  output->servomid = input->servomid;
  return true;
}

logitech_msgs__msg__Controller *
logitech_msgs__msg__Controller__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  logitech_msgs__msg__Controller * msg = (logitech_msgs__msg__Controller *)allocator.allocate(sizeof(logitech_msgs__msg__Controller), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(logitech_msgs__msg__Controller));
  bool success = logitech_msgs__msg__Controller__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
logitech_msgs__msg__Controller__destroy(logitech_msgs__msg__Controller * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    logitech_msgs__msg__Controller__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
logitech_msgs__msg__Controller__Sequence__init(logitech_msgs__msg__Controller__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  logitech_msgs__msg__Controller * data = NULL;

  if (size) {
    data = (logitech_msgs__msg__Controller *)allocator.zero_allocate(size, sizeof(logitech_msgs__msg__Controller), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = logitech_msgs__msg__Controller__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        logitech_msgs__msg__Controller__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
logitech_msgs__msg__Controller__Sequence__fini(logitech_msgs__msg__Controller__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      logitech_msgs__msg__Controller__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

logitech_msgs__msg__Controller__Sequence *
logitech_msgs__msg__Controller__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  logitech_msgs__msg__Controller__Sequence * array = (logitech_msgs__msg__Controller__Sequence *)allocator.allocate(sizeof(logitech_msgs__msg__Controller__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = logitech_msgs__msg__Controller__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
logitech_msgs__msg__Controller__Sequence__destroy(logitech_msgs__msg__Controller__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    logitech_msgs__msg__Controller__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
logitech_msgs__msg__Controller__Sequence__are_equal(const logitech_msgs__msg__Controller__Sequence * lhs, const logitech_msgs__msg__Controller__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!logitech_msgs__msg__Controller__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
logitech_msgs__msg__Controller__Sequence__copy(
  const logitech_msgs__msg__Controller__Sequence * input,
  logitech_msgs__msg__Controller__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(logitech_msgs__msg__Controller);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    logitech_msgs__msg__Controller * data =
      (logitech_msgs__msg__Controller *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!logitech_msgs__msg__Controller__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          logitech_msgs__msg__Controller__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!logitech_msgs__msg__Controller__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
