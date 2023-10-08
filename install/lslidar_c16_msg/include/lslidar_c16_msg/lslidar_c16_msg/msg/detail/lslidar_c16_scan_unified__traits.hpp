// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16ScanUnified.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__TRAITS_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan_unified__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'packets'
#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__traits.hpp"

namespace lslidar_c16_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const LslidarC16ScanUnified & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: basetime
  {
    out << "basetime: ";
    rosidl_generator_traits::value_to_yaml(msg.basetime, out);
    out << ", ";
  }

  // member: packets
  {
    if (msg.packets.size() == 0) {
      out << "packets: []";
    } else {
      out << "packets: [";
      size_t pending_items = msg.packets.size();
      for (auto item : msg.packets) {
        to_flow_style_yaml(item, out);
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
  const LslidarC16ScanUnified & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: basetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basetime: ";
    rosidl_generator_traits::value_to_yaml(msg.basetime, out);
    out << "\n";
  }

  // member: packets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.packets.size() == 0) {
      out << "packets: []\n";
    } else {
      out << "packets:\n";
      for (auto item : msg.packets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LslidarC16ScanUnified & msg, bool use_flow_style = false)
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
  const lslidar_c16_msg::msg::LslidarC16ScanUnified & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_c16_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_c16_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_c16_msg::msg::LslidarC16ScanUnified & msg)
{
  return lslidar_c16_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_c16_msg::msg::LslidarC16ScanUnified>()
{
  return "lslidar_c16_msg::msg::LslidarC16ScanUnified";
}

template<>
inline const char * name<lslidar_c16_msg::msg::LslidarC16ScanUnified>()
{
  return "lslidar_c16_msg/msg/LslidarC16ScanUnified";
}

template<>
struct has_fixed_size<lslidar_c16_msg::msg::LslidarC16ScanUnified>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lslidar_c16_msg::msg::LslidarC16ScanUnified>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lslidar_c16_msg::msg::LslidarC16ScanUnified>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__TRAITS_HPP_
