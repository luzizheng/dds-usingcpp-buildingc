/*!
 * @file TestRegression3361TypeObject.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_TESTREGRESSION3361_TYPE_OBJECT_H_
#define _FAST_DDS_GENERATED_TESTREGRESSION3361_TYPE_OBJECT_H_

#include "TestIncludeRegression3361TypeObject.h"

#include <fastrtps/types/TypeObject.h>
#include <map>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif // if defined(EPROSIMA_USER_DLL_EXPORT)
#else
#define eProsima_user_DllExport
#endif // if defined(_WIN32)

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(TestRegression3361_SOURCE)
#define TestRegression3361_DllAPI __declspec( dllexport )
#else
#define TestRegression3361_DllAPI __declspec( dllimport )
#endif // TestRegression3361_SOURCE
#else
#define TestRegression3361_DllAPI
#endif // if defined(EPROSIMA_USER_DLL_EXPORT)
#else
#define TestRegression3361_DllAPI
#endif // _WIN32

using namespace eprosima::fastrtps::types;

eProsima_user_DllExport void registerTestRegression3361Types();

eProsima_user_DllExport const TypeIdentifier* GetTestRegression3361Identifier(
        bool complete = false);
eProsima_user_DllExport const TypeObject* GetTestRegression3361Object(
        bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalTestRegression3361Object();
eProsima_user_DllExport const TypeObject* GetCompleteTestRegression3361Object();


#endif // _FAST_DDS_GENERATED_TESTREGRESSION3361_TYPE_OBJECT_H_