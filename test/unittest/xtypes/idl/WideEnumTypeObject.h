/*!
 * @file WideEnumTypeObject.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_WIDEENUM_TYPE_OBJECT_H_
#define _FAST_DDS_GENERATED_WIDEENUM_TYPE_OBJECT_H_


#include <fastrtps/types/TypeObject.h>
#include <map>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(WideEnum_SOURCE)
#define WideEnum_DllAPI __declspec( dllexport )
#else
#define WideEnum_DllAPI __declspec( dllimport )
#endif // WideEnum_SOURCE
#else
#define WideEnum_DllAPI
#endif
#else
#define WideEnum_DllAPI
#endif // _WIN32

using namespace eprosima::fastrtps::types;

eProsima_user_DllExport void registerWideEnumTypes();

eProsima_user_DllExport const TypeIdentifier* GetMyEnumWideIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMyEnumWideObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMyEnumWideObject();
eProsima_user_DllExport const TypeObject* GetCompleteMyEnumWideObject();

eProsima_user_DllExport const TypeIdentifier* GetMyEnumWideStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMyEnumWideStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMyEnumWideStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteMyEnumWideStructObject();

eProsima_user_DllExport const TypeIdentifier* GetSimpleWideUnionIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetSimpleWideUnionObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalSimpleWideUnionObject();
eProsima_user_DllExport const TypeObject* GetCompleteSimpleWideUnionObject();

eProsima_user_DllExport const TypeIdentifier* GetSimpleWideUnionStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetSimpleWideUnionStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalSimpleWideUnionStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteSimpleWideUnionStructObject();


#endif // _FAST_DDS_GENERATED_WIDEENUM_TYPE_OBJECT_H_