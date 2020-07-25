// Generated by gencpp from file inspire_hand/set_save_flash.msg
// DO NOT EDIT!


#ifndef INSPIRE_HAND_MESSAGE_SET_SAVE_FLASH_H
#define INSPIRE_HAND_MESSAGE_SET_SAVE_FLASH_H

#include <ros/service_traits.h>


#include <inspire_hand/set_save_flashRequest.h>
#include <inspire_hand/set_save_flashResponse.h>


namespace inspire_hand
{

struct set_save_flash
{

typedef set_save_flashRequest Request;
typedef set_save_flashResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct set_save_flash
} // namespace inspire_hand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::inspire_hand::set_save_flash > {
  static const char* value()
  {
    return "ce29f0181fca97433252cab2ac73bda5";
  }

  static const char* value(const ::inspire_hand::set_save_flash&) { return value(); }
};

template<>
struct DataType< ::inspire_hand::set_save_flash > {
  static const char* value()
  {
    return "inspire_hand/set_save_flash";
  }

  static const char* value(const ::inspire_hand::set_save_flash&) { return value(); }
};


// service_traits::MD5Sum< ::inspire_hand::set_save_flashRequest> should match 
// service_traits::MD5Sum< ::inspire_hand::set_save_flash > 
template<>
struct MD5Sum< ::inspire_hand::set_save_flashRequest>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_save_flash >::value();
  }
  static const char* value(const ::inspire_hand::set_save_flashRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_save_flashRequest> should match 
// service_traits::DataType< ::inspire_hand::set_save_flash > 
template<>
struct DataType< ::inspire_hand::set_save_flashRequest>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_save_flash >::value();
  }
  static const char* value(const ::inspire_hand::set_save_flashRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::inspire_hand::set_save_flashResponse> should match 
// service_traits::MD5Sum< ::inspire_hand::set_save_flash > 
template<>
struct MD5Sum< ::inspire_hand::set_save_flashResponse>
{
  static const char* value()
  {
    return MD5Sum< ::inspire_hand::set_save_flash >::value();
  }
  static const char* value(const ::inspire_hand::set_save_flashResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::inspire_hand::set_save_flashResponse> should match 
// service_traits::DataType< ::inspire_hand::set_save_flash > 
template<>
struct DataType< ::inspire_hand::set_save_flashResponse>
{
  static const char* value()
  {
    return DataType< ::inspire_hand::set_save_flash >::value();
  }
  static const char* value(const ::inspire_hand::set_save_flashResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INSPIRE_HAND_MESSAGE_SET_SAVE_FLASH_H