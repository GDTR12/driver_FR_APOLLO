// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_c16_msg:srv/LslidarC16Control.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__TRAITS_HPP_
#define LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lslidar_c16_msg/srv/detail/lslidar_c16_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lslidar_c16_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const LslidarC16Control_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: laser_control
  {
    out << "laser_control: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_control, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LslidarC16Control_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laser_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_control: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_control, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LslidarC16Control_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lslidar_c16_msg

namespace rosidl_generator_traits
{

[[deprecated("use lslidar_c16_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lslidar_c16_msg::srv::LslidarC16Control_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_c16_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_c16_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_c16_msg::srv::LslidarC16Control_Request & msg)
{
  return lslidar_c16_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_c16_msg::srv::LslidarC16Control_Request>()
{
  return "lslidar_c16_msg::srv::LslidarC16Control_Request";
}

template<>
inline const char * name<lslidar_c16_msg::srv::LslidarC16Control_Request>()
{
  return "lslidar_c16_msg/srv/LslidarC16Control_Request";
}

template<>
struct has_fixed_size<lslidar_c16_msg::srv::LslidarC16Control_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_c16_msg::srv::LslidarC16Control_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_c16_msg::srv::LslidarC16Control_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lslidar_c16_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const LslidarC16Control_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LslidarC16Control_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LslidarC16Control_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lslidar_c16_msg

namespace rosidl_generator_traits
{

[[deprecated("use lslidar_c16_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lslidar_c16_msg::srv::LslidarC16Control_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_c16_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_c16_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_c16_msg::srv::LslidarC16Control_Response & msg)
{
  return lslidar_c16_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_c16_msg::srv::LslidarC16Control_Response>()
{
  return "lslidar_c16_msg::srv::LslidarC16Control_Response";
}

template<>
inline const char * name<lslidar_c16_msg::srv::LslidarC16Control_Response>()
{
  return "lslidar_c16_msg/srv/LslidarC16Control_Response";
}

template<>
struct has_fixed_size<lslidar_c16_msg::srv::LslidarC16Control_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lslidar_c16_msg::srv::LslidarC16Control_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lslidar_c16_msg::srv::LslidarC16Control_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_c16_msg::srv::LslidarC16Control>()
{
  return "lslidar_c16_msg::srv::LslidarC16Control";
}

template<>
inline const char * name<lslidar_c16_msg::srv::LslidarC16Control>()
{
  return "lslidar_c16_msg/srv/LslidarC16Control";
}

template<>
struct has_fixed_size<lslidar_c16_msg::srv::LslidarC16Control>
  : std::integral_constant<
    bool,
    has_fixed_size<lslidar_c16_msg::srv::LslidarC16Control_Request>::value &&
    has_fixed_size<lslidar_c16_msg::srv::LslidarC16Control_Response>::value
  >
{
};

template<>
struct has_bounded_size<lslidar_c16_msg::srv::LslidarC16Control>
  : std::integral_constant<
    bool,
    has_bounded_size<lslidar_c16_msg::srv::LslidarC16Control_Request>::value &&
    has_bounded_size<lslidar_c16_msg::srv::LslidarC16Control_Response>::value
  >
{
};

template<>
struct is_service<lslidar_c16_msg::srv::LslidarC16Control>
  : std::true_type
{
};

template<>
struct is_service_request<lslidar_c16_msg::srv::LslidarC16Control_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lslidar_c16_msg::srv::LslidarC16Control_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__TRAITS_HPP_
