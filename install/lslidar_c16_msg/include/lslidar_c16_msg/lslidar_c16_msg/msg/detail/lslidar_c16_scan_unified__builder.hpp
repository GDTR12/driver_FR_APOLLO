// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16ScanUnified.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__BUILDER_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan_unified__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_c16_msg
{

namespace msg
{

namespace builder
{

class Init_LslidarC16ScanUnified_packets
{
public:
  explicit Init_LslidarC16ScanUnified_packets(::lslidar_c16_msg::msg::LslidarC16ScanUnified & msg)
  : msg_(msg)
  {}
  ::lslidar_c16_msg::msg::LslidarC16ScanUnified packets(::lslidar_c16_msg::msg::LslidarC16ScanUnified::_packets_type arg)
  {
    msg_.packets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16ScanUnified msg_;
};

class Init_LslidarC16ScanUnified_basetime
{
public:
  explicit Init_LslidarC16ScanUnified_basetime(::lslidar_c16_msg::msg::LslidarC16ScanUnified & msg)
  : msg_(msg)
  {}
  Init_LslidarC16ScanUnified_packets basetime(::lslidar_c16_msg::msg::LslidarC16ScanUnified::_basetime_type arg)
  {
    msg_.basetime = std::move(arg);
    return Init_LslidarC16ScanUnified_packets(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16ScanUnified msg_;
};

class Init_LslidarC16ScanUnified_header
{
public:
  Init_LslidarC16ScanUnified_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LslidarC16ScanUnified_basetime header(::lslidar_c16_msg::msg::LslidarC16ScanUnified::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LslidarC16ScanUnified_basetime(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16ScanUnified msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_c16_msg::msg::LslidarC16ScanUnified>()
{
  return lslidar_c16_msg::msg::builder::Init_LslidarC16ScanUnified_header();
}

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__BUILDER_HPP_
