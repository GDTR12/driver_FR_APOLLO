// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lslidar_c16_msg:msg/LslidarC16Point.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_POINT__FUNCTIONS_H_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lslidar_c16_msg/msg/rosidl_generator_c__visibility_control.h"

#include "lslidar_c16_msg/msg/detail/lslidar_c16_point__struct.h"

/// Initialize msg/LslidarC16Point message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lslidar_c16_msg__msg__LslidarC16Point
 * )) before or use
 * lslidar_c16_msg__msg__LslidarC16Point__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Point__init(lslidar_c16_msg__msg__LslidarC16Point * msg);

/// Finalize msg/LslidarC16Point message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Point__fini(lslidar_c16_msg__msg__LslidarC16Point * msg);

/// Create msg/LslidarC16Point message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lslidar_c16_msg__msg__LslidarC16Point__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
lslidar_c16_msg__msg__LslidarC16Point *
lslidar_c16_msg__msg__LslidarC16Point__create();

/// Destroy msg/LslidarC16Point message.
/**
 * It calls
 * lslidar_c16_msg__msg__LslidarC16Point__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Point__destroy(lslidar_c16_msg__msg__LslidarC16Point * msg);

/// Check for msg/LslidarC16Point message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Point__are_equal(const lslidar_c16_msg__msg__LslidarC16Point * lhs, const lslidar_c16_msg__msg__LslidarC16Point * rhs);

/// Copy a msg/LslidarC16Point message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Point__copy(
  const lslidar_c16_msg__msg__LslidarC16Point * input,
  lslidar_c16_msg__msg__LslidarC16Point * output);

/// Initialize array of msg/LslidarC16Point messages.
/**
 * It allocates the memory for the number of elements and calls
 * lslidar_c16_msg__msg__LslidarC16Point__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Point__Sequence__init(lslidar_c16_msg__msg__LslidarC16Point__Sequence * array, size_t size);

/// Finalize array of msg/LslidarC16Point messages.
/**
 * It calls
 * lslidar_c16_msg__msg__LslidarC16Point__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Point__Sequence__fini(lslidar_c16_msg__msg__LslidarC16Point__Sequence * array);

/// Create array of msg/LslidarC16Point messages.
/**
 * It allocates the memory for the array and calls
 * lslidar_c16_msg__msg__LslidarC16Point__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
lslidar_c16_msg__msg__LslidarC16Point__Sequence *
lslidar_c16_msg__msg__LslidarC16Point__Sequence__create(size_t size);

/// Destroy array of msg/LslidarC16Point messages.
/**
 * It calls
 * lslidar_c16_msg__msg__LslidarC16Point__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Point__Sequence__destroy(lslidar_c16_msg__msg__LslidarC16Point__Sequence * array);

/// Check for msg/LslidarC16Point message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Point__Sequence__are_equal(const lslidar_c16_msg__msg__LslidarC16Point__Sequence * lhs, const lslidar_c16_msg__msg__LslidarC16Point__Sequence * rhs);

/// Copy an array of msg/LslidarC16Point messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Point__Sequence__copy(
  const lslidar_c16_msg__msg__LslidarC16Point__Sequence * input,
  lslidar_c16_msg__msg__LslidarC16Point__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_POINT__FUNCTIONS_H_
