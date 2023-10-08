// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lslidar_c16_msg:srv/LslidarC16Control.idl
// generated code does not contain a copyright notice
#include "lslidar_c16_msg/srv/detail/lslidar_c16_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
lslidar_c16_msg__srv__LslidarC16Control_Request__init(lslidar_c16_msg__srv__LslidarC16Control_Request * msg)
{
  if (!msg) {
    return false;
  }
  // laser_control
  return true;
}

void
lslidar_c16_msg__srv__LslidarC16Control_Request__fini(lslidar_c16_msg__srv__LslidarC16Control_Request * msg)
{
  if (!msg) {
    return;
  }
  // laser_control
}

bool
lslidar_c16_msg__srv__LslidarC16Control_Request__are_equal(const lslidar_c16_msg__srv__LslidarC16Control_Request * lhs, const lslidar_c16_msg__srv__LslidarC16Control_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // laser_control
  if (lhs->laser_control != rhs->laser_control) {
    return false;
  }
  return true;
}

bool
lslidar_c16_msg__srv__LslidarC16Control_Request__copy(
  const lslidar_c16_msg__srv__LslidarC16Control_Request * input,
  lslidar_c16_msg__srv__LslidarC16Control_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // laser_control
  output->laser_control = input->laser_control;
  return true;
}

lslidar_c16_msg__srv__LslidarC16Control_Request *
lslidar_c16_msg__srv__LslidarC16Control_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__srv__LslidarC16Control_Request * msg = (lslidar_c16_msg__srv__LslidarC16Control_Request *)allocator.allocate(sizeof(lslidar_c16_msg__srv__LslidarC16Control_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lslidar_c16_msg__srv__LslidarC16Control_Request));
  bool success = lslidar_c16_msg__srv__LslidarC16Control_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lslidar_c16_msg__srv__LslidarC16Control_Request__destroy(lslidar_c16_msg__srv__LslidarC16Control_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lslidar_c16_msg__srv__LslidarC16Control_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence__init(lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__srv__LslidarC16Control_Request * data = NULL;

  if (size) {
    data = (lslidar_c16_msg__srv__LslidarC16Control_Request *)allocator.zero_allocate(size, sizeof(lslidar_c16_msg__srv__LslidarC16Control_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lslidar_c16_msg__srv__LslidarC16Control_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lslidar_c16_msg__srv__LslidarC16Control_Request__fini(&data[i - 1]);
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
lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence__fini(lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence * array)
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
      lslidar_c16_msg__srv__LslidarC16Control_Request__fini(&array->data[i]);
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

lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence *
lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence * array = (lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence *)allocator.allocate(sizeof(lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence__destroy(lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence__are_equal(const lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence * lhs, const lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lslidar_c16_msg__srv__LslidarC16Control_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence__copy(
  const lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence * input,
  lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lslidar_c16_msg__srv__LslidarC16Control_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lslidar_c16_msg__srv__LslidarC16Control_Request * data =
      (lslidar_c16_msg__srv__LslidarC16Control_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lslidar_c16_msg__srv__LslidarC16Control_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lslidar_c16_msg__srv__LslidarC16Control_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lslidar_c16_msg__srv__LslidarC16Control_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
lslidar_c16_msg__srv__LslidarC16Control_Response__init(lslidar_c16_msg__srv__LslidarC16Control_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    lslidar_c16_msg__srv__LslidarC16Control_Response__fini(msg);
    return false;
  }
  return true;
}

void
lslidar_c16_msg__srv__LslidarC16Control_Response__fini(lslidar_c16_msg__srv__LslidarC16Control_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
lslidar_c16_msg__srv__LslidarC16Control_Response__are_equal(const lslidar_c16_msg__srv__LslidarC16Control_Response * lhs, const lslidar_c16_msg__srv__LslidarC16Control_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
lslidar_c16_msg__srv__LslidarC16Control_Response__copy(
  const lslidar_c16_msg__srv__LslidarC16Control_Response * input,
  lslidar_c16_msg__srv__LslidarC16Control_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

lslidar_c16_msg__srv__LslidarC16Control_Response *
lslidar_c16_msg__srv__LslidarC16Control_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__srv__LslidarC16Control_Response * msg = (lslidar_c16_msg__srv__LslidarC16Control_Response *)allocator.allocate(sizeof(lslidar_c16_msg__srv__LslidarC16Control_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lslidar_c16_msg__srv__LslidarC16Control_Response));
  bool success = lslidar_c16_msg__srv__LslidarC16Control_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lslidar_c16_msg__srv__LslidarC16Control_Response__destroy(lslidar_c16_msg__srv__LslidarC16Control_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lslidar_c16_msg__srv__LslidarC16Control_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence__init(lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__srv__LslidarC16Control_Response * data = NULL;

  if (size) {
    data = (lslidar_c16_msg__srv__LslidarC16Control_Response *)allocator.zero_allocate(size, sizeof(lslidar_c16_msg__srv__LslidarC16Control_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lslidar_c16_msg__srv__LslidarC16Control_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lslidar_c16_msg__srv__LslidarC16Control_Response__fini(&data[i - 1]);
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
lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence__fini(lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence * array)
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
      lslidar_c16_msg__srv__LslidarC16Control_Response__fini(&array->data[i]);
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

lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence *
lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence * array = (lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence *)allocator.allocate(sizeof(lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence__destroy(lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence__are_equal(const lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence * lhs, const lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lslidar_c16_msg__srv__LslidarC16Control_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence__copy(
  const lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence * input,
  lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lslidar_c16_msg__srv__LslidarC16Control_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lslidar_c16_msg__srv__LslidarC16Control_Response * data =
      (lslidar_c16_msg__srv__LslidarC16Control_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lslidar_c16_msg__srv__LslidarC16Control_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lslidar_c16_msg__srv__LslidarC16Control_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lslidar_c16_msg__srv__LslidarC16Control_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
