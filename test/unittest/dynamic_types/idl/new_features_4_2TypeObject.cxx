/*!
 * @file new_features_4_2TypeObject.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "new_features_4_2.h"
#include "new_features_4_2TypeObject.h"
#include <mutex>
#include <utility>
#include <sstream>
#include <fastrtps/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <fastrtps/types/TypeNamesGenerator.h>
#include <fastrtps/types/AnnotationParameterValue.h>
#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

using namespace eprosima::fastrtps::rtps;

void registernew_features_4_2Types()
{
    static std::once_flag once_flag;
    std::call_once(once_flag, []()
            {
                TypeObjectFactory *factory = TypeObjectFactory::get_instance();
                factory->add_type_object("NewAliases", GetNewAliasesIdentifier(true),
                GetNewAliasesObject(true));
                factory->add_type_object("NewAliases", GetNewAliasesIdentifier(false),
                GetNewAliasesObject(false));

                factory->add_type_object("WCharUnion", GetWCharUnionIdentifier(true),
                GetWCharUnionObject(true));
                factory->add_type_object("WCharUnion", GetWCharUnionIdentifier(false),
                GetWCharUnionObject(false));

                factory->add_type_object("OctetUnion", GetOctetUnionIdentifier(true),
                GetOctetUnionObject(true));
                factory->add_type_object("OctetUnion", GetOctetUnionIdentifier(false),
                GetOctetUnionObject(false));

                factory->add_type_object("Int8Union", GetInt8UnionIdentifier(true),
                GetInt8UnionObject(true));
                factory->add_type_object("Int8Union", GetInt8UnionIdentifier(false),
                GetInt8UnionObject(false));

                factory->add_type_object("bitmodule::ParentBitset", bitmodule::GetParentBitsetIdentifier(true),
                        bitmodule::GetParentBitsetObject(true));
                factory->add_type_object("bitmodule::ParentBitset", bitmodule::GetParentBitsetIdentifier(false),
                        bitmodule::GetParentBitsetObject(false));

                factory->add_type_object("bitmodule::MyBitset", bitmodule::GetMyBitsetIdentifier(true),
                        bitmodule::GetMyBitsetObject(true));
                factory->add_type_object("bitmodule::MyBitset", bitmodule::GetMyBitsetIdentifier(false),
                        bitmodule::GetMyBitsetObject(false));

                factory->add_type_object("bitmodule::MyBitMask", bitmodule::GetMyBitMaskIdentifier(true),
                        bitmodule::GetMyBitMaskObject(true));
                factory->add_type_object("bitmodule::MyBitMask", bitmodule::GetMyBitMaskIdentifier(false),
                        bitmodule::GetMyBitMaskObject(false));

                factory->add_type_object("bitmodule::BitsetBitmask", bitmodule::GetBitsetBitmaskIdentifier(true),
                        bitmodule::GetBitsetBitmaskObject(true));
                factory->add_type_object("bitmodule::BitsetBitmask", bitmodule::GetBitsetBitmaskIdentifier(false),
                        bitmodule::GetBitsetBitmaskObject(false));

                factory->add_type_object("bitmodule::BM2", bitmodule::GetBM2Identifier(true),
                        bitmodule::GetBM2Object(true));
                factory->add_type_object("bitmodule::BM2", bitmodule::GetBM2Identifier(false),
                        bitmodule::GetBM2Object(false));


                factory->add_type_object("StructTest", GetStructTestIdentifier(true),
                GetStructTestObject(true));
                factory->add_type_object("StructTest", GetStructTestIdentifier(false),
                GetStructTestObject(false));

            });
}

const TypeIdentifier* GetNewAliasesIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("NewAliases", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetNewAliasesObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("NewAliases", complete);
}

const TypeObject* GetNewAliasesObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("NewAliases", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteNewAliasesObject();
    }
    //else
    return GetMinimalNewAliasesObject();
}

const TypeObject* GetMinimalNewAliasesObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("NewAliases", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_STRUCTURE);

    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    MinimalStructMember mst_int8_;
    mst_int8_.common().member_id(memberId++);
    mst_int8_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int8_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int8_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int8_.common().member_flags().IS_OPTIONAL(false);
    mst_int8_.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int8_.common().member_flags().IS_KEY(false);
    mst_int8_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int8_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int8_t", false));

    MD5 int8__hash("int8_");
    for(int i = 0; i < 4; ++i)
    {
        mst_int8_.detail().name_hash()[i] = int8__hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int8_);

    MinimalStructMember mst_uint8_;
    mst_uint8_.common().member_id(memberId++);
    mst_uint8_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint8_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint8_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint8_.common().member_flags().IS_OPTIONAL(false);
    mst_uint8_.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint8_.common().member_flags().IS_KEY(false);
    mst_uint8_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint8_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    MD5 uint8__hash("uint8_");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint8_.detail().name_hash()[i] = uint8__hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint8_);

    MinimalStructMember mst_int16_;
    mst_int16_.common().member_id(memberId++);
    mst_int16_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int16_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int16_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int16_.common().member_flags().IS_OPTIONAL(false);
    mst_int16_.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int16_.common().member_flags().IS_KEY(false);
    mst_int16_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int16_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int16_t", false));

    MD5 int16__hash("int16_");
    for(int i = 0; i < 4; ++i)
    {
        mst_int16_.detail().name_hash()[i] = int16__hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int16_);

    MinimalStructMember mst_uint16_;
    mst_uint16_.common().member_id(memberId++);
    mst_uint16_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint16_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint16_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint16_.common().member_flags().IS_OPTIONAL(false);
    mst_uint16_.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint16_.common().member_flags().IS_KEY(false);
    mst_uint16_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint16_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

    MD5 uint16__hash("uint16_");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint16_.detail().name_hash()[i] = uint16__hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint16_);

    MinimalStructMember mst_int32_;
    mst_int32_.common().member_id(memberId++);
    mst_int32_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int32_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int32_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int32_.common().member_flags().IS_OPTIONAL(false);
    mst_int32_.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int32_.common().member_flags().IS_KEY(false);
    mst_int32_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int32_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MD5 int32__hash("int32_");
    for(int i = 0; i < 4; ++i)
    {
        mst_int32_.detail().name_hash()[i] = int32__hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int32_);

    MinimalStructMember mst_uint32_;
    mst_uint32_.common().member_id(memberId++);
    mst_uint32_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint32_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint32_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint32_.common().member_flags().IS_OPTIONAL(false);
    mst_uint32_.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint32_.common().member_flags().IS_KEY(false);
    mst_uint32_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint32_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    MD5 uint32__hash("uint32_");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint32_.detail().name_hash()[i] = uint32__hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint32_);

    MinimalStructMember mst_int64_;
    mst_int64_.common().member_id(memberId++);
    mst_int64_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int64_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int64_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int64_.common().member_flags().IS_OPTIONAL(false);
    mst_int64_.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int64_.common().member_flags().IS_KEY(false);
    mst_int64_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int64_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    MD5 int64__hash("int64_");
    for(int i = 0; i < 4; ++i)
    {
        mst_int64_.detail().name_hash()[i] = int64__hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int64_);

    MinimalStructMember mst_uint64_;
    mst_uint64_.common().member_id(memberId++);
    mst_uint64_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint64_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint64_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint64_.common().member_flags().IS_OPTIONAL(false);
    mst_uint64_.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint64_.common().member_flags().IS_KEY(false);
    mst_uint64_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint64_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint64_t", false));

    MD5 uint64__hash("uint64_");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint64_.detail().name_hash()[i] = uint64__hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint64_);

    MinimalStructMember mst_local_string;
    mst_local_string.common().member_id(memberId++);
    mst_local_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_local_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_local_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_local_string.common().member_flags().IS_OPTIONAL(false);
    mst_local_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_local_string.common().member_flags().IS_KEY(false);
    mst_local_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_local_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    MD5 local_string_hash("local_string");
    for(int i = 0; i < 4; ++i)
    {
        mst_local_string.detail().name_hash()[i] = local_string_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_local_string);


    // Header
    // TODO Inheritance
    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("NewAliases", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("NewAliases", false);
}

const TypeObject* GetCompleteNewAliasesObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("NewAliases", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_STRUCTURE);

    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    CompleteStructMember cst_int8_;
    cst_int8_.common().member_id(memberId++);
    cst_int8_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int8_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int8_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int8_.common().member_flags().IS_OPTIONAL(false);
    cst_int8_.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int8_.common().member_flags().IS_KEY(false);
    cst_int8_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int8_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int8_t", false));

    cst_int8_.detail().name("int8_");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int8_);

    CompleteStructMember cst_uint8_;
    cst_uint8_.common().member_id(memberId++);
    cst_uint8_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint8_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint8_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint8_.common().member_flags().IS_OPTIONAL(false);
    cst_uint8_.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint8_.common().member_flags().IS_KEY(false);
    cst_uint8_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint8_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    cst_uint8_.detail().name("uint8_");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint8_);

    CompleteStructMember cst_int16_;
    cst_int16_.common().member_id(memberId++);
    cst_int16_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int16_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int16_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int16_.common().member_flags().IS_OPTIONAL(false);
    cst_int16_.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int16_.common().member_flags().IS_KEY(false);
    cst_int16_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int16_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int16_t", false));

    cst_int16_.detail().name("int16_");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int16_);

    CompleteStructMember cst_uint16_;
    cst_uint16_.common().member_id(memberId++);
    cst_uint16_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint16_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint16_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint16_.common().member_flags().IS_OPTIONAL(false);
    cst_uint16_.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint16_.common().member_flags().IS_KEY(false);
    cst_uint16_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint16_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

    cst_uint16_.detail().name("uint16_");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint16_);

    CompleteStructMember cst_int32_;
    cst_int32_.common().member_id(memberId++);
    cst_int32_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int32_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int32_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int32_.common().member_flags().IS_OPTIONAL(false);
    cst_int32_.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int32_.common().member_flags().IS_KEY(false);
    cst_int32_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int32_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    cst_int32_.detail().name("int32_");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int32_);

    CompleteStructMember cst_uint32_;
    cst_uint32_.common().member_id(memberId++);
    cst_uint32_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint32_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint32_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint32_.common().member_flags().IS_OPTIONAL(false);
    cst_uint32_.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint32_.common().member_flags().IS_KEY(false);
    cst_uint32_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint32_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    cst_uint32_.detail().name("uint32_");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint32_);

    CompleteStructMember cst_int64_;
    cst_int64_.common().member_id(memberId++);
    cst_int64_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int64_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int64_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int64_.common().member_flags().IS_OPTIONAL(false);
    cst_int64_.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int64_.common().member_flags().IS_KEY(false);
    cst_int64_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int64_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    cst_int64_.detail().name("int64_");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int64_);

    CompleteStructMember cst_uint64_;
    cst_uint64_.common().member_id(memberId++);
    cst_uint64_.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint64_.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint64_.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint64_.common().member_flags().IS_OPTIONAL(false);
    cst_uint64_.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint64_.common().member_flags().IS_KEY(false);
    cst_uint64_.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint64_.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint64_t", false));

    cst_uint64_.detail().name("uint64_");

    {
        AppliedAnnotation ann;
        //ann.annotation_typeid(GetdefaultIdentifier(true));
        ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("default"));
            {
                AppliedAnnotationParameter annParam;
                MD5 message_hash("value");
                for(int i = 0; i < 4; ++i)
                {
                    annParam.paramname_hash()[i] = message_hash.digest[i];
                }
                AnnotationParameterValue paramValue;
                paramValue._d();
                paramValue.from_string("555");
                annParam.value(paramValue);
                ann.param_seq().push_back(annParam);
            }
            
        cst_uint64_.detail().ann_custom().push_back(ann);
    }

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint64_);

    CompleteStructMember cst_local_string;
    cst_local_string.common().member_id(memberId++);
    cst_local_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_local_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_local_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_local_string.common().member_flags().IS_OPTIONAL(false);
    cst_local_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_local_string.common().member_flags().IS_KEY(false);
    cst_local_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_local_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    cst_local_string.detail().name("local_string");

    {
        AppliedAnnotation ann;
        //ann.annotation_typeid(Getnon_serializedIdentifier(true));
        ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("non_serialized"));
            {
                AppliedAnnotationParameter annParam;
                MD5 message_hash("value");
                for(int i = 0; i < 4; ++i)
                {
                    annParam.paramname_hash()[i] = message_hash.digest[i];
                }
                AnnotationParameterValue paramValue;
                paramValue._d(TK_BOOLEAN);
                paramValue.from_string("true");
                annParam.value(paramValue);
                ann.param_seq().push_back(annParam);
            }
            
        cst_local_string.detail().ann_custom().push_back(ann);
    }

    type_object->complete().struct_type().member_seq().emplace_back(cst_local_string);


    // Header
    type_object->complete().struct_type().header().detail().type_name("NewAliases");
    // TODO inheritance


    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("NewAliases", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("NewAliases", true);
}

const TypeIdentifier* GetWCharUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("WCharUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetWCharUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("WCharUnion", complete);
}

const TypeObject* GetWCharUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WCharUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteWCharUnionObject();
    }
    // else
    return GetMinimalWCharUnionObject();
}

const TypeObject* GetMinimalWCharUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WCharUnion", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_UNION);

    type_object->minimal().union_type().union_flags().IS_FINAL(false);
    type_object->minimal().union_type().union_flags().IS_APPENDABLE(false);
    type_object->minimal().union_type().union_flags().IS_MUTABLE(false);
    type_object->minimal().union_type().union_flags().IS_NESTED(false);
    type_object->minimal().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->minimal().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("wchar_t", false));

    MemberId memberId = 0;
    MinimalUnionMember mst_case_zero;
    mst_case_zero.common().member_id(memberId++);
    mst_case_zero.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_case_zero.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_case_zero.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_case_zero.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_case_zero.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_case_zero.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_case_zero.common().member_flags().IS_DEFAULT(false);
    mst_case_zero.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_case_zero.common().label_seq().emplace_back('a');
    MD5 case_zero_hash("case_zero");
    for(int i = 0; i < 4; ++i)
    {
        mst_case_zero.detail().name_hash()[i] = case_zero_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_case_zero);

    MinimalUnionMember mst_case_one;
    mst_case_one.common().member_id(memberId++);
    mst_case_one.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_case_one.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_case_one.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_case_one.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_case_one.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_case_one.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_case_one.common().member_flags().IS_DEFAULT(false);
    mst_case_one.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_case_one.common().label_seq().emplace_back('b');
    MD5 case_one_hash("case_one");
    for(int i = 0; i < 4; ++i)
    {
        mst_case_one.detail().name_hash()[i] = case_one_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_case_one);


    // Header
    //type_object->minimal().union_type().header().detail()... // Empty

    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalUnionType::getCdrSerializedSize(type_object->minimal().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("WCharUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("WCharUnion", false);
}

const TypeObject* GetCompleteWCharUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WCharUnion", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_UNION);

    type_object->complete().union_type().union_flags().IS_FINAL(false);
    type_object->complete().union_type().union_flags().IS_APPENDABLE(false);
    type_object->complete().union_type().union_flags().IS_MUTABLE(false);
    type_object->complete().union_type().union_flags().IS_NESTED(false);
    type_object->complete().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->complete().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("wchar_t", false));


    MemberId memberId = 0;
    CompleteUnionMember cst_case_zero;
    cst_case_zero.common().member_id(memberId++);
    cst_case_zero.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_case_zero.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_case_zero.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_case_zero.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_case_zero.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_case_zero.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_case_zero.common().member_flags().IS_DEFAULT(false);
    cst_case_zero.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_case_zero.common().label_seq().emplace_back('a');

    cst_case_zero.detail().name("case_zero");

    type_object->complete().union_type().member_seq().emplace_back(cst_case_zero);

    CompleteUnionMember cst_case_one;
    cst_case_one.common().member_id(memberId++);
    cst_case_one.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_case_one.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_case_one.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_case_one.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_case_one.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_case_one.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_case_one.common().member_flags().IS_DEFAULT(false);
    cst_case_one.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_case_one.common().label_seq().emplace_back('b');

    cst_case_one.detail().name("case_one");

    type_object->complete().union_type().member_seq().emplace_back(cst_case_one);


    // Header
    type_object->complete().union_type().header().detail().type_name("WCharUnion");


    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteUnionType::getCdrSerializedSize(type_object->complete().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("WCharUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("WCharUnion", true);
}

const TypeIdentifier* GetOctetUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("OctetUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetOctetUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("OctetUnion", complete);
}

const TypeObject* GetOctetUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("OctetUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteOctetUnionObject();
    }
    // else
    return GetMinimalOctetUnionObject();
}

const TypeObject* GetMinimalOctetUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("OctetUnion", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_UNION);

    type_object->minimal().union_type().union_flags().IS_FINAL(false);
    type_object->minimal().union_type().union_flags().IS_APPENDABLE(false);
    type_object->minimal().union_type().union_flags().IS_MUTABLE(false);
    type_object->minimal().union_type().union_flags().IS_NESTED(false);
    type_object->minimal().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->minimal().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    MemberId memberId = 0;
    MinimalUnionMember mst_case_five;
    mst_case_five.common().member_id(memberId++);
    mst_case_five.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_case_five.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_case_five.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_case_five.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_case_five.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_case_five.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_case_five.common().member_flags().IS_DEFAULT(false);
    mst_case_five.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_case_five.common().label_seq().emplace_back(5);
    MD5 case_five_hash("case_five");
    for(int i = 0; i < 4; ++i)
    {
        mst_case_five.detail().name_hash()[i] = case_five_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_case_five);

    MinimalUnionMember mst_case_seven;
    mst_case_seven.common().member_id(memberId++);
    mst_case_seven.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_case_seven.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_case_seven.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_case_seven.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_case_seven.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_case_seven.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_case_seven.common().member_flags().IS_DEFAULT(false);
    mst_case_seven.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_case_seven.common().label_seq().emplace_back(7);
    MD5 case_seven_hash("case_seven");
    for(int i = 0; i < 4; ++i)
    {
        mst_case_seven.detail().name_hash()[i] = case_seven_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_case_seven);


    // Header
    //type_object->minimal().union_type().header().detail()... // Empty

    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalUnionType::getCdrSerializedSize(type_object->minimal().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("OctetUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("OctetUnion", false);
}

const TypeObject* GetCompleteOctetUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("OctetUnion", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_UNION);

    type_object->complete().union_type().union_flags().IS_FINAL(false);
    type_object->complete().union_type().union_flags().IS_APPENDABLE(false);
    type_object->complete().union_type().union_flags().IS_MUTABLE(false);
    type_object->complete().union_type().union_flags().IS_NESTED(false);
    type_object->complete().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->complete().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));


    MemberId memberId = 0;
    CompleteUnionMember cst_case_five;
    cst_case_five.common().member_id(memberId++);
    cst_case_five.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_case_five.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_case_five.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_case_five.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_case_five.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_case_five.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_case_five.common().member_flags().IS_DEFAULT(false);
    cst_case_five.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_case_five.common().label_seq().emplace_back(5);

    cst_case_five.detail().name("case_five");

    type_object->complete().union_type().member_seq().emplace_back(cst_case_five);

    CompleteUnionMember cst_case_seven;
    cst_case_seven.common().member_id(memberId++);
    cst_case_seven.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_case_seven.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_case_seven.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_case_seven.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_case_seven.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_case_seven.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_case_seven.common().member_flags().IS_DEFAULT(false);
    cst_case_seven.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_case_seven.common().label_seq().emplace_back(7);

    cst_case_seven.detail().name("case_seven");

    type_object->complete().union_type().member_seq().emplace_back(cst_case_seven);


    // Header
    type_object->complete().union_type().header().detail().type_name("OctetUnion");


    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteUnionType::getCdrSerializedSize(type_object->complete().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("OctetUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("OctetUnion", true);
}

const TypeIdentifier* GetInt8UnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("Int8Union", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetInt8UnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("Int8Union", complete);
}

const TypeObject* GetInt8UnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Int8Union", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteInt8UnionObject();
    }
    // else
    return GetMinimalInt8UnionObject();
}

const TypeObject* GetMinimalInt8UnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Int8Union", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_UNION);

    type_object->minimal().union_type().union_flags().IS_FINAL(false);
    type_object->minimal().union_type().union_flags().IS_APPENDABLE(false);
    type_object->minimal().union_type().union_flags().IS_MUTABLE(false);
    type_object->minimal().union_type().union_flags().IS_NESTED(false);
    type_object->minimal().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->minimal().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int8_t", false));

    MemberId memberId = 0;
    MinimalUnionMember mst_case_three;
    mst_case_three.common().member_id(memberId++);
    mst_case_three.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_case_three.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_case_three.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_case_three.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_case_three.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_case_three.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_case_three.common().member_flags().IS_DEFAULT(false);
    mst_case_three.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_case_three.common().label_seq().emplace_back(3);
    MD5 case_three_hash("case_three");
    for(int i = 0; i < 4; ++i)
    {
        mst_case_three.detail().name_hash()[i] = case_three_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_case_three);

    MinimalUnionMember mst_case_six;
    mst_case_six.common().member_id(memberId++);
    mst_case_six.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_case_six.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_case_six.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_case_six.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_case_six.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_case_six.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_case_six.common().member_flags().IS_DEFAULT(false);
    mst_case_six.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_case_six.common().label_seq().emplace_back(6);
    MD5 case_six_hash("case_six");
    for(int i = 0; i < 4; ++i)
    {
        mst_case_six.detail().name_hash()[i] = case_six_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_case_six);


    // Header
    //type_object->minimal().union_type().header().detail()... // Empty

    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalUnionType::getCdrSerializedSize(type_object->minimal().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("Int8Union", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("Int8Union", false);
}

const TypeObject* GetCompleteInt8UnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Int8Union", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_UNION);

    type_object->complete().union_type().union_flags().IS_FINAL(false);
    type_object->complete().union_type().union_flags().IS_APPENDABLE(false);
    type_object->complete().union_type().union_flags().IS_MUTABLE(false);
    type_object->complete().union_type().union_flags().IS_NESTED(false);
    type_object->complete().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->complete().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int8_t", false));


    MemberId memberId = 0;
    CompleteUnionMember cst_case_three;
    cst_case_three.common().member_id(memberId++);
    cst_case_three.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_case_three.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_case_three.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_case_three.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_case_three.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_case_three.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_case_three.common().member_flags().IS_DEFAULT(false);
    cst_case_three.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_case_three.common().label_seq().emplace_back(3);

    cst_case_three.detail().name("case_three");

    type_object->complete().union_type().member_seq().emplace_back(cst_case_three);

    CompleteUnionMember cst_case_six;
    cst_case_six.common().member_id(memberId++);
    cst_case_six.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_case_six.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_case_six.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_case_six.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_case_six.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_case_six.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_case_six.common().member_flags().IS_DEFAULT(false);
    cst_case_six.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_case_six.common().label_seq().emplace_back(6);

    cst_case_six.detail().name("case_six");

    type_object->complete().union_type().member_seq().emplace_back(cst_case_six);


    // Header
    type_object->complete().union_type().header().detail().type_name("Int8Union");


    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteUnionType::getCdrSerializedSize(type_object->complete().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("Int8Union", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("Int8Union", true);
}

namespace bitmodule {
    const TypeIdentifier* GetParentBitsetIdentifier(bool complete)
    {
        const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ParentBitset", complete);
        if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
        {
            return c_identifier;
        }

        GetParentBitsetObject(complete); // Generated inside
        return TypeObjectFactory::get_instance()->get_type_identifier("ParentBitset", complete);
    }

    const TypeObject* GetParentBitsetObject(bool complete)
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ParentBitset", complete);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }
        else if (complete)
        {
            return GetCompleteParentBitsetObject();
        }
        // else
        return GetMinimalParentBitsetObject();
    }

    const TypeObject* GetMinimalParentBitsetObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ParentBitset", false);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_MINIMAL);
        type_object->minimal()._d(TK_BITSET);

        MinimalBitfield mbf_parent_bitfield;
        mbf_parent_bitfield.common().flags().TRY_CONSTRUCT1(false);
        mbf_parent_bitfield.common().flags().TRY_CONSTRUCT2(false);
        mbf_parent_bitfield.common().flags().IS_EXTERNAL(false);
        mbf_parent_bitfield.common().flags().IS_OPTIONAL(false);
        mbf_parent_bitfield.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_parent_bitfield.common().flags().IS_KEY(false);
        mbf_parent_bitfield.common().flags().IS_DEFAULT(false);
        mbf_parent_bitfield.common().position(0);
        mbf_parent_bitfield.common().bitcount(17);
        mbf_parent_bitfield.common().holder_type(TK_UINT32);
        MD5 parent_bitfield_hash("parent_bitfield");
        for(int i = 0; i < 4; ++i)
        {
            mbf_parent_bitfield.name_hash()[i] = parent_bitfield_hash.digest[i];
        }
        type_object->minimal().bitset_type().field_seq().emplace_back(mbf_parent_bitfield);


        TypeIdentifier identifier;
        identifier._d(EK_MINIMAL);

        SerializedPayload_t payload(static_cast<uint32_t>(
            MinimalBitsetType::getCdrSerializedSize(type_object->minimal().bitset_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("ParentBitset", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("ParentBitset", false);
    }

    const TypeObject* GetCompleteParentBitsetObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ParentBitset", true);
        if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_COMPLETE);
        type_object->complete()._d(TK_BITSET);

        // No flags apply
        //type_object->complete().bitset_type().bitset_flags().IS_FINAL(false);
        //type_object->complete().bitset_type().bitset_flags().IS_APPENDABLE(false);
        //type_object->complete().bitset_type().bitset_flags().IS_MUTABLE(false);
        //type_object->complete().bitset_type().bitset_flags().IS_NESTED(false);
        //type_object->complete().bitset_type().bitset_flags().IS_AUTOID_HASH(false);


        type_object->complete().bitset_type().header().detail().type_name("ParentBitset");

        CompleteBitfield cbf_parent_bitfield;
        cbf_parent_bitfield.common().flags().TRY_CONSTRUCT1(false);
        cbf_parent_bitfield.common().flags().TRY_CONSTRUCT2(false);
        cbf_parent_bitfield.common().flags().IS_EXTERNAL(false);
        cbf_parent_bitfield.common().flags().IS_OPTIONAL(false);
        cbf_parent_bitfield.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_parent_bitfield.common().flags().IS_KEY(false);
        cbf_parent_bitfield.common().flags().IS_DEFAULT(false);
        cbf_parent_bitfield.common().position(0);
        cbf_parent_bitfield.common().bitcount(17);
        cbf_parent_bitfield.common().holder_type(TK_UINT32);
        cbf_parent_bitfield.detail().name("parent_bitfield");

        // Position annotation always present
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(0);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_parent_bitfield.detail().ann_custom().push_back(ann);
        }

        // Use bit_bound as bitcount.
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("bit_bound"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(17);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_parent_bitfield.detail().ann_custom().push_back(ann);
        }

        type_object->complete().bitset_type().field_seq().emplace_back(cbf_parent_bitfield);


        TypeIdentifier identifier;
        identifier._d(EK_COMPLETE);

        SerializedPayload_t payload(static_cast<uint32_t>(
            CompleteBitsetType::getCdrSerializedSize(type_object->complete().bitset_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("ParentBitset", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("ParentBitset", true);
    }

    const TypeIdentifier* GetMyBitsetIdentifier(bool complete)
    {
        const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyBitset", complete);
        if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
        {
            return c_identifier;
        }

        GetMyBitsetObject(complete); // Generated inside
        return TypeObjectFactory::get_instance()->get_type_identifier("MyBitset", complete);
    }

    const TypeObject* GetMyBitsetObject(bool complete)
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBitset", complete);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }
        else if (complete)
        {
            return GetCompleteMyBitsetObject();
        }
        // else
        return GetMinimalMyBitsetObject();
    }

    const TypeObject* GetMinimalMyBitsetObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBitset", false);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_MINIMAL);
        type_object->minimal()._d(TK_BITSET);

        MinimalBitfield mbf_a;
        mbf_a.common().flags().TRY_CONSTRUCT1(false);
        mbf_a.common().flags().TRY_CONSTRUCT2(false);
        mbf_a.common().flags().IS_EXTERNAL(false);
        mbf_a.common().flags().IS_OPTIONAL(false);
        mbf_a.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_a.common().flags().IS_KEY(false);
        mbf_a.common().flags().IS_DEFAULT(false);
        mbf_a.common().position(0);
        mbf_a.common().bitcount(3);
        mbf_a.common().holder_type(TK_CHAR8);
        MD5 a_hash("a");
        for(int i = 0; i < 4; ++i)
        {
            mbf_a.name_hash()[i] = a_hash.digest[i];
        }
        type_object->minimal().bitset_type().field_seq().emplace_back(mbf_a);
        MinimalBitfield mbf_b;
        mbf_b.common().flags().TRY_CONSTRUCT1(false);
        mbf_b.common().flags().TRY_CONSTRUCT2(false);
        mbf_b.common().flags().IS_EXTERNAL(false);
        mbf_b.common().flags().IS_OPTIONAL(false);
        mbf_b.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_b.common().flags().IS_KEY(false);
        mbf_b.common().flags().IS_DEFAULT(false);
        mbf_b.common().position(3);
        mbf_b.common().bitcount(1);
        mbf_b.common().holder_type(TK_BOOLEAN);
        MD5 b_hash("b");
        for(int i = 0; i < 4; ++i)
        {
            mbf_b.name_hash()[i] = b_hash.digest[i];
        }
        type_object->minimal().bitset_type().field_seq().emplace_back(mbf_b);

        MinimalBitfield mbf_c;
        mbf_c.common().flags().TRY_CONSTRUCT1(false);
        mbf_c.common().flags().TRY_CONSTRUCT2(false);
        mbf_c.common().flags().IS_EXTERNAL(false);
        mbf_c.common().flags().IS_OPTIONAL(false);
        mbf_c.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_c.common().flags().IS_KEY(false);
        mbf_c.common().flags().IS_DEFAULT(false);
        mbf_c.common().position(8);
        mbf_c.common().bitcount(10);
        mbf_c.common().holder_type(TK_UINT16);
        MD5 c_hash("c");
        for(int i = 0; i < 4; ++i)
        {
            mbf_c.name_hash()[i] = c_hash.digest[i];
        }
        type_object->minimal().bitset_type().field_seq().emplace_back(mbf_c);
        MinimalBitfield mbf_d;
        mbf_d.common().flags().TRY_CONSTRUCT1(false);
        mbf_d.common().flags().TRY_CONSTRUCT2(false);
        mbf_d.common().flags().IS_EXTERNAL(false);
        mbf_d.common().flags().IS_OPTIONAL(false);
        mbf_d.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_d.common().flags().IS_KEY(false);
        mbf_d.common().flags().IS_DEFAULT(false);
        mbf_d.common().position(18);
        mbf_d.common().bitcount(12);
        mbf_d.common().holder_type(TK_INT16);
        MD5 d_hash("d");
        for(int i = 0; i < 4; ++i)
        {
            mbf_d.name_hash()[i] = d_hash.digest[i];
        }
        type_object->minimal().bitset_type().field_seq().emplace_back(mbf_d);
        MinimalBitfield mbf_e;
        mbf_e.common().flags().TRY_CONSTRUCT1(false);
        mbf_e.common().flags().TRY_CONSTRUCT2(false);
        mbf_e.common().flags().IS_EXTERNAL(false);
        mbf_e.common().flags().IS_OPTIONAL(false);
        mbf_e.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_e.common().flags().IS_KEY(false);
        mbf_e.common().flags().IS_DEFAULT(false);
        mbf_e.common().position(30);
        mbf_e.common().bitcount(12);
        mbf_e.common().holder_type(TK_INT16);
        MD5 e_hash("e");
        for(int i = 0; i < 4; ++i)
        {
            mbf_e.name_hash()[i] = e_hash.digest[i];
        }
        type_object->minimal().bitset_type().field_seq().emplace_back(mbf_e);
        MinimalBitfield mbf_f;
        mbf_f.common().flags().TRY_CONSTRUCT1(false);
        mbf_f.common().flags().TRY_CONSTRUCT2(false);
        mbf_f.common().flags().IS_EXTERNAL(false);
        mbf_f.common().flags().IS_OPTIONAL(false);
        mbf_f.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_f.common().flags().IS_KEY(false);
        mbf_f.common().flags().IS_DEFAULT(false);
        mbf_f.common().position(42);
        mbf_f.common().bitcount(12);
        mbf_f.common().holder_type(TK_INT16);
        MD5 f_hash("f");
        for(int i = 0; i < 4; ++i)
        {
            mbf_f.name_hash()[i] = f_hash.digest[i];
        }
        type_object->minimal().bitset_type().field_seq().emplace_back(mbf_f);

        type_object->minimal().bitset_type().header().base_type(*GetParentBitsetIdentifier(false));

        TypeIdentifier identifier;
        identifier._d(EK_MINIMAL);

        SerializedPayload_t payload(static_cast<uint32_t>(
            MinimalBitsetType::getCdrSerializedSize(type_object->minimal().bitset_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("MyBitset", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("MyBitset", false);
    }

    const TypeObject* GetCompleteMyBitsetObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBitset", true);
        if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_COMPLETE);
        type_object->complete()._d(TK_BITSET);

        // No flags apply
        //type_object->complete().bitset_type().bitset_flags().IS_FINAL(false);
        //type_object->complete().bitset_type().bitset_flags().IS_APPENDABLE(false);
        //type_object->complete().bitset_type().bitset_flags().IS_MUTABLE(false);
        //type_object->complete().bitset_type().bitset_flags().IS_NESTED(false);
        //type_object->complete().bitset_type().bitset_flags().IS_AUTOID_HASH(false);


        type_object->complete().bitset_type().header().detail().type_name("MyBitset");

        CompleteBitfield cbf_a;
        cbf_a.common().flags().TRY_CONSTRUCT1(false);
        cbf_a.common().flags().TRY_CONSTRUCT2(false);
        cbf_a.common().flags().IS_EXTERNAL(false);
        cbf_a.common().flags().IS_OPTIONAL(false);
        cbf_a.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_a.common().flags().IS_KEY(false);
        cbf_a.common().flags().IS_DEFAULT(false);
        cbf_a.common().position(0);
        cbf_a.common().bitcount(3);
        cbf_a.common().holder_type(TK_CHAR8);
        cbf_a.detail().name("a");

        // Position annotation always present
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(0);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_a.detail().ann_custom().push_back(ann);
        }

        // Use bit_bound as bitcount.
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("bit_bound"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(3);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_a.detail().ann_custom().push_back(ann);
        }

        type_object->complete().bitset_type().field_seq().emplace_back(cbf_a);
        CompleteBitfield cbf_b;
        cbf_b.common().flags().TRY_CONSTRUCT1(false);
        cbf_b.common().flags().TRY_CONSTRUCT2(false);
        cbf_b.common().flags().IS_EXTERNAL(false);
        cbf_b.common().flags().IS_OPTIONAL(false);
        cbf_b.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_b.common().flags().IS_KEY(false);
        cbf_b.common().flags().IS_DEFAULT(false);
        cbf_b.common().position(3);
        cbf_b.common().bitcount(1);
        cbf_b.common().holder_type(TK_BOOLEAN);
        cbf_b.detail().name("b");

        // Position annotation always present
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(3);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_b.detail().ann_custom().push_back(ann);
        }

        // Use bit_bound as bitcount.
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("bit_bound"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(1);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_b.detail().ann_custom().push_back(ann);
        }

        type_object->complete().bitset_type().field_seq().emplace_back(cbf_b);

        CompleteBitfield cbf_c;
        cbf_c.common().flags().TRY_CONSTRUCT1(false);
        cbf_c.common().flags().TRY_CONSTRUCT2(false);
        cbf_c.common().flags().IS_EXTERNAL(false);
        cbf_c.common().flags().IS_OPTIONAL(false);
        cbf_c.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_c.common().flags().IS_KEY(false);
        cbf_c.common().flags().IS_DEFAULT(false);
        cbf_c.common().position(8);
        cbf_c.common().bitcount(10);
        cbf_c.common().holder_type(TK_UINT16);
        cbf_c.detail().name("c");

        // Position annotation always present
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(8);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_c.detail().ann_custom().push_back(ann);
        }

        // Use bit_bound as bitcount.
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("bit_bound"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(10);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_c.detail().ann_custom().push_back(ann);
        }

        type_object->complete().bitset_type().field_seq().emplace_back(cbf_c);
        CompleteBitfield cbf_d;
        cbf_d.common().flags().TRY_CONSTRUCT1(false);
        cbf_d.common().flags().TRY_CONSTRUCT2(false);
        cbf_d.common().flags().IS_EXTERNAL(false);
        cbf_d.common().flags().IS_OPTIONAL(false);
        cbf_d.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_d.common().flags().IS_KEY(false);
        cbf_d.common().flags().IS_DEFAULT(false);
        cbf_d.common().position(18);
        cbf_d.common().bitcount(12);
        cbf_d.common().holder_type(TK_INT16);
        cbf_d.detail().name("d");

        // Position annotation always present
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(18);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_d.detail().ann_custom().push_back(ann);
        }

        // Use bit_bound as bitcount.
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("bit_bound"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(12);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_d.detail().ann_custom().push_back(ann);
        }

        type_object->complete().bitset_type().field_seq().emplace_back(cbf_d);
        CompleteBitfield cbf_e;
        cbf_e.common().flags().TRY_CONSTRUCT1(false);
        cbf_e.common().flags().TRY_CONSTRUCT2(false);
        cbf_e.common().flags().IS_EXTERNAL(false);
        cbf_e.common().flags().IS_OPTIONAL(false);
        cbf_e.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_e.common().flags().IS_KEY(false);
        cbf_e.common().flags().IS_DEFAULT(false);
        cbf_e.common().position(30);
        cbf_e.common().bitcount(12);
        cbf_e.common().holder_type(TK_INT16);
        cbf_e.detail().name("e");

        // Position annotation always present
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(30);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_e.detail().ann_custom().push_back(ann);
        }

        // Use bit_bound as bitcount.
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("bit_bound"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(12);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_e.detail().ann_custom().push_back(ann);
        }

        type_object->complete().bitset_type().field_seq().emplace_back(cbf_e);
        CompleteBitfield cbf_f;
        cbf_f.common().flags().TRY_CONSTRUCT1(false);
        cbf_f.common().flags().TRY_CONSTRUCT2(false);
        cbf_f.common().flags().IS_EXTERNAL(false);
        cbf_f.common().flags().IS_OPTIONAL(false);
        cbf_f.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_f.common().flags().IS_KEY(false);
        cbf_f.common().flags().IS_DEFAULT(false);
        cbf_f.common().position(42);
        cbf_f.common().bitcount(12);
        cbf_f.common().holder_type(TK_INT16);
        cbf_f.detail().name("f");

        // Position annotation always present
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(42);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_f.detail().ann_custom().push_back(ann);
        }

        // Use bit_bound as bitcount.
        {
            // Position
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("bit_bound"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(12);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_f.detail().ann_custom().push_back(ann);
        }

        type_object->complete().bitset_type().field_seq().emplace_back(cbf_f);

        type_object->complete().bitset_type().header().base_type(*GetParentBitsetIdentifier(true));

        TypeIdentifier identifier;
        identifier._d(EK_COMPLETE);

        SerializedPayload_t payload(static_cast<uint32_t>(
            CompleteBitsetType::getCdrSerializedSize(type_object->complete().bitset_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("MyBitset", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("MyBitset", true);
    }

    const TypeIdentifier* GetMyBitMaskIdentifier(bool complete)
    {
        const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyBitMask", complete);
        if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
        {
            return c_identifier;
        }

        GetMyBitMaskObject(complete); // Generated inside
        return TypeObjectFactory::get_instance()->get_type_identifier("MyBitMask", complete);
    }

    const TypeObject* GetMyBitMaskObject(bool complete)
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBitMask", complete);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }
        else if (complete)
        {
            return GetCompleteMyBitMaskObject();
        }
        // else
        return GetMinimalMyBitMaskObject();
    }

    const TypeObject* GetMinimalMyBitMaskObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBitMask", false);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_MINIMAL);
        type_object->minimal()._d(TK_BITMASK);

        type_object->minimal().bitmask_type().header().common().bit_bound(8);

        MinimalBitflag mbf_flag0;
        mbf_flag0.common().flags().TRY_CONSTRUCT1(false);
        mbf_flag0.common().flags().TRY_CONSTRUCT2(false);
        mbf_flag0.common().flags().IS_EXTERNAL(false);
        mbf_flag0.common().flags().IS_OPTIONAL(false);
        mbf_flag0.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_flag0.common().flags().IS_KEY(false);
        mbf_flag0.common().flags().IS_DEFAULT(false);
        mbf_flag0.common().position(0);
        MD5 flag0_hash("flag0");
        for(int i = 0; i < 4; ++i)
        {
            mbf_flag0.detail().name_hash()[i] = flag0_hash.digest[i];
        }
        type_object->minimal().bitmask_type().flag_seq().emplace_back(mbf_flag0);

        MinimalBitflag mbf_flag1;
        mbf_flag1.common().flags().TRY_CONSTRUCT1(false);
        mbf_flag1.common().flags().TRY_CONSTRUCT2(false);
        mbf_flag1.common().flags().IS_EXTERNAL(false);
        mbf_flag1.common().flags().IS_OPTIONAL(false);
        mbf_flag1.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_flag1.common().flags().IS_KEY(false);
        mbf_flag1.common().flags().IS_DEFAULT(false);
        mbf_flag1.common().position(1);
        MD5 flag1_hash("flag1");
        for(int i = 0; i < 4; ++i)
        {
            mbf_flag1.detail().name_hash()[i] = flag1_hash.digest[i];
        }
        type_object->minimal().bitmask_type().flag_seq().emplace_back(mbf_flag1);

        MinimalBitflag mbf_flag4;
        mbf_flag4.common().flags().TRY_CONSTRUCT1(false);
        mbf_flag4.common().flags().TRY_CONSTRUCT2(false);
        mbf_flag4.common().flags().IS_EXTERNAL(false);
        mbf_flag4.common().flags().IS_OPTIONAL(false);
        mbf_flag4.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_flag4.common().flags().IS_KEY(false);
        mbf_flag4.common().flags().IS_DEFAULT(false);
        mbf_flag4.common().position(4);
        MD5 flag4_hash("flag4");
        for(int i = 0; i < 4; ++i)
        {
            mbf_flag4.detail().name_hash()[i] = flag4_hash.digest[i];
        }
        type_object->minimal().bitmask_type().flag_seq().emplace_back(mbf_flag4);

        MinimalBitflag mbf_flag6;
        mbf_flag6.common().flags().TRY_CONSTRUCT1(false);
        mbf_flag6.common().flags().TRY_CONSTRUCT2(false);
        mbf_flag6.common().flags().IS_EXTERNAL(false);
        mbf_flag6.common().flags().IS_OPTIONAL(false);
        mbf_flag6.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_flag6.common().flags().IS_KEY(false);
        mbf_flag6.common().flags().IS_DEFAULT(false);
        mbf_flag6.common().position(6);
        MD5 flag6_hash("flag6");
        for(int i = 0; i < 4; ++i)
        {
            mbf_flag6.detail().name_hash()[i] = flag6_hash.digest[i];
        }
        type_object->minimal().bitmask_type().flag_seq().emplace_back(mbf_flag6);

        MinimalBitflag mbf_flag7;
        mbf_flag7.common().flags().TRY_CONSTRUCT1(false);
        mbf_flag7.common().flags().TRY_CONSTRUCT2(false);
        mbf_flag7.common().flags().IS_EXTERNAL(false);
        mbf_flag7.common().flags().IS_OPTIONAL(false);
        mbf_flag7.common().flags().IS_MUST_UNDERSTAND(false);
        mbf_flag7.common().flags().IS_KEY(false);
        mbf_flag7.common().flags().IS_DEFAULT(false);
        mbf_flag7.common().position(7);
        MD5 flag7_hash("flag7");
        for(int i = 0; i < 4; ++i)
        {
            mbf_flag7.detail().name_hash()[i] = flag7_hash.digest[i];
        }
        type_object->minimal().bitmask_type().flag_seq().emplace_back(mbf_flag7);


        TypeIdentifier identifier;
        identifier._d(EK_MINIMAL);

        SerializedPayload_t payload(static_cast<uint32_t>(
            MinimalBitmaskType::getCdrSerializedSize(type_object->minimal().bitmask_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("MyBitMask", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("MyBitMask", false);
    }

    const TypeObject* GetCompleteMyBitMaskObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBitMask", true);
        if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_COMPLETE);
        type_object->complete()._d(TK_BITMASK);

        // No flags apply
        //type_object->complete().bitmask_type().bitmask_flags().IS_FINAL(false);
        //type_object->complete().bitmask_type().bitmask_flags().IS_APPENDABLE(false);
        //type_object->complete().bitmask_type().bitmask_flags().IS_MUTABLE(false);
        //type_object->complete().bitmask_type().bitmask_flags().IS_NESTED(false);
        //type_object->complete().bitmask_type().bitmask_flags().IS_AUTOID_HASH(false);

        type_object->complete().bitmask_type().header().common().bit_bound(8);


        type_object->complete().bitmask_type().header().detail().type_name("MyBitMask");

        CompleteBitflag cbf_flag0;
        cbf_flag0.common().flags().TRY_CONSTRUCT1(false);
        cbf_flag0.common().flags().TRY_CONSTRUCT2(false);
        cbf_flag0.common().flags().IS_EXTERNAL(false);
        cbf_flag0.common().flags().IS_OPTIONAL(false);
        cbf_flag0.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_flag0.common().flags().IS_KEY(false);
        cbf_flag0.common().flags().IS_DEFAULT(false);
        cbf_flag0.common().position(0);
        cbf_flag0.detail().name("flag0");

        // Position annotation always present
        {
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(0);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_flag0.detail().ann_custom().push_back(ann);
        }

        {
            if (std::strcmp("position", "position") != 0)
            {
                AppliedAnnotation ann;
                //ann.annotation_typeid(GetpositionIdentifier(true));
                ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
                        {
                            AppliedAnnotationParameter annParam;
                            MD5 message_hash("value");
                            for(int i = 0; i < 4; ++i)
                            {
                                annParam.paramname_hash()[i] = message_hash.digest[i];
                            }
                            AnnotationParameterValue paramValue;
                            paramValue._d(TK_UINT16);
                            paramValue.from_string("0");
                            annParam.value(paramValue);
                            ann.param_seq().push_back(annParam);
                        }
                        
                cbf_flag0.detail().ann_custom().push_back(ann);
            }
        }

        type_object->complete().bitmask_type().flag_seq().emplace_back(cbf_flag0);

        CompleteBitflag cbf_flag1;
        cbf_flag1.common().flags().TRY_CONSTRUCT1(false);
        cbf_flag1.common().flags().TRY_CONSTRUCT2(false);
        cbf_flag1.common().flags().IS_EXTERNAL(false);
        cbf_flag1.common().flags().IS_OPTIONAL(false);
        cbf_flag1.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_flag1.common().flags().IS_KEY(false);
        cbf_flag1.common().flags().IS_DEFAULT(false);
        cbf_flag1.common().position(1);
        cbf_flag1.detail().name("flag1");

        // Position annotation always present
        {
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(1);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_flag1.detail().ann_custom().push_back(ann);
        }

        {
            if (std::strcmp("position", "position") != 0)
            {
                AppliedAnnotation ann;
                //ann.annotation_typeid(GetpositionIdentifier(true));
                ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
                        {
                            AppliedAnnotationParameter annParam;
                            MD5 message_hash("value");
                            for(int i = 0; i < 4; ++i)
                            {
                                annParam.paramname_hash()[i] = message_hash.digest[i];
                            }
                            AnnotationParameterValue paramValue;
                            paramValue._d(TK_UINT16);
                            paramValue.from_string("1");
                            annParam.value(paramValue);
                            ann.param_seq().push_back(annParam);
                        }
                        
                cbf_flag1.detail().ann_custom().push_back(ann);
            }
        }

        type_object->complete().bitmask_type().flag_seq().emplace_back(cbf_flag1);

        CompleteBitflag cbf_flag4;
        cbf_flag4.common().flags().TRY_CONSTRUCT1(false);
        cbf_flag4.common().flags().TRY_CONSTRUCT2(false);
        cbf_flag4.common().flags().IS_EXTERNAL(false);
        cbf_flag4.common().flags().IS_OPTIONAL(false);
        cbf_flag4.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_flag4.common().flags().IS_KEY(false);
        cbf_flag4.common().flags().IS_DEFAULT(false);
        cbf_flag4.common().position(4);
        cbf_flag4.detail().name("flag4");

        // Position annotation always present
        {
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(4);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_flag4.detail().ann_custom().push_back(ann);
        }

        {
            if (std::strcmp("position", "position") != 0)
            {
                AppliedAnnotation ann;
                //ann.annotation_typeid(GetpositionIdentifier(true));
                ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
                        {
                            AppliedAnnotationParameter annParam;
                            MD5 message_hash("value");
                            for(int i = 0; i < 4; ++i)
                            {
                                annParam.paramname_hash()[i] = message_hash.digest[i];
                            }
                            AnnotationParameterValue paramValue;
                            paramValue._d(TK_UINT16);
                            paramValue.from_string("4");
                            annParam.value(paramValue);
                            ann.param_seq().push_back(annParam);
                        }
                        
                cbf_flag4.detail().ann_custom().push_back(ann);
            }
        }

        type_object->complete().bitmask_type().flag_seq().emplace_back(cbf_flag4);

        CompleteBitflag cbf_flag6;
        cbf_flag6.common().flags().TRY_CONSTRUCT1(false);
        cbf_flag6.common().flags().TRY_CONSTRUCT2(false);
        cbf_flag6.common().flags().IS_EXTERNAL(false);
        cbf_flag6.common().flags().IS_OPTIONAL(false);
        cbf_flag6.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_flag6.common().flags().IS_KEY(false);
        cbf_flag6.common().flags().IS_DEFAULT(false);
        cbf_flag6.common().position(6);
        cbf_flag6.detail().name("flag6");

        // Position annotation always present
        {
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(6);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_flag6.detail().ann_custom().push_back(ann);
        }

        {
            if (std::strcmp("position", "position") != 0)
            {
                AppliedAnnotation ann;
                //ann.annotation_typeid(GetpositionIdentifier(true));
                ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
                        {
                            AppliedAnnotationParameter annParam;
                            MD5 message_hash("value");
                            for(int i = 0; i < 4; ++i)
                            {
                                annParam.paramname_hash()[i] = message_hash.digest[i];
                            }
                            AnnotationParameterValue paramValue;
                            paramValue._d(TK_UINT16);
                            paramValue.from_string("6");
                            annParam.value(paramValue);
                            ann.param_seq().push_back(annParam);
                        }
                        
                cbf_flag6.detail().ann_custom().push_back(ann);
            }
        }

        type_object->complete().bitmask_type().flag_seq().emplace_back(cbf_flag6);

        CompleteBitflag cbf_flag7;
        cbf_flag7.common().flags().TRY_CONSTRUCT1(false);
        cbf_flag7.common().flags().TRY_CONSTRUCT2(false);
        cbf_flag7.common().flags().IS_EXTERNAL(false);
        cbf_flag7.common().flags().IS_OPTIONAL(false);
        cbf_flag7.common().flags().IS_MUST_UNDERSTAND(false);
        cbf_flag7.common().flags().IS_KEY(false);
        cbf_flag7.common().flags().IS_DEFAULT(false);
        cbf_flag7.common().position(7);
        cbf_flag7.detail().name("flag7");

        // Position annotation always present
        {
            AppliedAnnotation ann;
            ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("position"));
            AppliedAnnotationParameter annParam;
            MD5 message_hash("value");
            for(int i = 0; i < 4; ++i)
            {
                annParam.paramname_hash()[i] = message_hash.digest[i];
            }
            AnnotationParameterValue paramValue;
            paramValue._d(TK_UINT16);
            paramValue.uint_16_value(7);
            annParam.value(paramValue);
            ann.param_seq().push_back(annParam);

            cbf_flag7.detail().ann_custom().push_back(ann);
        }

        type_object->complete().bitmask_type().flag_seq().emplace_back(cbf_flag7);


        TypeIdentifier identifier;
        identifier._d(EK_COMPLETE);

        SerializedPayload_t payload(static_cast<uint32_t>(
            CompleteBitmaskType::getCdrSerializedSize(type_object->complete().bitmask_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("MyBitMask", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("MyBitMask", true);
    }

    const TypeIdentifier* GetBitsetBitmaskIdentifier(bool complete)
    {
        const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BitsetBitmask", complete);
        if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
        {
            return c_identifier;
        }

        GetBitsetBitmaskObject(complete); // Generated inside
        return TypeObjectFactory::get_instance()->get_type_identifier("BitsetBitmask", complete);
    }

    const TypeObject* GetBitsetBitmaskObject(bool complete)
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BitsetBitmask", complete);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }
        else if (complete)
        {
            return GetCompleteBitsetBitmaskObject();
        }
        //else
        return GetMinimalBitsetBitmaskObject();
    }

    const TypeObject* GetMinimalBitsetBitmaskObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BitsetBitmask", false);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_MINIMAL);
        type_object->minimal()._d(TK_STRUCTURE);

        type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
        type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
        type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
        type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
        type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

        MemberId memberId = 0;
        MinimalStructMember mst_mybitset;
        mst_mybitset.common().member_id(memberId++);
        mst_mybitset.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
        mst_mybitset.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
        mst_mybitset.common().member_flags().IS_EXTERNAL(false); // Unsupported
        mst_mybitset.common().member_flags().IS_OPTIONAL(false);
        mst_mybitset.common().member_flags().IS_MUST_UNDERSTAND(false);
        mst_mybitset.common().member_flags().IS_KEY(false);
        mst_mybitset.common().member_flags().IS_DEFAULT(false); // Doesn't apply
        mst_mybitset.common().member_type_id(*bitmodule::GetMyBitsetIdentifier(false));
        MD5 mybitset_hash("mybitset");
        for(int i = 0; i < 4; ++i)
        {
            mst_mybitset.detail().name_hash()[i] = mybitset_hash.digest[i];
        }
        type_object->minimal().struct_type().member_seq().emplace_back(mst_mybitset);

        MinimalStructMember mst_mybitmask;
        mst_mybitmask.common().member_id(memberId++);
        mst_mybitmask.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
        mst_mybitmask.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
        mst_mybitmask.common().member_flags().IS_EXTERNAL(false); // Unsupported
        mst_mybitmask.common().member_flags().IS_OPTIONAL(false);
        mst_mybitmask.common().member_flags().IS_MUST_UNDERSTAND(false);
        mst_mybitmask.common().member_flags().IS_KEY(false);
        mst_mybitmask.common().member_flags().IS_DEFAULT(false); // Doesn't apply
        mst_mybitmask.common().member_type_id(*bitmodule::GetMyBitMaskIdentifier(false));
        MD5 mybitmask_hash("mybitmask");
        for(int i = 0; i < 4; ++i)
        {
            mst_mybitmask.detail().name_hash()[i] = mybitmask_hash.digest[i];
        }
        type_object->minimal().struct_type().member_seq().emplace_back(mst_mybitmask);


        // Header
        // TODO Inheritance
        //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
        //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

        TypeIdentifier identifier;
        identifier._d(EK_MINIMAL);

        SerializedPayload_t payload(static_cast<uint32_t>(
            MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("BitsetBitmask", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("BitsetBitmask", false);
    }

    const TypeObject* GetCompleteBitsetBitmaskObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BitsetBitmask", true);
        if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_COMPLETE);
        type_object->complete()._d(TK_STRUCTURE);

        type_object->complete().struct_type().struct_flags().IS_FINAL(false);
        type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
        type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
        type_object->complete().struct_type().struct_flags().IS_NESTED(false);
        type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

        MemberId memberId = 0;
        CompleteStructMember cst_mybitset;
        cst_mybitset.common().member_id(memberId++);
        cst_mybitset.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
        cst_mybitset.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
        cst_mybitset.common().member_flags().IS_EXTERNAL(false); // Unsupported
        cst_mybitset.common().member_flags().IS_OPTIONAL(false);
        cst_mybitset.common().member_flags().IS_MUST_UNDERSTAND(false);
        cst_mybitset.common().member_flags().IS_KEY(false);
        cst_mybitset.common().member_flags().IS_DEFAULT(false); // Doesn't apply
        cst_mybitset.common().member_type_id(*bitmodule::GetMyBitsetIdentifier(true));
        cst_mybitset.detail().name("mybitset");

        type_object->complete().struct_type().member_seq().emplace_back(cst_mybitset);

        CompleteStructMember cst_mybitmask;
        cst_mybitmask.common().member_id(memberId++);
        cst_mybitmask.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
        cst_mybitmask.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
        cst_mybitmask.common().member_flags().IS_EXTERNAL(false); // Unsupported
        cst_mybitmask.common().member_flags().IS_OPTIONAL(false);
        cst_mybitmask.common().member_flags().IS_MUST_UNDERSTAND(false);
        cst_mybitmask.common().member_flags().IS_KEY(false);
        cst_mybitmask.common().member_flags().IS_DEFAULT(false); // Doesn't apply
        cst_mybitmask.common().member_type_id(*bitmodule::GetMyBitMaskIdentifier(true));
        cst_mybitmask.detail().name("mybitmask");

        type_object->complete().struct_type().member_seq().emplace_back(cst_mybitmask);


        // Header
        type_object->complete().struct_type().header().detail().type_name("BitsetBitmask");
        // TODO inheritance


        TypeIdentifier identifier;
        identifier._d(EK_COMPLETE);

        SerializedPayload_t payload(static_cast<uint32_t>(
            CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("BitsetBitmask", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("BitsetBitmask", true);
    }

    const TypeIdentifier* GetBM2Identifier(bool complete)
    {
        const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BM2", complete);
        if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
        {
            return c_identifier;
        }

        GetBM2Object(complete); // Generated inside
        return TypeObjectFactory::get_instance()->get_type_identifier("BM2", complete);
    }

    const TypeObject* GetBM2Object(bool complete)
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BM2", complete);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }
        else if (complete)
        {
            return GetCompleteBM2Object();
        }
        //else
        return GetMinimalBM2Object();
    }

    const TypeObject* GetMinimalBM2Object()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BM2", false);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_MINIMAL);
        type_object->minimal()._d(TK_STRUCTURE);

        type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
        type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
        type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
        type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
        type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

        MemberId memberId = 0;
        MinimalStructMember mst_two;
        mst_two.common().member_id(memberId++);
        mst_two.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
        mst_two.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
        mst_two.common().member_flags().IS_EXTERNAL(false); // Unsupported
        mst_two.common().member_flags().IS_OPTIONAL(false);
        mst_two.common().member_flags().IS_MUST_UNDERSTAND(false);
        mst_two.common().member_flags().IS_KEY(false);
        mst_two.common().member_flags().IS_DEFAULT(false); // Doesn't apply
        mst_two.common().member_type_id(*bitmodule::GetMyBitMaskIdentifier(false));
        MD5 two_hash("two");
        for(int i = 0; i < 4; ++i)
        {
            mst_two.detail().name_hash()[i] = two_hash.digest[i];
        }
        type_object->minimal().struct_type().member_seq().emplace_back(mst_two);

        MinimalStructMember mst_mylong;
        mst_mylong.common().member_id(memberId++);
        mst_mylong.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
        mst_mylong.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
        mst_mylong.common().member_flags().IS_EXTERNAL(false); // Unsupported
        mst_mylong.common().member_flags().IS_OPTIONAL(false);
        mst_mylong.common().member_flags().IS_MUST_UNDERSTAND(false);
        mst_mylong.common().member_flags().IS_KEY(false);
        mst_mylong.common().member_flags().IS_DEFAULT(false); // Doesn't apply
        mst_mylong.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

        MD5 mylong_hash("mylong");
        for(int i = 0; i < 4; ++i)
        {
            mst_mylong.detail().name_hash()[i] = mylong_hash.digest[i];
        }
        type_object->minimal().struct_type().member_seq().emplace_back(mst_mylong);


        // Header
        // TODO Inheritance
        //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
        //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];
        type_object->minimal().struct_type().header().base_type(*GetBitsetBitmaskIdentifier(false));

        TypeIdentifier identifier;
        identifier._d(EK_MINIMAL);

        SerializedPayload_t payload(static_cast<uint32_t>(
            MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("BM2", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("BM2", false);
    }

    const TypeObject* GetCompleteBM2Object()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BM2", true);
        if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
        {
            return c_type_object;
        }

        TypeObject *type_object = new TypeObject();
        type_object->_d(EK_COMPLETE);
        type_object->complete()._d(TK_STRUCTURE);

        type_object->complete().struct_type().struct_flags().IS_FINAL(false);
        type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
        type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
        type_object->complete().struct_type().struct_flags().IS_NESTED(false);
        type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

        MemberId memberId = 0;
        CompleteStructMember cst_two;
        cst_two.common().member_id(memberId++);
        cst_two.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
        cst_two.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
        cst_two.common().member_flags().IS_EXTERNAL(false); // Unsupported
        cst_two.common().member_flags().IS_OPTIONAL(false);
        cst_two.common().member_flags().IS_MUST_UNDERSTAND(false);
        cst_two.common().member_flags().IS_KEY(false);
        cst_two.common().member_flags().IS_DEFAULT(false); // Doesn't apply
        cst_two.common().member_type_id(*bitmodule::GetMyBitMaskIdentifier(true));
        cst_two.detail().name("two");

        type_object->complete().struct_type().member_seq().emplace_back(cst_two);

        CompleteStructMember cst_mylong;
        cst_mylong.common().member_id(memberId++);
        cst_mylong.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
        cst_mylong.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
        cst_mylong.common().member_flags().IS_EXTERNAL(false); // Unsupported
        cst_mylong.common().member_flags().IS_OPTIONAL(false);
        cst_mylong.common().member_flags().IS_MUST_UNDERSTAND(false);
        cst_mylong.common().member_flags().IS_KEY(false);
        cst_mylong.common().member_flags().IS_DEFAULT(false); // Doesn't apply
        cst_mylong.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

        cst_mylong.detail().name("mylong");

        type_object->complete().struct_type().member_seq().emplace_back(cst_mylong);


        // Header
        type_object->complete().struct_type().header().detail().type_name("BM2");
        // TODO inheritance
        type_object->complete().struct_type().header().base_type(*GetBitsetBitmaskIdentifier(true));


        TypeIdentifier identifier;
        identifier._d(EK_COMPLETE);

        SerializedPayload_t payload(static_cast<uint32_t>(
            CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
        eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
        // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
        eprosima::fastcdr::Cdr ser(
            fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
        payload.encapsulation = CDR_LE;

        type_object->serialize(ser);
        payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
        MD5 objectHash;
        objectHash.update((char*)payload.data, payload.length);
        objectHash.finalize();
        for(int i = 0; i < 14; ++i)
        {
            identifier.equivalence_hash()[i] = objectHash.digest[i];
        }

        TypeObjectFactory::get_instance()->add_type_object("BM2", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("BM2", true);
    }

} // namespace bitmodule
const TypeIdentifier* GetStructTestIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("StructTest", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetStructTestObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("StructTest", complete);
}

const TypeObject* GetStructTestObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructTest", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteStructTestObject();
    }
    //else
    return GetMinimalStructTestObject();
}

const TypeObject* GetMinimalStructTestObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructTest", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_STRUCTURE);

    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    MinimalStructMember mst_charUnion;
    mst_charUnion.common().member_id(memberId++);
    mst_charUnion.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_charUnion.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_charUnion.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_charUnion.common().member_flags().IS_OPTIONAL(false);
    mst_charUnion.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_charUnion.common().member_flags().IS_KEY(false);
    mst_charUnion.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_charUnion.common().member_type_id(*GetWCharUnionIdentifier(false));
    MD5 charUnion_hash("charUnion");
    for(int i = 0; i < 4; ++i)
    {
        mst_charUnion.detail().name_hash()[i] = charUnion_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_charUnion);

    MinimalStructMember mst_octetUnion;
    mst_octetUnion.common().member_id(memberId++);
    mst_octetUnion.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_octetUnion.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_octetUnion.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_octetUnion.common().member_flags().IS_OPTIONAL(false);
    mst_octetUnion.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_octetUnion.common().member_flags().IS_KEY(false);
    mst_octetUnion.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_octetUnion.common().member_type_id(*GetOctetUnionIdentifier(false));
    MD5 octetUnion_hash("octetUnion");
    for(int i = 0; i < 4; ++i)
    {
        mst_octetUnion.detail().name_hash()[i] = octetUnion_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_octetUnion);

    MinimalStructMember mst_int8Union;
    mst_int8Union.common().member_id(memberId++);
    mst_int8Union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int8Union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int8Union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int8Union.common().member_flags().IS_OPTIONAL(false);
    mst_int8Union.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int8Union.common().member_flags().IS_KEY(false);
    mst_int8Union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int8Union.common().member_type_id(*GetInt8UnionIdentifier(false));
    MD5 int8Union_hash("int8Union");
    for(int i = 0; i < 4; ++i)
    {
        mst_int8Union.detail().name_hash()[i] = int8Union_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int8Union);

    MinimalStructMember mst_myStructBits;
    mst_myStructBits.common().member_id(memberId++);
    mst_myStructBits.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_myStructBits.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_myStructBits.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_myStructBits.common().member_flags().IS_OPTIONAL(false);
    mst_myStructBits.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_myStructBits.common().member_flags().IS_KEY(false);
    mst_myStructBits.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_myStructBits.common().member_type_id(*bitmodule::GetBM2Identifier(false));
    MD5 myStructBits_hash("myStructBits");
    for(int i = 0; i < 4; ++i)
    {
        mst_myStructBits.detail().name_hash()[i] = myStructBits_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_myStructBits);


    // Header
    // TODO Inheritance
    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];
    type_object->minimal().struct_type().header().base_type(*GetNewAliasesIdentifier(false));

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("StructTest", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StructTest", false);
}

const TypeObject* GetCompleteStructTestObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructTest", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_STRUCTURE);

    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    CompleteStructMember cst_charUnion;
    cst_charUnion.common().member_id(memberId++);
    cst_charUnion.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_charUnion.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_charUnion.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_charUnion.common().member_flags().IS_OPTIONAL(false);
    cst_charUnion.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_charUnion.common().member_flags().IS_KEY(false);
    cst_charUnion.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_charUnion.common().member_type_id(*GetWCharUnionIdentifier(true));
    cst_charUnion.detail().name("charUnion");

    type_object->complete().struct_type().member_seq().emplace_back(cst_charUnion);

    CompleteStructMember cst_octetUnion;
    cst_octetUnion.common().member_id(memberId++);
    cst_octetUnion.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_octetUnion.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_octetUnion.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_octetUnion.common().member_flags().IS_OPTIONAL(false);
    cst_octetUnion.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_octetUnion.common().member_flags().IS_KEY(false);
    cst_octetUnion.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_octetUnion.common().member_type_id(*GetOctetUnionIdentifier(true));
    cst_octetUnion.detail().name("octetUnion");

    type_object->complete().struct_type().member_seq().emplace_back(cst_octetUnion);

    CompleteStructMember cst_int8Union;
    cst_int8Union.common().member_id(memberId++);
    cst_int8Union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int8Union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int8Union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int8Union.common().member_flags().IS_OPTIONAL(false);
    cst_int8Union.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int8Union.common().member_flags().IS_KEY(false);
    cst_int8Union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int8Union.common().member_type_id(*GetInt8UnionIdentifier(true));
    cst_int8Union.detail().name("int8Union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int8Union);

    CompleteStructMember cst_myStructBits;
    cst_myStructBits.common().member_id(memberId++);
    cst_myStructBits.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_myStructBits.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_myStructBits.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_myStructBits.common().member_flags().IS_OPTIONAL(false);
    cst_myStructBits.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_myStructBits.common().member_flags().IS_KEY(false);
    cst_myStructBits.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_myStructBits.common().member_type_id(*bitmodule::GetBM2Identifier(true));
    cst_myStructBits.detail().name("myStructBits");

    type_object->complete().struct_type().member_seq().emplace_back(cst_myStructBits);


    // Header
    type_object->complete().struct_type().header().detail().type_name("StructTest");
    // TODO inheritance
    type_object->complete().struct_type().header().base_type(*GetNewAliasesIdentifier(true));


    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("StructTest", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StructTest", true);
}
