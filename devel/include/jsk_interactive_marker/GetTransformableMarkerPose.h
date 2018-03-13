// Generated by gencpp from file jsk_interactive_marker/GetTransformableMarkerPose.msg
// DO NOT EDIT!


#ifndef JSK_INTERACTIVE_MARKER_MESSAGE_GETTRANSFORMABLEMARKERPOSE_H
#define JSK_INTERACTIVE_MARKER_MESSAGE_GETTRANSFORMABLEMARKERPOSE_H

#include <ros/service_traits.h>


#include <jsk_interactive_marker/GetTransformableMarkerPoseRequest.h>
#include <jsk_interactive_marker/GetTransformableMarkerPoseResponse.h>


namespace jsk_interactive_marker
{

struct GetTransformableMarkerPose
{

typedef GetTransformableMarkerPoseRequest Request;
typedef GetTransformableMarkerPoseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetTransformableMarkerPose
} // namespace jsk_interactive_marker


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::jsk_interactive_marker::GetTransformableMarkerPose > {
  static const char* value()
  {
    return "3af82e362d6e5253403562cfd8c3c812";
  }

  static const char* value(const ::jsk_interactive_marker::GetTransformableMarkerPose&) { return value(); }
};

template<>
struct DataType< ::jsk_interactive_marker::GetTransformableMarkerPose > {
  static const char* value()
  {
    return "jsk_interactive_marker/GetTransformableMarkerPose";
  }

  static const char* value(const ::jsk_interactive_marker::GetTransformableMarkerPose&) { return value(); }
};


// service_traits::MD5Sum< ::jsk_interactive_marker::GetTransformableMarkerPoseRequest> should match 
// service_traits::MD5Sum< ::jsk_interactive_marker::GetTransformableMarkerPose > 
template<>
struct MD5Sum< ::jsk_interactive_marker::GetTransformableMarkerPoseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::jsk_interactive_marker::GetTransformableMarkerPose >::value();
  }
  static const char* value(const ::jsk_interactive_marker::GetTransformableMarkerPoseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::jsk_interactive_marker::GetTransformableMarkerPoseRequest> should match 
// service_traits::DataType< ::jsk_interactive_marker::GetTransformableMarkerPose > 
template<>
struct DataType< ::jsk_interactive_marker::GetTransformableMarkerPoseRequest>
{
  static const char* value()
  {
    return DataType< ::jsk_interactive_marker::GetTransformableMarkerPose >::value();
  }
  static const char* value(const ::jsk_interactive_marker::GetTransformableMarkerPoseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::jsk_interactive_marker::GetTransformableMarkerPoseResponse> should match 
// service_traits::MD5Sum< ::jsk_interactive_marker::GetTransformableMarkerPose > 
template<>
struct MD5Sum< ::jsk_interactive_marker::GetTransformableMarkerPoseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::jsk_interactive_marker::GetTransformableMarkerPose >::value();
  }
  static const char* value(const ::jsk_interactive_marker::GetTransformableMarkerPoseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::jsk_interactive_marker::GetTransformableMarkerPoseResponse> should match 
// service_traits::DataType< ::jsk_interactive_marker::GetTransformableMarkerPose > 
template<>
struct DataType< ::jsk_interactive_marker::GetTransformableMarkerPoseResponse>
{
  static const char* value()
  {
    return DataType< ::jsk_interactive_marker::GetTransformableMarkerPose >::value();
  }
  static const char* value(const ::jsk_interactive_marker::GetTransformableMarkerPoseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // JSK_INTERACTIVE_MARKER_MESSAGE_GETTRANSFORMABLEMARKERPOSE_H