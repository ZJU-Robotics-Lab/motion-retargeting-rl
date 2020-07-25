// Generated by gencpp from file inspire_hand/get_status.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_GET_STATUS_H
#define INSPIRE_HAND_MESSAGE_GET_STATUS_H

#include <ros/service_traits.h>


#include <inspire_hand/get_statusRequest.h>
#include <inspire_hand/get_statusResponse.h>


namespace inspire_hand
{

struct get_status
{

typedef get_statusRequest Request;
typedef get_statusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_status
} // namespace inspire_hand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::inspire_hand::get_status > {
  static const char* value()
  {
    return "e2adc8174938c5ee3fd3a4e108c6b64f";
  }

  static const char* value(const ::inspire_hand::get_status&) { return value(); }
};

template<>
struct DataType< ::inspire_hand::get_status > {
  static const char* value()
  {
    return "inspire_hand/get_status";
  }

  static const char* value(const ::inspire_hand::get_status&) { return value(); }
};


// service_traits::MD5Sum< ::inspire_hand::get_statusRequest> should match 
// service_traits::MD5Sum< ::inspire_hand::get_status > 
template<>
struct MD5Sum< ::inspire_hand::get_statusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::get_status >::value();
  }
  static const char* value(const ::inspire_hand::get_statusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::get_statusRequest> should match 
// service_traits::DataType< ::inspire_hand::get_status > 
template<>
struct DataType< ::inspire_hand::get_statusRequest>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::get_status >::value();
  }
  static const char* value(const ::inspire_hand::get_statusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::inspire_hand::get_statusResponse> should match 
// service_traits::MD5Sum< ::inspire_hand::get_status > 
template<>
struct MD5Sum< ::inspire_hand::get_statusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::get_status >::value();
  }
  static const char* value(const ::inspire_hand::get_statusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::get_statusResponse> should match 
// service_traits::DataType< ::inspire_hand::get_status > 
template<>
struct DataType< ::inspire_hand::get_statusResponse>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::get_status >::value();
  }
  static const char* value(const ::inspire_hand::get_statusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_GET_STATUS_H