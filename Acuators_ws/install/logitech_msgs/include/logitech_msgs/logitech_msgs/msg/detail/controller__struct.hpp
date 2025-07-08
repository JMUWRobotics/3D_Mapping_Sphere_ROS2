// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from logitech_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "logitech_msgs/msg/controller.hpp"


#ifndef LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_HPP_
#define LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__logitech_msgs__msg__Controller __attribute__((deprecated))
#else
# define DEPRECATED__logitech_msgs__msg__Controller __declspec(deprecated)
#endif

namespace logitech_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Controller_
{
  using Type = Controller_<ContainerAllocator>;

  explicit Controller_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_value = 0l;
      this->servop = 0l;
      this->servomid = 0l;
    }
  }

  explicit Controller_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_value = 0l;
      this->servop = 0l;
      this->servomid = 0l;
    }
  }

  // field types and members
  using _motor_value_type =
    int32_t;
  _motor_value_type motor_value;
  using _servop_type =
    int32_t;
  _servop_type servop;
  using _servomid_type =
    int32_t;
  _servomid_type servomid;

  // setters for named parameter idiom
  Type & set__motor_value(
    const int32_t & _arg)
  {
    this->motor_value = _arg;
    return *this;
  }
  Type & set__servop(
    const int32_t & _arg)
  {
    this->servop = _arg;
    return *this;
  }
  Type & set__servomid(
    const int32_t & _arg)
  {
    this->servomid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    logitech_msgs::msg::Controller_<ContainerAllocator> *;
  using ConstRawPtr =
    const logitech_msgs::msg::Controller_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<logitech_msgs::msg::Controller_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<logitech_msgs::msg::Controller_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      logitech_msgs::msg::Controller_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<logitech_msgs::msg::Controller_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      logitech_msgs::msg::Controller_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<logitech_msgs::msg::Controller_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<logitech_msgs::msg::Controller_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<logitech_msgs::msg::Controller_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__logitech_msgs__msg__Controller
    std::shared_ptr<logitech_msgs::msg::Controller_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__logitech_msgs__msg__Controller
    std::shared_ptr<logitech_msgs::msg::Controller_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_ & other) const
  {
    if (this->motor_value != other.motor_value) {
      return false;
    }
    if (this->servop != other.servop) {
      return false;
    }
    if (this->servomid != other.servomid) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_

// alias to use template instance with default allocator
using Controller =
  logitech_msgs::msg::Controller_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace logitech_msgs

#endif  // LOGITECH_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_HPP_
