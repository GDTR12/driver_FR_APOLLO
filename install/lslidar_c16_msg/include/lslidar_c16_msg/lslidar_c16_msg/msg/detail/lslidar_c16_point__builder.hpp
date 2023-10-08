// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Point.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_POINT__BUILDER_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_c16_msg/msg/detail/lslidar_c16_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_c16_msg
{

namespace msg
{

namespace builder
{

class Init_LslidarC16Point_intensity
{
public:
  explicit Init_LslidarC16Point_intensity(::lslidar_c16_msg::msg::LslidarC16Point & msg)
  : msg_(msg)
  {}
  ::lslidar_c16_msg::msg::LslidarC16Point intensity(::lslidar_c16_msg::msg::LslidarC16Point::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Point msg_;
};

class Init_LslidarC16Point_distance
{
public:
  explicit Init_LslidarC16Point_distance(::lslidar_c16_msg::msg::LslidarC16Point & msg)
  : msg_(msg)
  {}
  Init_LslidarC16Point_intensity distance(::lslidar_c16_msg::msg::LslidarC16Point::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_LslidarC16Point_intensity(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Point msg_;
};

class Init_LslidarC16Point_azimuth
{
public:
  explicit Init_LslidarC16Point_azimuth(::lslidar_c16_msg::msg::LslidarC16Point & msg)
  : msg_(msg)
  {}
  Init_LslidarC16Point_distance azimuth(::lslidar_c16_msg::msg::LslidarC16Point::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_LslidarC16Point_distance(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Point msg_;
};

class Init_LslidarC16Point_z
{
public:
  explicit Init_LslidarC16Point_z(::lslidar_c16_msg::msg::LslidarC16Point & msg)
  : msg_(msg)
  {}
  Init_LslidarC16Point_azimuth z(::lslidar_c16_msg::msg::LslidarC16Point::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_LslidarC16Point_azimuth(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Point msg_;
};

class Init_LslidarC16Point_y
{
public:
  explicit Init_LslidarC16Point_y(::lslidar_c16_msg::msg::LslidarC16Point & msg)
  : msg_(msg)
  {}
  Init_LslidarC16Point_z y(::lslidar_c16_msg::msg::LslidarC16Point::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_LslidarC16Point_z(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Point msg_;
};

class Init_LslidarC16Point_x
{
public:
  explicit Init_LslidarC16Point_x(::lslidar_c16_msg::msg::LslidarC16Point & msg)
  : msg_(msg)
  {}
  Init_LslidarC16Point_y x(::lslidar_c16_msg::msg::LslidarC16Point::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LslidarC16Point_y(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Point msg_;
};

class Init_LslidarC16Point_time
{
public:
  Init_LslidarC16Point_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LslidarC16Point_x time(::lslidar_c16_msg::msg::LslidarC16Point::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_LslidarC16Point_x(msg_);
  }

private:
  ::lslidar_c16_msg::msg::LslidarC16Point msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_c16_msg::msg::LslidarC16Point>()
{
  return lslidar_c16_msg::msg::builder::Init_LslidarC16Point_time();
}

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_POINT__BUILDER_HPP_
