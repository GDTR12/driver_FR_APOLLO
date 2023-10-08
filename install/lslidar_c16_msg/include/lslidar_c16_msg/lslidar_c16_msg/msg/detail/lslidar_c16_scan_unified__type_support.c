// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lslidar_c16_msg:msg/LslidarC16ScanUnified.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan_unified__rosidl_typesupport_introspection_c.h"
#include "lslidar_c16_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan_unified__functions.h"
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan_unified__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `packets`
#include "lslidar_c16_msg/msg/lslidar_c16_packet.h"
// Member `packets`
#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lslidar_c16_msg__msg__LslidarC16ScanUnified__init(message_memory);
}

void lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_fini_function(void * message_memory)
{
  lslidar_c16_msg__msg__LslidarC16ScanUnified__fini(message_memory);
}

size_t lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__size_function__LslidarC16ScanUnified__packets(
  const void * untyped_member)
{
  const lslidar_c16_msg__msg__LslidarC16Packet__Sequence * member =
    (const lslidar_c16_msg__msg__LslidarC16Packet__Sequence *)(untyped_member);
  return member->size;
}

const void * lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__get_const_function__LslidarC16ScanUnified__packets(
  const void * untyped_member, size_t index)
{
  const lslidar_c16_msg__msg__LslidarC16Packet__Sequence * member =
    (const lslidar_c16_msg__msg__LslidarC16Packet__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__get_function__LslidarC16ScanUnified__packets(
  void * untyped_member, size_t index)
{
  lslidar_c16_msg__msg__LslidarC16Packet__Sequence * member =
    (lslidar_c16_msg__msg__LslidarC16Packet__Sequence *)(untyped_member);
  return &member->data[index];
}

void lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__fetch_function__LslidarC16ScanUnified__packets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const lslidar_c16_msg__msg__LslidarC16Packet * item =
    ((const lslidar_c16_msg__msg__LslidarC16Packet *)
    lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__get_const_function__LslidarC16ScanUnified__packets(untyped_member, index));
  lslidar_c16_msg__msg__LslidarC16Packet * value =
    (lslidar_c16_msg__msg__LslidarC16Packet *)(untyped_value);
  *value = *item;
}

void lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__assign_function__LslidarC16ScanUnified__packets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  lslidar_c16_msg__msg__LslidarC16Packet * item =
    ((lslidar_c16_msg__msg__LslidarC16Packet *)
    lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__get_function__LslidarC16ScanUnified__packets(untyped_member, index));
  const lslidar_c16_msg__msg__LslidarC16Packet * value =
    (const lslidar_c16_msg__msg__LslidarC16Packet *)(untyped_value);
  *item = *value;
}

bool lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__resize_function__LslidarC16ScanUnified__packets(
  void * untyped_member, size_t size)
{
  lslidar_c16_msg__msg__LslidarC16Packet__Sequence * member =
    (lslidar_c16_msg__msg__LslidarC16Packet__Sequence *)(untyped_member);
  lslidar_c16_msg__msg__LslidarC16Packet__Sequence__fini(member);
  return lslidar_c16_msg__msg__LslidarC16Packet__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg__msg__LslidarC16ScanUnified, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "basetime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg__msg__LslidarC16ScanUnified, basetime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "packets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg__msg__LslidarC16ScanUnified, packets),  // bytes offset in struct
    NULL,  // default value
    lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__size_function__LslidarC16ScanUnified__packets,  // size() function pointer
    lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__get_const_function__LslidarC16ScanUnified__packets,  // get_const(index) function pointer
    lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__get_function__LslidarC16ScanUnified__packets,  // get(index) function pointer
    lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__fetch_function__LslidarC16ScanUnified__packets,  // fetch(index, &value) function pointer
    lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__assign_function__LslidarC16ScanUnified__packets,  // assign(index, value) function pointer
    lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__resize_function__LslidarC16ScanUnified__packets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_members = {
  "lslidar_c16_msg__msg",  // message namespace
  "LslidarC16ScanUnified",  // message name
  3,  // number of fields
  sizeof(lslidar_c16_msg__msg__LslidarC16ScanUnified),
  lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_member_array,  // message members
  lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_init_function,  // function to initialize message memory (memory has to be allocated)
  lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_type_support_handle = {
  0,
  &lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lslidar_c16_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_c16_msg, msg, LslidarC16ScanUnified)() {
  lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_c16_msg, msg, LslidarC16Packet)();
  if (!lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_type_support_handle.typesupport_identifier) {
    lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lslidar_c16_msg__msg__LslidarC16ScanUnified__rosidl_typesupport_introspection_c__LslidarC16ScanUnified_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
