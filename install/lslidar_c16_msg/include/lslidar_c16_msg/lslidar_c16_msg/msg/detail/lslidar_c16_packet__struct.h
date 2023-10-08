// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_c16_msg:msg/LslidarC16Packet.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__STRUCT_H_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/LslidarC16Packet in the package lslidar_c16_msg.
/**
  * Raw Leishen LIDAR packet.
 */
typedef struct lslidar_c16_msg__msg__LslidarC16Packet
{
  /// packet timestamp
  builtin_interfaces__msg__Time stamp;
  /// packet contents
  uint8_t data[1206];
} lslidar_c16_msg__msg__LslidarC16Packet;

// Struct for a sequence of lslidar_c16_msg__msg__LslidarC16Packet.
typedef struct lslidar_c16_msg__msg__LslidarC16Packet__Sequence
{
  lslidar_c16_msg__msg__LslidarC16Packet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_c16_msg__msg__LslidarC16Packet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__STRUCT_H_
