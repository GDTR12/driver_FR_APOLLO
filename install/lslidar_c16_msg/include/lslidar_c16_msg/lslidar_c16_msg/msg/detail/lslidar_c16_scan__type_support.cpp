// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Scan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan__struct.hpp"
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

void LslidarC16Scan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lslidar_c16_msg::msg::LslidarC16Scan(_init);
}

void LslidarC16Scan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lslidar_c16_msg::msg::LslidarC16Scan *>(message_memory);
  typed_message->~LslidarC16Scan();
}

size_t size_function__LslidarC16Scan__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lslidar_c16_msg::msg::LslidarC16Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LslidarC16Scan__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lslidar_c16_msg::msg::LslidarC16Point> *>(untyped_member);
  return &member[index];
}

void * get_function__LslidarC16Scan__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lslidar_c16_msg::msg::LslidarC16Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__LslidarC16Scan__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const lslidar_c16_msg::msg::LslidarC16Point *>(
    get_const_function__LslidarC16Scan__points(untyped_member, index));
  auto & value = *reinterpret_cast<lslidar_c16_msg::msg::LslidarC16Point *>(untyped_value);
  value = item;
}

void assign_function__LslidarC16Scan__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<lslidar_c16_msg::msg::LslidarC16Point *>(
    get_function__LslidarC16Scan__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const lslidar_c16_msg::msg::LslidarC16Point *>(untyped_value);
  item = value;
}

void resize_function__LslidarC16Scan__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lslidar_c16_msg::msg::LslidarC16Point> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LslidarC16Scan_message_member_array[2] = {
  {
    "altitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg::msg::LslidarC16Scan, altitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lslidar_c16_msg::msg::LslidarC16Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_c16_msg::msg::LslidarC16Scan, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__LslidarC16Scan__points,  // size() function pointer
    get_const_function__LslidarC16Scan__points,  // get_const(index) function pointer
    get_function__LslidarC16Scan__points,  // get(index) function pointer
    fetch_function__LslidarC16Scan__points,  // fetch(index, &value) function pointer
    assign_function__LslidarC16Scan__points,  // assign(index, value) function pointer
    resize_function__LslidarC16Scan__points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LslidarC16Scan_message_members = {
  "lslidar_c16_msg::msg",  // message namespace
  "LslidarC16Scan",  // message name
  2,  // number of fields
  sizeof(lslidar_c16_msg::msg::LslidarC16Scan),
  LslidarC16Scan_message_member_array,  // message members
  LslidarC16Scan_init_function,  // function to initialize message memory (memory has to be allocated)
  LslidarC16Scan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LslidarC16Scan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LslidarC16Scan_message_members,
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
get_message_type_support_handle<lslidar_c16_msg::msg::LslidarC16Scan>()
{
  return &::lslidar_c16_msg::msg::rosidl_typesupport_introspection_cpp::LslidarC16Scan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lslidar_c16_msg, msg, LslidarC16Scan)() {
  return &::lslidar_c16_msg::msg::rosidl_typesupport_introspection_cpp::LslidarC16Scan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
