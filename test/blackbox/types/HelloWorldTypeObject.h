/*!
 * @file HelloWorldTypeObject.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_HELLOWORLD_TYPE_OBJECT_H_
#define _FAST_DDS_GENERATED_HELLOWORLD_TYPE_OBJECT_H_


#include <fastrtps/types/TypeObject.h>
#include <map>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(HelloWorld_SOURCE)
#define HelloWorld_DllAPI __declspec( dllexport )
#else
#define HelloWorld_DllAPI __declspec( dllimport )
#endif // HelloWorld_SOURCE
#else
#define HelloWorld_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define HelloWorld_DllAPI
#endif // _WIN32

using namespace eprosima::fastrtps::types;

eProsima_user_DllExport void registerHelloWorldTypes();

eProsima_user_DllExport const TypeIdentifier* GetHelloWorldIdentifier(
        bool complete = false);
eProsima_user_DllExport const TypeObject* GetHelloWorldObject(
        bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalHelloWorldObject();
eProsima_user_DllExport const TypeObject* GetCompleteHelloWorldObject();


#endif // _FAST_DDS_GENERATED_HELLOWORLD_TYPE_OBJECT_H_