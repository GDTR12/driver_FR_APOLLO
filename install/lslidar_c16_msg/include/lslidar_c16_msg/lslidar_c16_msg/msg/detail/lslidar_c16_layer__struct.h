// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_c16_msg:msg/LslidarC16Layer.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_LAYER__STRUCT_H_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_LAYER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'scan_channel'
#include "sensor_msgs/msg/detail/laser_scan__struct.h"

/// Struct defined in msg/LslidarC16Layer in the package lslidar_c16_msg.
/**
  * Header header
  * The 0th scan is at the bottom
 */
typedef struct lslidar_c16_msg__msg__LslidarC16Layer
{
  sensor_msgs__msg__LaserScan scan_channel[16];
} lslidar_c16_msg__msg__LslidarC16Layer;

// Struct for a sequence of lslidar_c16_msg__msg__LslidarC16Layer.
typedef struct lslidar_c16_msg__msg__LslidarC16Layer__Sequence
{
  lslidar_c16_msg__msg__LslidarC16Layer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_c16_msg__msg__LslidarC16Layer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_LAYER__STRUCT_H_
