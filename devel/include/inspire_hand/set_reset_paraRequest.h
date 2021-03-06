// Generated by gencpp from file inspire_hand/set_reset_paraRequest.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_RESET_PARAREQUEST_H
#define INSPIRE_HAND_MESSAGE_SET_RESET_PARAREQUEST_H


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
struct set_reset_paraRequest_
{
  typedef set_reset_paraRequest_<ContainerAllocator> Type;

  set_reset_paraRequest_()
    {
    }
  set_reset_paraRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> const> ConstPtr;

}; // struct set_reset_paraRequest_

typedef ::inspire_hand::set_reset_paraRequest_<std::allocator<void> > set_reset_paraRequest;

typedef boost::shared_ptr< ::inspire_hand::set_reset_paraRequest > set_reset_paraRequestPtr;
typedef boost::shared_ptr< ::inspire_hand::set_reset_paraRequest const> set_reset_paraRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::inspire_hand::set_reset_paraRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inspire_hand/set_reset_paraRequest";
  }

  static const char* value(const ::inspire_hand::set_reset_paraRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::inspire_hand::set_reset_paraRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_reset_paraRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inspire_hand::set_reset_paraRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::inspire_hand::set_reset_paraRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_RESET_PARAREQUEST_H
