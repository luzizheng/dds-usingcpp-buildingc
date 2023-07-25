/*!
 * @file new_features_4_2TypeObject.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_NEW_FEATURES_4_2_TYPE_OBJECT_H_
#define _FAST_DDS_GENERATED_NEW_FEATURES_4_2_TYPE_OBJECT_H_


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
#if defined(new_features_4_2_SOURCE)
#define new_features_4_2_DllAPI __declspec( dllexport )
#else
#define new_features_4_2_DllAPI __declspec( dllimport )
#endif // new_features_4_2_SOURCE
#else
#define new_features_4_2_DllAPI
#endif
#else
#define new_features_4_2_DllAPI
#endif // _WIN32

using namespace eprosima::fastrtps::types;

eProsima_user_DllExport void registernew_features_4_2Types();

eProsima_user_DllExport const TypeIdentifier* GetNewAliasesIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetNewAliasesObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalNewAliasesObject();
eProsima_user_DllExport const TypeObject* GetCompleteNewAliasesObject();

eProsima_user_DllExport const TypeIdentifier* GetWCharUnionIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetWCharUnionObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalWCharUnionObject();
eProsima_user_DllExport const TypeObject* GetCompleteWCharUnionObject();

eProsima_user_DllExport const TypeIdentifier* GetOctetUnionIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetOctetUnionObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalOctetUnionObject();
eProsima_user_DllExport const TypeObject* GetCompleteOctetUnionObject();

eProsima_user_DllExport const TypeIdentifier* GetInt8UnionIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetInt8UnionObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalInt8UnionObject();
eProsima_user_DllExport const TypeObject* GetCompleteInt8UnionObject();

namespace bitmodule {
    eProsima_user_DllExport const TypeIdentifier* GetParentBitsetIdentifier(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetParentBitsetObject(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetMinimalParentBitsetObject();
    eProsima_user_DllExport const TypeObject* GetCompleteParentBitsetObject();

    eProsima_user_DllExport const TypeIdentifier* GetMyBitsetIdentifier(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetMyBitsetObject(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetMinimalMyBitsetObject();
    eProsima_user_DllExport const TypeObject* GetCompleteMyBitsetObject();

    eProsima_user_DllExport const TypeIdentifier* GetMyBitMaskIdentifier(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetMyBitMaskObject(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetMinimalMyBitMaskObject();
    eProsima_user_DllExport const TypeObject* GetCompleteMyBitMaskObject();

    eProsima_user_DllExport const TypeIdentifier* GetBitsetBitmaskIdentifier(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetBitsetBitmaskObject(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetMinimalBitsetBitmaskObject();
    eProsima_user_DllExport const TypeObject* GetCompleteBitsetBitmaskObject();

    eProsima_user_DllExport const TypeIdentifier* GetBM2Identifier(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetBM2Object(bool complete = false);
    eProsima_user_DllExport const TypeObject* GetMinimalBM2Object();
    eProsima_user_DllExport const TypeObject* GetCompleteBM2Object();

} // namespace bitmodule
eProsima_user_DllExport const TypeIdentifier* GetStructTestIdentifier(bool complete = false);
eProsima_user_DllExport const TypeObject* GetStructTestObject(bool complete = false);
eProsima_user_DllExport const TypeObject* GetMinimalStructTestObject();
eProsima_user_DllExport const TypeObject* GetCompleteStructTestObject();


#endif // _FAST_DDS_GENERATED_NEW_FEATURES_4_2_TYPE_OBJECT_H_