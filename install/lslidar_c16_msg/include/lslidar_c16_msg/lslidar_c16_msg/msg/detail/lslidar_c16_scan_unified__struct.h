// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_c16_msg:msg/LslidarC16ScanUnified.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__STRUCT_H_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__STRUCT_H_

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
// Member 'packets'
#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__struct.h"

/// Struct defined in msg/LslidarC16ScanUnified in the package lslidar_c16_msg.
/**
  * lslidar C16 scan packets
 */
typedef struct lslidar_c16_msg__msg__LslidarC16ScanUnified
{
  /// standard ros message header
  std_msgs__msg__Header header;
  /// time to the top of hour
  uint64_t basetime;
  /// vector of raw packets
  lslidar_c16_msg__msg__LslidarC16Packet__Sequence packets;
} lslidar_c16_msg__msg__LslidarC16ScanUnified;

// Struct for a sequence of lslidar_c16_msg__msg__LslidarC16ScanUnified.
typedef struct lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence
{
  lslidar_c16_msg__msg__LslidarC16ScanUnified * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_c16_msg__msg__LslidarC16ScanUnified__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__STRUCT_H_
