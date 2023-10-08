// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Sweep.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__BUILDER_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_c16_msg/msg/detail/lslidar_c16_sweep__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_c16_msg
{

namespace msg
{

namespace builder
{

class Init_LslidarC16Sweep_scans
{
public:
  explicit Init_LslidarC16Sweep_scans(::lslidar_c16_msg::msg::LslidarC16Sweep & msg)
  : msg_(msg)
  {}
  ::lslidar_c16_msg::msg::LslidarC16Sweep scans(::lslidar_c16_msg::msg::LslidarC16Sweep::_scans_type arg)
  {
    msg_.scans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Sweep msg_;
};

class Init_LslidarC16Sweep_header
{
public:
  Init_LslidarC16Sweep_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LslidarC16Sweep_scans header(::lslidar_c16_msg::msg::LslidarC16Sweep::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LslidarC16Sweep_scans(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Sweep msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_c16_msg::msg::LslidarC16Sweep>()
{
  return lslidar_c16_msg::msg::builder::Init_LslidarC16Sweep_header();
}

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__BUILDER_HPP_
