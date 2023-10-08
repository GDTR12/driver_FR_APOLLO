// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Layer.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_LAYER__STRUCT_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_LAYER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'scan_channel'
#include "sensor_msgs/msg/detail/laser_scan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16Layer __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16Layer __declspec(deprecated)
#endif

namespace lslidar_c16_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LslidarC16Layer_
{
  using Type = LslidarC16Layer_<ContainerAllocator>;

  explicit LslidarC16Layer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_channel.fill(sensor_msgs::msg::LaserScan_<ContainerAllocator>{_init});
    }
  }

  explicit LslidarC16Layer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scan_channel(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_channel.fill(sensor_msgs::msg::LaserScan_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _scan_channel_type =
    std::array<sensor_msgs::msg::LaserScan_<ContainerAllocator>, 16>;
  _scan_channel_type scan_channel;

  // setters for named parameter idiom
  Type & set__scan_channel(
    const std::array<sensor_msgs::msg::LaserScan_<ContainerAllocator>, 16> & _arg)
  {
    this->scan_channel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16Layer
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16Layer
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Layer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LslidarC16Layer_ & other) const
  {
    if (this->scan_channel != other.scan_channel) {
      return false;
    }
    return true;
  }
  bool operator!=(const LslidarC16Layer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LslidarC16Layer_

// alias to use template instance with default allocator
using LslidarC16Layer =
  lslidar_c16_msg::msg::LslidarC16Layer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_LAYER__STRUCT_HPP_
