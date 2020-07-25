// Generated by gencpp from file inspire_hand/get_temp.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_GET_TEMP_H
#define INSPIRE_HAND_MESSAGE_GET_TEMP_H

#include <ros/service_traits.h>


#include <inspire_hand/get_tempRequest.h>
#include <inspire_hand/get_tempResponse.h>


namespace inspire_hand
{

struct get_temp
{

typedef get_tempRequest Request;
typedef get_tempResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_temp
} // namespace inspire_hand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::inspire_hand::get_temp > {
  static const char* value()
  {
    return "faddf0cc102ec4c0d38aeffe0b8b6296";
  }

  static const char* value(const ::inspire_hand::get_temp&) { return value(); }
};

template<>
struct DataType< ::inspire_hand::get_temp > {
  static const char* value()
  {
    return "inspire_hand/get_temp";
  }

  static const char* value(const ::inspire_hand::get_temp&) { return value(); }
};


// service_traits::MD5Sum< ::inspire_hand::get_tempRequest> should match 
// service_traits::MD5Sum< ::inspire_hand::get_temp > 
template<>
struct MD5Sum< ::inspire_hand::get_tempRequest>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::get_temp >::value();
  }
  static const char* value(const ::inspire_hand::get_tempRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::get_tempRequest> should match 
// service_traits::DataType< ::inspire_hand::get_temp > 
template<>
struct DataType< ::inspire_hand::get_tempRequest>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::get_temp >::value();
  }
  static const char* value(const ::inspire_hand::get_tempRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::inspire_hand::get_tempResponse> should match 
// service_traits::MD5Sum< ::inspire_hand::get_temp > 
template<>
struct MD5Sum< ::inspire_hand::get_tempResponse>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::get_temp >::value();
  }
  static const char* value(const ::inspire_hand::get_tempResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::get_tempResponse> should match 
// service_traits::DataType< ::inspire_hand::get_temp > 
template<>
struct DataType< ::inspire_hand::get_tempResponse>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::get_temp >::value();
  }
  static const char* value(const ::inspire_hand::get_tempResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_GET_TEMP_H