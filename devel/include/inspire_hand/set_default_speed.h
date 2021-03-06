// Generated by gencpp from file inspire_hand/set_default_speed.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_DEFAULT_SPEED_H
#define INSPIRE_HAND_MESSAGE_SET_DEFAULT_SPEED_H

#include <ros/service_traits.h>


#include <inspire_hand/set_default_speedRequest.h>
#include <inspire_hand/set_default_speedResponse.h>


namespace inspire_hand
{

struct set_default_speed
{

typedef set_default_speedRequest Request;
typedef set_default_speedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct set_default_speed
} // namespace inspire_hand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::inspire_hand::set_default_speed > {
  static const char* value()
  {
    return "66b301b7e9c65c6ecc5012db3efd1bc0";
  }

  static const char* value(const ::inspire_hand::set_default_speed&) { return value(); }
};

template<>
struct DataType< ::inspire_hand::set_default_speed > {
  static const char* value()
  {
    return "inspire_hand/set_default_speed";
  }

  static const char* value(const ::inspire_hand::set_default_speed&) { return value(); }
};


// service_traits::MD5Sum< ::inspire_hand::set_default_speedRequest> should match 
// service_traits::MD5Sum< ::inspire_hand::set_default_speed > 
template<>
struct MD5Sum< ::inspire_hand::set_default_speedRequest>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_default_speed >::value();
  }
  static const char* value(const ::inspire_hand::set_default_speedRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_default_speedRequest> should match 
// service_traits::DataType< ::inspire_hand::set_default_speed > 
template<>
struct DataType< ::inspire_hand::set_default_speedRequest>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_default_speed >::value();
  }
  static const char* value(const ::inspire_hand::set_default_speedRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::inspire_hand::set_default_speedResponse> should match 
// service_traits::MD5Sum< ::inspire_hand::set_default_speed > 
template<>
struct MD5Sum< ::inspire_hand::set_default_speedResponse>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_default_speed >::value();
  }
  static const char* value(const ::inspire_hand::set_default_speedResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_default_speedResponse> should match 
// service_traits::DataType< ::inspire_hand::set_default_speed > 
template<>
struct DataType< ::inspire_hand::set_default_speedResponse>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_default_speed >::value();
  }
  static const char* value(const ::inspire_hand::set_default_speedResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_DEFAULT_SPEED_H
