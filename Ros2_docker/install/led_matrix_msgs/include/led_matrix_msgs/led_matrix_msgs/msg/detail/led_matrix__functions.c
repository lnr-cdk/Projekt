// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from led_matrix_msgs:msg/LedMatrix.idl
// generated code does not contain a copyright notice
#include "led_matrix_msgs/msg/detail/led_matrix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
led_matrix_msgs__msg__LedMatrix__init(led_matrix_msgs__msg__LedMatrix * msg)
{
  if (!msg) {
    return false;
  }
  // rows
  return true;
}

void
led_matrix_msgs__msg__LedMatrix__fini(led_matrix_msgs__msg__LedMatrix * msg)
{
  if (!msg) {
    return;
  }
  // rows
}

bool
led_matrix_msgs__msg__LedMatrix__are_equal(const led_matrix_msgs__msg__LedMatrix * lhs, const led_matrix_msgs__msg__LedMatrix * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rows
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->rows[i] != rhs->rows[i]) {
      return false;
    }
  }
  return true;
}

bool
led_matrix_msgs__msg__LedMatrix__copy(
  const led_matrix_msgs__msg__LedMatrix * input,
  led_matrix_msgs__msg__LedMatrix * output)
{
  if (!input || !output) {
    return false;
  }
  // rows
  for (size_t i = 0; i < 8; ++i) {
    output->rows[i] = input->rows[i];
  }
  return true;
}

led_matrix_msgs__msg__LedMatrix *
led_matrix_msgs__msg__LedMatrix__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_matrix_msgs__msg__LedMatrix * msg = (led_matrix_msgs__msg__LedMatrix *)allocator.allocate(sizeof(led_matrix_msgs__msg__LedMatrix), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(led_matrix_msgs__msg__LedMatrix));
  bool success = led_matrix_msgs__msg__LedMatrix__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
led_matrix_msgs__msg__LedMatrix__destroy(led_matrix_msgs__msg__LedMatrix * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    led_matrix_msgs__msg__LedMatrix__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
led_matrix_msgs__msg__LedMatrix__Sequence__init(led_matrix_msgs__msg__LedMatrix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_matrix_msgs__msg__LedMatrix * data = NULL;

  if (size) {
    data = (led_matrix_msgs__msg__LedMatrix *)allocator.zero_allocate(size, sizeof(led_matrix_msgs__msg__LedMatrix), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = led_matrix_msgs__msg__LedMatrix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        led_matrix_msgs__msg__LedMatrix__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
led_matrix_msgs__msg__LedMatrix__Sequence__fini(led_matrix_msgs__msg__LedMatrix__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      led_matrix_msgs__msg__LedMatrix__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

led_matrix_msgs__msg__LedMatrix__Sequence *
led_matrix_msgs__msg__LedMatrix__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_matrix_msgs__msg__LedMatrix__Sequence * array = (led_matrix_msgs__msg__LedMatrix__Sequence *)allocator.allocate(sizeof(led_matrix_msgs__msg__LedMatrix__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = led_matrix_msgs__msg__LedMatrix__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
led_matrix_msgs__msg__LedMatrix__Sequence__destroy(led_matrix_msgs__msg__LedMatrix__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    led_matrix_msgs__msg__LedMatrix__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
led_matrix_msgs__msg__LedMatrix__Sequence__are_equal(const led_matrix_msgs__msg__LedMatrix__Sequence * lhs, const led_matrix_msgs__msg__LedMatrix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!led_matrix_msgs__msg__LedMatrix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
led_matrix_msgs__msg__LedMatrix__Sequence__copy(
  const led_matrix_msgs__msg__LedMatrix__Sequence * input,
  led_matrix_msgs__msg__LedMatrix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(led_matrix_msgs__msg__LedMatrix);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    led_matrix_msgs__msg__LedMatrix * data =
      (led_matrix_msgs__msg__LedMatrix *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!led_matrix_msgs__msg__LedMatrix__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          led_matrix_msgs__msg__LedMatrix__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!led_matrix_msgs__msg__LedMatrix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
