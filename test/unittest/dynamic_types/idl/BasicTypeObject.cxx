/*!
 * @file BasicTypeObject.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "Basic.h"
#include "BasicTypeObject.h"
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

void registerBasicTypes()
{
    static std::once_flag once_flag;
    std::call_once(once_flag, []()
            {
                TypeObjectFactory *factory = TypeObjectFactory::get_instance();
                factory->add_type_object("MyEnum", GetMyEnumIdentifier(true),
                GetMyEnumObject(true));
                factory->add_type_object("MyEnum", GetMyEnumIdentifier(false),
                GetMyEnumObject(false));

                factory->add_type_object("MyAliasEnum", GetMyAliasEnumIdentifier(true),
                GetMyAliasEnumObject(true));
                factory->add_type_object("MyAliasEnum", GetMyAliasEnumIdentifier(false),
                GetMyAliasEnumObject(false));

                factory->add_type_object("MyAliasAliasEnum", GetMyAliasAliasEnumIdentifier(true),
                GetMyAliasAliasEnumObject(true));
                factory->add_type_object("MyAliasAliasEnum", GetMyAliasAliasEnumIdentifier(false),
                GetMyAliasAliasEnumObject(false));

                factory->add_type_object("EnumStruct", GetEnumStructIdentifier(true),
                GetEnumStructObject(true));
                factory->add_type_object("EnumStruct", GetEnumStructIdentifier(false),
                GetEnumStructObject(false));

                factory->add_type_object("AliasStruct", GetAliasStructIdentifier(true),
                GetAliasStructObject(true));
                factory->add_type_object("AliasStruct", GetAliasStructIdentifier(false),
                GetAliasStructObject(false));

                factory->add_type_object("AliasAliasStruct", GetAliasAliasStructIdentifier(true),
                GetAliasAliasStructObject(true));
                factory->add_type_object("AliasAliasStruct", GetAliasAliasStructIdentifier(false),
                GetAliasAliasStructObject(false));

                factory->add_type_object("BoolStruct", GetBoolStructIdentifier(true),
                GetBoolStructObject(true));
                factory->add_type_object("BoolStruct", GetBoolStructIdentifier(false),
                GetBoolStructObject(false));

                factory->add_type_object("OctetStruct", GetOctetStructIdentifier(true),
                GetOctetStructObject(true));
                factory->add_type_object("OctetStruct", GetOctetStructIdentifier(false),
                GetOctetStructObject(false));

                factory->add_type_object("ShortStruct", GetShortStructIdentifier(true),
                GetShortStructObject(true));
                factory->add_type_object("ShortStruct", GetShortStructIdentifier(false),
                GetShortStructObject(false));

                factory->add_type_object("LongStruct", GetLongStructIdentifier(true),
                GetLongStructObject(true));
                factory->add_type_object("LongStruct", GetLongStructIdentifier(false),
                GetLongStructObject(false));

                factory->add_type_object("LongLongStruct", GetLongLongStructIdentifier(true),
                GetLongLongStructObject(true));
                factory->add_type_object("LongLongStruct", GetLongLongStructIdentifier(false),
                GetLongLongStructObject(false));

                factory->add_type_object("UShortStruct", GetUShortStructIdentifier(true),
                GetUShortStructObject(true));
                factory->add_type_object("UShortStruct", GetUShortStructIdentifier(false),
                GetUShortStructObject(false));

                factory->add_type_object("ULongStruct", GetULongStructIdentifier(true),
                GetULongStructObject(true));
                factory->add_type_object("ULongStruct", GetULongStructIdentifier(false),
                GetULongStructObject(false));

                factory->add_type_object("ULongLongStruct", GetULongLongStructIdentifier(true),
                GetULongLongStructObject(true));
                factory->add_type_object("ULongLongStruct", GetULongLongStructIdentifier(false),
                GetULongLongStructObject(false));

                factory->add_type_object("FloatStruct", GetFloatStructIdentifier(true),
                GetFloatStructObject(true));
                factory->add_type_object("FloatStruct", GetFloatStructIdentifier(false),
                GetFloatStructObject(false));

                factory->add_type_object("DoubleStruct", GetDoubleStructIdentifier(true),
                GetDoubleStructObject(true));
                factory->add_type_object("DoubleStruct", GetDoubleStructIdentifier(false),
                GetDoubleStructObject(false));

                factory->add_type_object("LongDoubleStruct", GetLongDoubleStructIdentifier(true),
                GetLongDoubleStructObject(true));
                factory->add_type_object("LongDoubleStruct", GetLongDoubleStructIdentifier(false),
                GetLongDoubleStructObject(false));

                factory->add_type_object("CharStruct", GetCharStructIdentifier(true),
                GetCharStructObject(true));
                factory->add_type_object("CharStruct", GetCharStructIdentifier(false),
                GetCharStructObject(false));

                factory->add_type_object("WCharStruct", GetWCharStructIdentifier(true),
                GetWCharStructObject(true));
                factory->add_type_object("WCharStruct", GetWCharStructIdentifier(false),
                GetWCharStructObject(false));

                factory->add_type_object("StringStruct", GetStringStructIdentifier(true),
                GetStringStructObject(true));
                factory->add_type_object("StringStruct", GetStringStructIdentifier(false),
                GetStringStructObject(false));

                factory->add_type_object("WStringStruct", GetWStringStructIdentifier(true),
                GetWStringStructObject(true));
                factory->add_type_object("WStringStruct", GetWStringStructIdentifier(false),
                GetWStringStructObject(false));

                factory->add_type_object("LargeStringStruct", GetLargeStringStructIdentifier(true),
                GetLargeStringStructObject(true));
                factory->add_type_object("LargeStringStruct", GetLargeStringStructIdentifier(false),
                GetLargeStringStructObject(false));

                factory->add_type_object("LargeWStringStruct", GetLargeWStringStructIdentifier(true),
                GetLargeWStringStructObject(true));
                factory->add_type_object("LargeWStringStruct", GetLargeWStringStructIdentifier(false),
                GetLargeWStringStructObject(false));

                factory->add_type_object("ArraytStruct", GetArraytStructIdentifier(true),
                GetArraytStructObject(true));
                factory->add_type_object("ArraytStruct", GetArraytStructIdentifier(false),
                GetArraytStructObject(false));

                factory->add_type_object("MyArray", GetMyArrayIdentifier(true),
                GetMyArrayObject(true));
                factory->add_type_object("MyArray", GetMyArrayIdentifier(false),
                GetMyArrayObject(false));

                factory->add_type_object("ArrayArrayStruct", GetArrayArrayStructIdentifier(true),
                GetArrayArrayStructObject(true));
                factory->add_type_object("ArrayArrayStruct", GetArrayArrayStructIdentifier(false),
                GetArrayArrayStructObject(false));

                factory->add_type_object("SequenceStruct", GetSequenceStructIdentifier(true),
                GetSequenceStructObject(true));
                factory->add_type_object("SequenceStruct", GetSequenceStructIdentifier(false),
                GetSequenceStructObject(false));

                factory->add_type_object("SequenceSequenceStruct", GetSequenceSequenceStructIdentifier(true),
                GetSequenceSequenceStructObject(true));
                factory->add_type_object("SequenceSequenceStruct", GetSequenceSequenceStructIdentifier(false),
                GetSequenceSequenceStructObject(false));

                factory->add_type_object("MapStruct", GetMapStructIdentifier(true),
                GetMapStructObject(true));
                factory->add_type_object("MapStruct", GetMapStructIdentifier(false),
                GetMapStructObject(false));

                factory->add_type_object("MapMapStruct", GetMapMapStructIdentifier(true),
                GetMapMapStructObject(true));
                factory->add_type_object("MapMapStruct", GetMapMapStructIdentifier(false),
                GetMapMapStructObject(false));

                factory->add_type_object("MyBitset", GetMyBitsetIdentifier(true),
                GetMyBitsetObject(true));
                factory->add_type_object("MyBitset", GetMyBitsetIdentifier(false),
                GetMyBitsetObject(false));

                factory->add_type_object("BitsetStruct", GetBitsetStructIdentifier(true),
                GetBitsetStructObject(true));
                factory->add_type_object("BitsetStruct", GetBitsetStructIdentifier(false),
                GetBitsetStructObject(false));

                factory->add_type_object("StructStruct", GetStructStructIdentifier(true),
                GetStructStructObject(true));
                factory->add_type_object("StructStruct", GetStructStructIdentifier(false),
                GetStructStructObject(false));

                factory->add_type_object("StructStructStruct", GetStructStructStructIdentifier(true),
                GetStructStructStructObject(true));
                factory->add_type_object("StructStructStruct", GetStructStructStructIdentifier(false),
                GetStructStructStructObject(false));

                factory->add_type_object("SimpleUnion", GetSimpleUnionIdentifier(true),
                GetSimpleUnionObject(true));
                factory->add_type_object("SimpleUnion", GetSimpleUnionIdentifier(false),
                GetSimpleUnionObject(false));

                factory->add_type_object("UnionUnion", GetUnionUnionIdentifier(true),
                GetUnionUnionObject(true));
                factory->add_type_object("UnionUnion", GetUnionUnionIdentifier(false),
                GetUnionUnionObject(false));

                factory->add_type_object("WCharUnion", GetWCharUnionIdentifier(true),
                GetWCharUnionObject(true));
                factory->add_type_object("WCharUnion", GetWCharUnionIdentifier(false),
                GetWCharUnionObject(false));

                factory->add_type_object("SimpleUnionStruct", GetSimpleUnionStructIdentifier(true),
                GetSimpleUnionStructObject(true));
                factory->add_type_object("SimpleUnionStruct", GetSimpleUnionStructIdentifier(false),
                GetSimpleUnionStructObject(false));

                factory->add_type_object("UnionUnionUnionStruct", GetUnionUnionUnionStructIdentifier(true),
                GetUnionUnionUnionStructObject(true));
                factory->add_type_object("UnionUnionUnionStruct", GetUnionUnionUnionStructIdentifier(false),
                GetUnionUnionUnionStructObject(false));

                factory->add_type_object("WCharUnionStruct", GetWCharUnionStructIdentifier(true),
                GetWCharUnionStructObject(true));
                factory->add_type_object("WCharUnionStruct", GetWCharUnionStructIdentifier(false),
                GetWCharUnionStructObject(false));

            });
}

const TypeIdentifier* GetMyEnumIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyEnum", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyEnumObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyEnum", complete);
}

const TypeObject* GetMyEnumObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnum", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyEnumObject();
    }
    // else
    return GetMinimalMyEnumObject();
}

const TypeObject* GetMinimalMyEnumObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnum", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_ENUM);

    // No flags apply
    //type_object->minimal().enumerated_type().enum_flags().IS_FINAL(false);
    //type_object->minimal().enumerated_type().enum_flags().IS_APPENDABLE(false);
    //type_object->minimal().enumerated_type().enum_flags().IS_MUTABLE(false);
    //type_object->minimal().enumerated_type().enum_flags().IS_NESTED(false);
    //type_object->minimal().enumerated_type().enum_flags().IS_AUTOID_HASH(false);

    type_object->minimal().enumerated_type().header().common().bit_bound(32); // TODO fixed by IDL, isn't?

    uint32_t value = 0;
    MinimalEnumeratedLiteral mel_A;
    mel_A.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_A.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_A.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_A.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_A.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_A.common().flags().IS_KEY(false); // Doesn't apply
    mel_A.common().flags().IS_DEFAULT(false);
    mel_A.common().value(value++);
    MD5 A_hash("A");
    for(int i = 0; i < 4; ++i)
    {
        mel_A.detail().name_hash()[i] = A_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_A);

    MinimalEnumeratedLiteral mel_B;
    mel_B.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_B.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_B.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_B.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_B.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_B.common().flags().IS_KEY(false); // Doesn't apply
    mel_B.common().flags().IS_DEFAULT(false);
    mel_B.common().value(value++);
    MD5 B_hash("B");
    for(int i = 0; i < 4; ++i)
    {
        mel_B.detail().name_hash()[i] = B_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_B);

    MinimalEnumeratedLiteral mel_C;
    mel_C.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_C.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_C.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_C.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_C.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_C.common().flags().IS_KEY(false); // Doesn't apply
    mel_C.common().flags().IS_DEFAULT(false);
    mel_C.common().value(value++);
    MD5 C_hash("C");
    for(int i = 0; i < 4; ++i)
    {
        mel_C.detail().name_hash()[i] = C_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_C);


    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalEnumeratedType::getCdrSerializedSize(type_object->minimal().enumerated_type()) + 4));
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

    TypeObjectFactory::get_instance()->add_type_object("MyEnum", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyEnum", false);
}

const TypeObject* GetCompleteMyEnumObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnum", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_ENUM);

    // No flags apply
    //type_object->complete().enumerated_type().enum_flags().IS_FINAL(false);
    //type_object->complete().enumerated_type().enum_flags().IS_APPENDABLE(false);
    //type_object->complete().enumerated_type().enum_flags().IS_MUTABLE(false);
    //type_object->complete().enumerated_type().enum_flags().IS_NESTED(false);
    //type_object->complete().enumerated_type().enum_flags().IS_AUTOID_HASH(false);

    type_object->complete().enumerated_type().header().common().bit_bound(32); // TODO fixed by IDL, isn't?
    type_object->complete().enumerated_type().header().detail().type_name("MyEnum");


    uint32_t value = 0;
    CompleteEnumeratedLiteral cel_A;
    cel_A.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_A.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_A.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_A.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_A.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_A.common().flags().IS_KEY(false); // Doesn't apply
    cel_A.common().flags().IS_DEFAULT(false);
    cel_A.common().value(value++);
    cel_A.detail().name("A");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_A);

    CompleteEnumeratedLiteral cel_B;
    cel_B.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_B.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_B.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_B.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_B.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_B.common().flags().IS_KEY(false); // Doesn't apply
    cel_B.common().flags().IS_DEFAULT(false);
    cel_B.common().value(value++);
    cel_B.detail().name("B");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_B);

    CompleteEnumeratedLiteral cel_C;
    cel_C.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_C.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_C.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_C.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_C.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_C.common().flags().IS_KEY(false); // Doesn't apply
    cel_C.common().flags().IS_DEFAULT(false);
    cel_C.common().value(value++);
    cel_C.detail().name("C");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_C);


    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteEnumeratedType::getCdrSerializedSize(type_object->complete().enumerated_type()) + 4));
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

    TypeObjectFactory::get_instance()->add_type_object("MyEnum", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyEnum", true);
}

const TypeIdentifier* GetMyAliasEnumIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnum", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyAliasEnumObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnum", complete);
}

const TypeObject* GetMyAliasEnumObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyAliasEnumObject();
    }
    else
    {
        return GetMinimalMyAliasEnumObject();
    }
}

const TypeObject* GetMinimalMyAliasEnumObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_ALIAS);

    // No flags apply
    //type_object->minimal().alias_type().alias_flags().IS_FINAL(false);
    //type_object->minimal().alias_type().alias_flags().IS_APPENDABLE(false);
    //type_object->minimal().alias_type().alias_flags().IS_MUTABLE(false);
    //type_object->minimal().alias_type().alias_flags().IS_NESTED(false);
    //type_object->minimal().alias_type().alias_flags().IS_AUTOID_HASH(false);

    // type_object->minimal().alias_type().header()... Is empty

    // No flags apply
    //type_object->minimal().alias_type().body().common().related_flags().TRY_CONSTRUCT1(false);
    //type_object->minimal().alias_type().body().common().related_flags().TRY_CONSTRUCT2(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_EXTERNAL(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_OPTIONAL(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_MUST_UNDERSTAND(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_KEY(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_DEFAULT(false);

    // Must be defined already, if don't, may be an recursive alias
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier("MyEnum", false);


    if (relatedType != nullptr)
    {
        type_object->minimal().alias_type().body().common().related_type() = *relatedType; // Make a copy
    }
    else
    {
        // Cannot determine base type
        delete type_object;
        return nullptr;
    }

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalAliasType::getCdrSerializedSize(type_object->minimal().alias_type()) + 4));
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

    // Don't add our TypeIdentifier but our alias
    TypeObjectFactory::get_instance()->add_alias("MyAliasEnum", "MyEnum");

    TypeObjectFactory::get_instance()->add_type_object("MyAliasEnum", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum", false);
}

const TypeObject* GetCompleteMyAliasEnumObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_ALIAS);

    // No flags apply
    //type_object->complete().alias_type().alias_flags().IS_FINAL(false);
    //type_object->complete().alias_type().alias_flags().IS_APPENDABLE(false);
    //type_object->complete().alias_type().alias_flags().IS_MUTABLE(false);
    //type_object->complete().alias_type().alias_flags().IS_NESTED(false);
    //type_object->complete().alias_type().alias_flags().IS_AUTOID_HASH(false);

    //type_object->complete().alias_type().header().detail().ann_builtin().verbatim().placement("placement");
    //type_object->complete().alias_type().header().detail().ann_builtin().verbatim().language("language");
    //type_object->complete().alias_type().header().detail().ann_builtin().verbatim().text("text");
    //type_object->complete().alias_type().header().detail().ann_custom().push_back(...);
    type_object->complete().alias_type().header().detail().type_name("MyAliasEnum");

    // No flags apply
    //type_object->complete().alias_type().body().common().related_flags().TRY_CONSTRUCT1(false);
    //type_object->complete().alias_type().body().common().related_flags().TRY_CONSTRUCT2(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_EXTERNAL(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_OPTIONAL(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_MUST_UNDERSTAND(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_KEY(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_DEFAULT(false);

    //type_object->complete().alias_type().body().common().ann_builtin()
    //type_object->complete().alias_type().body().common().ann_custom()

    // Must be defined already, if don't, may be an recursive alias
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("MyEnum");


    if (relatedType != nullptr)
    {
        type_object->complete().alias_type().body().common().related_type() = *relatedType; // Make a copy
    }
    else
    {
        // Cannot determine base type
        delete type_object;
        return nullptr;
    }

    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteAliasType::getCdrSerializedSize(type_object->complete().alias_type()) + 4));
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

    // Don't add our TypeIdentifier but our alias
    TypeObjectFactory::get_instance()->add_alias("MyAliasEnum", "MyEnum");

    TypeObjectFactory::get_instance()->add_type_object("MyAliasEnum", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum", true);
}

const TypeIdentifier* GetMyAliasAliasEnumIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyAliasAliasEnum", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyAliasAliasEnumObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyAliasAliasEnum", complete);
}

const TypeObject* GetMyAliasAliasEnumObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasAliasEnum", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyAliasAliasEnumObject();
    }
    else
    {
        return GetMinimalMyAliasAliasEnumObject();
    }
}

const TypeObject* GetMinimalMyAliasAliasEnumObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasAliasEnum", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_ALIAS);

    // No flags apply
    //type_object->minimal().alias_type().alias_flags().IS_FINAL(false);
    //type_object->minimal().alias_type().alias_flags().IS_APPENDABLE(false);
    //type_object->minimal().alias_type().alias_flags().IS_MUTABLE(false);
    //type_object->minimal().alias_type().alias_flags().IS_NESTED(false);
    //type_object->minimal().alias_type().alias_flags().IS_AUTOID_HASH(false);

    // type_object->minimal().alias_type().header()... Is empty

    // No flags apply
    //type_object->minimal().alias_type().body().common().related_flags().TRY_CONSTRUCT1(false);
    //type_object->minimal().alias_type().body().common().related_flags().TRY_CONSTRUCT2(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_EXTERNAL(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_OPTIONAL(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_MUST_UNDERSTAND(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_KEY(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_DEFAULT(false);

    // Must be defined already, if don't, may be an recursive alias
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnum", false);


    if (relatedType != nullptr)
    {
        type_object->minimal().alias_type().body().common().related_type() = *relatedType; // Make a copy
    }
    else
    {
        // Cannot determine base type
        delete type_object;
        return nullptr;
    }

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalAliasType::getCdrSerializedSize(type_object->minimal().alias_type()) + 4));
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

    // Don't add our TypeIdentifier but our alias
    TypeObjectFactory::get_instance()->add_alias("MyAliasAliasEnum", "MyAliasEnum");

    TypeObjectFactory::get_instance()->add_type_object("MyAliasAliasEnum", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasAliasEnum", false);
}

const TypeObject* GetCompleteMyAliasAliasEnumObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasAliasEnum", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_ALIAS);

    // No flags apply
    //type_object->complete().alias_type().alias_flags().IS_FINAL(false);
    //type_object->complete().alias_type().alias_flags().IS_APPENDABLE(false);
    //type_object->complete().alias_type().alias_flags().IS_MUTABLE(false);
    //type_object->complete().alias_type().alias_flags().IS_NESTED(false);
    //type_object->complete().alias_type().alias_flags().IS_AUTOID_HASH(false);

    //type_object->complete().alias_type().header().detail().ann_builtin().verbatim().placement("placement");
    //type_object->complete().alias_type().header().detail().ann_builtin().verbatim().language("language");
    //type_object->complete().alias_type().header().detail().ann_builtin().verbatim().text("text");
    //type_object->complete().alias_type().header().detail().ann_custom().push_back(...);
    type_object->complete().alias_type().header().detail().type_name("MyAliasAliasEnum");

    // No flags apply
    //type_object->complete().alias_type().body().common().related_flags().TRY_CONSTRUCT1(false);
    //type_object->complete().alias_type().body().common().related_flags().TRY_CONSTRUCT2(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_EXTERNAL(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_OPTIONAL(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_MUST_UNDERSTAND(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_KEY(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_DEFAULT(false);

    //type_object->complete().alias_type().body().common().ann_builtin()
    //type_object->complete().alias_type().body().common().ann_custom()

    // Must be defined already, if don't, may be an recursive alias
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("MyAliasEnum");


    if (relatedType != nullptr)
    {
        type_object->complete().alias_type().body().common().related_type() = *relatedType; // Make a copy
    }
    else
    {
        // Cannot determine base type
        delete type_object;
        return nullptr;
    }

    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteAliasType::getCdrSerializedSize(type_object->complete().alias_type()) + 4));
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

    // Don't add our TypeIdentifier but our alias
    TypeObjectFactory::get_instance()->add_alias("MyAliasAliasEnum", "MyAliasEnum");

    TypeObjectFactory::get_instance()->add_type_object("MyAliasAliasEnum", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasAliasEnum", true);
}

const TypeIdentifier* GetEnumStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("EnumStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetEnumStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("EnumStruct", complete);
}

const TypeObject* GetEnumStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("EnumStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteEnumStructObject();
    }
    //else
    return GetMinimalEnumStructObject();
}

const TypeObject* GetMinimalEnumStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("EnumStruct", false);
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
    MinimalStructMember mst_my_enum;
    mst_my_enum.common().member_id(memberId++);
    mst_my_enum.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_enum.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_enum.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_enum.common().member_flags().IS_OPTIONAL(false);
    mst_my_enum.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_enum.common().member_flags().IS_KEY(false);
    mst_my_enum.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_enum.common().member_type_id(*GetMyEnumIdentifier(false));
    MD5 my_enum_hash("my_enum");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_enum.detail().name_hash()[i] = my_enum_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_enum);


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

    TypeObjectFactory::get_instance()->add_type_object("EnumStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("EnumStruct", false);
}

const TypeObject* GetCompleteEnumStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("EnumStruct", true);
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
    CompleteStructMember cst_my_enum;
    cst_my_enum.common().member_id(memberId++);
    cst_my_enum.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_enum.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_enum.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_enum.common().member_flags().IS_OPTIONAL(false);
    cst_my_enum.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_enum.common().member_flags().IS_KEY(false);
    cst_my_enum.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_enum.common().member_type_id(*GetMyEnumIdentifier(true));
    cst_my_enum.detail().name("my_enum");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_enum);


    // Header
    type_object->complete().struct_type().header().detail().type_name("EnumStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("EnumStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("EnumStruct", true);
}

const TypeIdentifier* GetAliasStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("AliasStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetAliasStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("AliasStruct", complete);
}

const TypeObject* GetAliasStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("AliasStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteAliasStructObject();
    }
    //else
    return GetMinimalAliasStructObject();
}

const TypeObject* GetMinimalAliasStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("AliasStruct", false);
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
    MinimalStructMember mst_my_alias;
    mst_my_alias.common().member_id(memberId++);
    mst_my_alias.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_alias.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_alias.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_alias.common().member_flags().IS_OPTIONAL(false);
    mst_my_alias.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_alias.common().member_flags().IS_KEY(false);
    mst_my_alias.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_alias.common().member_type_id(*GetMyAliasEnumIdentifier(false));
    MD5 my_alias_hash("my_alias");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_alias.detail().name_hash()[i] = my_alias_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_alias);


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

    TypeObjectFactory::get_instance()->add_type_object("AliasStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("AliasStruct", false);
}

const TypeObject* GetCompleteAliasStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("AliasStruct", true);
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
    CompleteStructMember cst_my_alias;
    cst_my_alias.common().member_id(memberId++);
    cst_my_alias.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_alias.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_alias.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_alias.common().member_flags().IS_OPTIONAL(false);
    cst_my_alias.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_alias.common().member_flags().IS_KEY(false);
    cst_my_alias.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_alias.common().member_type_id(*GetMyAliasEnumIdentifier(true));
    cst_my_alias.detail().name("my_alias");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_alias);


    // Header
    type_object->complete().struct_type().header().detail().type_name("AliasStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("AliasStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("AliasStruct", true);
}

const TypeIdentifier* GetAliasAliasStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("AliasAliasStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetAliasAliasStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("AliasAliasStruct", complete);
}

const TypeObject* GetAliasAliasStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("AliasAliasStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteAliasAliasStructObject();
    }
    //else
    return GetMinimalAliasAliasStructObject();
}

const TypeObject* GetMinimalAliasAliasStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("AliasAliasStruct", false);
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
    MinimalStructMember mst_my_alias_alias;
    mst_my_alias_alias.common().member_id(memberId++);
    mst_my_alias_alias.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_alias_alias.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_alias_alias.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_alias_alias.common().member_flags().IS_OPTIONAL(false);
    mst_my_alias_alias.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_alias_alias.common().member_flags().IS_KEY(false);
    mst_my_alias_alias.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_alias_alias.common().member_type_id(*GetMyAliasAliasEnumIdentifier(false));
    MD5 my_alias_alias_hash("my_alias_alias");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_alias_alias.detail().name_hash()[i] = my_alias_alias_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_alias_alias);


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

    TypeObjectFactory::get_instance()->add_type_object("AliasAliasStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("AliasAliasStruct", false);
}

const TypeObject* GetCompleteAliasAliasStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("AliasAliasStruct", true);
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
    CompleteStructMember cst_my_alias_alias;
    cst_my_alias_alias.common().member_id(memberId++);
    cst_my_alias_alias.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_alias_alias.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_alias_alias.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_alias_alias.common().member_flags().IS_OPTIONAL(false);
    cst_my_alias_alias.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_alias_alias.common().member_flags().IS_KEY(false);
    cst_my_alias_alias.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_alias_alias.common().member_type_id(*GetMyAliasAliasEnumIdentifier(true));
    cst_my_alias_alias.detail().name("my_alias_alias");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_alias_alias);


    // Header
    type_object->complete().struct_type().header().detail().type_name("AliasAliasStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("AliasAliasStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("AliasAliasStruct", true);
}

const TypeIdentifier* GetBoolStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BoolStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetBoolStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("BoolStruct", complete);
}

const TypeObject* GetBoolStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BoolStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteBoolStructObject();
    }
    //else
    return GetMinimalBoolStructObject();
}

const TypeObject* GetMinimalBoolStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BoolStruct", false);
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
    MinimalStructMember mst_my_bool;
    mst_my_bool.common().member_id(memberId++);
    mst_my_bool.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_bool.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_bool.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_bool.common().member_flags().IS_OPTIONAL(false);
    mst_my_bool.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_bool.common().member_flags().IS_KEY(false);
    mst_my_bool.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_bool.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("bool", false));

    MD5 my_bool_hash("my_bool");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_bool.detail().name_hash()[i] = my_bool_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_bool);


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

    TypeObjectFactory::get_instance()->add_type_object("BoolStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BoolStruct", false);
}

const TypeObject* GetCompleteBoolStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BoolStruct", true);
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
    CompleteStructMember cst_my_bool;
    cst_my_bool.common().member_id(memberId++);
    cst_my_bool.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_bool.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_bool.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_bool.common().member_flags().IS_OPTIONAL(false);
    cst_my_bool.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_bool.common().member_flags().IS_KEY(false);
    cst_my_bool.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_bool.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("bool", false));

    cst_my_bool.detail().name("my_bool");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_bool);


    // Header
    type_object->complete().struct_type().header().detail().type_name("BoolStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("BoolStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BoolStruct", true);
}

const TypeIdentifier* GetOctetStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("OctetStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetOctetStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("OctetStruct", complete);
}

const TypeObject* GetOctetStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("OctetStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteOctetStructObject();
    }
    //else
    return GetMinimalOctetStructObject();
}

const TypeObject* GetMinimalOctetStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("OctetStruct", false);
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
    MinimalStructMember mst_my_octet;
    mst_my_octet.common().member_id(memberId++);
    mst_my_octet.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_octet.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_octet.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_octet.common().member_flags().IS_OPTIONAL(false);
    mst_my_octet.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_octet.common().member_flags().IS_KEY(false);
    mst_my_octet.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_octet.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    MD5 my_octet_hash("my_octet");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_octet.detail().name_hash()[i] = my_octet_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_octet);


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

    TypeObjectFactory::get_instance()->add_type_object("OctetStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("OctetStruct", false);
}

const TypeObject* GetCompleteOctetStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("OctetStruct", true);
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
    CompleteStructMember cst_my_octet;
    cst_my_octet.common().member_id(memberId++);
    cst_my_octet.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_octet.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_octet.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_octet.common().member_flags().IS_OPTIONAL(false);
    cst_my_octet.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_octet.common().member_flags().IS_KEY(false);
    cst_my_octet.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_octet.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    cst_my_octet.detail().name("my_octet");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_octet);


    // Header
    type_object->complete().struct_type().header().detail().type_name("OctetStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("OctetStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("OctetStruct", true);
}

const TypeIdentifier* GetShortStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ShortStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetShortStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ShortStruct", complete);
}

const TypeObject* GetShortStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ShortStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteShortStructObject();
    }
    //else
    return GetMinimalShortStructObject();
}

const TypeObject* GetMinimalShortStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ShortStruct", false);
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
    MinimalStructMember mst_my_int16;
    mst_my_int16.common().member_id(memberId++);
    mst_my_int16.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_int16.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_int16.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_int16.common().member_flags().IS_OPTIONAL(false);
    mst_my_int16.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_int16.common().member_flags().IS_KEY(false);
    mst_my_int16.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_int16.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int16_t", false));

    MD5 my_int16_hash("my_int16");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_int16.detail().name_hash()[i] = my_int16_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_int16);


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

    TypeObjectFactory::get_instance()->add_type_object("ShortStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ShortStruct", false);
}

const TypeObject* GetCompleteShortStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ShortStruct", true);
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
    CompleteStructMember cst_my_int16;
    cst_my_int16.common().member_id(memberId++);
    cst_my_int16.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_int16.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_int16.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_int16.common().member_flags().IS_OPTIONAL(false);
    cst_my_int16.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_int16.common().member_flags().IS_KEY(false);
    cst_my_int16.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_int16.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int16_t", false));

    cst_my_int16.detail().name("my_int16");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_int16);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ShortStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ShortStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ShortStruct", true);
}

const TypeIdentifier* GetLongStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("LongStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetLongStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("LongStruct", complete);
}

const TypeObject* GetLongStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LongStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteLongStructObject();
    }
    //else
    return GetMinimalLongStructObject();
}

const TypeObject* GetMinimalLongStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LongStruct", false);
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
    MinimalStructMember mst_my_int32;
    mst_my_int32.common().member_id(memberId++);
    mst_my_int32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_int32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_int32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_int32.common().member_flags().IS_OPTIONAL(false);
    mst_my_int32.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_int32.common().member_flags().IS_KEY(false);
    mst_my_int32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_int32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MD5 my_int32_hash("my_int32");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_int32.detail().name_hash()[i] = my_int32_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_int32);


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

    TypeObjectFactory::get_instance()->add_type_object("LongStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LongStruct", false);
}

const TypeObject* GetCompleteLongStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LongStruct", true);
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
    CompleteStructMember cst_my_int32;
    cst_my_int32.common().member_id(memberId++);
    cst_my_int32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_int32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_int32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_int32.common().member_flags().IS_OPTIONAL(false);
    cst_my_int32.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_int32.common().member_flags().IS_KEY(false);
    cst_my_int32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_int32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    cst_my_int32.detail().name("my_int32");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_int32);


    // Header
    type_object->complete().struct_type().header().detail().type_name("LongStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("LongStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LongStruct", true);
}

const TypeIdentifier* GetLongLongStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("LongLongStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetLongLongStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("LongLongStruct", complete);
}

const TypeObject* GetLongLongStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LongLongStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteLongLongStructObject();
    }
    //else
    return GetMinimalLongLongStructObject();
}

const TypeObject* GetMinimalLongLongStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LongLongStruct", false);
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
    MinimalStructMember mst_my_int64;
    mst_my_int64.common().member_id(memberId++);
    mst_my_int64.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_int64.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_int64.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_int64.common().member_flags().IS_OPTIONAL(false);
    mst_my_int64.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_int64.common().member_flags().IS_KEY(false);
    mst_my_int64.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_int64.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    MD5 my_int64_hash("my_int64");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_int64.detail().name_hash()[i] = my_int64_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_int64);


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

    TypeObjectFactory::get_instance()->add_type_object("LongLongStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LongLongStruct", false);
}

const TypeObject* GetCompleteLongLongStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LongLongStruct", true);
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
    CompleteStructMember cst_my_int64;
    cst_my_int64.common().member_id(memberId++);
    cst_my_int64.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_int64.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_int64.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_int64.common().member_flags().IS_OPTIONAL(false);
    cst_my_int64.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_int64.common().member_flags().IS_KEY(false);
    cst_my_int64.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_int64.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    cst_my_int64.detail().name("my_int64");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_int64);


    // Header
    type_object->complete().struct_type().header().detail().type_name("LongLongStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("LongLongStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LongLongStruct", true);
}

const TypeIdentifier* GetUShortStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("UShortStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetUShortStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("UShortStruct", complete);
}

const TypeObject* GetUShortStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("UShortStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteUShortStructObject();
    }
    //else
    return GetMinimalUShortStructObject();
}

const TypeObject* GetMinimalUShortStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("UShortStruct", false);
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
    MinimalStructMember mst_my_uint16;
    mst_my_uint16.common().member_id(memberId++);
    mst_my_uint16.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_uint16.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_uint16.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_uint16.common().member_flags().IS_OPTIONAL(false);
    mst_my_uint16.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_uint16.common().member_flags().IS_KEY(false);
    mst_my_uint16.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_uint16.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

    MD5 my_uint16_hash("my_uint16");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_uint16.detail().name_hash()[i] = my_uint16_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_uint16);


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

    TypeObjectFactory::get_instance()->add_type_object("UShortStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("UShortStruct", false);
}

const TypeObject* GetCompleteUShortStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("UShortStruct", true);
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
    CompleteStructMember cst_my_uint16;
    cst_my_uint16.common().member_id(memberId++);
    cst_my_uint16.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_uint16.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_uint16.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_uint16.common().member_flags().IS_OPTIONAL(false);
    cst_my_uint16.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_uint16.common().member_flags().IS_KEY(false);
    cst_my_uint16.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_uint16.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

    cst_my_uint16.detail().name("my_uint16");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_uint16);


    // Header
    type_object->complete().struct_type().header().detail().type_name("UShortStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("UShortStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("UShortStruct", true);
}

const TypeIdentifier* GetULongStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ULongStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetULongStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ULongStruct", complete);
}

const TypeObject* GetULongStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ULongStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteULongStructObject();
    }
    //else
    return GetMinimalULongStructObject();
}

const TypeObject* GetMinimalULongStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ULongStruct", false);
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
    MinimalStructMember mst_my_uint32;
    mst_my_uint32.common().member_id(memberId++);
    mst_my_uint32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_uint32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_uint32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_uint32.common().member_flags().IS_OPTIONAL(false);
    mst_my_uint32.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_uint32.common().member_flags().IS_KEY(false);
    mst_my_uint32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_uint32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    MD5 my_uint32_hash("my_uint32");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_uint32.detail().name_hash()[i] = my_uint32_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_uint32);


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

    TypeObjectFactory::get_instance()->add_type_object("ULongStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ULongStruct", false);
}

const TypeObject* GetCompleteULongStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ULongStruct", true);
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
    CompleteStructMember cst_my_uint32;
    cst_my_uint32.common().member_id(memberId++);
    cst_my_uint32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_uint32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_uint32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_uint32.common().member_flags().IS_OPTIONAL(false);
    cst_my_uint32.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_uint32.common().member_flags().IS_KEY(false);
    cst_my_uint32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_uint32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    cst_my_uint32.detail().name("my_uint32");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_uint32);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ULongStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ULongStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ULongStruct", true);
}

const TypeIdentifier* GetULongLongStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ULongLongStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetULongLongStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ULongLongStruct", complete);
}

const TypeObject* GetULongLongStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ULongLongStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteULongLongStructObject();
    }
    //else
    return GetMinimalULongLongStructObject();
}

const TypeObject* GetMinimalULongLongStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ULongLongStruct", false);
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
    MinimalStructMember mst_my_uint64;
    mst_my_uint64.common().member_id(memberId++);
    mst_my_uint64.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_uint64.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_uint64.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_uint64.common().member_flags().IS_OPTIONAL(false);
    mst_my_uint64.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_uint64.common().member_flags().IS_KEY(false);
    mst_my_uint64.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_uint64.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint64_t", false));

    MD5 my_uint64_hash("my_uint64");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_uint64.detail().name_hash()[i] = my_uint64_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_uint64);


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

    TypeObjectFactory::get_instance()->add_type_object("ULongLongStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ULongLongStruct", false);
}

const TypeObject* GetCompleteULongLongStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ULongLongStruct", true);
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
    CompleteStructMember cst_my_uint64;
    cst_my_uint64.common().member_id(memberId++);
    cst_my_uint64.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_uint64.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_uint64.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_uint64.common().member_flags().IS_OPTIONAL(false);
    cst_my_uint64.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_uint64.common().member_flags().IS_KEY(false);
    cst_my_uint64.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_uint64.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint64_t", false));

    cst_my_uint64.detail().name("my_uint64");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_uint64);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ULongLongStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ULongLongStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ULongLongStruct", true);
}

const TypeIdentifier* GetFloatStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("FloatStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetFloatStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("FloatStruct", complete);
}

const TypeObject* GetFloatStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("FloatStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteFloatStructObject();
    }
    //else
    return GetMinimalFloatStructObject();
}

const TypeObject* GetMinimalFloatStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("FloatStruct", false);
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
    MinimalStructMember mst_my_float32;
    mst_my_float32.common().member_id(memberId++);
    mst_my_float32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_float32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_float32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_float32.common().member_flags().IS_OPTIONAL(false);
    mst_my_float32.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_float32.common().member_flags().IS_KEY(false);
    mst_my_float32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_float32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("float", false));

    MD5 my_float32_hash("my_float32");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_float32.detail().name_hash()[i] = my_float32_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_float32);


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

    TypeObjectFactory::get_instance()->add_type_object("FloatStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("FloatStruct", false);
}

const TypeObject* GetCompleteFloatStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("FloatStruct", true);
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
    CompleteStructMember cst_my_float32;
    cst_my_float32.common().member_id(memberId++);
    cst_my_float32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_float32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_float32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_float32.common().member_flags().IS_OPTIONAL(false);
    cst_my_float32.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_float32.common().member_flags().IS_KEY(false);
    cst_my_float32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_float32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("float", false));

    cst_my_float32.detail().name("my_float32");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_float32);


    // Header
    type_object->complete().struct_type().header().detail().type_name("FloatStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("FloatStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("FloatStruct", true);
}

const TypeIdentifier* GetDoubleStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("DoubleStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetDoubleStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("DoubleStruct", complete);
}

const TypeObject* GetDoubleStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("DoubleStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteDoubleStructObject();
    }
    //else
    return GetMinimalDoubleStructObject();
}

const TypeObject* GetMinimalDoubleStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("DoubleStruct", false);
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
    MinimalStructMember mst_my_float64;
    mst_my_float64.common().member_id(memberId++);
    mst_my_float64.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_float64.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_float64.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_float64.common().member_flags().IS_OPTIONAL(false);
    mst_my_float64.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_float64.common().member_flags().IS_KEY(false);
    mst_my_float64.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_float64.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("double", false));

    MD5 my_float64_hash("my_float64");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_float64.detail().name_hash()[i] = my_float64_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_float64);


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

    TypeObjectFactory::get_instance()->add_type_object("DoubleStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("DoubleStruct", false);
}

const TypeObject* GetCompleteDoubleStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("DoubleStruct", true);
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
    CompleteStructMember cst_my_float64;
    cst_my_float64.common().member_id(memberId++);
    cst_my_float64.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_float64.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_float64.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_float64.common().member_flags().IS_OPTIONAL(false);
    cst_my_float64.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_float64.common().member_flags().IS_KEY(false);
    cst_my_float64.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_float64.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("double", false));

    cst_my_float64.detail().name("my_float64");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_float64);


    // Header
    type_object->complete().struct_type().header().detail().type_name("DoubleStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("DoubleStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("DoubleStruct", true);
}

const TypeIdentifier* GetLongDoubleStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("LongDoubleStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetLongDoubleStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("LongDoubleStruct", complete);
}

const TypeObject* GetLongDoubleStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LongDoubleStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteLongDoubleStructObject();
    }
    //else
    return GetMinimalLongDoubleStructObject();
}

const TypeObject* GetMinimalLongDoubleStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LongDoubleStruct", false);
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
    MinimalStructMember mst_my_float128;
    mst_my_float128.common().member_id(memberId++);
    mst_my_float128.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_float128.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_float128.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_float128.common().member_flags().IS_OPTIONAL(false);
    mst_my_float128.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_float128.common().member_flags().IS_KEY(false);
    mst_my_float128.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_float128.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("longdouble", false));

    MD5 my_float128_hash("my_float128");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_float128.detail().name_hash()[i] = my_float128_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_float128);


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

    TypeObjectFactory::get_instance()->add_type_object("LongDoubleStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LongDoubleStruct", false);
}

const TypeObject* GetCompleteLongDoubleStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LongDoubleStruct", true);
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
    CompleteStructMember cst_my_float128;
    cst_my_float128.common().member_id(memberId++);
    cst_my_float128.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_float128.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_float128.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_float128.common().member_flags().IS_OPTIONAL(false);
    cst_my_float128.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_float128.common().member_flags().IS_KEY(false);
    cst_my_float128.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_float128.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("longdouble", false));

    cst_my_float128.detail().name("my_float128");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_float128);


    // Header
    type_object->complete().struct_type().header().detail().type_name("LongDoubleStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("LongDoubleStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LongDoubleStruct", true);
}

const TypeIdentifier* GetCharStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("CharStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetCharStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("CharStruct", complete);
}

const TypeObject* GetCharStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("CharStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteCharStructObject();
    }
    //else
    return GetMinimalCharStructObject();
}

const TypeObject* GetMinimalCharStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("CharStruct", false);
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
    MinimalStructMember mst_my_char;
    mst_my_char.common().member_id(memberId++);
    mst_my_char.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_char.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_char.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_char.common().member_flags().IS_OPTIONAL(false);
    mst_my_char.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_char.common().member_flags().IS_KEY(false);
    mst_my_char.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_char.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("char", false));

    MD5 my_char_hash("my_char");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_char.detail().name_hash()[i] = my_char_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_char);


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

    TypeObjectFactory::get_instance()->add_type_object("CharStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("CharStruct", false);
}

const TypeObject* GetCompleteCharStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("CharStruct", true);
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
    CompleteStructMember cst_my_char;
    cst_my_char.common().member_id(memberId++);
    cst_my_char.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_char.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_char.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_char.common().member_flags().IS_OPTIONAL(false);
    cst_my_char.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_char.common().member_flags().IS_KEY(false);
    cst_my_char.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_char.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("char", false));

    cst_my_char.detail().name("my_char");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_char);


    // Header
    type_object->complete().struct_type().header().detail().type_name("CharStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("CharStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("CharStruct", true);
}

const TypeIdentifier* GetWCharStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("WCharStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetWCharStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("WCharStruct", complete);
}

const TypeObject* GetWCharStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WCharStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteWCharStructObject();
    }
    //else
    return GetMinimalWCharStructObject();
}

const TypeObject* GetMinimalWCharStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WCharStruct", false);
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
    MinimalStructMember mst_my_wchar;
    mst_my_wchar.common().member_id(memberId++);
    mst_my_wchar.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_wchar.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_wchar.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_wchar.common().member_flags().IS_OPTIONAL(false);
    mst_my_wchar.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_wchar.common().member_flags().IS_KEY(false);
    mst_my_wchar.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_wchar.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("wchar_t", false));

    MD5 my_wchar_hash("my_wchar");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_wchar.detail().name_hash()[i] = my_wchar_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_wchar);


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

    TypeObjectFactory::get_instance()->add_type_object("WCharStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("WCharStruct", false);
}

const TypeObject* GetCompleteWCharStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WCharStruct", true);
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
    CompleteStructMember cst_my_wchar;
    cst_my_wchar.common().member_id(memberId++);
    cst_my_wchar.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_wchar.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_wchar.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_wchar.common().member_flags().IS_OPTIONAL(false);
    cst_my_wchar.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_wchar.common().member_flags().IS_KEY(false);
    cst_my_wchar.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_wchar.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("wchar_t", false));

    cst_my_wchar.detail().name("my_wchar");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_wchar);


    // Header
    type_object->complete().struct_type().header().detail().type_name("WCharStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("WCharStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("WCharStruct", true);
}

const TypeIdentifier* GetStringStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("StringStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetStringStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("StringStruct", complete);
}

const TypeObject* GetStringStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StringStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteStringStructObject();
    }
    //else
    return GetMinimalStringStructObject();
}

const TypeObject* GetMinimalStringStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StringStruct", false);
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
    MinimalStructMember mst_my_string;
    mst_my_string.common().member_id(memberId++);
    mst_my_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_string.common().member_flags().IS_OPTIONAL(false);
    mst_my_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_string.common().member_flags().IS_KEY(false);
    mst_my_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    MD5 my_string_hash("my_string");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_string.detail().name_hash()[i] = my_string_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_string);


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

    TypeObjectFactory::get_instance()->add_type_object("StringStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StringStruct", false);
}

const TypeObject* GetCompleteStringStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StringStruct", true);
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
    CompleteStructMember cst_my_string;
    cst_my_string.common().member_id(memberId++);
    cst_my_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_string.common().member_flags().IS_OPTIONAL(false);
    cst_my_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_string.common().member_flags().IS_KEY(false);
    cst_my_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    cst_my_string.detail().name("my_string");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_string);


    // Header
    type_object->complete().struct_type().header().detail().type_name("StringStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("StringStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StringStruct", true);
}

const TypeIdentifier* GetWStringStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("WStringStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetWStringStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("WStringStruct", complete);
}

const TypeObject* GetWStringStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WStringStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteWStringStructObject();
    }
    //else
    return GetMinimalWStringStructObject();
}

const TypeObject* GetMinimalWStringStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WStringStruct", false);
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
    MinimalStructMember mst_my_wstring;
    mst_my_wstring.common().member_id(memberId++);
    mst_my_wstring.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_wstring.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_wstring.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_wstring.common().member_flags().IS_OPTIONAL(false);
    mst_my_wstring.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_wstring.common().member_flags().IS_KEY(false);
    mst_my_wstring.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_wstring.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, true));


    MD5 my_wstring_hash("my_wstring");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_wstring.detail().name_hash()[i] = my_wstring_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_wstring);


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

    TypeObjectFactory::get_instance()->add_type_object("WStringStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("WStringStruct", false);
}

const TypeObject* GetCompleteWStringStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WStringStruct", true);
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
    CompleteStructMember cst_my_wstring;
    cst_my_wstring.common().member_id(memberId++);
    cst_my_wstring.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_wstring.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_wstring.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_wstring.common().member_flags().IS_OPTIONAL(false);
    cst_my_wstring.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_wstring.common().member_flags().IS_KEY(false);
    cst_my_wstring.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_wstring.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, true));


    cst_my_wstring.detail().name("my_wstring");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_wstring);


    // Header
    type_object->complete().struct_type().header().detail().type_name("WStringStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("WStringStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("WStringStruct", true);
}

const TypeIdentifier* GetLargeStringStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("LargeStringStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetLargeStringStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("LargeStringStruct", complete);
}

const TypeObject* GetLargeStringStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LargeStringStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteLargeStringStructObject();
    }
    //else
    return GetMinimalLargeStringStructObject();
}

const TypeObject* GetMinimalLargeStringStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LargeStringStruct", false);
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
    MinimalStructMember mst_my_large_string;
    mst_my_large_string.common().member_id(memberId++);
    mst_my_large_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_large_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_large_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_large_string.common().member_flags().IS_OPTIONAL(false);
    mst_my_large_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_large_string.common().member_flags().IS_KEY(false);
    mst_my_large_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_large_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(41925, false));


    MD5 my_large_string_hash("my_large_string");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_large_string.detail().name_hash()[i] = my_large_string_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_large_string);


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

    TypeObjectFactory::get_instance()->add_type_object("LargeStringStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LargeStringStruct", false);
}

const TypeObject* GetCompleteLargeStringStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LargeStringStruct", true);
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
    CompleteStructMember cst_my_large_string;
    cst_my_large_string.common().member_id(memberId++);
    cst_my_large_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_large_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_large_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_large_string.common().member_flags().IS_OPTIONAL(false);
    cst_my_large_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_large_string.common().member_flags().IS_KEY(false);
    cst_my_large_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_large_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(41925, false));


    cst_my_large_string.detail().name("my_large_string");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_large_string);


    // Header
    type_object->complete().struct_type().header().detail().type_name("LargeStringStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("LargeStringStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LargeStringStruct", true);
}

const TypeIdentifier* GetLargeWStringStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("LargeWStringStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetLargeWStringStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("LargeWStringStruct", complete);
}

const TypeObject* GetLargeWStringStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LargeWStringStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteLargeWStringStructObject();
    }
    //else
    return GetMinimalLargeWStringStructObject();
}

const TypeObject* GetMinimalLargeWStringStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LargeWStringStruct", false);
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
    MinimalStructMember mst_my_large_wstring;
    mst_my_large_wstring.common().member_id(memberId++);
    mst_my_large_wstring.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_large_wstring.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_large_wstring.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_large_wstring.common().member_flags().IS_OPTIONAL(false);
    mst_my_large_wstring.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_large_wstring.common().member_flags().IS_KEY(false);
    mst_my_large_wstring.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_large_wstring.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(41925, true));


    MD5 my_large_wstring_hash("my_large_wstring");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_large_wstring.detail().name_hash()[i] = my_large_wstring_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_large_wstring);


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

    TypeObjectFactory::get_instance()->add_type_object("LargeWStringStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LargeWStringStruct", false);
}

const TypeObject* GetCompleteLargeWStringStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("LargeWStringStruct", true);
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
    CompleteStructMember cst_my_large_wstring;
    cst_my_large_wstring.common().member_id(memberId++);
    cst_my_large_wstring.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_large_wstring.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_large_wstring.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_large_wstring.common().member_flags().IS_OPTIONAL(false);
    cst_my_large_wstring.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_large_wstring.common().member_flags().IS_KEY(false);
    cst_my_large_wstring.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_large_wstring.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(41925, true));


    cst_my_large_wstring.detail().name("my_large_wstring");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_large_wstring);


    // Header
    type_object->complete().struct_type().header().detail().type_name("LargeWStringStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("LargeWStringStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("LargeWStringStruct", true);
}

const TypeIdentifier* GetArraytStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ArraytStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetArraytStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ArraytStruct", complete);
}

const TypeObject* GetArraytStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArraytStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteArraytStructObject();
    }
    //else
    return GetMinimalArraytStructObject();
}

const TypeObject* GetMinimalArraytStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArraytStruct", false);
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
    MinimalStructMember mst_my_array;
    mst_my_array.common().member_id(memberId++);
    mst_my_array.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_array.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_array.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_array.common().member_flags().IS_OPTIONAL(false);
    mst_my_array.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_array.common().member_flags().IS_KEY(false);
    mst_my_array.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {2, 2, 2}, false));


    MD5 my_array_hash("my_array");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_array.detail().name_hash()[i] = my_array_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_array);


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

    TypeObjectFactory::get_instance()->add_type_object("ArraytStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArraytStruct", false);
}

const TypeObject* GetCompleteArraytStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArraytStruct", true);
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
    CompleteStructMember cst_my_array;
    cst_my_array.common().member_id(memberId++);
    cst_my_array.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_array.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_array.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_array.common().member_flags().IS_OPTIONAL(false);
    cst_my_array.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_array.common().member_flags().IS_KEY(false);
    cst_my_array.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {2, 2, 2}, true));


    cst_my_array.detail().name("my_array");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ArraytStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ArraytStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArraytStruct", true);
}

const TypeIdentifier* GetMyArrayIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyArray", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyArrayObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyArray", complete);
}

const TypeObject* GetMyArrayObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyArray", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyArrayObject();
    }
    else
    {
        return GetMinimalMyArrayObject();
    }
}

const TypeObject* GetMinimalMyArrayObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyArray", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_ALIAS);

    // No flags apply
    //type_object->minimal().alias_type().alias_flags().IS_FINAL(false);
    //type_object->minimal().alias_type().alias_flags().IS_APPENDABLE(false);
    //type_object->minimal().alias_type().alias_flags().IS_MUTABLE(false);
    //type_object->minimal().alias_type().alias_flags().IS_NESTED(false);
    //type_object->minimal().alias_type().alias_flags().IS_AUTOID_HASH(false);

    // type_object->minimal().alias_type().header()... Is empty

    // No flags apply
    //type_object->minimal().alias_type().body().common().related_flags().TRY_CONSTRUCT1(false);
    //type_object->minimal().alias_type().body().common().related_flags().TRY_CONSTRUCT2(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_EXTERNAL(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_OPTIONAL(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_MUST_UNDERSTAND(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_KEY(false);
    //type_object->minimal().alias_type().body().common().related_flags().IS_DEFAULT(false);

    // Must be defined already, if don't, may be an recursive alias
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier(TypeNamesGenerator::get_array_type_name("int32_t", {2, 2}), false);


    if (relatedType != nullptr)
    {
        type_object->minimal().alias_type().body().common().related_type() = *relatedType; // Make a copy
    }
    else
    {
        // Cannot determine base type
        delete type_object;
        return nullptr;
    }

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalAliasType::getCdrSerializedSize(type_object->minimal().alias_type()) + 4));
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

    // Don't add our TypeIdentifier but our alias
    TypeObjectFactory::get_instance()->add_alias("MyArray", TypeNamesGenerator::get_array_type_name("int32_t", {2, 2}));

    TypeObjectFactory::get_instance()->add_type_object("MyArray", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyArray", false);
}

const TypeObject* GetCompleteMyArrayObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyArray", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_ALIAS);

    // No flags apply
    //type_object->complete().alias_type().alias_flags().IS_FINAL(false);
    //type_object->complete().alias_type().alias_flags().IS_APPENDABLE(false);
    //type_object->complete().alias_type().alias_flags().IS_MUTABLE(false);
    //type_object->complete().alias_type().alias_flags().IS_NESTED(false);
    //type_object->complete().alias_type().alias_flags().IS_AUTOID_HASH(false);

    //type_object->complete().alias_type().header().detail().ann_builtin().verbatim().placement("placement");
    //type_object->complete().alias_type().header().detail().ann_builtin().verbatim().language("language");
    //type_object->complete().alias_type().header().detail().ann_builtin().verbatim().text("text");
    //type_object->complete().alias_type().header().detail().ann_custom().push_back(...);
    type_object->complete().alias_type().header().detail().type_name("MyArray");

    // No flags apply
    //type_object->complete().alias_type().body().common().related_flags().TRY_CONSTRUCT1(false);
    //type_object->complete().alias_type().body().common().related_flags().TRY_CONSTRUCT2(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_EXTERNAL(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_OPTIONAL(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_MUST_UNDERSTAND(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_KEY(false);
    //type_object->complete().alias_type().body().common().related_flags().IS_DEFAULT(false);

    //type_object->complete().alias_type().body().common().ann_builtin()
    //type_object->complete().alias_type().body().common().ann_custom()

    // Must be defined already, if don't, may be an recursive alias
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete(TypeNamesGenerator::get_array_type_name("int32_t", {2, 2}));


    if (relatedType != nullptr)
    {
        type_object->complete().alias_type().body().common().related_type() = *relatedType; // Make a copy
    }
    else
    {
        // Cannot determine base type
        delete type_object;
        return nullptr;
    }

    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteAliasType::getCdrSerializedSize(type_object->complete().alias_type()) + 4));
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

    // Don't add our TypeIdentifier but our alias
    TypeObjectFactory::get_instance()->add_alias("MyArray", TypeNamesGenerator::get_array_type_name("int32_t", {2, 2}));

    TypeObjectFactory::get_instance()->add_type_object("MyArray", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyArray", true);
}

const TypeIdentifier* GetArrayArrayStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ArrayArrayStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetArrayArrayStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ArrayArrayStruct", complete);
}

const TypeObject* GetArrayArrayStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayArrayStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteArrayArrayStructObject();
    }
    //else
    return GetMinimalArrayArrayStructObject();
}

const TypeObject* GetMinimalArrayArrayStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayArrayStruct", false);
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
    MinimalStructMember mst_my_array_array;
    mst_my_array_array.common().member_id(memberId++);
    mst_my_array_array.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_array_array.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_array_array.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_array_array.common().member_flags().IS_OPTIONAL(false);
    mst_my_array_array.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_array_array.common().member_flags().IS_KEY(false);
    mst_my_array_array.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_array_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("MyArray", {2, 2}, false));


    MD5 my_array_array_hash("my_array_array");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_array_array.detail().name_hash()[i] = my_array_array_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_array_array);


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

    TypeObjectFactory::get_instance()->add_type_object("ArrayArrayStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayArrayStruct", false);
}

const TypeObject* GetCompleteArrayArrayStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayArrayStruct", true);
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
    CompleteStructMember cst_my_array_array;
    cst_my_array_array.common().member_id(memberId++);
    cst_my_array_array.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_array_array.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_array_array.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_array_array.common().member_flags().IS_OPTIONAL(false);
    cst_my_array_array.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_array_array.common().member_flags().IS_KEY(false);
    cst_my_array_array.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_array_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("MyArray", {2, 2}, true));


    cst_my_array_array.detail().name("my_array_array");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array_array);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ArrayArrayStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ArrayArrayStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayArrayStruct", true);
}

const TypeIdentifier* GetSequenceStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SequenceStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSequenceStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SequenceStruct", complete);
}

const TypeObject* GetSequenceStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSequenceStructObject();
    }
    //else
    return GetMinimalSequenceStructObject();
}

const TypeObject* GetMinimalSequenceStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceStruct", false);
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
    MinimalStructMember mst_my_sequence;
    mst_my_sequence.common().member_id(memberId++);
    mst_my_sequence.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_sequence.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_sequence.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_sequence.common().member_flags().IS_OPTIONAL(false);
    mst_my_sequence.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_sequence.common().member_flags().IS_KEY(false);
    mst_my_sequence.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", 2, false));


    MD5 my_sequence_hash("my_sequence");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_sequence.detail().name_hash()[i] = my_sequence_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_sequence);


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

    TypeObjectFactory::get_instance()->add_type_object("SequenceStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceStruct", false);
}

const TypeObject* GetCompleteSequenceStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceStruct", true);
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
    CompleteStructMember cst_my_sequence;
    cst_my_sequence.common().member_id(memberId++);
    cst_my_sequence.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_sequence.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_sequence.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_sequence.common().member_flags().IS_OPTIONAL(false);
    cst_my_sequence.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_sequence.common().member_flags().IS_KEY(false);
    cst_my_sequence.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", 2, true));


    cst_my_sequence.detail().name("my_sequence");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_sequence);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SequenceStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SequenceStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceStruct", true);
}

const TypeIdentifier* GetSequenceSequenceStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SequenceSequenceStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSequenceSequenceStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SequenceSequenceStruct", complete);
}

const TypeObject* GetSequenceSequenceStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSequenceSequenceStructObject();
    }
    //else
    return GetMinimalSequenceSequenceStructObject();
}

const TypeObject* GetMinimalSequenceSequenceStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceStruct", false);
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
    MinimalStructMember mst_my_sequence_sequence;
    mst_my_sequence_sequence.common().member_id(memberId++);
    mst_my_sequence_sequence.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_sequence_sequence.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_sequence_sequence.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_sequence_sequence.common().member_flags().IS_OPTIONAL(false);
    mst_my_sequence_sequence.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_sequence_sequence.common().member_flags().IS_KEY(false);
    mst_my_sequence_sequence.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_sequence_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier(TypeNamesGenerator::get_sequence_type_name("int32_t", 2), 3, false));


    MD5 my_sequence_sequence_hash("my_sequence_sequence");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_sequence_sequence.detail().name_hash()[i] = my_sequence_sequence_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_sequence_sequence);


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

    TypeObjectFactory::get_instance()->add_type_object("SequenceSequenceStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceStruct", false);
}

const TypeObject* GetCompleteSequenceSequenceStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceStruct", true);
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
    CompleteStructMember cst_my_sequence_sequence;
    cst_my_sequence_sequence.common().member_id(memberId++);
    cst_my_sequence_sequence.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_sequence_sequence.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_sequence_sequence.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_sequence_sequence.common().member_flags().IS_OPTIONAL(false);
    cst_my_sequence_sequence.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_sequence_sequence.common().member_flags().IS_KEY(false);
    cst_my_sequence_sequence.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_sequence_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier(TypeNamesGenerator::get_sequence_type_name("int32_t", 2), 3, true));


    cst_my_sequence_sequence.detail().name("my_sequence_sequence");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_sequence_sequence);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SequenceSequenceStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SequenceSequenceStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceStruct", true);
}

const TypeIdentifier* GetMapStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MapStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMapStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MapStruct", complete);
}

const TypeObject* GetMapStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMapStructObject();
    }
    //else
    return GetMinimalMapStructObject();
}

const TypeObject* GetMinimalMapStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapStruct", false);
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
    MinimalStructMember mst_my_map;
    mst_my_map.common().member_id(memberId++);
    mst_my_map.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_map.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_map.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_map.common().member_flags().IS_OPTIONAL(false);
    mst_my_map.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_map.common().member_flags().IS_KEY(false);
    mst_my_map.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "int32_t", 2, false));


    MD5 my_map_hash("my_map");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_map.detail().name_hash()[i] = my_map_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_map);


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

    TypeObjectFactory::get_instance()->add_type_object("MapStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapStruct", false);
}

const TypeObject* GetCompleteMapStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapStruct", true);
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
    CompleteStructMember cst_my_map;
    cst_my_map.common().member_id(memberId++);
    cst_my_map.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_map.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_map.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_map.common().member_flags().IS_OPTIONAL(false);
    cst_my_map.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_map.common().member_flags().IS_KEY(false);
    cst_my_map.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "int32_t", 2, true));


    cst_my_map.detail().name("my_map");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MapStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("MapStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapStruct", true);
}

const TypeIdentifier* GetMapMapStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MapMapStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMapMapStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MapMapStruct", complete);
}

const TypeObject* GetMapMapStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapMapStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMapMapStructObject();
    }
    //else
    return GetMinimalMapMapStructObject();
}

const TypeObject* GetMinimalMapMapStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapMapStruct", false);
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
    MinimalStructMember mst_my_map_map;
    mst_my_map_map.common().member_id(memberId++);
    mst_my_map_map.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_map_map.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_map_map.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_map_map.common().member_flags().IS_OPTIONAL(false);
    mst_my_map_map.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_map_map.common().member_flags().IS_KEY(false);
    mst_my_map_map.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_map_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", TypeNamesGenerator::get_map_type_name("int32_t", "int32_t", 2), 2, false));


    MD5 my_map_map_hash("my_map_map");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_map_map.detail().name_hash()[i] = my_map_map_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_map_map);


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

    TypeObjectFactory::get_instance()->add_type_object("MapMapStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapMapStruct", false);
}

const TypeObject* GetCompleteMapMapStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapMapStruct", true);
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
    CompleteStructMember cst_my_map_map;
    cst_my_map_map.common().member_id(memberId++);
    cst_my_map_map.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_map_map.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_map_map.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_map_map.common().member_flags().IS_OPTIONAL(false);
    cst_my_map_map.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_map_map.common().member_flags().IS_KEY(false);
    cst_my_map_map.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_map_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", TypeNamesGenerator::get_map_type_name("int32_t", "int32_t", 2), 2, true));


    cst_my_map_map.detail().name("my_map_map");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map_map);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MapMapStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("MapMapStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapMapStruct", true);
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
    mbf_a.common().bitcount(2);
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
    mbf_b.common().position(10);
    mbf_b.common().bitcount(20);
    mbf_b.common().holder_type(TK_UINT32);
    MD5 b_hash("b");
    for(int i = 0; i < 4; ++i)
    {
        mbf_b.name_hash()[i] = b_hash.digest[i];
    }
    type_object->minimal().bitset_type().field_seq().emplace_back(mbf_b);


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
    cbf_a.common().bitcount(2);
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
        paramValue.uint_16_value(2);
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
    cbf_b.common().position(10);
    cbf_b.common().bitcount(20);
    cbf_b.common().holder_type(TK_UINT32);
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
        paramValue.uint_16_value(10);
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
        paramValue.uint_16_value(20);
        annParam.value(paramValue);
        ann.param_seq().push_back(annParam);

        cbf_b.detail().ann_custom().push_back(ann);
    }

    type_object->complete().bitset_type().field_seq().emplace_back(cbf_b);


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

const TypeIdentifier* GetBitsetStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BitsetStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetBitsetStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("BitsetStruct", complete);
}

const TypeObject* GetBitsetStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BitsetStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteBitsetStructObject();
    }
    //else
    return GetMinimalBitsetStructObject();
}

const TypeObject* GetMinimalBitsetStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BitsetStruct", false);
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
    MinimalStructMember mst_a;
    mst_a.common().member_id(memberId++);
    mst_a.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_a.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_a.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_a.common().member_flags().IS_OPTIONAL(false);
    mst_a.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_a.common().member_flags().IS_KEY(false);
    mst_a.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_a.common().member_type_id(*GetMyBitsetIdentifier(false));
    MD5 a_hash("a");
    for(int i = 0; i < 4; ++i)
    {
        mst_a.detail().name_hash()[i] = a_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_a);


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

    TypeObjectFactory::get_instance()->add_type_object("BitsetStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BitsetStruct", false);
}

const TypeObject* GetCompleteBitsetStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BitsetStruct", true);
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
    CompleteStructMember cst_a;
    cst_a.common().member_id(memberId++);
    cst_a.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_a.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_a.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_a.common().member_flags().IS_OPTIONAL(false);
    cst_a.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_a.common().member_flags().IS_KEY(false);
    cst_a.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_a.common().member_type_id(*GetMyBitsetIdentifier(true));
    cst_a.detail().name("a");

    type_object->complete().struct_type().member_seq().emplace_back(cst_a);


    // Header
    type_object->complete().struct_type().header().detail().type_name("BitsetStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("BitsetStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BitsetStruct", true);
}

const TypeIdentifier* GetStructStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("StructStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetStructStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("StructStruct", complete);
}

const TypeObject* GetStructStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteStructStructObject();
    }
    //else
    return GetMinimalStructStructObject();
}

const TypeObject* GetMinimalStructStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructStruct", false);
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
    MinimalStructMember mst_a;
    mst_a.common().member_id(memberId++);
    mst_a.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_a.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_a.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_a.common().member_flags().IS_OPTIONAL(false);
    mst_a.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_a.common().member_flags().IS_KEY(false);
    mst_a.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_a.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MD5 a_hash("a");
    for(int i = 0; i < 4; ++i)
    {
        mst_a.detail().name_hash()[i] = a_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_a);

    MinimalStructMember mst_b;
    mst_b.common().member_id(memberId++);
    mst_b.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_b.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_b.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_b.common().member_flags().IS_OPTIONAL(false);
    mst_b.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_b.common().member_flags().IS_KEY(false);
    mst_b.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_b.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    MD5 b_hash("b");
    for(int i = 0; i < 4; ++i)
    {
        mst_b.detail().name_hash()[i] = b_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_b);


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

    TypeObjectFactory::get_instance()->add_type_object("StructStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StructStruct", false);
}

const TypeObject* GetCompleteStructStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructStruct", true);
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
    CompleteStructMember cst_a;
    cst_a.common().member_id(memberId++);
    cst_a.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_a.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_a.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_a.common().member_flags().IS_OPTIONAL(false);
    cst_a.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_a.common().member_flags().IS_KEY(false);
    cst_a.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_a.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    cst_a.detail().name("a");

    type_object->complete().struct_type().member_seq().emplace_back(cst_a);

    CompleteStructMember cst_b;
    cst_b.common().member_id(memberId++);
    cst_b.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_b.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_b.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_b.common().member_flags().IS_OPTIONAL(false);
    cst_b.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_b.common().member_flags().IS_KEY(false);
    cst_b.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_b.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    cst_b.detail().name("b");

    type_object->complete().struct_type().member_seq().emplace_back(cst_b);


    // Header
    type_object->complete().struct_type().header().detail().type_name("StructStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("StructStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StructStruct", true);
}

const TypeIdentifier* GetStructStructStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("StructStructStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetStructStructStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("StructStructStruct", complete);
}

const TypeObject* GetStructStructStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructStructStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteStructStructStructObject();
    }
    //else
    return GetMinimalStructStructStructObject();
}

const TypeObject* GetMinimalStructStructStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructStructStruct", false);
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
    MinimalStructMember mst_child_struct;
    mst_child_struct.common().member_id(memberId++);
    mst_child_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_child_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_child_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_child_struct.common().member_flags().IS_OPTIONAL(false);
    mst_child_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_child_struct.common().member_flags().IS_KEY(false);
    mst_child_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_child_struct.common().member_type_id(*GetStructStructIdentifier(false));
    MD5 child_struct_hash("child_struct");
    for(int i = 0; i < 4; ++i)
    {
        mst_child_struct.detail().name_hash()[i] = child_struct_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_child_struct);

    MinimalStructMember mst_child_int64;
    mst_child_int64.common().member_id(memberId++);
    mst_child_int64.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_child_int64.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_child_int64.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_child_int64.common().member_flags().IS_OPTIONAL(false);
    mst_child_int64.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_child_int64.common().member_flags().IS_KEY(false);
    mst_child_int64.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_child_int64.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    MD5 child_int64_hash("child_int64");
    for(int i = 0; i < 4; ++i)
    {
        mst_child_int64.detail().name_hash()[i] = child_int64_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_child_int64);


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

    TypeObjectFactory::get_instance()->add_type_object("StructStructStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StructStructStruct", false);
}

const TypeObject* GetCompleteStructStructStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructStructStruct", true);
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
    CompleteStructMember cst_child_struct;
    cst_child_struct.common().member_id(memberId++);
    cst_child_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_child_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_child_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_child_struct.common().member_flags().IS_OPTIONAL(false);
    cst_child_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_child_struct.common().member_flags().IS_KEY(false);
    cst_child_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_child_struct.common().member_type_id(*GetStructStructIdentifier(true));
    cst_child_struct.detail().name("child_struct");

    type_object->complete().struct_type().member_seq().emplace_back(cst_child_struct);

    CompleteStructMember cst_child_int64;
    cst_child_int64.common().member_id(memberId++);
    cst_child_int64.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_child_int64.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_child_int64.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_child_int64.common().member_flags().IS_OPTIONAL(false);
    cst_child_int64.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_child_int64.common().member_flags().IS_KEY(false);
    cst_child_int64.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_child_int64.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    cst_child_int64.detail().name("child_int64");

    type_object->complete().struct_type().member_seq().emplace_back(cst_child_int64);


    // Header
    type_object->complete().struct_type().header().detail().type_name("StructStructStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("StructStructStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StructStructStruct", true);
}

const TypeIdentifier* GetSimpleUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnion", complete);
}

const TypeObject* GetSimpleUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleUnionObject();
    }
    // else
    return GetMinimalSimpleUnionObject();
}

const TypeObject* GetMinimalSimpleUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnion", false);
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

    type_object->minimal().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MemberId memberId = 0;
    MinimalUnionMember mst_first;
    mst_first.common().member_id(memberId++);
    mst_first.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_first.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_first.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_first.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_first.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_first.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_first.common().member_flags().IS_DEFAULT(false);
    mst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_first.common().label_seq().emplace_back(A);
    MD5 first_hash("first");
    for(int i = 0; i < 4; ++i)
    {
        mst_first.detail().name_hash()[i] = first_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_first);

    MinimalUnionMember mst_second;
    mst_second.common().member_id(memberId++);
    mst_second.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_second.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_second.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_second.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_second.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_second.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_second.common().member_flags().IS_DEFAULT(false);
    mst_second.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    mst_second.common().label_seq().emplace_back(B);
    MD5 second_hash("second");
    for(int i = 0; i < 4; ++i)
    {
        mst_second.detail().name_hash()[i] = second_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_second);


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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnion", false);
}

const TypeObject* GetCompleteSimpleUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnion", true);
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

    type_object->complete().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));


    MemberId memberId = 0;
    CompleteUnionMember cst_first;
    cst_first.common().member_id(memberId++);
    cst_first.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_first.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_first.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_first.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_first.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_first.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_first.common().member_flags().IS_DEFAULT(false);
    cst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_first.common().label_seq().emplace_back(A);

    cst_first.detail().name("first");

    type_object->complete().union_type().member_seq().emplace_back(cst_first);

    CompleteUnionMember cst_second;
    cst_second.common().member_id(memberId++);
    cst_second.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_second.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_second.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_second.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_second.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_second.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_second.common().member_flags().IS_DEFAULT(false);
    cst_second.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));
    cst_second.common().label_seq().emplace_back(B);

    cst_second.detail().name("second");

    type_object->complete().union_type().member_seq().emplace_back(cst_second);


    // Header
    type_object->complete().union_type().header().detail().type_name("SimpleUnion");


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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnion", true);
}

const TypeIdentifier* GetUnionUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("UnionUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetUnionUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("UnionUnion", complete);
}

const TypeObject* GetUnionUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("UnionUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteUnionUnionObject();
    }
    // else
    return GetMinimalUnionUnionObject();
}

const TypeObject* GetMinimalUnionUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("UnionUnion", false);
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

    type_object->minimal().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MemberId memberId = 0;
    MinimalUnionMember mst_first;
    mst_first.common().member_id(memberId++);
    mst_first.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_first.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_first.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_first.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_first.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_first.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_first.common().member_flags().IS_DEFAULT(false);
    mst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_first.common().label_seq().emplace_back(A);
    MD5 first_hash("first");
    for(int i = 0; i < 4; ++i)
    {
        mst_first.detail().name_hash()[i] = first_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_first);

    MinimalUnionMember mst_second;
    mst_second.common().member_id(memberId++);
    mst_second.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_second.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_second.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_second.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_second.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_second.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_second.common().member_flags().IS_DEFAULT(false);
    mst_second.common().type_id(*GetSimpleUnionIdentifier(false));
    mst_second.common().label_seq().emplace_back(B);
    MD5 second_hash("second");
    for(int i = 0; i < 4; ++i)
    {
        mst_second.detail().name_hash()[i] = second_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_second);


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

    TypeObjectFactory::get_instance()->add_type_object("UnionUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("UnionUnion", false);
}

const TypeObject* GetCompleteUnionUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("UnionUnion", true);
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

    type_object->complete().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));


    MemberId memberId = 0;
    CompleteUnionMember cst_first;
    cst_first.common().member_id(memberId++);
    cst_first.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_first.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_first.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_first.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_first.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_first.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_first.common().member_flags().IS_DEFAULT(false);
    cst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_first.common().label_seq().emplace_back(A);

    cst_first.detail().name("first");

    type_object->complete().union_type().member_seq().emplace_back(cst_first);

    CompleteUnionMember cst_second;
    cst_second.common().member_id(memberId++);
    cst_second.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_second.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_second.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_second.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_second.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_second.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_second.common().member_flags().IS_DEFAULT(false);
    cst_second.common().type_id(*GetSimpleUnionIdentifier(true));cst_second.common().label_seq().emplace_back(B);

    cst_second.detail().name("second");

    type_object->complete().union_type().member_seq().emplace_back(cst_second);


    // Header
    type_object->complete().union_type().header().detail().type_name("UnionUnion");


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

    TypeObjectFactory::get_instance()->add_type_object("UnionUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("UnionUnion", true);
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
    MinimalUnionMember mst_first;
    mst_first.common().member_id(memberId++);
    mst_first.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_first.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_first.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_first.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_first.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_first.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_first.common().member_flags().IS_DEFAULT(false);
    mst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_first.common().label_seq().emplace_back(A);
    MD5 first_hash("first");
    for(int i = 0; i < 4; ++i)
    {
        mst_first.detail().name_hash()[i] = first_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_first);

    MinimalUnionMember mst_second;
    mst_second.common().member_id(memberId++);
    mst_second.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_second.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_second.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_second.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_second.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_second.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_second.common().member_flags().IS_DEFAULT(false);
    mst_second.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    mst_second.common().label_seq().emplace_back(B);
    MD5 second_hash("second");
    for(int i = 0; i < 4; ++i)
    {
        mst_second.detail().name_hash()[i] = second_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_second);


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
    CompleteUnionMember cst_first;
    cst_first.common().member_id(memberId++);
    cst_first.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_first.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_first.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_first.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_first.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_first.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_first.common().member_flags().IS_DEFAULT(false);
    cst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_first.common().label_seq().emplace_back(A);

    cst_first.detail().name("first");

    type_object->complete().union_type().member_seq().emplace_back(cst_first);

    CompleteUnionMember cst_second;
    cst_second.common().member_id(memberId++);
    cst_second.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_second.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_second.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_second.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_second.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_second.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_second.common().member_flags().IS_DEFAULT(false);
    cst_second.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));
    cst_second.common().label_seq().emplace_back(B);

    cst_second.detail().name("second");

    type_object->complete().union_type().member_seq().emplace_back(cst_second);


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

const TypeIdentifier* GetSimpleUnionStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnionStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleUnionStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnionStruct", complete);
}

const TypeObject* GetSimpleUnionStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleUnionStructObject();
    }
    //else
    return GetMinimalSimpleUnionStructObject();
}

const TypeObject* GetMinimalSimpleUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStruct", false);
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
    MinimalStructMember mst_my_union;
    mst_my_union.common().member_id(memberId++);
    mst_my_union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_union.common().member_flags().IS_OPTIONAL(false);
    mst_my_union.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_union.common().member_flags().IS_KEY(false);
    mst_my_union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_union.common().member_type_id(*GetSimpleUnionIdentifier(false));
    MD5 my_union_hash("my_union");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_union.detail().name_hash()[i] = my_union_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_union);


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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStruct", false);
}

const TypeObject* GetCompleteSimpleUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStruct", true);
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
    CompleteStructMember cst_my_union;
    cst_my_union.common().member_id(memberId++);
    cst_my_union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_union.common().member_flags().IS_OPTIONAL(false);
    cst_my_union.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_union.common().member_flags().IS_KEY(false);
    cst_my_union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_union.common().member_type_id(*GetSimpleUnionIdentifier(true));
    cst_my_union.detail().name("my_union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SimpleUnionStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStruct", true);
}

const TypeIdentifier* GetUnionUnionUnionStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("UnionUnionUnionStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetUnionUnionUnionStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("UnionUnionUnionStruct", complete);
}

const TypeObject* GetUnionUnionUnionStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("UnionUnionUnionStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteUnionUnionUnionStructObject();
    }
    //else
    return GetMinimalUnionUnionUnionStructObject();
}

const TypeObject* GetMinimalUnionUnionUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("UnionUnionUnionStruct", false);
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
    MinimalStructMember mst_my_union;
    mst_my_union.common().member_id(memberId++);
    mst_my_union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_union.common().member_flags().IS_OPTIONAL(false);
    mst_my_union.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_union.common().member_flags().IS_KEY(false);
    mst_my_union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_union.common().member_type_id(*GetUnionUnionIdentifier(false));
    MD5 my_union_hash("my_union");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_union.detail().name_hash()[i] = my_union_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_union);


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

    TypeObjectFactory::get_instance()->add_type_object("UnionUnionUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("UnionUnionUnionStruct", false);
}

const TypeObject* GetCompleteUnionUnionUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("UnionUnionUnionStruct", true);
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
    CompleteStructMember cst_my_union;
    cst_my_union.common().member_id(memberId++);
    cst_my_union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_union.common().member_flags().IS_OPTIONAL(false);
    cst_my_union.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_union.common().member_flags().IS_KEY(false);
    cst_my_union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_union.common().member_type_id(*GetUnionUnionIdentifier(true));
    cst_my_union.detail().name("my_union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union);


    // Header
    type_object->complete().struct_type().header().detail().type_name("UnionUnionUnionStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("UnionUnionUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("UnionUnionUnionStruct", true);
}

const TypeIdentifier* GetWCharUnionStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("WCharUnionStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetWCharUnionStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("WCharUnionStruct", complete);
}

const TypeObject* GetWCharUnionStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WCharUnionStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteWCharUnionStructObject();
    }
    //else
    return GetMinimalWCharUnionStructObject();
}

const TypeObject* GetMinimalWCharUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WCharUnionStruct", false);
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
    MinimalStructMember mst_my_union;
    mst_my_union.common().member_id(memberId++);
    mst_my_union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_union.common().member_flags().IS_OPTIONAL(false);
    mst_my_union.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_union.common().member_flags().IS_KEY(false);
    mst_my_union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_union.common().member_type_id(*GetWCharUnionIdentifier(false));
    MD5 my_union_hash("my_union");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_union.detail().name_hash()[i] = my_union_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_union);


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

    TypeObjectFactory::get_instance()->add_type_object("WCharUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("WCharUnionStruct", false);
}

const TypeObject* GetCompleteWCharUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("WCharUnionStruct", true);
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
    CompleteStructMember cst_my_union;
    cst_my_union.common().member_id(memberId++);
    cst_my_union.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_union.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_union.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_union.common().member_flags().IS_OPTIONAL(false);
    cst_my_union.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_union.common().member_flags().IS_KEY(false);
    cst_my_union.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_union.common().member_type_id(*GetWCharUnionIdentifier(true));
    cst_my_union.detail().name("my_union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union);


    // Header
    type_object->complete().struct_type().header().detail().type_name("WCharUnionStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("WCharUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("WCharUnionStruct", true);
}
