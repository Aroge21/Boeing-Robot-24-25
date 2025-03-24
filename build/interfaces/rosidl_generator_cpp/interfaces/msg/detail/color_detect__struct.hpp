// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/ColorDetect.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__COLOR_DETECT__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__COLOR_DETECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__ColorDetect __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__ColorDetect __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorDetect_
{
  using Type = ColorDetect_<ContainerAllocator>;

  explicit ColorDetect_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_name = "";
      this->detect_type = "";
    }
  }

  explicit ColorDetect_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color_name(_alloc),
    detect_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_name = "";
      this->detect_type = "";
    }
  }

  // field types and members
  using _color_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_name_type color_name;
  using _detect_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detect_type_type detect_type;

  // setters for named parameter idiom
  Type & set__color_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color_name = _arg;
    return *this;
  }
  Type & set__detect_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detect_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::ColorDetect_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::ColorDetect_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::ColorDetect_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::ColorDetect_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ColorDetect_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ColorDetect_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ColorDetect_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ColorDetect_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::ColorDetect_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::ColorDetect_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__ColorDetect
    std::shared_ptr<interfaces::msg::ColorDetect_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__ColorDetect
    std::shared_ptr<interfaces::msg::ColorDetect_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorDetect_ & other) const
  {
    if (this->color_name != other.color_name) {
      return false;
    }
    if (this->detect_type != other.detect_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorDetect_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorDetect_

// alias to use template instance with default allocator
using ColorDetect =
  interfaces::msg::ColorDetect_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__COLOR_DETECT__STRUCT_HPP_
