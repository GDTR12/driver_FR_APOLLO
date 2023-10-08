// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lslidar_c16_msg:msg/LslidarC16Layer.idl
// generated code does not contain a copyright notice
#include "lslidar_c16_msg/msg/detail/lslidar_c16_layer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `scan_channel`
#include "sensor_msgs/msg/detail/laser_scan__functions.h"

bool
lslidar_c16_msg__msg__LslidarC16Layer__init(lslidar_c16_msg__msg__LslidarC16Layer * msg)
{
  if (!msg) {
    return false;
  }
  // scan_channel
  for (size_t i = 0; i < 16; ++i) {
    if (!sensor_msgs__msg__LaserScan__init(&msg->scan_channel[i])) {
      lslidar_c16_msg__msg__LslidarC16Layer__fini(msg);
      return false;
    }
  }
  return true;
}

void
lslidar_c16_msg__msg__LslidarC16Layer__fini(lslidar_c16_msg__msg__LslidarC16Layer * msg)
{
  if (!msg) {
    return;
  }
  // scan_channel
  for (size_t i = 0; i < 16; ++i) {
    sensor_msgs__msg__LaserScan__fini(&msg->scan_channel[i]);
  }
}

bool
lslidar_c16_msg__msg__LslidarC16Layer__are_equal(const lslidar_c16_msg__msg__LslidarC16Layer * lhs, const lslidar_c16_msg__msg__LslidarC16Layer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scan_channel
  for (size_t i = 0; i < 16; ++i) {
    if (!sensor_msgs__msg__LaserScan__are_equal(
        &(lhs->scan_channel[i]), &(rhs->scan_channel[i])))
    {
      return false;
    }
  }
  return true;
}

bool
lslidar_c16_msg__msg__LslidarC16Layer__copy(
  const lslidar_c16_msg__msg__LslidarC16Layer * input,
  lslidar_c16_msg__msg__LslidarC16Layer * output)
{
  if (!input || !output) {
    return false;
  }
  // scan_channel
  for (size_t i = 0; i < 16; ++i) {
    if (!sensor_msgs__msg__LaserScan__copy(
        &(input->scan_channel[i]), &(output->scan_channel[i])))
    {
      return false;
    }
  }
  return true;
}

lslidar_c16_msg__msg__LslidarC16Layer *
lslidar_c16_msg__msg__LslidarC16Layer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16Layer * msg = (lslidar_c16_msg__msg__LslidarC16Layer *)allocator.allocate(sizeof(lslidar_c16_msg__msg__LslidarC16Layer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lslidar_c16_msg__msg__LslidarC16Layer));
  bool success = lslidar_c16_msg__msg__LslidarC16Layer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lslidar_c16_msg__msg__LslidarC16Layer__destroy(lslidar_c16_msg__msg__LslidarC16Layer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lslidar_c16_msg__msg__LslidarC16Layer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lslidar_c16_msg__msg__LslidarC16Layer__Sequence__init(lslidar_c16_msg__msg__LslidarC16Layer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16Layer * data = NULL;

  if (size) {
    data = (lslidar_c16_msg__msg__LslidarC16Layer *)allocator.zero_allocate(size, sizeof(lslidar_c16_msg__msg__LslidarC16Layer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lslidar_c16_msg__msg__LslidarC16Layer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lslidar_c16_msg__msg__LslidarC16Layer__fini(&data[i - 1]);
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
lslidar_c16_msg__msg__LslidarC16Layer__Sequence__fini(lslidar_c16_msg__msg__LslidarC16Layer__Sequence * array)
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
      lslidar_c16_msg__msg__LslidarC16Layer__fini(&array->data[i]);
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

lslidar_c16_msg__msg__LslidarC16Layer__Sequence *
lslidar_c16_msg__msg__LslidarC16Layer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16Layer__Sequence * array = (lslidar_c16_msg__msg__LslidarC16Layer__Sequence *)allocator.allocate(sizeof(lslidar_c16_msg__msg__LslidarC16Layer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lslidar_c16_msg__msg__LslidarC16Layer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lslidar_c16_msg__msg__LslidarC16Layer__Sequence__destroy(lslidar_c16_msg__msg__LslidarC16Layer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lslidar_c16_msg__msg__LslidarC16Layer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lslidar_c16_msg__msg__LslidarC16Layer__Sequence__are_equal(const lslidar_c16_msg__msg__LslidarC16Layer__Sequence * lhs, const lslidar_c16_msg__msg__LslidarC16Layer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16Layer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lslidar_c16_msg__msg__LslidarC16Layer__Sequence__copy(
  const lslidar_c16_msg__msg__LslidarC16Layer__Sequence * input,
  lslidar_c16_msg__msg__LslidarC16Layer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lslidar_c16_msg__msg__LslidarC16Layer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lslidar_c16_msg__msg__LslidarC16Layer * data =
      (lslidar_c16_msg__msg__LslidarC16Layer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lslidar_c16_msg__msg__LslidarC16Layer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lslidar_c16_msg__msg__LslidarC16Layer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16Layer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
