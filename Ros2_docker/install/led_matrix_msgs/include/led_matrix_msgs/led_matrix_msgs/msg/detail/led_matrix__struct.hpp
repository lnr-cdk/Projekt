// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from led_matrix_msgs:msg/LedMatrix.idl
// generated code does not contain a copyright notice

#ifndef LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__STRUCT_HPP_
#define LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__led_matrix_msgs__msg__LedMatrix __attribute__((deprecated))
#else
# define DEPRECATED__led_matrix_msgs__msg__LedMatrix __declspec(deprecated)
#endif

namespace led_matrix_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedMatrix_
{
  using Type = LedMatrix_<ContainerAllocator>;

  explicit LedMatrix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->rows.begin(), this->rows.end(), 0);
    }
  }

  explicit LedMatrix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rows(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->rows.begin(), this->rows.end(), 0);
    }
  }

  // field types and members
  using _rows_type =
    std::array<uint8_t, 8>;
  _rows_type rows;

  // setters for named parameter idiom
  Type & set__rows(
    const std::array<uint8_t, 8> & _arg)
  {
    this->rows = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    led_matrix_msgs::msg::LedMatrix_<ContainerAllocator> *;
  using ConstRawPtr =
    const led_matrix_msgs::msg::LedMatrix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<led_matrix_msgs::msg::LedMatrix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<led_matrix_msgs::msg::LedMatrix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      led_matrix_msgs::msg::LedMatrix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<led_matrix_msgs::msg::LedMatrix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      led_matrix_msgs::msg::LedMatrix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<led_matrix_msgs::msg::LedMatrix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<led_matrix_msgs::msg::LedMatrix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<led_matrix_msgs::msg::LedMatrix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__led_matrix_msgs__msg__LedMatrix
    std::shared_ptr<led_matrix_msgs::msg::LedMatrix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__led_matrix_msgs__msg__LedMatrix
    std::shared_ptr<led_matrix_msgs::msg::LedMatrix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedMatrix_ & other) const
  {
    if (this->rows != other.rows) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedMatrix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedMatrix_

// alias to use template instance with default allocator
using LedMatrix =
  led_matrix_msgs::msg::LedMatrix_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace led_matrix_msgs

#endif  // LED_MATRIX_MSGS__MSG__DETAIL__LED_MATRIX__STRUCT_HPP_
