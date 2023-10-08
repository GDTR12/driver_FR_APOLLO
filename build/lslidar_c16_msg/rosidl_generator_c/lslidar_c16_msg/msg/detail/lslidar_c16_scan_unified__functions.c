// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lslidar_c16_msg:msg/LslidarC16ScanUnified.idl
// generated code does not contain a copyright notice
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan_unified__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `packets`
#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__functions.h"

bool
lslidar_c16_msg__msg__LslidarC16ScanUnified__init(lslidar_c16_msg__msg__LslidarC16ScanUnified * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lslidar_c16_msg__msg__LslidarC16ScanUnified__fini(msg);
    return false;
  }
  // basetime
  // packets
  if (!lslidar_c16_msg__msg__LslidarC16Packet__Sequence__init(&msg->packets, 0)) {
    lslidar_c16_msg__msg__LslidarC16ScanUnified__fini(msg);
    return false;
  }
  return true;
}

void
lslidar_c16_msg__msg__LslidarC16ScanUnified__fini(lslidar_c16_msg__msg__LslidarC16ScanUnified * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // basetime
  // packets
  lslidar_c16_msg__msg__LslidarC16Packet__Sequence__fini(&msg->packets);
}

bool
lslidar_c16_msg__msg__LslidarC16ScanUnified__are_equal(const lslidar_c16_msg__msg__LslidarC16ScanUnified * lhs, const lslidar_c16_msg__msg__LslidarC16ScanUnified * rhs)
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
  // basetime
  if (lhs->basetime != rhs->basetime) {
    return false;
  }
  // packets
  if (!lslidar_c16_msg__msg__LslidarC16Packet__Sequence__are_equal(
      &(lhs->packets), &(rhs->packets)))
  {
    return false;
  }
  return true;
}

bool
lslidar_c16_msg__msg__LslidarC16ScanUnified__copy(
  const lslidar_c16_msg__msg__LslidarC16ScanUnified * input,
  lslidar_c16_msg__msg__LslidarC16ScanUnified * output)
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
  // basetime
  output->basetime = input->basetime;
  // packets
  if (!lslidar_c16_msg__msg__LslidarC16Packet__Sequence__copy(
      &(input->packets), &(output->packets)))
  {
    return false;
  }
  return true;
}

lslidar_c16_msg__msg__LslidarC16ScanUnified *
lslidar_c16_msg__msg__LslidarC16ScanUnified__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16ScanUnified * msg = (lslidar_c16_msg__msg__LslidarC16ScanUnified *)allocator.allocate(sizeof(lslidar_c16_msg__msg__LslidarC16ScanUnified), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lslidar_c16_msg__msg__LslidarC16ScanUnified));
  bool success = lslidar_c16_msg__msg__LslidarC16ScanUnified__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lslidar_c16_msg__msg__LslidarC16ScanUnified__destroy(lslidar_c16_msg__msg__LslidarC16ScanUnified * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lslidar_c16_msg__msg__LslidarC16ScanUnified__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence__init(lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16ScanUnified * data = NULL;

  if (size) {
    data = (lslidar_c16_msg__msg__LslidarC16ScanUnified *)allocator.zero_allocate(size, sizeof(lslidar_c16_msg__msg__LslidarC16ScanUnified), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lslidar_c16_msg__msg__LslidarC16ScanUnified__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lslidar_c16_msg__msg__LslidarC16ScanUnified__fini(&data[i - 1]);
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
lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence__fini(lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence * array)
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
      lslidar_c16_msg__msg__LslidarC16ScanUnified__fini(&array->data[i]);
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

lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence *
lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence * array = (lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence *)allocator.allocate(sizeof(lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence__destroy(lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence__are_equal(const lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence * lhs, const lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16ScanUnified__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence__copy(
  const lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence * input,
  lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lslidar_c16_msg__msg__LslidarC16ScanUnified);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lslidar_c16_msg__msg__LslidarC16ScanUnified * data =
      (lslidar_c16_msg__msg__LslidarC16ScanUnified *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lslidar_c16_msg__msg__LslidarC16ScanUnified__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lslidar_c16_msg__msg__LslidarC16ScanUnified__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lslidar_c16_msg__msg__LslidarC16ScanUnified__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
