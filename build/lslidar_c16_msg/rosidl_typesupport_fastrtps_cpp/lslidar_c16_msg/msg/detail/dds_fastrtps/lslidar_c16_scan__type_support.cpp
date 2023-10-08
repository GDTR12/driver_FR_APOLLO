// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Scan.idl
// generated code does not contain a copyright notice
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace lslidar_c16_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const lslidar_c16_msg::msg::LslidarC16Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  lslidar_c16_msg::msg::LslidarC16Point &);
size_t get_serialized_size(
  const lslidar_c16_msg::msg::LslidarC16Point &,
  size_t current_alignment);
size_t
max_serialized_size_LslidarC16Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace lslidar_c16_msg


namespace lslidar_c16_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_c16_msg
cdr_serialize(
  const lslidar_c16_msg::msg::LslidarC16Scan & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: altitude
  cdr << ros_message.altitude;
  // Member: points
  {
    size_t size = ros_message.points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      lslidar_c16_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.points[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_c16_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lslidar_c16_msg::msg::LslidarC16Scan & ros_message)
{
  // Member: altitude
  cdr >> ros_message.altitude;

  // Member: points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.points.resize(size);
    for (size_t i = 0; i < size; i++) {
      lslidar_c16_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.points[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_c16_msg
get_serialized_size(
  const lslidar_c16_msg::msg::LslidarC16Scan & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: altitude
  {
    size_t item_size = sizeof(ros_message.altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: points
  {
    size_t array_size = ros_message.points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        lslidar_c16_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.points[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_c16_msg
max_serialized_size_LslidarC16Scan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: altitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        lslidar_c16_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_LslidarC16Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LslidarC16Scan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lslidar_c16_msg::msg::LslidarC16Scan *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LslidarC16Scan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lslidar_c16_msg::msg::LslidarC16Scan *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LslidarC16Scan__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lslidar_c16_msg::msg::LslidarC16Scan *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LslidarC16Scan__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LslidarC16Scan(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LslidarC16Scan__callbacks = {
  "lslidar_c16_msg::msg",
  "LslidarC16Scan",
  _LslidarC16Scan__cdr_serialize,
  _LslidarC16Scan__cdr_deserialize,
  _LslidarC16Scan__get_serialized_size,
  _LslidarC16Scan__max_serialized_size
};

static rosidl_message_type_support_t _LslidarC16Scan__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LslidarC16Scan__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lslidar_c16_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lslidar_c16_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<lslidar_c16_msg::msg::LslidarC16Scan>()
{
  return &lslidar_c16_msg::msg::typesupport_fastrtps_cpp::_LslidarC16Scan__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lslidar_c16_msg, msg, LslidarC16Scan)() {
  return &lslidar_c16_msg::msg::typesupport_fastrtps_cpp::_LslidarC16Scan__handle;
}

#ifdef __cplusplus
}
#endif
