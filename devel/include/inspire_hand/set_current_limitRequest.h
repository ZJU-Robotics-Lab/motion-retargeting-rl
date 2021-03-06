// Generated by gencpp from file inspire_hand/set_current_limitRequest.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_CURRENT_LIMITREQUEST_H
#define INSPIRE_HAND_MESSAGE_SET_CURRENT_LIMITREQUEST_H


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
struct set_current_limitRequest_
{
  typedef set_current_limitRequest_<ContainerAllocator> Type;

  set_current_limitRequest_()
    : current0(0)
    , current1(0)
    , current2(0)
    , current3(0)
    , current4(0)
    , current5(0)  {
    }
  set_current_limitRequest_(const ContainerAllocator& _alloc)
    : current0(0)
    , current1(0)
    , current2(0)
    , current3(0)
    , current4(0)
    , current5(0)  {
  (void)_alloc;
    }



   typedef int32_t _current0_type;
  _current0_type current0;

   typedef int32_t _current1_type;
  _current1_type current1;

   typedef int32_t _current2_type;
  _current2_type current2;

   typedef int32_t _current3_type;
  _current3_type current3;

   typedef int32_t _current4_type;
  _current4_type current4;

   typedef int32_t _current5_type;
  _current5_type current5;





  typedef boost::shared_ptr< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> const> ConstPtr;

}; // struct set_current_limitRequest_

typedef ::inspire_hand::set_current_limitRequest_<std::allocator<void> > set_current_limitRequest;

typedef boost::shared_ptr< ::inspire_hand::set_current_limitRequest > set_current_limitRequestPtr;
typedef boost::shared_ptr< ::inspire_hand::set_current_limitRequest const> set_current_limitRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inspire_hand::set_current_limitRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9a9062b22d95e0929b8d48bafef48d49";
  }

  static const char* value(const ::inspire_hand::set_current_limitRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9a9062b22d95e092ULL;
  static const uint64_t static_value2 = 0x9b8d48bafef48d49ULL;
};

template<class ContainerAllocator>
struct DataType< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inspire_hand/set_current_limitRequest";
  }

  static const char* value(const ::inspire_hand::set_current_limitRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 current0\n\
int32 current1\n\
int32 current2\n\
int32 current3\n\
int32 current4\n\
int32 current5\n\
";
  }

  static const char* value(const ::inspire_hand::set_current_limitRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current0);
      stream.next(m.current1);
      stream.next(m.current2);
      stream.next(m.current3);
      stream.next(m.current4);
      stream.next(m.current5);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_current_limitRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inspire_hand::set_current_limitRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inspire_hand::set_current_limitRequest_<ContainerAllocator>& v)
  {
    s << indent << "current0: ";
    Printer<int32_t>::stream(s, indent + "  ", v.current0);
    s << indent << "current1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.current1);
    s << indent << "current2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.current2);
    s << indent << "current3: ";
    Printer<int32_t>::stream(s, indent + "  ", v.current3);
    s << indent << "current4: ";
    Printer<int32_t>::stream(s, indent + "  ", v.current4);
    s << indent << "current5: ";
    Printer<int32_t>::stream(s, indent + "  ", v.current5);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_CURRENT_LIMITREQUEST_H
