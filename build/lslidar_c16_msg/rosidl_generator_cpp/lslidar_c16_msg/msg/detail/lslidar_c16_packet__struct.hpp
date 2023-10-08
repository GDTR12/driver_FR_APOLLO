// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Packet.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__STRUCT_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16Packet __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16Packet __declspec(deprecated)
#endif

namespace lslidar_c16_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LslidarC16Packet_
{
  using Type = LslidarC16Packet_<ContainerAllocator>;

  explicit LslidarC16Packet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 1206>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit LslidarC16Packet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 1206>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _data_type =
    std::array<uint8_t, 1206>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 1206> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16Packet
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16Packet
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LslidarC16Packet_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const LslidarC16Packet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LslidarC16Packet_

// alias to use template instance with default allocator
using LslidarC16Packet =
  lslidar_c16_msg::msg::LslidarC16Packet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__STRUCT_HPP_
