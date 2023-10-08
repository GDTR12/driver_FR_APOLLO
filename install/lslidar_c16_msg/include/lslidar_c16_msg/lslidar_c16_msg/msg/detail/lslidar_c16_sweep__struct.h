// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_c16_msg:msg/LslidarC16Sweep.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__STRUCT_H_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'scans'
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan__struct.h"

/// Struct defined in msg/LslidarC16Sweep in the package lslidar_c16_msg.
typedef struct lslidar_c16_msg__msg__LslidarC16Sweep
{
  std_msgs__msg__Header header;
  /// The 0th scan is at the bottom
  lslidar_c16_msg__msg__LslidarC16Scan scans[16];
} lslidar_c16_msg__msg__LslidarC16Sweep;

// Struct for a sequence of lslidar_c16_msg__msg__LslidarC16Sweep.
typedef struct lslidar_c16_msg__msg__LslidarC16Sweep__Sequence
{
  lslidar_c16_msg__msg__LslidarC16Sweep * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_c16_msg__msg__LslidarC16Sweep__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__STRUCT_H_
