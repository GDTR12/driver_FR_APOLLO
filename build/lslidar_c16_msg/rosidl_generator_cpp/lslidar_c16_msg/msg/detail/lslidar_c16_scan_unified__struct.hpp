// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16ScanUnified.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__STRUCT_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'packets'
#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16ScanUnified __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16ScanUnified __declspec(deprecated)
#endif

namespace lslidar_c16_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LslidarC16ScanUnified_
{
  using Type = LslidarC16ScanUnified_<ContainerAllocator>;

  explicit LslidarC16ScanUnified_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->basetime = 0ull;
    }
  }

  explicit LslidarC16ScanUnified_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->basetime = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _basetime_type =
    uint64_t;
  _basetime_type basetime;
  using _packets_type =
    std::vector<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>>>;
  _packets_type packets;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__basetime(
    const uint64_t & _arg)
  {
    this->basetime = _arg;
    return *this;
  }
  Type & set__packets(
    const std::vector<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lslidar_c16_msg::msg::LslidarC16Packet_<ContainerAllocator>>> & _arg)
  {
    this->packets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16ScanUnified
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16ScanUnified
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16ScanUnified_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LslidarC16ScanUnified_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->basetime != other.basetime) {
      return false;
    }
    if (this->packets != other.packets) {
      return false;
    }
    return true;
  }
  bool operator!=(const LslidarC16ScanUnified_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LslidarC16ScanUnified_

// alias to use template instance with default allocator
using LslidarC16ScanUnified =
  lslidar_c16_msg::msg::LslidarC16ScanUnified_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN_UNIFIED__STRUCT_HPP_
