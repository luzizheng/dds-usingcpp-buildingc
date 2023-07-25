/*!
 * @file TestIncludeRegression3361TypeObject.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_TESTINCLUDEREGRESSION3361_TYPE_OBJECT_H_
#define _FAST_DDS_GENERATED_TESTINCLUDEREGRESSION3361_TYPE_OBJECT_H_


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
#if defined(TestIncludeRegression3361_SOURCE)
#define TestIncludeRegression3361_DllAPI __declspec( dllexport )
#else
#define TestIncludeRegression3361_DllAPI __declspec( dllimport )
#endif // TestIncludeRegression3361_SOURCE
#else
#define TestIncludeRegression3361_DllAPI
#endif // if defined(EPROSIMA_USER_DLL_EXPORT)
#else
#define TestIncludeRegression3361_DllAPI
#endif // _WIN32

using namespace eprosima::fastrtps::types;

eProsima_user_DllExport void registerTestIncludeRegression3361Types();

namespace TestModule {
eProsima_user_DllExport const TypeIdentifier* GetMACHINEIDIdentifier(
        bool complete = false);
eProsima_user_DllExport const TypeObject* GetMACHINEIDObject(
        bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMACHINEIDObject();
eProsima_user_DllExport const TypeObject* GetCompleteMACHINEIDObject();

} // namespace TestModule

#endif // _FAST_DDS_GENERATED_TESTINCLUDEREGRESSION3361_TYPE_OBJECT_H_