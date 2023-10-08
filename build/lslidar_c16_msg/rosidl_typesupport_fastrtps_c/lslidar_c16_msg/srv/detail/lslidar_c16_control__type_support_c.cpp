// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lslidar_c16_msg:srv/LslidarC16Control.idl
// generated code does not contain a copyright notice
#include "lslidar_c16_msg/srv/detail/lslidar_c16_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lslidar_c16_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lslidar_c16_msg/srv/detail/lslidar_c16_control__struct.h"
#include "lslidar_c16_msg/srv/detail/lslidar_c16_control__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _LslidarC16Control_Request__ros_msg_type = lslidar_c16_msg__srv__LslidarC16Control_Request;

static bool _LslidarC16Control_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LslidarC16Control_Request__ros_msg_type * ros_message = static_cast<const _LslidarC16Control_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_control
  {
    cdr << ros_message->laser_control;
  }

  return true;
}

static bool _LslidarC16Control_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LslidarC16Control_Request__ros_msg_type * ros_message = static_cast<_LslidarC16Control_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_control
  {
    cdr >> ros_message->laser_control;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_c16_msg
size_t get_serialized_size_lslidar_c16_msg__srv__LslidarC16Control_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LslidarC16Control_Request__ros_msg_type * ros_message = static_cast<const _LslidarC16Control_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name laser_control
  {
    size_t item_size = sizeof(ros_message->laser_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LslidarC16Control_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lslidar_c16_msg__srv__LslidarC16Control_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_c16_msg
size_t max_serialized_size_lslidar_c16_msg__srv__LslidarC16Control_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: laser_control
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LslidarC16Control_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lslidar_c16_msg__srv__LslidarC16Control_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LslidarC16Control_Request = {
  "lslidar_c16_msg::srv",
  "LslidarC16Control_Request",
  _LslidarC16Control_Request__cdr_serialize,
  _LslidarC16Control_Request__cdr_deserialize,
  _LslidarC16Control_Request__get_serialized_size,
  _LslidarC16Control_Request__max_serialized_size
};

static rosidl_message_type_support_t _LslidarC16Control_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LslidarC16Control_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_c16_msg, srv, LslidarC16Control_Request)() {
  return &_LslidarC16Control_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "lslidar_c16_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "lslidar_c16_msg/srv/detail/lslidar_c16_control__struct.h"
// already included above
// #include "lslidar_c16_msg/srv/detail/lslidar_c16_control__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // status
#include "rosidl_runtime_c/string_functions.h"  // status

// forward declare type support functions


using _LslidarC16Control_Response__ros_msg_type = lslidar_c16_msg__srv__LslidarC16Control_Response;

static bool _LslidarC16Control_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LslidarC16Control_Response__ros_msg_type * ros_message = static_cast<const _LslidarC16Control_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const rosidl_runtime_c__String * str = &ros_message->status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _LslidarC16Control_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LslidarC16Control_Response__ros_msg_type * ros_message = static_cast<_LslidarC16Control_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status.data) {
      rosidl_runtime_c__String__init(&ros_message->status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_c16_msg
size_t get_serialized_size_lslidar_c16_msg__srv__LslidarC16Control_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LslidarC16Control_Response__ros_msg_type * ros_message = static_cast<const _LslidarC16Control_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _LslidarC16Control_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lslidar_c16_msg__srv__LslidarC16Control_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_c16_msg
size_t max_serialized_size_lslidar_c16_msg__srv__LslidarC16Control_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LslidarC16Control_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lslidar_c16_msg__srv__LslidarC16Control_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LslidarC16Control_Response = {
  "lslidar_c16_msg::srv",
  "LslidarC16Control_Response",
  _LslidarC16Control_Response__cdr_serialize,
  _LslidarC16Control_Response__cdr_deserialize,
  _LslidarC16Control_Response__get_serialized_size,
  _LslidarC16Control_Response__max_serialized_size
};

static rosidl_message_type_support_t _LslidarC16Control_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LslidarC16Control_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_c16_msg, srv, LslidarC16Control_Response)() {
  return &_LslidarC16Control_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "lslidar_c16_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lslidar_c16_msg/srv/lslidar_c16_control.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LslidarC16Control__callbacks = {
  "lslidar_c16_msg::srv",
  "LslidarC16Control",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_c16_msg, srv, LslidarC16Control_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_c16_msg, srv, LslidarC16Control_Response)(),
};

static rosidl_service_type_support_t LslidarC16Control__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LslidarC16Control__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_c16_msg, srv, LslidarC16Control)() {
  return &LslidarC16Control__handle;
}

#if defined(__cplusplus)
}
#endif
