// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_c16_msg:msg/LslidarC16Scan.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__STRUCT_H_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "lslidar_c16_msg/msg/detail/lslidar_c16_point__struct.h"

/// Struct defined in msg/LslidarC16Scan in the package lslidar_c16_msg.
/**
  * Altitude of all the points within this scan
 */
typedef struct lslidar_c16_msg__msg__LslidarC16Scan
{
  double altitude;
  /// The valid points in this scan sorted by azimuth
  /// from 0 to 359.99
  lslidar_c16_msg__msg__LslidarC16Point__Sequence points;
} lslidar_c16_msg__msg__LslidarC16Scan;

// Struct for a sequence of lslidar_c16_msg__msg__LslidarC16Scan.
typedef struct lslidar_c16_msg__msg__LslidarC16Scan__Sequence
{
  lslidar_c16_msg__msg__LslidarC16Scan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_c16_msg__msg__LslidarC16Scan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__STRUCT_H_
