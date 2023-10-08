// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_c16_msg:srv/LslidarC16Control.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__BUILDER_HPP_
#define LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_c16_msg/srv/detail/lslidar_c16_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_c16_msg
{

namespace srv
{

namespace builder
{

class Init_LslidarC16Control_Request_laser_control
{
public:
  Init_LslidarC16Control_Request_laser_control()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_c16_msg::srv::LslidarC16Control_Request laser_control(::lslidar_c16_msg::srv::LslidarC16Control_Request::_laser_control_type arg)
  {
    msg_.laser_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_c16_msg::srv::LslidarC16Control_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_c16_msg::srv::LslidarC16Control_Request>()
{
  return lslidar_c16_msg::srv::builder::Init_LslidarC16Control_Request_laser_control();
}

}  // namespace lslidar_c16_msg


namespace lslidar_c16_msg
{

namespace srv
{

namespace builder
{

class Init_LslidarC16Control_Response_status
{
public:
  Init_LslidarC16Control_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_c16_msg::srv::LslidarC16Control_Response status(::lslidar_c16_msg::srv::LslidarC16Control_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_c16_msg::srv::LslidarC16Control_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_c16_msg::srv::LslidarC16Control_Response>()
{
  return lslidar_c16_msg::srv::builder::Init_LslidarC16Control_Response_status();
}

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__BUILDER_HPP_
