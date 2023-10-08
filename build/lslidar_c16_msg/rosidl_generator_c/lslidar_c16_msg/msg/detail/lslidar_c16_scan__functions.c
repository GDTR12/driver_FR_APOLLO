// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lslidar_c16_msg:msg/LslidarC16Scan.idl
// generated code does not contain a copyright notice
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "lslidar_c16_msg/msg/detail/lslidar_c16_point__functions.h"

bool
lslidar_c16_msg__msg__LslidarC16Scan__init(lslidar_c16_msg__msg__LslidarC16Scan * msg)
{
  if (!msg) {
    return false;
  }
  // altitude
  // points
  if (!lslidar_c16_msg__msg__LslidarC16Point__Sequence__init(&msg->points, 0)) {
    lslidar_c16_msg__msg__LslidarC16Scan__fini(msg);
    return false;
  }
  return true;
}

void
lslidar_c16_msg__msg__LslidarC16Scan__fini(lslidar_c16_msg__msg__LslidarC16Scan * msg)
{
  if (!msg) {
    return;
  }
  // altitude
  // points
  lslidar_c16_msg__msg__LslidarC16Point__Sequence__fini(&msg->points);
}

bool
lslidar_c16_msg__msg__LslidarC16Scan__are_equal(const lslidar_c16_msg__msg__LslidarC16Scan * lhs, const lslidar_c16_msg__msg__LslidarC16Scan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // points
  if (!lslidar_c16_msg__msg__LslidarC16Point__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
lslidar_c16_msg__msg__LslidarC16Scan__copy(
  const lslidar_c16_msg__msg__LslidarC16Scan * input,
  lslidar_c16_msg__msg__LslidarC16Scan * output)
{
  if (!input || !output) {
    return false;
  }
  // altitude
  output->altitude = input->altitude;
  // points
  if (!lslidar_c16_msg__msg__LslidarC16Point__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

lslidar_c16_msg__msg__LslidarC16Scan *
lslidar_c16_msg__msg__LslidarC16Scan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16Scan * msg = (lslidar_c16_msg__msg__LslidarC16Scan *)allocator.allocate(sizeof(lslidar_c16_msg__msg__LslidarC16Scan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lslidar_c16_msg__msg__LslidarC16Scan));
  bool success = lslidar_c16_msg__msg__LslidarC16Scan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lslidar_c16_msg__msg__LslidarC16Scan__destroy(lslidar_c16_msg__msg__LslidarC16Scan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lslidar_c16_msg__msg__LslidarC16Scan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lslidar_c16_msg__msg__LslidarC16Scan__Sequence__init(lslidar_c16_msg__msg__LslidarC16Scan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16Scan * data = NULL;

  if (size) {
    data = (lslidar_c16_msg__msg__LslidarC16Scan *)allocator.zero_allocate(size, sizeof(lslidar_c16_msg__msg__LslidarC16Scan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lslidar_c16_msg__msg__LslidarC16Scan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lslidar_c16_msg__msg__LslidarC16Scan__fini(&data[i - 1]);
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
lslidar_c16_msg__msg__LslidarC16Scan__Sequence__fini(lslidar_c16_msg__msg__LslidarC16Scan__Sequence * array)
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
      lslidar_c16_msg__msg__LslidarC16Scan__fini(&array->data[i]);
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

lslidar_c16_msg__msg__LslidarC16Scan__Sequence *
lslidar_c16_msg__msg__LslidarC16Scan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16Scan__Sequence * array = (lslidar_c16_msg__msg__LslidarC16Scan__Sequence *)allocator.allocate(sizeof(lslidar_c16_msg__msg__LslidarC16Scan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lslidar_c16_msg__msg__LslidarC16Scan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lslidar_c16_msg__msg__LslidarC16Scan__Sequence__destroy(lslidar_c16_msg__msg__LslidarC16Scan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lslidar_c16_msg__msg__LslidarC16Scan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lslidar_c16_msg__msg__LslidarC16Scan__Sequence__are_equal(const lslidar_c16_msg__msg__LslidarC16Scan__Sequence * lhs, const lslidar_c16_msg__msg__LslidarC16Scan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16Scan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lslidar_c16_msg__msg__LslidarC16Scan__Sequence__copy(
  const lslidar_c16_msg__msg__LslidarC16Scan__Sequence * input,
  lslidar_c16_msg__msg__LslidarC16Scan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lslidar_c16_msg__msg__LslidarC16Scan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lslidar_c16_msg__msg__LslidarC16Scan * data =
      (lslidar_c16_msg__msg__LslidarC16Scan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lslidar_c16_msg__msg__LslidarC16Scan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lslidar_c16_msg__msg__LslidarC16Scan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16Scan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
