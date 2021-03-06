// Generated by gencpp from file inspire_hand/set_current_limit.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_CURRENT_LIMIT_H
#define INSPIRE_HAND_MESSAGE_SET_CURRENT_LIMIT_H

#include <ros/service_traits.h>


#include <inspire_hand/set_current_limitRequest.h>
#include <inspire_hand/set_current_limitResponse.h>


namespace inspire_hand
{

struct set_current_limit
{

typedef set_current_limitRequest Request;
typedef set_current_limitResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct set_current_limit
} // namespace inspire_hand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::inspire_hand::set_current_limit > {
  static const char* value()
  {
    return "422c9f6eddce4f2b83bdd05a0c49ffe4";
  }

  static const char* value(const ::inspire_hand::set_current_limit&) { return value(); }
};

template<>
struct DataType< ::inspire_hand::set_current_limit > {
  static const char* value()
  {
    return "inspire_hand/set_current_limit";
  }

  static const char* value(const ::inspire_hand::set_current_limit&) { return value(); }
};


// service_traits::MD5Sum< ::inspire_hand::set_current_limitRequest> should match 
// service_traits::MD5Sum< ::inspire_hand::set_current_limit > 
template<>
struct MD5Sum< ::inspire_hand::set_current_limitRequest>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_current_limit >::value();
  }
  static const char* value(const ::inspire_hand::set_current_limitRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_current_limitRequest> should match 
// service_traits::DataType< ::inspire_hand::set_current_limit > 
template<>
struct DataType< ::inspire_hand::set_current_limitRequest>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_current_limit >::value();
  }
  static const char* value(const ::inspire_hand::set_current_limitRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::inspire_hand::set_current_limitResponse> should match 
// service_traits::MD5Sum< ::inspire_hand::set_current_limit > 
template<>
struct MD5Sum< ::inspire_hand::set_current_limitResponse>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_current_limit >::value();
  }
  static const char* value(const ::inspire_hand::set_current_limitResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_current_limitResponse> should match 
// service_traits::DataType< ::inspire_hand::set_current_limit > 
template<>
struct DataType< ::inspire_hand::set_current_limitResponse>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_current_limit >::value();
  }
  static const char* value(const ::inspire_hand::set_current_limitResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_CURRENT_LIMIT_H
