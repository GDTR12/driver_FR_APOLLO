// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Layer.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_LAYER__BUILDER_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_LAYER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_c16_msg/msg/detail/lslidar_c16_layer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_c16_msg
{

namespace msg
{

namespace builder
{

class Init_LslidarC16Layer_scan_channel
{
public:
  Init_LslidarC16Layer_scan_channel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_c16_msg::msg::LslidarC16Layer scan_channel(::lslidar_c16_msg::msg::LslidarC16Layer::_scan_channel_type arg)
  {
    msg_.scan_channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Layer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_c16_msg::msg::LslidarC16Layer>()
{
  return lslidar_c16_msg::msg::builder::Init_LslidarC16Layer_scan_channel();
}

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_LAYER__BUILDER_HPP_
