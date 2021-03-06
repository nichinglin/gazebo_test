// Generated by gencpp from file duckietown_msgs/AprilTags.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_APRILTAGS_H
#define DUCKIETOWN_MSGS_MESSAGE_APRILTAGS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <duckietown_msgs/TagDetection.h>
#include <duckietown_msgs/TagInfo.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct AprilTags_
{
  typedef AprilTags_<ContainerAllocator> Type;

  AprilTags_()
    : header()
    , detections()
    , infos()  {
    }
  AprilTags_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)
    , infos(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::duckietown_msgs::TagDetection_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::duckietown_msgs::TagDetection_<ContainerAllocator> >::other >  _detections_type;
  _detections_type detections;

   typedef std::vector< ::duckietown_msgs::TagInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::duckietown_msgs::TagInfo_<ContainerAllocator> >::other >  _infos_type;
  _infos_type infos;




  typedef boost::shared_ptr< ::duckietown_msgs::AprilTags_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::AprilTags_<ContainerAllocator> const> ConstPtr;

}; // struct AprilTags_

typedef ::duckietown_msgs::AprilTags_<std::allocator<void> > AprilTags;

typedef boost::shared_ptr< ::duckietown_msgs::AprilTags > AprilTagsPtr;
typedef boost::shared_ptr< ::duckietown_msgs::AprilTags const> AprilTagsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::AprilTags_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::AprilTags_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/david/gazebo_test/catkin_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTags_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTags_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTags_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTags_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTags_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTags_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::AprilTags_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c108c3c8d01b0a8176c23ae1a8c54e2";
  }

  static const char* value(const ::duckietown_msgs::AprilTags_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c108c3c8d01b0a8ULL;
  static const uint64_t static_value2 = 0x176c23ae1a8c54e2ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::AprilTags_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/AprilTags";
  }

  static const char* value(const ::duckietown_msgs::AprilTags_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::AprilTags_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
duckietown_msgs/TagDetection[] detections\n\
duckietown_msgs/TagInfo[] infos\n\
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
MSG: duckietown_msgs/TagDetection\n\
#Mirrors TagDetection.h in the apriltags pkg\n\
bool good\n\
int32 id\n\
float32[] p\n\
float32[] cxy\n\
float32 observedPerimeter\n\
float32[] homography\n\
float32 orientation\n\
float32[] hxy\n\
geometry_msgs/Transform transform\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: duckietown_msgs/TagInfo\n\
Header header\n\
int32 id\n\
\n\
# (StreetName, TrafficSign, Localization, Vehicle…)\n\
uint8 tag_type\n\
\n\
uint8 S_NAME=0\n\
uint8 SIGN=1	\n\
uint8 LIGHT=2\n\
uint8 LOCALIZE=3\n\
uint8 VEHICLE=4\n\
\n\
string street_name\n\
\n\
uint8 traffic_sign_type\n\
# (12 possible traffic sign types)\n\
\n\
uint8 STOP=5\n\
uint8 YIELD=6\n\
uint8 NO_RIGHT_TURN=7\n\
uint8 NO_LEFT_TURN=8\n\
uint8 ONEWAY_RIGHT=9\n\
uint8 ONEWAY_LEFT=10\n\
uint8 FOUR_WAY=11\n\
uint8 RIGHT_T_INTERSECT=12\n\
uint8 LEFT_T_INTERSECT=13\n\
uint8 T_INTERSECTION=14\n\
uint8 DO_NOT_ENTER=15\n\
uint8 PEDESTRIAN=16\n\
uint8 T_LIGHT_AHEAD=17\n\
uint8 DUCK_CROSSING=18\n\
\n\
string vehicle_name\n\
\n\
# Just added a single number for location. Probably want to use Vector2D.msg, but I get errors when I try to add it.\n\
float32 location\n\
";
  }

  static const char* value(const ::duckietown_msgs::AprilTags_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::AprilTags_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
      stream.next(m.infos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AprilTags_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::AprilTags_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::AprilTags_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::TagDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
    s << indent << "infos[]" << std::endl;
    for (size_t i = 0; i < v.infos.size(); ++i)
    {
      s << indent << "  infos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::TagInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.infos[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_APRILTAGS_H
