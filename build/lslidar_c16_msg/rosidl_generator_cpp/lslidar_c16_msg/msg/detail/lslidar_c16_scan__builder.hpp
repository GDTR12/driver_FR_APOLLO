// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Scan.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__BUILDER_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_c16_msg
{

namespace msg
{

namespace builder
{

class Init_LslidarC16Scan_points
{
public:
  explicit Init_LslidarC16Scan_points(::lslidar_c16_msg::msg::LslidarC16Scan & msg)
  : msg_(msg)
  {}
  ::lslidar_c16_msg::msg::LslidarC16Scan points(::lslidar_c16_msg::msg::LslidarC16Scan::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Scan msg_;
};

class Init_LslidarC16Scan_altitude
{
public:
  Init_LslidarC16Scan_altitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LslidarC16Scan_points altitude(::lslidar_c16_msg::msg::LslidarC16Scan::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_LslidarC16Scan_points(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Scan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_c16_msg::msg::LslidarC16Scan>()
{
  return lslidar_c16_msg::msg::builder::Init_LslidarC16Scan_altitude();
}

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__BUILDER_HPP_
