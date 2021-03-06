// Generated by gencpp from file inspire_hand/set_user_def_angleResponse.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_USER_DEF_ANGLERESPONSE_H
#define INSPIRE_HAND_MESSAGE_SET_USER_DEF_ANGLERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace inspire_hand
{
template <class ContainerAllocator>
struct set_user_def_angleResponse_
{
  typedef set_user_def_angleResponse_<ContainerAllocator> Type;

  set_user_def_angleResponse_()
    : angle_accepted(false)  {
    }
  set_user_def_angleResponse_(const ContainerAllocator& _alloc)
    : angle_accepted(false)  {
  (void)_alloc;
    }



   typedef uint8_t _angle_accepted_type;
  _angle_accepted_type angle_accepted;





  typedef boost::shared_ptr< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> const> ConstPtr;

}; // struct set_user_def_angleResponse_

typedef ::inspire_hand::set_user_def_angleResponse_<std::allocator<void> > set_user_def_angleResponse;

typedef boost::shared_ptr< ::inspire_hand::set_user_def_angleResponse > set_user_def_angleResponsePtr;
typedef boost::shared_ptr< ::inspire_hand::set_user_def_angleResponse const> set_user_def_angleResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace inspire_hand

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1508b076c4c46f43d5103fcfc81271e";
  }

  static const char* value(const ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1508b076c4c46f4ULL;
  static const uint64_t static_value2 = 0x3d5103fcfc81271eULL;
};

template<class ContainerAllocator>
struct DataType< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inspire_hand/set_user_def_angleResponse";
  }

  static const char* value(const ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool angle_accepted\n\
\n\
";
  }

  static const char* value(const ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angle_accepted);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_user_def_angleResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inspire_hand::set_user_def_angleResponse_<ContainerAllocator>& v)
  {
    s << indent << "angle_accepted: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.angle_accepted);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_USER_DEF_ANGLERESPONSE_H
