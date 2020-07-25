// Generated by gencpp from file inspire_hand/set_redu_ratio.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_REDU_RATIO_H
#define INSPIRE_HAND_MESSAGE_SET_REDU_RATIO_H

#include <ros/service_traits.h>


#include <inspire_hand/set_redu_ratioRequest.h>
#include <inspire_hand/set_redu_ratioResponse.h>


namespace inspire_hand
{

struct set_redu_ratio
{

typedef set_redu_ratioRequest Request;
typedef set_redu_ratioResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct set_redu_ratio
} // namespace inspire_hand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::inspire_hand::set_redu_ratio > {
  static const char* value()
  {
    return "e26114f6520fcbdb49066d390f601c35";
  }

  static const char* value(const ::inspire_hand::set_redu_ratio&) { return value(); }
};

template<>
struct DataType< ::inspire_hand::set_redu_ratio > {
  static const char* value()
  {
    return "inspire_hand/set_redu_ratio";
  }

  static const char* value(const ::inspire_hand::set_redu_ratio&) { return value(); }
};


// service_traits::MD5Sum< ::inspire_hand::set_redu_ratioRequest> should match 
// service_traits::MD5Sum< ::inspire_hand::set_redu_ratio > 
template<>
struct MD5Sum< ::inspire_hand::set_redu_ratioRequest>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_redu_ratio >::value();
  }
  static const char* value(const ::inspire_hand::set_redu_ratioRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_redu_ratioRequest> should match 
// service_traits::DataType< ::inspire_hand::set_redu_ratio > 
template<>
struct DataType< ::inspire_hand::set_redu_ratioRequest>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_redu_ratio >::value();
  }
  static const char* value(const ::inspire_hand::set_redu_ratioRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::inspire_hand::set_redu_ratioResponse> should match 
// service_traits::MD5Sum< ::inspire_hand::set_redu_ratio > 
template<>
struct MD5Sum< ::inspire_hand::set_redu_ratioResponse>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_redu_ratio >::value();
  }
  static const char* value(const ::inspire_hand::set_redu_ratioResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_redu_ratioResponse> should match 
// service_traits::DataType< ::inspire_hand::set_redu_ratio > 
template<>
struct DataType< ::inspire_hand::set_redu_ratioResponse>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_redu_ratio >::value();
  }
  static const char* value(const ::inspire_hand::set_redu_ratioResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_REDU_RATIO_H