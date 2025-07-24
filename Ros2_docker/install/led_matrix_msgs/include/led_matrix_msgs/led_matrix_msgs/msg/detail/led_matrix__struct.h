// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from led_matrix_msgs:msg/LedMatrix.idl
// generated code does not contain a copyright notice

#ifndef LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__STRUCT_H_
#define LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LedMatrix in the package led_matrix_msgs.
typedef struct led_matrix_msgs__msg__LedMatrix
{
  uint8_t rows[8];
} led_matrix_msgs__msg__LedMatrix;

// Struct for a sequence of led_matrix_msgs__msg__LedMatrix.
typedef struct led_matrix_msgs__msg__LedMatrix__Sequence
{
  led_matrix_msgs__msg__LedMatrix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} led_matrix_msgs__msg__LedMatrix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__STRUCT_H_
