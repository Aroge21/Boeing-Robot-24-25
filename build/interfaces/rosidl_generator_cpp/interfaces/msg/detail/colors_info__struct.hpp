// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/ColorsInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__COLORS_INFO__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__COLORS_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "interfaces/msg/detail/color_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__msg__ColorsInfo __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__ColorsInfo __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorsInfo_
{
  using Type = ColorsInfo_<ContainerAllocator>;

  explicit ColorsInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ColorsInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<interfaces::msg::ColorInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::msg::ColorInfo_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<interfaces::msg::ColorInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::msg::ColorInfo_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::ColorsInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::ColorsInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::ColorsInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::ColorsInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ColorsInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ColorsInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ColorsInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ColorsInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::ColorsInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::ColorsInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__ColorsInfo
    std::shared_ptr<interfaces::msg::ColorsInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__ColorsInfo
    std::shared_ptr<interfaces::msg::ColorsInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorsInfo_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorsInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorsInfo_

// alias to use template instance with default allocator
using ColorsInfo =
  interfaces::msg::ColorsInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__COLORS_INFO__STRUCT_HPP_
