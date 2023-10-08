// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_c16_msg:msg/LslidarC16Scan.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__STRUCT_HPP_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "lslidar_c16_msg/msg/detail/lslidar_c16_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16Scan __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_c16_msg__msg__LslidarC16Scan __declspec(deprecated)
#endif

namespace lslidar_c16_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LslidarC16Scan_
{
  using Type = LslidarC16Scan_<ContainerAllocator>;

  explicit LslidarC16Scan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
    }
  }

  explicit LslidarC16Scan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
    }
  }

  // field types and members
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _points_type =
    std::vector<lslidar_c16_msg::msg::LslidarC16Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lslidar_c16_msg::msg::LslidarC16Point_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<lslidar_c16_msg::msg::LslidarC16Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lslidar_c16_msg::msg::LslidarC16Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16Scan
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_c16_msg__msg__LslidarC16Scan
    std::shared_ptr<lslidar_c16_msg::msg::LslidarC16Scan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LslidarC16Scan_ & other) const
  {
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const LslidarC16Scan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LslidarC16Scan_

// alias to use template instance with default allocator
using LslidarC16Scan =
  lslidar_c16_msg::msg::LslidarC16Scan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SCAN__STRUCT_HPP_
