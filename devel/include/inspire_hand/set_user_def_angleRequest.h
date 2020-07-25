// Generated by gencpp from file inspire_hand/set_user_def_angleRequest.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_USER_DEF_ANGLEREQUEST_H
#define INSPIRE_HAND_MESSAGE_SET_USER_DEF_ANGLEREQUEST_H


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
struct set_user_def_angleRequest_
{
  typedef set_user_def_angleRequest_<ContainerAllocator> Type;

  set_user_def_angleRequest_()
    : angle0(0)
    , angle1(0)
    , angle2(0)
    , angle3(0)
    , angle4(0)
    , angle5(0)
    , k(0)  {
    }
  set_user_def_angleRequest_(const ContainerAllocator& _alloc)
    : angle0(0)
    , angle1(0)
    , angle2(0)
    , angle3(0)
    , angle4(0)
    , angle5(0)
    , k(0)  {
  (void)_alloc;
    }



   typedef int32_t _angle0_type;
  _angle0_type angle0;

   typedef int32_t _angle1_type;
  _angle1_type angle1;

   typedef int32_t _angle2_type;
  _angle2_type angle2;

   typedef int32_t _angle3_type;
  _angle3_type angle3;

   typedef int32_t _angle4_type;
  _angle4_type angle4;

   typedef int32_t _angle5_type;
  _angle5_type angle5;

   typedef int32_t _k_type;
  _k_type k;





  typedef boost::shared_ptr< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct set_user_def_angleRequest_

typedef ::inspire_hand::set_user_def_angleRequest_<std::allocator<void> > set_user_def_angleRequest;

typedef boost::shared_ptr< ::inspire_hand::set_user_def_angleRequest > set_user_def_angleRequestPtr;
typedef boost::shared_ptr< ::inspire_hand::set_user_def_angleRequest const> set_user_def_angleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ca0fd0f21baa0c9269de1034273b80d";
  }

  static const char* value(const ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ca0fd0f21baa0c9ULL;
  static const uint64_t static_value2 = 0x269de1034273b80dULL;
};

template<class ContainerAllocator>
struct DataType< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inspire_hand/set_user_def_angleRequest";
  }

  static const char* value(const ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 angle0\n\
int32 angle1\n\
int32 angle2\n\
int32 angle3\n\
int32 angle4\n\
int32 angle5\n\
int32 k\n\
";
  }

  static const char* value(const ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angle0);
      stream.next(m.angle1);
      stream.next(m.angle2);
      stream.next(m.angle3);
      stream.next(m.angle4);
      stream.next(m.angle5);
      stream.next(m.k);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_user_def_angleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inspire_hand::set_user_def_angleRequest_<ContainerAllocator>& v)
  {
    s << indent << "angle0: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angle0);
    s << indent << "angle1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angle1);
    s << indent << "angle2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angle2);
    s << indent << "angle3: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angle3);
    s << indent << "angle4: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angle4);
    s << indent << "angle5: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angle5);
    s << indent << "k: ";
    Printer<int32_t>::stream(s, indent + "  ", v.k);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_USER_DEF_ANGLEREQUEST_H