// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Packet.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lslidar_c16_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LslidarC16Packet_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lslidar_c16_msg::msg::LslidarC16Packet(_init);
}

void LslidarC16Packet_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lslidar_c16_msg::msg::LslidarC16Packet *>(message_memory);
  typed_message->~LslidarC16Packet();
}

size_t size_function__LslidarC16Packet__data(const void * untyped_member)
{
  (void)untyped_member;
  return 1206;
}

const void * get_const_function__LslidarC16Packet__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 1206> *>(untyped_member);
  return &member[index];
}

void * get_function__LslidarC16Packet__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 1206> *>(untyped_member);
  return &member[index];
}

void fetch_function__LslidarC16Packet__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LslidarC16Packet__data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LslidarC16Packet__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LslidarC16Packet__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LslidarC16Packet_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg::msg::LslidarC16Packet, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1206,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg::msg::LslidarC16Packet, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__LslidarC16Packet__data,  // size() function pointer
    get_const_function__LslidarC16Packet__data,  // get_const(index) function pointer
    get_function__LslidarC16Packet__data,  // get(index) function pointer
    fetch_function__LslidarC16Packet__data,  // fetch(index, &value) function pointer
    assign_function__LslidarC16Packet__data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LslidarC16Packet_message_members = {
  "lslidar_c16_msg::msg",  // message namespace
  "LslidarC16Packet",  // message name
  2,  // number of fields
  sizeof(lslidar_c16_msg::msg::LslidarC16Packet),
  LslidarC16Packet_message_member_array,  // message members
  LslidarC16Packet_init_function,  // function to initialize message memory (memory has to be allocated)
  LslidarC16Packet_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LslidarC16Packet_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LslidarC16Packet_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lslidar_c16_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lslidar_c16_msg::msg::LslidarC16Packet>()
{
  return &::lslidar_c16_msg::msg::rosidl_typesupport_introspection_cpp::LslidarC16Packet_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lslidar_c16_msg, msg, LslidarC16Packet)() {
  return &::lslidar_c16_msg::msg::rosidl_typesupport_introspection_cpp::LslidarC16Packet_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
