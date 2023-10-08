// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lslidar_c16_msg:msg/LslidarC16Packet.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__FUNCTIONS_H_
#define LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lslidar_c16_msg/msg/rosidl_generator_c__visibility_control.h"

#include "lslidar_c16_msg/msg/detail/lslidar_c16_packet__struct.h"

/// Initialize msg/LslidarC16Packet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lslidar_c16_msg__msg__LslidarC16Packet
 * )) before or use
 * lslidar_c16_msg__msg__LslidarC16Packet__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Packet__init(lslidar_c16_msg__msg__LslidarC16Packet * msg);

/// Finalize msg/LslidarC16Packet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Packet__fini(lslidar_c16_msg__msg__LslidarC16Packet * msg);

/// Create msg/LslidarC16Packet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lslidar_c16_msg__msg__LslidarC16Packet__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
lslidar_c16_msg__msg__LslidarC16Packet *
lslidar_c16_msg__msg__LslidarC16Packet__create();

/// Destroy msg/LslidarC16Packet message.
/**
 * It calls
 * lslidar_c16_msg__msg__LslidarC16Packet__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Packet__destroy(lslidar_c16_msg__msg__LslidarC16Packet * msg);

/// Check for msg/LslidarC16Packet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Packet__are_equal(const lslidar_c16_msg__msg__LslidarC16Packet * lhs, const lslidar_c16_msg__msg__LslidarC16Packet * rhs);

/// Copy a msg/LslidarC16Packet message.
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
lslidar_c16_msg__msg__LslidarC16Packet__copy(
  const lslidar_c16_msg__msg__LslidarC16Packet * input,
  lslidar_c16_msg__msg__LslidarC16Packet * output);

/// Initialize array of msg/LslidarC16Packet messages.
/**
 * It allocates the memory for the number of elements and calls
 * lslidar_c16_msg__msg__LslidarC16Packet__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Packet__Sequence__init(lslidar_c16_msg__msg__LslidarC16Packet__Sequence * array, size_t size);

/// Finalize array of msg/LslidarC16Packet messages.
/**
 * It calls
 * lslidar_c16_msg__msg__LslidarC16Packet__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Packet__Sequence__fini(lslidar_c16_msg__msg__LslidarC16Packet__Sequence * array);

/// Create array of msg/LslidarC16Packet messages.
/**
 * It allocates the memory for the array and calls
 * lslidar_c16_msg__msg__LslidarC16Packet__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
lslidar_c16_msg__msg__LslidarC16Packet__Sequence *
lslidar_c16_msg__msg__LslidarC16Packet__Sequence__create(size_t size);

/// Destroy array of msg/LslidarC16Packet messages.
/**
 * It calls
 * lslidar_c16_msg__msg__LslidarC16Packet__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
void
lslidar_c16_msg__msg__LslidarC16Packet__Sequence__destroy(lslidar_c16_msg__msg__LslidarC16Packet__Sequence * array);

/// Check for msg/LslidarC16Packet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lslidar_c16_msg
bool
lslidar_c16_msg__msg__LslidarC16Packet__Sequence__are_equal(const lslidar_c16_msg__msg__LslidarC16Packet__Sequence * lhs, const lslidar_c16_msg__msg__LslidarC16Packet__Sequence * rhs);

/// Copy an array of msg/LslidarC16Packet messages.
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
lslidar_c16_msg__msg__LslidarC16Packet__Sequence__copy(
  const lslidar_c16_msg__msg__LslidarC16Packet__Sequence * input,
  lslidar_c16_msg__msg__LslidarC16Packet__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_C16_MSG__MSG__DETAIL__LSLIDAR_C16_PACKET__FUNCTIONS_H_
