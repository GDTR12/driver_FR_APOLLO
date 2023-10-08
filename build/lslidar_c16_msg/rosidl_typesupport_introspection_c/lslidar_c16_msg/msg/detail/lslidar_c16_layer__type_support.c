// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lslidar_c16_msg:msg/LslidarC16Layer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lslidar_c16_msg/msg/detail/lslidar_c16_layer__rosidl_typesupport_introspection_c.h"
#include "lslidar_c16_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lslidar_c16_msg/msg/detail/lslidar_c16_layer__functions.h"
#include "lslidar_c16_msg/msg/detail/lslidar_c16_layer__struct.h"


// Include directives for member types
// Member `scan_channel`
#include "sensor_msgs/msg/laser_scan.h"
// Member `scan_channel`
#include "sensor_msgs/msg/detail/laser_scan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lslidar_c16_msg__msg__LslidarC16Layer__init(message_memory);
}

void lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_fini_function(void * message_memory)
{
  lslidar_c16_msg__msg__LslidarC16Layer__fini(message_memory);
}

size_t lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__size_function__LslidarC16Layer__scan_channel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__get_const_function__LslidarC16Layer__scan_channel(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__LaserScan * member =
    (const sensor_msgs__msg__LaserScan *)(untyped_member);
  return &member[index];
}

void * lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__get_function__LslidarC16Layer__scan_channel(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__LaserScan * member =
    (sensor_msgs__msg__LaserScan *)(untyped_member);
  return &member[index];
}

void lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__fetch_function__LslidarC16Layer__scan_channel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__LaserScan * item =
    ((const sensor_msgs__msg__LaserScan *)
    lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__get_const_function__LslidarC16Layer__scan_channel(untyped_member, index));
  sensor_msgs__msg__LaserScan * value =
    (sensor_msgs__msg__LaserScan *)(untyped_value);
  *value = *item;
}

void lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__assign_function__LslidarC16Layer__scan_channel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__LaserScan * item =
    ((sensor_msgs__msg__LaserScan *)
    lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__get_function__LslidarC16Layer__scan_channel(untyped_member, index));
  const sensor_msgs__msg__LaserScan * value =
    (const sensor_msgs__msg__LaserScan *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_message_member_array[1] = {
  {
    "scan_channel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg__msg__LslidarC16Layer, scan_channel),  // bytes offset in struct
    NULL,  // default value
    lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__size_function__LslidarC16Layer__scan_channel,  // size() function pointer
    lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__get_const_function__LslidarC16Layer__scan_channel,  // get_const(index) function pointer
    lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__get_function__LslidarC16Layer__scan_channel,  // get(index) function pointer
    lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__fetch_function__LslidarC16Layer__scan_channel,  // fetch(index, &value) function pointer
    lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__assign_function__LslidarC16Layer__scan_channel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_message_members = {
  "lslidar_c16_msg__msg",  // message namespace
  "LslidarC16Layer",  // message name
  1,  // number of fields
  sizeof(lslidar_c16_msg__msg__LslidarC16Layer),
  lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_message_member_array,  // message members
  lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_init_function,  // function to initialize message memory (memory has to be allocated)
  lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_message_type_support_handle = {
  0,
  &lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lslidar_c16_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_c16_msg, msg, LslidarC16Layer)() {
  lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, LaserScan)();
  if (!lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_message_type_support_handle.typesupport_identifier) {
    lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lslidar_c16_msg__msg__LslidarC16Layer__rosidl_typesupport_introspection_c__LslidarC16Layer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
