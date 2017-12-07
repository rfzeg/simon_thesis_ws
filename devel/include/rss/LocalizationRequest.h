// Generated by gencpp from file rss/LocalizationRequest.msg
// DO NOT EDIT!


#ifndef RSS_MESSAGE_LOCALIZATIONREQUEST_H
#define RSS_MESSAGE_LOCALIZATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rss/RssData.h>
#include <geometry_msgs/PoseArray.h>

namespace rss
{
template <class ContainerAllocator>
struct LocalizationRequest_
{
  typedef LocalizationRequest_<ContainerAllocator> Type;

  LocalizationRequest_()
    : rss()
    , nsamples(0)
    , pose_array()  {
    }
  LocalizationRequest_(const ContainerAllocator& _alloc)
    : rss(_alloc)
    , nsamples(0)
    , pose_array(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::rss::RssData_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rss::RssData_<ContainerAllocator> >::other >  _rss_type;
  _rss_type rss;

   typedef int64_t _nsamples_type;
  _nsamples_type nsamples;

   typedef  ::geometry_msgs::PoseArray_<ContainerAllocator>  _pose_array_type;
  _pose_array_type pose_array;




  typedef boost::shared_ptr< ::rss::LocalizationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rss::LocalizationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LocalizationRequest_

typedef ::rss::LocalizationRequest_<std::allocator<void> > LocalizationRequest;

typedef boost::shared_ptr< ::rss::LocalizationRequest > LocalizationRequestPtr;
typedef boost::shared_ptr< ::rss::LocalizationRequest const> LocalizationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rss::LocalizationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rss::LocalizationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rss

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rss': ['/home/simoneforno/simon_ws/src/rss/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rss::LocalizationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rss::LocalizationRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rss::LocalizationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rss::LocalizationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rss::LocalizationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rss::LocalizationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rss::LocalizationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "75f1b979b6225c2ec66279f7c9fcdf68";
  }

  static const char* value(const ::rss::LocalizationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x75f1b979b6225c2eULL;
  static const uint64_t static_value2 = 0xc66279f7c9fcdf68ULL;
};

template<class ContainerAllocator>
struct DataType< ::rss::LocalizationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rss/LocalizationRequest";
  }

  static const char* value(const ::rss::LocalizationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rss::LocalizationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
\n\
RssData[] rss\n\
int64 nsamples\n\
geometry_msgs/PoseArray pose_array\n\
\n\
\n\
================================================================================\n\
MSG: rss/RssData\n\
uint64      time_start_ns\n\
uint32      duration_ms\n\
string[]    mac_address\n\
int16[]     freq\n\
RssDatum[]  data\n\
\n\
================================================================================\n\
MSG: rss/RssDatum\n\
int8[]  rss\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseArray\n\
# An array of poses with a header for global reference.\n\
\n\
Header header\n\
\n\
Pose[] poses\n\
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
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
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

  static const char* value(const ::rss::LocalizationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rss::LocalizationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rss);
      stream.next(m.nsamples);
      stream.next(m.pose_array);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocalizationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rss::LocalizationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rss::LocalizationRequest_<ContainerAllocator>& v)
  {
    s << indent << "rss[]" << std::endl;
    for (size_t i = 0; i < v.rss.size(); ++i)
    {
      s << indent << "  rss[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rss::RssData_<ContainerAllocator> >::stream(s, indent + "    ", v.rss[i]);
    }
    s << indent << "nsamples: ";
    Printer<int64_t>::stream(s, indent + "  ", v.nsamples);
    s << indent << "pose_array: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.pose_array);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RSS_MESSAGE_LOCALIZATIONREQUEST_H