// Generated by gencpp from file inspire_hand/get_angle_actResponse.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_GET_ANGLE_ACTRESPONSE_H
#define INSPIRE_HAND_MESSAGE_GET_ANGLE_ACTRESPONSE_H


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
struct get_angle_actResponse_
{
  typedef get_angle_actResponse_<ContainerAllocator> Type;

  get_angle_actResponse_()
    : curangle()  {
      curangle.assign(0.0);
  }
  get_angle_actResponse_(const ContainerAllocator& _alloc)
    : curangle()  {
  (void)_alloc;
      curangle.assign(0.0);
  }



   typedef boost::array<float, 6>  _curangle_type;
  _curangle_type curangle;





  typedef boost::shared_ptr< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> const> ConstPtr;

}; // struct get_angle_actResponse_

typedef ::inspire_hand::get_angle_actResponse_<std::allocator<void> > get_angle_actResponse;

typedef boost::shared_ptr< ::inspire_hand::get_angle_actResponse > get_angle_actResponsePtr;
typedef boost::shared_ptr< ::inspire_hand::get_angle_actResponse const> get_angle_actResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inspire_hand::get_angle_actResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2329a3c808aea9d534c8a2279948da90";
  }

  static const char* value(const ::inspire_hand::get_angle_actResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2329a3c808aea9d5ULL;
  static const uint64_t static_value2 = 0x34c8a2279948da90ULL;
};

template<class ContainerAllocator>
struct DataType< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inspire_hand/get_angle_actResponse";
  }

  static const char* value(const ::inspire_hand::get_angle_actResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[6] curangle\n\
\n\
";
  }

  static const char* value(const ::inspire_hand::get_angle_actResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.curangle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_angle_actResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inspire_hand::get_angle_actResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inspire_hand::get_angle_actResponse_<ContainerAllocator>& v)
  {
    s << indent << "curangle[]" << std::endl;
    for (size_t i = 0; i < v.curangle.size(); ++i)
    {
      s << indent << "  curangle[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.curangle[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_GET_ANGLE_ACTRESPONSE_H