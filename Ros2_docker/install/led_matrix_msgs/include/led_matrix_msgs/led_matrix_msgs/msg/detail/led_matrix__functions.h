// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from led_matrix_msgs:msg/LedMatrix.idl
// generated code does not contain a copyright notice

#ifndef LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__FUNCTIONS_H_
#define LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "led_matrix_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "led_matrix_msgs/msg/detail/led_matrix__struct.h"

/// Initialize msg/LedMatrix message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * led_matrix_msgs__msg__LedMatrix
 * )) before or use
 * led_matrix_msgs__msg__LedMatrix__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
bool
led_matrix_msgs__msg__LedMatrix__init(led_matrix_msgs__msg__LedMatrix * msg);

/// Finalize msg/LedMatrix message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
void
led_matrix_msgs__msg__LedMatrix__fini(led_matrix_msgs__msg__LedMatrix * msg);

/// Create msg/LedMatrix message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * led_matrix_msgs__msg__LedMatrix__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
led_matrix_msgs__msg__LedMatrix *
led_matrix_msgs__msg__LedMatrix__create();

/// Destroy msg/LedMatrix message.
/**
 * It calls
 * led_matrix_msgs__msg__LedMatrix__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
void
led_matrix_msgs__msg__LedMatrix__destroy(led_matrix_msgs__msg__LedMatrix * msg);

/// Check for msg/LedMatrix message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
bool
led_matrix_msgs__msg__LedMatrix__are_equal(const led_matrix_msgs__msg__LedMatrix * lhs, const led_matrix_msgs__msg__LedMatrix * rhs);

/// Copy a msg/LedMatrix message.
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
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
bool
led_matrix_msgs__msg__LedMatrix__copy(
  const led_matrix_msgs__msg__LedMatrix * input,
  led_matrix_msgs__msg__LedMatrix * output);

/// Initialize array of msg/LedMatrix messages.
/**
 * It allocates the memory for the number of elements and calls
 * led_matrix_msgs__msg__LedMatrix__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
bool
led_matrix_msgs__msg__LedMatrix__Sequence__init(led_matrix_msgs__msg__LedMatrix__Sequence * array, size_t size);

/// Finalize array of msg/LedMatrix messages.
/**
 * It calls
 * led_matrix_msgs__msg__LedMatrix__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
void
led_matrix_msgs__msg__LedMatrix__Sequence__fini(led_matrix_msgs__msg__LedMatrix__Sequence * array);

/// Create array of msg/LedMatrix messages.
/**
 * It allocates the memory for the array and calls
 * led_matrix_msgs__msg__LedMatrix__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
led_matrix_msgs__msg__LedMatrix__Sequence *
led_matrix_msgs__msg__LedMatrix__Sequence__create(size_t size);

/// Destroy array of msg/LedMatrix messages.
/**
 * It calls
 * led_matrix_msgs__msg__LedMatrix__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
void
led_matrix_msgs__msg__LedMatrix__Sequence__destroy(led_matrix_msgs__msg__LedMatrix__Sequence * array);

/// Check for msg/LedMatrix message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
bool
led_matrix_msgs__msg__LedMatrix__Sequence__are_equal(const led_matrix_msgs__msg__LedMatrix__Sequence * lhs, const led_matrix_msgs__msg__LedMatrix__Sequence * rhs);

/// Copy an array of msg/LedMatrix messages.
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
ROSIDL_GENERATOR_C_PUBLIC_led_matrix_msgs
bool
led_matrix_msgs__msg__LedMatrix__Sequence__copy(
  const led_matrix_msgs__msg__LedMatrix__Sequence * input,
  led_matrix_msgs__msg__LedMatrix__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__FUNCTIONS_H_
