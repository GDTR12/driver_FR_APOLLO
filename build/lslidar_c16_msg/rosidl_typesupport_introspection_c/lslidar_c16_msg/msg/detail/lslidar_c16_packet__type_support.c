// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lslidar_c16_msg:msg/LslidarC16Packet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__rosidl_typesupport_introspection_c.h"
#include "lslidar_c16_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__functions.h"
#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lslidar_c16_msg__msg__LslidarC16Packet__init(message_memory);
}

void lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_fini_function(void * message_memory)
{
  lslidar_c16_msg__msg__LslidarC16Packet__fini(message_memory);
}

size_t lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__size_function__LslidarC16Packet__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 1206;
}

const void * lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__get_const_function__LslidarC16Packet__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__get_function__LslidarC16Packet__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__fetch_function__LslidarC16Packet__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__get_const_function__LslidarC16Packet__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__assign_function__LslidarC16Packet__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__get_function__LslidarC16Packet__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg__msg__LslidarC16Packet, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1206,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg__msg__LslidarC16Packet, data),  // bytes offset in struct
    NULL,  // default value
    lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__size_function__LslidarC16Packet__data,  // size() function pointer
    lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__get_const_function__LslidarC16Packet__data,  // get_const(index) function pointer
    lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__get_function__LslidarC16Packet__data,  // get(index) function pointer
    lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__fetch_function__LslidarC16Packet__data,  // fetch(index, &value) function pointer
    lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__assign_function__LslidarC16Packet__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_message_members = {
  "lslidar_c16_msg__msg",  // message namespace
  "LslidarC16Packet",  // message name
  2,  // number of fields
  sizeof(lslidar_c16_msg__msg__LslidarC16Packet),
  lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_message_member_array,  // message members
  lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_init_function,  // function to initialize message memory (memory has to be allocated)
  lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_message_type_support_handle = {
  0,
  &lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lslidar_c16_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_c16_msg, msg, LslidarC16Packet)() {
  lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_message_type_support_handle.typesupport_identifier) {
    lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lslidar_c16_msg__msg__LslidarC16Packet__rosidl_typesupport_introspection_c__LslidarC16Packet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
