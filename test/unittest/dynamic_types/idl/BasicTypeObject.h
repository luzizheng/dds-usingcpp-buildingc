/*!
 * @file BasicTypeObject.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_BASIC_TYPE_OBJECT_H_
#define _FAST_DDS_GENERATED_BASIC_TYPE_OBJECT_H_


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
#if defined(Basic_SOURCE)
#define Basic_DllAPI __declspec( dllexport )
#else
#define Basic_DllAPI __declspec( dllimport )
#endif // Basic_SOURCE
#else
#define Basic_DllAPI
#endif
#else
#define Basic_DllAPI
#endif // _WIN32

using namespace eprosima::fastrtps::types;

eProsima_user_DllExport void registerBasicTypes();

eProsima_user_DllExport const TypeIdentifier* GetMyEnumIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMyEnumObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMyEnumObject();
eProsima_user_DllExport const TypeObject* GetCompleteMyEnumObject();

eProsima_user_DllExport const TypeIdentifier* GetMyAliasEnumIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMyAliasEnumObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMyAliasEnumObject();
eProsima_user_DllExport const TypeObject* GetCompleteMyAliasEnumObject();

eProsima_user_DllExport const TypeIdentifier* GetMyAliasAliasEnumIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMyAliasAliasEnumObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMyAliasAliasEnumObject();
eProsima_user_DllExport const TypeObject* GetCompleteMyAliasAliasEnumObject();

eProsima_user_DllExport const TypeIdentifier* GetEnumStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetEnumStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalEnumStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteEnumStructObject();

eProsima_user_DllExport const TypeIdentifier* GetAliasStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetAliasStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalAliasStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteAliasStructObject();

eProsima_user_DllExport const TypeIdentifier* GetAliasAliasStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetAliasAliasStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalAliasAliasStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteAliasAliasStructObject();

eProsima_user_DllExport const TypeIdentifier* GetBoolStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetBoolStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalBoolStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteBoolStructObject();

eProsima_user_DllExport const TypeIdentifier* GetOctetStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetOctetStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalOctetStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteOctetStructObject();

eProsima_user_DllExport const TypeIdentifier* GetShortStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetShortStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalShortStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteShortStructObject();

eProsima_user_DllExport const TypeIdentifier* GetLongStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetLongStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalLongStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteLongStructObject();

eProsima_user_DllExport const TypeIdentifier* GetLongLongStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetLongLongStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalLongLongStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteLongLongStructObject();

eProsima_user_DllExport const TypeIdentifier* GetUShortStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetUShortStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalUShortStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteUShortStructObject();

eProsima_user_DllExport const TypeIdentifier* GetULongStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetULongStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalULongStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteULongStructObject();

eProsima_user_DllExport const TypeIdentifier* GetULongLongStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetULongLongStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalULongLongStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteULongLongStructObject();

eProsima_user_DllExport const TypeIdentifier* GetFloatStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetFloatStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalFloatStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteFloatStructObject();

eProsima_user_DllExport const TypeIdentifier* GetDoubleStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetDoubleStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalDoubleStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteDoubleStructObject();

eProsima_user_DllExport const TypeIdentifier* GetLongDoubleStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetLongDoubleStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalLongDoubleStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteLongDoubleStructObject();

eProsima_user_DllExport const TypeIdentifier* GetCharStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetCharStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalCharStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteCharStructObject();

eProsima_user_DllExport const TypeIdentifier* GetWCharStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetWCharStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalWCharStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteWCharStructObject();

eProsima_user_DllExport const TypeIdentifier* GetStringStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetStringStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalStringStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteStringStructObject();

eProsima_user_DllExport const TypeIdentifier* GetWStringStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetWStringStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalWStringStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteWStringStructObject();

eProsima_user_DllExport const TypeIdentifier* GetLargeStringStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetLargeStringStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalLargeStringStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteLargeStringStructObject();

eProsima_user_DllExport const TypeIdentifier* GetLargeWStringStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetLargeWStringStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalLargeWStringStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteLargeWStringStructObject();

eProsima_user_DllExport const TypeIdentifier* GetArraytStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetArraytStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalArraytStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteArraytStructObject();

eProsima_user_DllExport const TypeIdentifier* GetMyArrayIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMyArrayObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMyArrayObject();
eProsima_user_DllExport const TypeObject* GetCompleteMyArrayObject();

eProsima_user_DllExport const TypeIdentifier* GetArrayArrayStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetArrayArrayStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalArrayArrayStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteArrayArrayStructObject();

eProsima_user_DllExport const TypeIdentifier* GetSequenceStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetSequenceStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalSequenceStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteSequenceStructObject();

eProsima_user_DllExport const TypeIdentifier* GetSequenceSequenceStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetSequenceSequenceStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalSequenceSequenceStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteSequenceSequenceStructObject();

eProsima_user_DllExport const TypeIdentifier* GetMapStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMapStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMapStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteMapStructObject();

eProsima_user_DllExport const TypeIdentifier* GetMapMapStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMapMapStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMapMapStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteMapMapStructObject();

eProsima_user_DllExport const TypeIdentifier* GetMyBitsetIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMyBitsetObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalMyBitsetObject();
eProsima_user_DllExport const TypeObject* GetCompleteMyBitsetObject();

eProsima_user_DllExport const TypeIdentifier* GetBitsetStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetBitsetStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalBitsetStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteBitsetStructObject();

eProsima_user_DllExport const TypeIdentifier* GetStructStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetStructStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalStructStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteStructStructObject();

eProsima_user_DllExport const TypeIdentifier* GetStructStructStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetStructStructStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalStructStructStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteStructStructStructObject();

eProsima_user_DllExport const TypeIdentifier* GetSimpleUnionIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetSimpleUnionObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalSimpleUnionObject();
eProsima_user_DllExport const TypeObject* GetCompleteSimpleUnionObject();

eProsima_user_DllExport const TypeIdentifier* GetUnionUnionIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetUnionUnionObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalUnionUnionObject();
eProsima_user_DllExport const TypeObject* GetCompleteUnionUnionObject();

eProsima_user_DllExport const TypeIdentifier* GetWCharUnionIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetWCharUnionObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalWCharUnionObject();
eProsima_user_DllExport const TypeObject* GetCompleteWCharUnionObject();

eProsima_user_DllExport const TypeIdentifier* GetSimpleUnionStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetSimpleUnionStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalSimpleUnionStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteSimpleUnionStructObject();

eProsima_user_DllExport const TypeIdentifier* GetUnionUnionUnionStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetUnionUnionUnionStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalUnionUnionUnionStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteUnionUnionUnionStructObject();

eProsima_user_DllExport const TypeIdentifier* GetWCharUnionStructIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetWCharUnionStructObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalWCharUnionStructObject();
eProsima_user_DllExport const TypeObject* GetCompleteWCharUnionStructObject();


#endif // _FAST_DDS_GENERATED_BASIC_TYPE_OBJECT_H_