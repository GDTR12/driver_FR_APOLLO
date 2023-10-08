// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Packet.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__TRAITS_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace lslidar_c16_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const LslidarC16Packet & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LslidarC16Packet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LslidarC16Packet & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lslidar_c16_msg

namespace rosidl_generator_traits
{

[[deprecated("use lslidar_c16_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lslidar_c16_msg::msg::LslidarC16Packet & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_c16_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_c16_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_c16_msg::msg::LslidarC16Packet & msg)
{
  return lslidar_c16_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_c16_msg::msg::LslidarC16Packet>()
{
  return "lslidar_c16_msg::msg::LslidarC16Packet";
}

template<>
inline const char * name<lslidar_c16_msg::msg::LslidarC16Packet>()
{
  return "lslidar_c16_msg/msg/LslidarC16Packet";
}

template<>
struct has_fixed_size<lslidar_c16_msg::msg::LslidarC16Packet>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<lslidar_c16_msg::msg::LslidarC16Packet>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<lslidar_c16_msg::msg::LslidarC16Packet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__TRAITS_HPP_
