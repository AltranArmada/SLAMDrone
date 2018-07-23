// Generated by gencpp from file mav_msgs/CommandAttitudeThrust.msg
// DO NOT EDIT!


#ifndef MAV_MSGS_MESSAGE_COMMANDATTITUDETHRUST_H
#define MAV_MSGS_MESSAGE_COMMANDATTITUDETHRUST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>

namespace mav_msgs
{
template <class ContainerAllocator>
struct CommandAttitudeThrust_
{
  typedef CommandAttitudeThrust_<ContainerAllocator> Type;

  CommandAttitudeThrust_()
    : header()
    , attitude()
    , thrust(0.0)  {
    }
  CommandAttitudeThrust_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , attitude(_alloc)
    , thrust(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _attitude_type;
  _attitude_type attitude;

   typedef double _thrust_type;
  _thrust_type thrust;




  typedef boost::shared_ptr< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> const> ConstPtr;

}; // struct CommandAttitudeThrust_

typedef ::mav_msgs::CommandAttitudeThrust_<std::allocator<void> > CommandAttitudeThrust;

typedef boost::shared_ptr< ::mav_msgs::CommandAttitudeThrust > CommandAttitudeThrustPtr;
typedef boost::shared_ptr< ::mav_msgs::CommandAttitudeThrust const> CommandAttitudeThrustConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mav_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'mav_msgs': ['/home/user/armada3/Dev_code_version_SITL/ros_catkin_ws/src/mav_comm/mav_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d4f9a597f2a4d4943a3be2c915e3f97d";
  }

  static const char* value(const ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd4f9a597f2a4d494ULL;
  static const uint64_t static_value2 = 0x3a3be2c915e3f97dULL;
};

template<class ContainerAllocator>
struct DataType< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mav_msgs/CommandAttitudeThrust";
  }

  static const char* value(const ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# Message should be specified in the world coordinate frame.\n\
\n\
geometry_msgs/Quaternion attitude\n\
float64 thrust    # thrust [N]\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.attitude);
      stream.next(m.thrust);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandAttitudeThrust_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mav_msgs::CommandAttitudeThrust_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "attitude: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.attitude);
    s << indent << "thrust: ";
    Printer<double>::stream(s, indent + "  ", v.thrust);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAV_MSGS_MESSAGE_COMMANDATTITUDETHRUST_H
