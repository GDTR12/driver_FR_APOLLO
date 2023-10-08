// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Sweep.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__STRUCT_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__STRUCT_HPP_

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
// Member 'scans'
#include "lslidar_c16_msg/msg/detail/lslidar_c16_scan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16Sweep __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16Sweep __declspec(deprecated)
#endif

namespace lslidar_c16_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LslidarC16Sweep_
{
  using Type = LslidarC16Sweep_<ContainerAllocator>;

  explicit LslidarC16Sweep_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scans.fill(lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>{_init});
    }
  }

  explicit LslidarC16Sweep_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    scans(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scans.fill(lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _scans_type =
    std::array<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>, 16>;
  _scans_type scans;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__scans(
    const std::array<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>, 16> & _arg)
  {
    this->scans = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16Sweep
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16Sweep
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Sweep_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LslidarC16Sweep_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->scans != other.scans) {
      return false;
    }
    return true;
  }
  bool operator!=(const LslidarC16Sweep_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LslidarC16Sweep_

// alias to use template instance with default allocator
using LslidarC16Sweep =
  lslidar_c16_msg::msg::LslidarC16Sweep_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__STRUCT_HPP_
