// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_robot_controller_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
#define ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_robot_controller_msgs__msg__MotorState __attribute__((deprecated))
#else
# define DEPRECATED__ros_robot_controller_msgs__msg__MotorState __declspec(deprecated)
#endif

namespace ros_robot_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorState_
{
  using Type = MotorState_<ContainerAllocator>;

  explicit MotorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->rps = 0.0;
    }
  }

  explicit MotorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->rps = 0.0;
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _rps_type =
    double;
  _rps_type rps;

  // setters for named parameter idiom
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__rps(
    const double & _arg)
  {
    this->rps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_robot_controller_msgs__msg__MotorState
    std::shared_ptr<ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_robot_controller_msgs__msg__MotorState
    std::shared_ptr<ros_robot_controller_msgs::msg::MotorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorState_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->rps != other.rps) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorState_

// alias to use template instance with default allocator
using MotorState =
  ros_robot_controller_msgs::msg::MotorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_robot_controller_msgs

#endif  // ROS_ROBOT_CONTROLLER_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
