// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/ROI.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ROI__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__ROI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__ROI __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__ROI __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ROI_
{
  using Type = ROI_<ContainerAllocator>;

  explicit ROI_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->y_min = 0;
      this->y_max = 0;
      this->x_min = 0;
      this->x_max = 0;
      this->scale = 0.0f;
    }
  }

  explicit ROI_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->y_min = 0;
      this->y_max = 0;
      this->x_min = 0;
      this->x_max = 0;
      this->scale = 0.0f;
    }
  }

  // field types and members
  using _y_min_type =
    int16_t;
  _y_min_type y_min;
  using _y_max_type =
    int16_t;
  _y_max_type y_max;
  using _x_min_type =
    int16_t;
  _x_min_type x_min;
  using _x_max_type =
    int16_t;
  _x_max_type x_max;
  using _scale_type =
    float;
  _scale_type scale;

  // setters for named parameter idiom
  Type & set__y_min(
    const int16_t & _arg)
  {
    this->y_min = _arg;
    return *this;
  }
  Type & set__y_max(
    const int16_t & _arg)
  {
    this->y_max = _arg;
    return *this;
  }
  Type & set__x_min(
    const int16_t & _arg)
  {
    this->x_min = _arg;
    return *this;
  }
  Type & set__x_max(
    const int16_t & _arg)
  {
    this->x_max = _arg;
    return *this;
  }
  Type & set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::ROI_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::ROI_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::ROI_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::ROI_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ROI_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ROI_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ROI_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ROI_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::ROI_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::ROI_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__ROI
    std::shared_ptr<interfaces::msg::ROI_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__ROI
    std::shared_ptr<interfaces::msg::ROI_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ROI_ & other) const
  {
    if (this->y_min != other.y_min) {
      return false;
    }
    if (this->y_max != other.y_max) {
      return false;
    }
    if (this->x_min != other.x_min) {
      return false;
    }
    if (this->x_max != other.x_max) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    return true;
  }
  bool operator!=(const ROI_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ROI_

// alias to use template instance with default allocator
using ROI =
  interfaces::msg::ROI_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ROI__STRUCT_HPP_
