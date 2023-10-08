// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_c16_msg:srv/LslidarC16Control.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__STRUCT_HPP_
#define LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lslidar_c16_msg__srv__LslidarC16Control_Request __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_c16_msg__srv__LslidarC16Control_Request __declspec(deprecated)
#endif

namespace lslidar_c16_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LslidarC16Control_Request_
{
  using Type = LslidarC16Control_Request_<ContainerAllocator>;

  explicit LslidarC16Control_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laser_control = 0l;
    }
  }

  explicit LslidarC16Control_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laser_control = 0l;
    }
  }

  // field types and members
  using _laser_control_type =
    int32_t;
  _laser_control_type laser_control;

  // setters for named parameter idiom
  Type & set__laser_control(
    const int32_t & _arg)
  {
    this->laser_control = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_c16_msg__srv__LslidarC16Control_Request
    std::shared_ptr<lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_c16_msg__srv__LslidarC16Control_Request
    std::shared_ptr<lslidar_c16_msg::srv::LslidarC16Control_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LslidarC16Control_Request_ & other) const
  {
    if (this->laser_control != other.laser_control) {
      return false;
    }
    return true;
  }
  bool operator!=(const LslidarC16Control_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LslidarC16Control_Request_

// alias to use template instance with default allocator
using LslidarC16Control_Request =
  lslidar_c16_msg::srv::LslidarC16Control_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_c16_msg


#ifndef _WIN32
# define DEPRECATED__lslidar_c16_msg__srv__LslidarC16Control_Response __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_c16_msg__srv__LslidarC16Control_Response __declspec(deprecated)
#endif

namespace lslidar_c16_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LslidarC16Control_Response_
{
  using Type = LslidarC16Control_Response_<ContainerAllocator>;

  explicit LslidarC16Control_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit LslidarC16Control_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_c16_msg__srv__LslidarC16Control_Response
    std::shared_ptr<lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_c16_msg__srv__LslidarC16Control_Response
    std::shared_ptr<lslidar_c16_msg::srv::LslidarC16Control_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LslidarC16Control_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const LslidarC16Control_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LslidarC16Control_Response_

// alias to use template instance with default allocator
using LslidarC16Control_Response =
  lslidar_c16_msg::srv::LslidarC16Control_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_c16_msg

namespace lslidar_c16_msg
{

namespace srv
{

struct LslidarC16Control
{
  using Request = lslidar_c16_msg::srv::LslidarC16Control_Request;
  using Response = lslidar_c16_msg::srv::LslidarC16Control_Response;
};

}  // namespace srv

}  // namespace lslidar_c16_msg

#endif  // LSLIDAR_C16_MSG__SRV__DETAIL__LSLIDAR_C16_CONTROL__STRUCT_HPP_
