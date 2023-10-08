// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lslidar_c16_msg:msg/LslidarC16Sweep.idl
// generated code does not contain a copyright notice
#include "lslidar_c16_msg/msg/detail/lslidar_c16_sweep__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `scans`
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan__functions.h"

bool
lslidar_c16_msg__msg__LslidarC16Sweep__init(lslidar_c16_msg__msg__LslidarC16Sweep * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lslidar_c16_msg__msg__LslidarC16Sweep__fini(msg);
    return false;
  }
  // scans
  for (size_t i = 0; i < 16; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16Scan__init(&msg->scans[i])) {
      lslidar_c16_msg__msg__LslidarC16Sweep__fini(msg);
      return false;
    }
  }
  return true;
}

void
lslidar_c16_msg__msg__LslidarC16Sweep__fini(lslidar_c16_msg__msg__LslidarC16Sweep * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // scans
  for (size_t i = 0; i < 16; ++i) {
    lslidar_c16_msg__msg__LslidarC16Scan__fini(&msg->scans[i]);
  }
}

bool
lslidar_c16_msg__msg__LslidarC16Sweep__are_equal(const lslidar_c16_msg__msg__LslidarC16Sweep * lhs, const lslidar_c16_msg__msg__LslidarC16Sweep * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // scans
  for (size_t i = 0; i < 16; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16Scan__are_equal(
        &(lhs->scans[i]), &(rhs->scans[i])))
    {
      return false;
    }
  }
  return true;
}

bool
lslidar_c16_msg__msg__LslidarC16Sweep__copy(
  const lslidar_c16_msg__msg__LslidarC16Sweep * input,
  lslidar_c16_msg__msg__LslidarC16Sweep * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // scans
  for (size_t i = 0; i < 16; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16Scan__copy(
        &(input->scans[i]), &(output->scans[i])))
    {
      return false;
    }
  }
  return true;
}

lslidar_c16_msg__msg__LslidarC16Sweep *
lslidar_c16_msg__msg__LslidarC16Sweep__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16Sweep * msg = (lslidar_c16_msg__msg__LslidarC16Sweep *)allocator.allocate(sizeof(lslidar_c16_msg__msg__LslidarC16Sweep), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lslidar_c16_msg__msg__LslidarC16Sweep));
  bool success = lslidar_c16_msg__msg__LslidarC16Sweep__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lslidar_c16_msg__msg__LslidarC16Sweep__destroy(lslidar_c16_msg__msg__LslidarC16Sweep * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lslidar_c16_msg__msg__LslidarC16Sweep__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__init(lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16Sweep * data = NULL;

  if (size) {
    data = (lslidar_c16_msg__msg__LslidarC16Sweep *)allocator.zero_allocate(size, sizeof(lslidar_c16_msg__msg__LslidarC16Sweep), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lslidar_c16_msg__msg__LslidarC16Sweep__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lslidar_c16_msg__msg__LslidarC16Sweep__fini(&data[i - 1]);
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
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__fini(lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * array)
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
      lslidar_c16_msg__msg__LslidarC16Sweep__fini(&array->data[i]);
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

lslidar_c16_msg__msg__LslidarC16Sweep__Sequence *
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * array = (lslidar_c16_msg__msg__LslidarC16Sweep__Sequence *)allocator.allocate(sizeof(lslidar_c16_msg__msg__LslidarC16Sweep__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__destroy(lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__are_equal(const lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * lhs, const lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16Sweep__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__copy(
  const lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * input,
  lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lslidar_c16_msg__msg__LslidarC16Sweep);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lslidar_c16_msg__msg__LslidarC16Sweep * data =
      (lslidar_c16_msg__msg__LslidarC16Sweep *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lslidar_c16_msg__msg__LslidarC16Sweep__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lslidar_c16_msg__msg__LslidarC16Sweep__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16Sweep__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
