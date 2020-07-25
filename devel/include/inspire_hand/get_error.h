// Generated by gencpp from file inspire_hand/get_error.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_GET_ERROR_H
#define INSPIRE_HAND_MESSAGE_GET_ERROR_H

#include <ros/service_traits.h>


#include <inspire_hand/get_errorRequest.h>
#include <inspire_hand/get_errorResponse.h>


namespace inspire_hand
{

struct get_error
{

typedef get_errorRequest Request;
typedef get_errorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_error
} // namespace inspire_hand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::inspire_hand::get_error > {
  static const char* value()
  {
    return "a53f03f634bc27bd5924537063e03a53";
  }

  static const char* value(const ::inspire_hand::get_error&) { return value(); }
};

template<>
struct DataType< ::inspire_hand::get_error > {
  static const char* value()
  {
    return "inspire_hand/get_error";
  }

  static const char* value(const ::inspire_hand::get_error&) { return value(); }
};


// service_traits::MD5Sum< ::inspire_hand::get_errorRequest> should match 
// service_traits::MD5Sum< ::inspire_hand::get_error > 
template<>
struct MD5Sum< ::inspire_hand::get_errorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::get_error >::value();
  }
  static const char* value(const ::inspire_hand::get_errorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::get_errorRequest> should match 
// service_traits::DataType< ::inspire_hand::get_error > 
template<>
struct DataType< ::inspire_hand::get_errorRequest>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::get_error >::value();
  }
  static const char* value(const ::inspire_hand::get_errorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::inspire_hand::get_errorResponse> should match 
// service_traits::MD5Sum< ::inspire_hand::get_error > 
template<>
struct MD5Sum< ::inspire_hand::get_errorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::get_error >::value();
  }
  static const char* value(const ::inspire_hand::get_errorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::get_errorResponse> should match 
// service_traits::DataType< ::inspire_hand::get_error > 
template<>
struct DataType< ::inspire_hand::get_errorResponse>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::get_error >::value();
  }
  static const char* value(const ::inspire_hand::get_errorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_GET_ERROR_H