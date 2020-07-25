// Generated by gencpp from file inspire_hand/set_gesture_no.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_GESTURE_NO_H
#define INSPIRE_HAND_MESSAGE_SET_GESTURE_NO_H

#include <ros/service_traits.h>


#include <inspire_hand/set_gesture_noRequest.h>
#include <inspire_hand/set_gesture_noResponse.h>


namespace inspire_hand
{

struct set_gesture_no
{

typedef set_gesture_noRequest Request;
typedef set_gesture_noResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct set_gesture_no
} // namespace inspire_hand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::inspire_hand::set_gesture_no > {
  static const char* value()
  {
    return "1c20fda01ca101ed126c4cedf7ac0213";
  }

  static const char* value(const ::inspire_hand::set_gesture_no&) { return value(); }
};

template<>
struct DataType< ::inspire_hand::set_gesture_no > {
  static const char* value()
  {
    return "inspire_hand/set_gesture_no";
  }

  static const char* value(const ::inspire_hand::set_gesture_no&) { return value(); }
};


// service_traits::MD5Sum< ::inspire_hand::set_gesture_noRequest> should match 
// service_traits::MD5Sum< ::inspire_hand::set_gesture_no > 
template<>
struct MD5Sum< ::inspire_hand::set_gesture_noRequest>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_gesture_no >::value();
  }
  static const char* value(const ::inspire_hand::set_gesture_noRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_gesture_noRequest> should match 
// service_traits::DataType< ::inspire_hand::set_gesture_no > 
template<>
struct DataType< ::inspire_hand::set_gesture_noRequest>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_gesture_no >::value();
  }
  static const char* value(const ::inspire_hand::set_gesture_noRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::inspire_hand::set_gesture_noResponse> should match 
// service_traits::MD5Sum< ::inspire_hand::set_gesture_no > 
template<>
struct MD5Sum< ::inspire_hand::set_gesture_noResponse>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_gesture_no >::value();
  }
  static const char* value(const ::inspire_hand::set_gesture_noResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_gesture_noResponse> should match 
// service_traits::DataType< ::inspire_hand::set_gesture_no > 
template<>
struct DataType< ::inspire_hand::set_gesture_noResponse>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_gesture_no >::value();
  }
  static const char* value(const ::inspire_hand::set_gesture_noResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_GESTURE_NO_H