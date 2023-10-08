// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_c16_msg:srv/LslidarC16Control.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__STRUCT_H_
#define LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/LslidarC16Control in the package lslidar_c16_msg.
typedef struct lslidar_c16_msg__srv__LslidarC16Control_Request
{
  int32_t laser_control;
} lslidar_c16_msg__srv__LslidarC16Control_Request;

// Struct for a sequence of lslidar_c16_msg__srv__LslidarC16Control_Request.
typedef struct lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence
{
  lslidar_c16_msg__srv__LslidarC16Control_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_c16_msg__srv__LslidarC16Control_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LslidarC16Control in the package lslidar_c16_msg.
typedef struct lslidar_c16_msg__srv__LslidarC16Control_Response
{
  rosidl_runtime_c__String status;
} lslidar_c16_msg__srv__LslidarC16Control_Response;

// Struct for a sequence of lslidar_c16_msg__srv__LslidarC16Control_Response.
typedef struct lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence
{
  lslidar_c16_msg__srv__LslidarC16Control_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_c16_msg__srv__LslidarC16Control_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__STRUCT_H_
