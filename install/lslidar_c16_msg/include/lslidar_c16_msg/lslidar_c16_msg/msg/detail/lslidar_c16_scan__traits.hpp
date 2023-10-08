// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Scan.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__TRAITS_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "lslidar_c16_msg/msg/detail/lslidar_c16_point__traits.hpp"

namespace lslidar_c16_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const LslidarC16Scan & msg,
  std::ostream & out)
{
  out << "{";
  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
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
  const LslidarC16Scan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LslidarC16Scan & msg, bool use_flow_style = false)
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
  const lslidar_c16_msg::msg::LslidarC16Scan & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_c16_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_c16_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_c16_msg::msg::LslidarC16Scan & msg)
{
  return lslidar_c16_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_c16_msg::msg::LslidarC16Scan>()
{
  return "lslidar_c16_msg::msg::LslidarC16Scan";
}

template<>
inline const char * name<lslidar_c16_msg::msg::LslidarC16Scan>()
{
  return "lslidar_c16_msg/msg/LslidarC16Scan";
}

template<>
struct has_fixed_size<lslidar_c16_msg::msg::LslidarC16Scan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lslidar_c16_msg::msg::LslidarC16Scan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lslidar_c16_msg::msg::LslidarC16Scan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__TRAITS_HPP_
