// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lslidar_c16_msg:msg/LslidarC16Sweep.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__FUNCTIONS_H_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lslidar_c16_msg/msg/rosidl_generator_c__visibility_control.h"

#include "lslidar_c16_msg/msg/detail/lslidar_c16_sweep__struct.h"

/// Initialize msg/LslidarC16Sweep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lslidar_c16_msg__msg__LslidarC16Sweep
 * )) before or use
 * lslidar_c16_msg__msg__LslidarC16Sweep__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Sweep__init(lslidar_c16_msg__msg__LslidarC16Sweep * msg);

/// Finalize msg/LslidarC16Sweep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Sweep__fini(lslidar_c16_msg__msg__LslidarC16Sweep * msg);

/// Create msg/LslidarC16Sweep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lslidar_c16_msg__msg__LslidarC16Sweep__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
lslidar_c16_msg__msg__LslidarC16Sweep *
lslidar_c16_msg__msg__LslidarC16Sweep__create();

/// Destroy msg/LslidarC16Sweep message.
/**
 * It calls
 * lslidar_c16_msg__msg__LslidarC16Sweep__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Sweep__destroy(lslidar_c16_msg__msg__LslidarC16Sweep * msg);

/// Check for msg/LslidarC16Sweep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Sweep__are_equal(const lslidar_c16_msg__msg__LslidarC16Sweep * lhs, const lslidar_c16_msg__msg__LslidarC16Sweep * rhs);

/// Copy a msg/LslidarC16Sweep message.
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
lslidar_c16_msg__msg__LslidarC16Sweep__copy(
  const lslidar_c16_msg__msg__LslidarC16Sweep * input,
  lslidar_c16_msg__msg__LslidarC16Sweep * output);

/// Initialize array of msg/LslidarC16Sweep messages.
/**
 * It allocates the memory for the number of elements and calls
 * lslidar_c16_msg__msg__LslidarC16Sweep__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__init(lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * array, size_t size);

/// Finalize array of msg/LslidarC16Sweep messages.
/**
 * It calls
 * lslidar_c16_msg__msg__LslidarC16Sweep__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__fini(lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * array);

/// Create array of msg/LslidarC16Sweep messages.
/**
 * It allocates the memory for the array and calls
 * lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence *
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__create(size_t size);

/// Destroy array of msg/LslidarC16Sweep messages.
/**
 * It calls
 * lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__destroy(lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * array);

/// Check for msg/LslidarC16Sweep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__are_equal(const lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * lhs, const lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * rhs);

/// Copy an array of msg/LslidarC16Sweep messages.
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
lslidar_c16_msg__msg__LslidarC16Sweep__Sequence__copy(
  const lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * input,
  lslidar_c16_msg__msg__LslidarC16Sweep__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_SWEEP__FUNCTIONS_H_
