// Generated by gencpp from file inspire_hand/set_save_flashResponse.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_SAVE_FLASHRESPONSE_H
#define INSPIRE_HAND_MESSAGE_SET_SAVE_FLASHRESPONSE_H


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
struct set_save_flashResponse_
{
  typedef set_save_flashResponse_<ContainerAllocator> Type;

  set_save_flashResponse_()
    : setsave_flash_accepted(false)  {
    }
  set_save_flashResponse_(const ContainerAllocator& _alloc)
    : setsave_flash_accepted(false)  {
  (void)_alloc;
    }



   typedef uint8_t _setsave_flash_accepted_type;
  _setsave_flash_accepted_type setsave_flash_accepted;





  typedef boost::shared_ptr< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> const> ConstPtr;

}; // struct set_save_flashResponse_

typedef ::inspire_hand::set_save_flashResponse_<std::allocator<void> > set_save_flashResponse;

typedef boost::shared_ptr< ::inspire_hand::set_save_flashResponse > set_save_flashResponsePtr;
typedef boost::shared_ptr< ::inspire_hand::set_save_flashResponse const> set_save_flashResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inspire_hand::set_save_flashResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ce29f0181fca97433252cab2ac73bda5";
  }

  static const char* value(const ::inspire_hand::set_save_flashResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xce29f0181fca9743ULL;
  static const uint64_t static_value2 = 0x3252cab2ac73bda5ULL;
};

template<class ContainerAllocator>
struct DataType< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inspire_hand/set_save_flashResponse";
  }

  static const char* value(const ::inspire_hand::set_save_flashResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool setsave_flash_accepted\n\
";
  }

  static const char* value(const ::inspire_hand::set_save_flashResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.setsave_flash_accepted);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_save_flashResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inspire_hand::set_save_flashResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inspire_hand::set_save_flashResponse_<ContainerAllocator>& v)
  {
    s << indent << "setsave_flash_accepted: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.setsave_flash_accepted);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_SAVE_FLASHRESPONSE_H