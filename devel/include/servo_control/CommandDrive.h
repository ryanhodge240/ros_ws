// Generated by gencpp from file servo_control/CommandDrive.msg
// DO NOT EDIT!


#ifndef SERVO_CONTROL_MESSAGE_COMMANDDRIVE_H
#define SERVO_CONTROL_MESSAGE_COMMANDDRIVE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace servo_control
{
template <class ContainerAllocator>
struct CommandDrive_
{
  typedef CommandDrive_<ContainerAllocator> Type;

  CommandDrive_()
    : left_front_vel(0.0)
    , left_middle_vel(0.0)
    , left_back_vel(0.0)
    , right_front_vel(0.0)
    , right_middle_vel(0.0)
    , right_back_vel(0.0)  {
    }
  CommandDrive_(const ContainerAllocator& _alloc)
    : left_front_vel(0.0)
    , left_middle_vel(0.0)
    , left_back_vel(0.0)
    , right_front_vel(0.0)
    , right_middle_vel(0.0)
    , right_back_vel(0.0)  {
  (void)_alloc;
    }



   typedef double _left_front_vel_type;
  _left_front_vel_type left_front_vel;

   typedef double _left_middle_vel_type;
  _left_middle_vel_type left_middle_vel;

   typedef double _left_back_vel_type;
  _left_back_vel_type left_back_vel;

   typedef double _right_front_vel_type;
  _right_front_vel_type right_front_vel;

   typedef double _right_middle_vel_type;
  _right_middle_vel_type right_middle_vel;

   typedef double _right_back_vel_type;
  _right_back_vel_type right_back_vel;





  typedef boost::shared_ptr< ::servo_control::CommandDrive_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::servo_control::CommandDrive_<ContainerAllocator> const> ConstPtr;

}; // struct CommandDrive_

typedef ::servo_control::CommandDrive_<std::allocator<void> > CommandDrive;

typedef boost::shared_ptr< ::servo_control::CommandDrive > CommandDrivePtr;
typedef boost::shared_ptr< ::servo_control::CommandDrive const> CommandDriveConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::servo_control::CommandDrive_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::servo_control::CommandDrive_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::servo_control::CommandDrive_<ContainerAllocator1> & lhs, const ::servo_control::CommandDrive_<ContainerAllocator2> & rhs)
{
  return lhs.left_front_vel == rhs.left_front_vel &&
    lhs.left_middle_vel == rhs.left_middle_vel &&
    lhs.left_back_vel == rhs.left_back_vel &&
    lhs.right_front_vel == rhs.right_front_vel &&
    lhs.right_middle_vel == rhs.right_middle_vel &&
    lhs.right_back_vel == rhs.right_back_vel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::servo_control::CommandDrive_<ContainerAllocator1> & lhs, const ::servo_control::CommandDrive_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace servo_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::servo_control::CommandDrive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_control::CommandDrive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::servo_control::CommandDrive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::servo_control::CommandDrive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_control::CommandDrive_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_control::CommandDrive_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::servo_control::CommandDrive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93c68ee77a1987ff55cfdac06c04c042";
  }

  static const char* value(const ::servo_control::CommandDrive_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93c68ee77a1987ffULL;
  static const uint64_t static_value2 = 0x55cfdac06c04c042ULL;
};

template<class ContainerAllocator>
struct DataType< ::servo_control::CommandDrive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "servo_control/CommandDrive";
  }

  static const char* value(const ::servo_control::CommandDrive_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::servo_control::CommandDrive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# drive motors, velocity in rad/s\n"
"float64 left_front_vel\n"
"float64 left_middle_vel\n"
"float64 left_back_vel\n"
"float64 right_front_vel\n"
"float64 right_middle_vel\n"
"float64 right_back_vel\n"
;
  }

  static const char* value(const ::servo_control::CommandDrive_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::servo_control::CommandDrive_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left_front_vel);
      stream.next(m.left_middle_vel);
      stream.next(m.left_back_vel);
      stream.next(m.right_front_vel);
      stream.next(m.right_middle_vel);
      stream.next(m.right_back_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandDrive_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::servo_control::CommandDrive_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::servo_control::CommandDrive_<ContainerAllocator>& v)
  {
    s << indent << "left_front_vel: ";
    Printer<double>::stream(s, indent + "  ", v.left_front_vel);
    s << indent << "left_middle_vel: ";
    Printer<double>::stream(s, indent + "  ", v.left_middle_vel);
    s << indent << "left_back_vel: ";
    Printer<double>::stream(s, indent + "  ", v.left_back_vel);
    s << indent << "right_front_vel: ";
    Printer<double>::stream(s, indent + "  ", v.right_front_vel);
    s << indent << "right_middle_vel: ";
    Printer<double>::stream(s, indent + "  ", v.right_middle_vel);
    s << indent << "right_back_vel: ";
    Printer<double>::stream(s, indent + "  ", v.right_back_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVO_CONTROL_MESSAGE_COMMANDDRIVE_H
