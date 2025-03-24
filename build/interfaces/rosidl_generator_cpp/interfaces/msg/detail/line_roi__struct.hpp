// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/LineROI.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LINE_ROI__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__LINE_ROI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'roi_up'
// Member 'roi_center'
// Member 'roi_down'
#include "interfaces/msg/detail/roi__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__msg__LineROI __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__LineROI __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LineROI_
{
  using Type = LineROI_<ContainerAllocator>;

  explicit LineROI_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi_up(_init),
    roi_center(_init),
    roi_down(_init)
  {
    (void)_init;
  }

  explicit LineROI_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi_up(_alloc, _init),
    roi_center(_alloc, _init),
    roi_down(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _roi_up_type =
    interfaces::msg::ROI_<ContainerAllocator>;
  _roi_up_type roi_up;
  using _roi_center_type =
    interfaces::msg::ROI_<ContainerAllocator>;
  _roi_center_type roi_center;
  using _roi_down_type =
    interfaces::msg::ROI_<ContainerAllocator>;
  _roi_down_type roi_down;

  // setters for named parameter idiom
  Type & set__roi_up(
    const interfaces::msg::ROI_<ContainerAllocator> & _arg)
  {
    this->roi_up = _arg;
    return *this;
  }
  Type & set__roi_center(
    const interfaces::msg::ROI_<ContainerAllocator> & _arg)
  {
    this->roi_center = _arg;
    return *this;
  }
  Type & set__roi_down(
    const interfaces::msg::ROI_<ContainerAllocator> & _arg)
  {
    this->roi_down = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::LineROI_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::LineROI_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::LineROI_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::LineROI_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LineROI_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LineROI_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LineROI_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LineROI_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::LineROI_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::LineROI_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__LineROI
    std::shared_ptr<interfaces::msg::LineROI_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__LineROI
    std::shared_ptr<interfaces::msg::LineROI_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LineROI_ & other) const
  {
    if (this->roi_up != other.roi_up) {
      return false;
    }
    if (this->roi_center != other.roi_center) {
      return false;
    }
    if (this->roi_down != other.roi_down) {
      return false;
    }
    return true;
  }
  bool operator!=(const LineROI_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LineROI_

// alias to use template instance with default allocator
using LineROI =
  interfaces::msg::LineROI_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LINE_ROI__STRUCT_HPP_
