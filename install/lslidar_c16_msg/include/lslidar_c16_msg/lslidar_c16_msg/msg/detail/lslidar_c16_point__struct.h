// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_c16_msg:msg/LslidarC16Point.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_POINT__STRUCT_H_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LslidarC16Point in the package lslidar_c16_msg.
/**
  * Time when the point is captured
 */
typedef struct lslidar_c16_msg__msg__LslidarC16Point
{
  double time;
  /// Converted distance in the sensor frame
  double x;
  double y;
  double z;
  /// Raw measurement from Leishen C16
  double azimuth;
  double distance;
  double intensity;
} lslidar_c16_msg__msg__LslidarC16Point;

// Struct for a sequence of lslidar_c16_msg__msg__LslidarC16Point.
typedef struct lslidar_c16_msg__msg__LslidarC16Point__Sequence
{
  lslidar_c16_msg__msg__LslidarC16Point * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_c16_msg__msg__LslidarC16Point__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_POINT__STRUCT_H_
