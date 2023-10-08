// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Packet.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__BUILDER_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_c16_msg
{

namespace msg
{

namespace builder
{

class Init_LslidarC16Packet_data
{
public:
  explicit Init_LslidarC16Packet_data(::lslidar_c16_msg::msg::LslidarC16Packet & msg)
  : msg_(msg)
  {}
  ::lslidar_c16_msg::msg::LslidarC16Packet data(::lslidar_c16_msg::msg::LslidarC16Packet::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Packet msg_;
};

class Init_LslidarC16Packet_stamp
{
public:
  Init_LslidarC16Packet_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LslidarC16Packet_data stamp(::lslidar_c16_msg::msg::LslidarC16Packet::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LslidarC16Packet_data(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Packet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_c16_msg::msg::LslidarC16Packet>()
{
  return lslidar_c16_msg::msg::builder::Init_LslidarC16Packet_stamp();
}

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__BUILDER_HPP_
