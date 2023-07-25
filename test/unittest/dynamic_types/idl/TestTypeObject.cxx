/*!
 * @file TestTypeObject.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "Test.h"
#include "TestTypeObject.h"
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

void registerTestTypes()
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

                factory->add_type_object("MyAliasEnum2", GetMyAliasEnum2Identifier(true),
                GetMyAliasEnum2Object(true));
                factory->add_type_object("MyAliasEnum2", GetMyAliasEnum2Identifier(false),
                GetMyAliasEnum2Object(false));

                factory->add_type_object("MyAliasEnum3", GetMyAliasEnum3Identifier(true),
                GetMyAliasEnum3Object(true));
                factory->add_type_object("MyAliasEnum3", GetMyAliasEnum3Identifier(false),
                GetMyAliasEnum3Object(false));

                factory->add_type_object("BasicStruct", GetBasicStructIdentifier(true),
                GetBasicStructObject(true));
                factory->add_type_object("BasicStruct", GetBasicStructIdentifier(false),
                GetBasicStructObject(false));

                factory->add_type_object("MyOctetArray500", GetMyOctetArray500Identifier(true),
                GetMyOctetArray500Object(true));
                factory->add_type_object("MyOctetArray500", GetMyOctetArray500Identifier(false),
                GetMyOctetArray500Object(false));

                factory->add_type_object("BSAlias5", GetBSAlias5Identifier(true),
                GetBSAlias5Object(true));
                factory->add_type_object("BSAlias5", GetBSAlias5Identifier(false),
                GetBSAlias5Object(false));

                factory->add_type_object("MA3", GetMA3Identifier(true),
                GetMA3Object(true));
                factory->add_type_object("MA3", GetMA3Identifier(false),
                GetMA3Object(false));

                factory->add_type_object("MyMiniArray", GetMyMiniArrayIdentifier(true),
                GetMyMiniArrayObject(true));
                factory->add_type_object("MyMiniArray", GetMyMiniArrayIdentifier(false),
                GetMyMiniArrayObject(false));

                factory->add_type_object("MySequenceLong", GetMySequenceLongIdentifier(true),
                GetMySequenceLongObject(true));
                factory->add_type_object("MySequenceLong", GetMySequenceLongIdentifier(false),
                GetMySequenceLongObject(false));

                factory->add_type_object("ComplexStruct", GetComplexStructIdentifier(true),
                GetComplexStructObject(true));
                factory->add_type_object("ComplexStruct", GetComplexStructIdentifier(false),
                GetComplexStructObject(false));

                factory->add_type_object("MyUnion", GetMyUnionIdentifier(true),
                GetMyUnionObject(true));
                factory->add_type_object("MyUnion", GetMyUnionIdentifier(false),
                GetMyUnionObject(false));

                factory->add_type_object("MyUnion2", GetMyUnion2Identifier(true),
                GetMyUnion2Object(true));
                factory->add_type_object("MyUnion2", GetMyUnion2Identifier(false),
                GetMyUnion2Object(false));

                factory->add_type_object("CompleteStruct", GetCompleteStructIdentifier(true),
                GetCompleteStructObject(true));
                factory->add_type_object("CompleteStruct", GetCompleteStructIdentifier(false),
                GetCompleteStructObject(false));

                factory->add_type_object("KeyedStruct", GetKeyedStructIdentifier(true),
                GetKeyedStructObject(true));
                factory->add_type_object("KeyedStruct", GetKeyedStructIdentifier(false),
                GetKeyedStructObject(false));

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

const TypeIdentifier* GetMyAliasEnum2Identifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnum2", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyAliasEnum2Object(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnum2", complete);
}

const TypeObject* GetMyAliasEnum2Object(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum2", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyAliasEnum2Object();
    }
    else
    {
        return GetMinimalMyAliasEnum2Object();
    }
}

const TypeObject* GetMinimalMyAliasEnum2Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum2", false);
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
    TypeObjectFactory::get_instance()->add_alias("MyAliasEnum2", "MyAliasEnum");

    TypeObjectFactory::get_instance()->add_type_object("MyAliasEnum2", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum2", false);
}

const TypeObject* GetCompleteMyAliasEnum2Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum2", true);
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
    type_object->complete().alias_type().header().detail().type_name("MyAliasEnum2");

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
    TypeObjectFactory::get_instance()->add_alias("MyAliasEnum2", "MyAliasEnum");

    TypeObjectFactory::get_instance()->add_type_object("MyAliasEnum2", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum2", true);
}

const TypeIdentifier* GetMyAliasEnum3Identifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnum3", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyAliasEnum3Object(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnum3", complete);
}

const TypeObject* GetMyAliasEnum3Object(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum3", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyAliasEnum3Object();
    }
    else
    {
        return GetMinimalMyAliasEnum3Object();
    }
}

const TypeObject* GetMinimalMyAliasEnum3Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum3", false);
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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnum2", false);


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
    TypeObjectFactory::get_instance()->add_alias("MyAliasEnum3", "MyAliasEnum2");

    TypeObjectFactory::get_instance()->add_type_object("MyAliasEnum3", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum3", false);
}

const TypeObject* GetCompleteMyAliasEnum3Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum3", true);
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
    type_object->complete().alias_type().header().detail().type_name("MyAliasEnum3");

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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("MyAliasEnum2");


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
    TypeObjectFactory::get_instance()->add_alias("MyAliasEnum3", "MyAliasEnum2");

    TypeObjectFactory::get_instance()->add_type_object("MyAliasEnum3", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasEnum3", true);
}

const TypeIdentifier* GetBasicStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BasicStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetBasicStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("BasicStruct", complete);
}

const TypeObject* GetBasicStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteBasicStructObject();
    }
    //else
    return GetMinimalBasicStructObject();
}

const TypeObject* GetMinimalBasicStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicStruct", false);
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

    TypeObjectFactory::get_instance()->add_type_object("BasicStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BasicStruct", false);
}

const TypeObject* GetCompleteBasicStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicStruct", true);
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
    type_object->complete().struct_type().header().detail().type_name("BasicStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("BasicStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BasicStruct", true);
}

const TypeIdentifier* GetMyOctetArray500Identifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyOctetArray500", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyOctetArray500Object(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyOctetArray500", complete);
}

const TypeObject* GetMyOctetArray500Object(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyOctetArray500", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyOctetArray500Object();
    }
    else
    {
        return GetMinimalMyOctetArray500Object();
    }
}

const TypeObject* GetMinimalMyOctetArray500Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyOctetArray500", false);
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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier(TypeNamesGenerator::get_array_type_name("uint8_t", {500}), false);


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
    TypeObjectFactory::get_instance()->add_alias("MyOctetArray500", TypeNamesGenerator::get_array_type_name("uint8_t", {500}));

    TypeObjectFactory::get_instance()->add_type_object("MyOctetArray500", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyOctetArray500", false);
}

const TypeObject* GetCompleteMyOctetArray500Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyOctetArray500", true);
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
    type_object->complete().alias_type().header().detail().type_name("MyOctetArray500");

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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete(TypeNamesGenerator::get_array_type_name("uint8_t", {500}));


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
    TypeObjectFactory::get_instance()->add_alias("MyOctetArray500", TypeNamesGenerator::get_array_type_name("uint8_t", {500}));

    TypeObjectFactory::get_instance()->add_type_object("MyOctetArray500", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyOctetArray500", true);
}

const TypeIdentifier* GetBSAlias5Identifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BSAlias5", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetBSAlias5Object(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("BSAlias5", complete);
}

const TypeObject* GetBSAlias5Object(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BSAlias5", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteBSAlias5Object();
    }
    else
    {
        return GetMinimalBSAlias5Object();
    }
}

const TypeObject* GetMinimalBSAlias5Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BSAlias5", false);
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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier(TypeNamesGenerator::get_array_type_name("BasicStruct", {5}), false);


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
    TypeObjectFactory::get_instance()->add_alias("BSAlias5", TypeNamesGenerator::get_array_type_name("BasicStruct", {5}));

    TypeObjectFactory::get_instance()->add_type_object("BSAlias5", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BSAlias5", false);
}

const TypeObject* GetCompleteBSAlias5Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BSAlias5", true);
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
    type_object->complete().alias_type().header().detail().type_name("BSAlias5");

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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete(TypeNamesGenerator::get_array_type_name("BasicStruct", {5}));


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
    TypeObjectFactory::get_instance()->add_alias("BSAlias5", TypeNamesGenerator::get_array_type_name("BasicStruct", {5}));

    TypeObjectFactory::get_instance()->add_type_object("BSAlias5", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BSAlias5", true);
}

const TypeIdentifier* GetMA3Identifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MA3", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMA3Object(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MA3", complete);
}

const TypeObject* GetMA3Object(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MA3", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMA3Object();
    }
    else
    {
        return GetMinimalMA3Object();
    }
}

const TypeObject* GetMinimalMA3Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MA3", false);
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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier(TypeNamesGenerator::get_array_type_name("MyAliasEnum3", {42}), false);


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
    TypeObjectFactory::get_instance()->add_alias("MA3", TypeNamesGenerator::get_array_type_name("MyAliasEnum3", {42}));

    TypeObjectFactory::get_instance()->add_type_object("MA3", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MA3", false);
}

const TypeObject* GetCompleteMA3Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MA3", true);
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
    type_object->complete().alias_type().header().detail().type_name("MA3");

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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete(TypeNamesGenerator::get_array_type_name("MyAliasEnum3", {42}));


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
    TypeObjectFactory::get_instance()->add_alias("MA3", TypeNamesGenerator::get_array_type_name("MyAliasEnum3", {42}));

    TypeObjectFactory::get_instance()->add_type_object("MA3", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MA3", true);
}

const TypeIdentifier* GetMyMiniArrayIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyMiniArray", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyMiniArrayObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyMiniArray", complete);
}

const TypeObject* GetMyMiniArrayObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyMiniArray", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyMiniArrayObject();
    }
    else
    {
        return GetMinimalMyMiniArrayObject();
    }
}

const TypeObject* GetMinimalMyMiniArrayObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyMiniArray", false);
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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier(TypeNamesGenerator::get_array_type_name("int32_t", {2}), false);


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
    TypeObjectFactory::get_instance()->add_alias("MyMiniArray", TypeNamesGenerator::get_array_type_name("int32_t", {2}));

    TypeObjectFactory::get_instance()->add_type_object("MyMiniArray", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyMiniArray", false);
}

const TypeObject* GetCompleteMyMiniArrayObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyMiniArray", true);
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
    type_object->complete().alias_type().header().detail().type_name("MyMiniArray");

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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete(TypeNamesGenerator::get_array_type_name("int32_t", {2}));


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
    TypeObjectFactory::get_instance()->add_alias("MyMiniArray", TypeNamesGenerator::get_array_type_name("int32_t", {2}));

    TypeObjectFactory::get_instance()->add_type_object("MyMiniArray", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyMiniArray", true);
}

const TypeIdentifier* GetMySequenceLongIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MySequenceLong", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMySequenceLongObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MySequenceLong", complete);
}

const TypeObject* GetMySequenceLongObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MySequenceLong", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMySequenceLongObject();
    }
    else
    {
        return GetMinimalMySequenceLongObject();
    }
}

const TypeObject* GetMinimalMySequenceLongObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MySequenceLong", false);
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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier(TypeNamesGenerator::get_sequence_type_name("int32_t", 100), false);


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
    TypeObjectFactory::get_instance()->add_alias("MySequenceLong", TypeNamesGenerator::get_sequence_type_name("int32_t", 100));

    TypeObjectFactory::get_instance()->add_type_object("MySequenceLong", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MySequenceLong", false);
}

const TypeObject* GetCompleteMySequenceLongObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MySequenceLong", true);
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
    type_object->complete().alias_type().header().detail().type_name("MySequenceLong");

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
    const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete(TypeNamesGenerator::get_sequence_type_name("int32_t", 100));


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
    TypeObjectFactory::get_instance()->add_alias("MySequenceLong", TypeNamesGenerator::get_sequence_type_name("int32_t", 100));

    TypeObjectFactory::get_instance()->add_type_object("MySequenceLong", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MySequenceLong", true);
}

const TypeIdentifier* GetComplexStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ComplexStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetComplexStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ComplexStruct", complete);
}

const TypeObject* GetComplexStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ComplexStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteComplexStructObject();
    }
    //else
    return GetMinimalComplexStructObject();
}

const TypeObject* GetMinimalComplexStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ComplexStruct", false);
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

    MinimalStructMember mst_my_basic_struct;
    mst_my_basic_struct.common().member_id(memberId++);
    mst_my_basic_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_basic_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_basic_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_basic_struct.common().member_flags().IS_OPTIONAL(false);
    mst_my_basic_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_basic_struct.common().member_flags().IS_KEY(false);
    mst_my_basic_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_basic_struct.common().member_type_id(*GetBasicStructIdentifier(false));
    MD5 my_basic_struct_hash("my_basic_struct");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_basic_struct.detail().name_hash()[i] = my_basic_struct_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_basic_struct);

    MinimalStructMember mst_my_alias_enum;
    mst_my_alias_enum.common().member_id(memberId++);
    mst_my_alias_enum.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_alias_enum.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_alias_enum.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_alias_enum.common().member_flags().IS_OPTIONAL(false);
    mst_my_alias_enum.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_alias_enum.common().member_flags().IS_KEY(false);
    mst_my_alias_enum.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_alias_enum.common().member_type_id(*GetMyAliasEnumIdentifier(false));
    MD5 my_alias_enum_hash("my_alias_enum");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_alias_enum.detail().name_hash()[i] = my_alias_enum_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_alias_enum);

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

    MinimalStructMember mst_my_sequence_octet;
    mst_my_sequence_octet.common().member_id(memberId++);
    mst_my_sequence_octet.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_sequence_octet.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_sequence_octet.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_sequence_octet.common().member_flags().IS_OPTIONAL(false);
    mst_my_sequence_octet.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_sequence_octet.common().member_flags().IS_KEY(false);
    mst_my_sequence_octet.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_sequence_octet.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 55, false));


    MD5 my_sequence_octet_hash("my_sequence_octet");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_sequence_octet.detail().name_hash()[i] = my_sequence_octet_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_sequence_octet);

    MinimalStructMember mst_my_sequence_struct;
    mst_my_sequence_struct.common().member_id(memberId++);
    mst_my_sequence_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_sequence_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_sequence_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_sequence_struct.common().member_flags().IS_OPTIONAL(false);
    mst_my_sequence_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_sequence_struct.common().member_flags().IS_KEY(false);
    mst_my_sequence_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_sequence_struct.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("BasicStruct", 100, false));


    MD5 my_sequence_struct_hash("my_sequence_struct");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_sequence_struct.detail().name_hash()[i] = my_sequence_struct_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_sequence_struct);

    MinimalStructMember mst_my_array_octet;
    mst_my_array_octet.common().member_id(memberId++);
    mst_my_array_octet.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_array_octet.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_array_octet.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_array_octet.common().member_flags().IS_OPTIONAL(false);
    mst_my_array_octet.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_array_octet.common().member_flags().IS_KEY(false);
    mst_my_array_octet.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_array_octet.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("char", {500, 5, 4}, false));


    MD5 my_array_octet_hash("my_array_octet");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_array_octet.detail().name_hash()[i] = my_array_octet_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_array_octet);

    MinimalStructMember mst_my_octet_array_500;
    mst_my_octet_array_500.common().member_id(memberId++);
    mst_my_octet_array_500.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_octet_array_500.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_octet_array_500.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_octet_array_500.common().member_flags().IS_OPTIONAL(false);
    mst_my_octet_array_500.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_octet_array_500.common().member_flags().IS_KEY(false);
    mst_my_octet_array_500.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_octet_array_500.common().member_type_id(*GetMyOctetArray500Identifier(false));
    MD5 my_octet_array_500_hash("my_octet_array_500");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_octet_array_500.detail().name_hash()[i] = my_octet_array_500_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_octet_array_500);

    MinimalStructMember mst_my_array_struct;
    mst_my_array_struct.common().member_id(memberId++);
    mst_my_array_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_array_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_array_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_array_struct.common().member_flags().IS_OPTIONAL(false);
    mst_my_array_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_array_struct.common().member_flags().IS_KEY(false);
    mst_my_array_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_array_struct.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("BasicStruct", {5}, false));


    MD5 my_array_struct_hash("my_array_struct");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_array_struct.detail().name_hash()[i] = my_array_struct_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_array_struct);

    MinimalStructMember mst_my_map_octet_short;
    mst_my_map_octet_short.common().member_id(memberId++);
    mst_my_map_octet_short.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_map_octet_short.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_map_octet_short.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_map_octet_short.common().member_flags().IS_OPTIONAL(false);
    mst_my_map_octet_short.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_map_octet_short.common().member_flags().IS_KEY(false);
    mst_my_map_octet_short.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_map_octet_short.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("uint8_t", "int16_t", 100, false));


    MD5 my_map_octet_short_hash("my_map_octet_short");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_map_octet_short.detail().name_hash()[i] = my_map_octet_short_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_map_octet_short);

    MinimalStructMember mst_my_map_long_struct;
    mst_my_map_long_struct.common().member_id(memberId++);
    mst_my_map_long_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_map_long_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_map_long_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_map_long_struct.common().member_flags().IS_OPTIONAL(false);
    mst_my_map_long_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_map_long_struct.common().member_flags().IS_KEY(false);
    mst_my_map_long_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_map_long_struct.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "BasicStruct", 100, false));


    MD5 my_map_long_struct_hash("my_map_long_struct");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_map_long_struct.detail().name_hash()[i] = my_map_long_struct_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_map_long_struct);

    MinimalStructMember mst_my_map_long_seq_octet;
    mst_my_map_long_seq_octet.common().member_id(memberId++);
    mst_my_map_long_seq_octet.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_map_long_seq_octet.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_map_long_seq_octet.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_map_long_seq_octet.common().member_flags().IS_OPTIONAL(false);
    mst_my_map_long_seq_octet.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_map_long_seq_octet.common().member_flags().IS_KEY(false);
    mst_my_map_long_seq_octet.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_map_long_seq_octet.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", TypeNamesGenerator::get_sequence_type_name(TypeNamesGenerator::get_sequence_type_name("uint8_t", 100), 100), 100, false));


    MD5 my_map_long_seq_octet_hash("my_map_long_seq_octet");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_map_long_seq_octet.detail().name_hash()[i] = my_map_long_seq_octet_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_map_long_seq_octet);

    MinimalStructMember mst_my_map_long_octet_array_500;
    mst_my_map_long_octet_array_500.common().member_id(memberId++);
    mst_my_map_long_octet_array_500.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_map_long_octet_array_500.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_map_long_octet_array_500.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_map_long_octet_array_500.common().member_flags().IS_OPTIONAL(false);
    mst_my_map_long_octet_array_500.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_map_long_octet_array_500.common().member_flags().IS_KEY(false);
    mst_my_map_long_octet_array_500.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_map_long_octet_array_500.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "MyOctetArray500", 100, false));


    MD5 my_map_long_octet_array_500_hash("my_map_long_octet_array_500");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_map_long_octet_array_500.detail().name_hash()[i] = my_map_long_octet_array_500_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_map_long_octet_array_500);

    MinimalStructMember mst_my_map_long_lol_type;
    mst_my_map_long_lol_type.common().member_id(memberId++);
    mst_my_map_long_lol_type.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_map_long_lol_type.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_map_long_lol_type.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_map_long_lol_type.common().member_flags().IS_OPTIONAL(false);
    mst_my_map_long_lol_type.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_map_long_lol_type.common().member_flags().IS_KEY(false);
    mst_my_map_long_lol_type.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_map_long_lol_type.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", TypeNamesGenerator::get_map_type_name("uint8_t", "BSAlias5", 100), 100, false));


    MD5 my_map_long_lol_type_hash("my_map_long_lol_type");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_map_long_lol_type.detail().name_hash()[i] = my_map_long_lol_type_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_map_long_lol_type);

    MinimalStructMember mst_my_small_string_8;
    mst_my_small_string_8.common().member_id(memberId++);
    mst_my_small_string_8.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_small_string_8.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_small_string_8.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_small_string_8.common().member_flags().IS_OPTIONAL(false);
    mst_my_small_string_8.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_small_string_8.common().member_flags().IS_KEY(false);
    mst_my_small_string_8.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_small_string_8.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(128, false));


    MD5 my_small_string_8_hash("my_small_string_8");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_small_string_8.detail().name_hash()[i] = my_small_string_8_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_small_string_8);

    MinimalStructMember mst_my_small_string_16;
    mst_my_small_string_16.common().member_id(memberId++);
    mst_my_small_string_16.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_small_string_16.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_small_string_16.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_small_string_16.common().member_flags().IS_OPTIONAL(false);
    mst_my_small_string_16.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_small_string_16.common().member_flags().IS_KEY(false);
    mst_my_small_string_16.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_small_string_16.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(64, true));


    MD5 my_small_string_16_hash("my_small_string_16");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_small_string_16.detail().name_hash()[i] = my_small_string_16_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_small_string_16);

    MinimalStructMember mst_my_large_string_8;
    mst_my_large_string_8.common().member_id(memberId++);
    mst_my_large_string_8.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_large_string_8.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_large_string_8.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_large_string_8.common().member_flags().IS_OPTIONAL(false);
    mst_my_large_string_8.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_large_string_8.common().member_flags().IS_KEY(false);
    mst_my_large_string_8.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_large_string_8.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(500, false));


    MD5 my_large_string_8_hash("my_large_string_8");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_large_string_8.detail().name_hash()[i] = my_large_string_8_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_large_string_8);

    MinimalStructMember mst_my_large_string_16;
    mst_my_large_string_16.common().member_id(memberId++);
    mst_my_large_string_16.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_large_string_16.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_large_string_16.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_large_string_16.common().member_flags().IS_OPTIONAL(false);
    mst_my_large_string_16.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_large_string_16.common().member_flags().IS_KEY(false);
    mst_my_large_string_16.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_large_string_16.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(1024, true));


    MD5 my_large_string_16_hash("my_large_string_16");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_large_string_16.detail().name_hash()[i] = my_large_string_16_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_large_string_16);

    MinimalStructMember mst_my_array_string;
    mst_my_array_string.common().member_id(memberId++);
    mst_my_array_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_array_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_array_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_array_string.common().member_flags().IS_OPTIONAL(false);
    mst_my_array_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_array_string.common().member_flags().IS_KEY(false);
    mst_my_array_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_array_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier(TypeNamesGenerator::get_string_type_name(75, false), {5, 5}, false));


    MD5 my_array_string_hash("my_array_string");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_array_string.detail().name_hash()[i] = my_array_string_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_array_string);

    MinimalStructMember mst_multi_alias_array_42;
    mst_multi_alias_array_42.common().member_id(memberId++);
    mst_multi_alias_array_42.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_multi_alias_array_42.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_multi_alias_array_42.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_multi_alias_array_42.common().member_flags().IS_OPTIONAL(false);
    mst_multi_alias_array_42.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_multi_alias_array_42.common().member_flags().IS_KEY(false);
    mst_multi_alias_array_42.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_multi_alias_array_42.common().member_type_id(*GetMA3Identifier(false));
    MD5 multi_alias_array_42_hash("multi_alias_array_42");
    for(int i = 0; i < 4; ++i)
    {
        mst_multi_alias_array_42.detail().name_hash()[i] = multi_alias_array_42_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_multi_alias_array_42);

    MinimalStructMember mst_my_array_arrays;
    mst_my_array_arrays.common().member_id(memberId++);
    mst_my_array_arrays.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_array_arrays.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_array_arrays.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_array_arrays.common().member_flags().IS_OPTIONAL(false);
    mst_my_array_arrays.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_array_arrays.common().member_flags().IS_KEY(false);
    mst_my_array_arrays.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_array_arrays.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("MyMiniArray", {5}, false));


    MD5 my_array_arrays_hash("my_array_arrays");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_array_arrays.detail().name_hash()[i] = my_array_arrays_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_array_arrays);

    MinimalStructMember mst_my_sequences_array;
    mst_my_sequences_array.common().member_id(memberId++);
    mst_my_sequences_array.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_sequences_array.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_sequences_array.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_sequences_array.common().member_flags().IS_OPTIONAL(false);
    mst_my_sequences_array.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_sequences_array.common().member_flags().IS_KEY(false);
    mst_my_sequences_array.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_sequences_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("MySequenceLong", {23}, false));


    MD5 my_sequences_array_hash("my_sequences_array");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_sequences_array.detail().name_hash()[i] = my_sequences_array_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_sequences_array);


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

    TypeObjectFactory::get_instance()->add_type_object("ComplexStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ComplexStruct", false);
}

const TypeObject* GetCompleteComplexStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ComplexStruct", true);
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

    CompleteStructMember cst_my_basic_struct;
    cst_my_basic_struct.common().member_id(memberId++);
    cst_my_basic_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_basic_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_basic_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_basic_struct.common().member_flags().IS_OPTIONAL(false);
    cst_my_basic_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_basic_struct.common().member_flags().IS_KEY(false);
    cst_my_basic_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_basic_struct.common().member_type_id(*GetBasicStructIdentifier(true));
    cst_my_basic_struct.detail().name("my_basic_struct");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_basic_struct);

    CompleteStructMember cst_my_alias_enum;
    cst_my_alias_enum.common().member_id(memberId++);
    cst_my_alias_enum.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_alias_enum.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_alias_enum.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_alias_enum.common().member_flags().IS_OPTIONAL(false);
    cst_my_alias_enum.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_alias_enum.common().member_flags().IS_KEY(false);
    cst_my_alias_enum.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_alias_enum.common().member_type_id(*GetMyAliasEnumIdentifier(true));
    cst_my_alias_enum.detail().name("my_alias_enum");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_alias_enum);

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

    CompleteStructMember cst_my_sequence_octet;
    cst_my_sequence_octet.common().member_id(memberId++);
    cst_my_sequence_octet.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_sequence_octet.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_sequence_octet.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_sequence_octet.common().member_flags().IS_OPTIONAL(false);
    cst_my_sequence_octet.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_sequence_octet.common().member_flags().IS_KEY(false);
    cst_my_sequence_octet.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_sequence_octet.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 55, true));


    cst_my_sequence_octet.detail().name("my_sequence_octet");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_sequence_octet);

    CompleteStructMember cst_my_sequence_struct;
    cst_my_sequence_struct.common().member_id(memberId++);
    cst_my_sequence_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_sequence_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_sequence_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_sequence_struct.common().member_flags().IS_OPTIONAL(false);
    cst_my_sequence_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_sequence_struct.common().member_flags().IS_KEY(false);
    cst_my_sequence_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_sequence_struct.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("BasicStruct", 100, true));


    cst_my_sequence_struct.detail().name("my_sequence_struct");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_sequence_struct);

    CompleteStructMember cst_my_array_octet;
    cst_my_array_octet.common().member_id(memberId++);
    cst_my_array_octet.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_array_octet.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_array_octet.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_array_octet.common().member_flags().IS_OPTIONAL(false);
    cst_my_array_octet.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_array_octet.common().member_flags().IS_KEY(false);
    cst_my_array_octet.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_array_octet.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("char", {500, 5, 4}, true));


    cst_my_array_octet.detail().name("my_array_octet");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array_octet);

    CompleteStructMember cst_my_octet_array_500;
    cst_my_octet_array_500.common().member_id(memberId++);
    cst_my_octet_array_500.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_octet_array_500.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_octet_array_500.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_octet_array_500.common().member_flags().IS_OPTIONAL(false);
    cst_my_octet_array_500.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_octet_array_500.common().member_flags().IS_KEY(false);
    cst_my_octet_array_500.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_octet_array_500.common().member_type_id(*GetMyOctetArray500Identifier(true));
    cst_my_octet_array_500.detail().name("my_octet_array_500");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_octet_array_500);

    CompleteStructMember cst_my_array_struct;
    cst_my_array_struct.common().member_id(memberId++);
    cst_my_array_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_array_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_array_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_array_struct.common().member_flags().IS_OPTIONAL(false);
    cst_my_array_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_array_struct.common().member_flags().IS_KEY(false);
    cst_my_array_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_array_struct.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("BasicStruct", {5}, true));


    cst_my_array_struct.detail().name("my_array_struct");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array_struct);

    CompleteStructMember cst_my_map_octet_short;
    cst_my_map_octet_short.common().member_id(memberId++);
    cst_my_map_octet_short.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_map_octet_short.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_map_octet_short.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_map_octet_short.common().member_flags().IS_OPTIONAL(false);
    cst_my_map_octet_short.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_map_octet_short.common().member_flags().IS_KEY(false);
    cst_my_map_octet_short.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_map_octet_short.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("uint8_t", "int16_t", 100, true));


    cst_my_map_octet_short.detail().name("my_map_octet_short");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map_octet_short);

    CompleteStructMember cst_my_map_long_struct;
    cst_my_map_long_struct.common().member_id(memberId++);
    cst_my_map_long_struct.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_map_long_struct.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_map_long_struct.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_map_long_struct.common().member_flags().IS_OPTIONAL(false);
    cst_my_map_long_struct.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_map_long_struct.common().member_flags().IS_KEY(false);
    cst_my_map_long_struct.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_map_long_struct.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "BasicStruct", 100, true));


    cst_my_map_long_struct.detail().name("my_map_long_struct");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map_long_struct);

    CompleteStructMember cst_my_map_long_seq_octet;
    cst_my_map_long_seq_octet.common().member_id(memberId++);
    cst_my_map_long_seq_octet.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_map_long_seq_octet.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_map_long_seq_octet.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_map_long_seq_octet.common().member_flags().IS_OPTIONAL(false);
    cst_my_map_long_seq_octet.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_map_long_seq_octet.common().member_flags().IS_KEY(false);
    cst_my_map_long_seq_octet.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_map_long_seq_octet.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", TypeNamesGenerator::get_sequence_type_name(TypeNamesGenerator::get_sequence_type_name("uint8_t", 100), 100), 100, true));


    cst_my_map_long_seq_octet.detail().name("my_map_long_seq_octet");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map_long_seq_octet);

    CompleteStructMember cst_my_map_long_octet_array_500;
    cst_my_map_long_octet_array_500.common().member_id(memberId++);
    cst_my_map_long_octet_array_500.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_map_long_octet_array_500.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_map_long_octet_array_500.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_map_long_octet_array_500.common().member_flags().IS_OPTIONAL(false);
    cst_my_map_long_octet_array_500.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_map_long_octet_array_500.common().member_flags().IS_KEY(false);
    cst_my_map_long_octet_array_500.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_map_long_octet_array_500.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "MyOctetArray500", 100, true));


    cst_my_map_long_octet_array_500.detail().name("my_map_long_octet_array_500");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map_long_octet_array_500);

    CompleteStructMember cst_my_map_long_lol_type;
    cst_my_map_long_lol_type.common().member_id(memberId++);
    cst_my_map_long_lol_type.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_map_long_lol_type.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_map_long_lol_type.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_map_long_lol_type.common().member_flags().IS_OPTIONAL(false);
    cst_my_map_long_lol_type.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_map_long_lol_type.common().member_flags().IS_KEY(false);
    cst_my_map_long_lol_type.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_map_long_lol_type.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", TypeNamesGenerator::get_map_type_name("uint8_t", "BSAlias5", 100), 100, true));


    cst_my_map_long_lol_type.detail().name("my_map_long_lol_type");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map_long_lol_type);

    CompleteStructMember cst_my_small_string_8;
    cst_my_small_string_8.common().member_id(memberId++);
    cst_my_small_string_8.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_small_string_8.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_small_string_8.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_small_string_8.common().member_flags().IS_OPTIONAL(false);
    cst_my_small_string_8.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_small_string_8.common().member_flags().IS_KEY(false);
    cst_my_small_string_8.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_small_string_8.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(128, false));


    cst_my_small_string_8.detail().name("my_small_string_8");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_small_string_8);

    CompleteStructMember cst_my_small_string_16;
    cst_my_small_string_16.common().member_id(memberId++);
    cst_my_small_string_16.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_small_string_16.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_small_string_16.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_small_string_16.common().member_flags().IS_OPTIONAL(false);
    cst_my_small_string_16.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_small_string_16.common().member_flags().IS_KEY(false);
    cst_my_small_string_16.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_small_string_16.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(64, true));


    cst_my_small_string_16.detail().name("my_small_string_16");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_small_string_16);

    CompleteStructMember cst_my_large_string_8;
    cst_my_large_string_8.common().member_id(memberId++);
    cst_my_large_string_8.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_large_string_8.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_large_string_8.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_large_string_8.common().member_flags().IS_OPTIONAL(false);
    cst_my_large_string_8.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_large_string_8.common().member_flags().IS_KEY(false);
    cst_my_large_string_8.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_large_string_8.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(500, false));


    cst_my_large_string_8.detail().name("my_large_string_8");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_large_string_8);

    CompleteStructMember cst_my_large_string_16;
    cst_my_large_string_16.common().member_id(memberId++);
    cst_my_large_string_16.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_large_string_16.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_large_string_16.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_large_string_16.common().member_flags().IS_OPTIONAL(false);
    cst_my_large_string_16.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_large_string_16.common().member_flags().IS_KEY(false);
    cst_my_large_string_16.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_large_string_16.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(1024, true));


    cst_my_large_string_16.detail().name("my_large_string_16");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_large_string_16);

    CompleteStructMember cst_my_array_string;
    cst_my_array_string.common().member_id(memberId++);
    cst_my_array_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_array_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_array_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_array_string.common().member_flags().IS_OPTIONAL(false);
    cst_my_array_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_array_string.common().member_flags().IS_KEY(false);
    cst_my_array_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_array_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier(TypeNamesGenerator::get_string_type_name(75, false), {5, 5}, true));


    cst_my_array_string.detail().name("my_array_string");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array_string);

    CompleteStructMember cst_multi_alias_array_42;
    cst_multi_alias_array_42.common().member_id(memberId++);
    cst_multi_alias_array_42.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_multi_alias_array_42.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_multi_alias_array_42.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_multi_alias_array_42.common().member_flags().IS_OPTIONAL(false);
    cst_multi_alias_array_42.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_multi_alias_array_42.common().member_flags().IS_KEY(false);
    cst_multi_alias_array_42.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_multi_alias_array_42.common().member_type_id(*GetMA3Identifier(true));
    cst_multi_alias_array_42.detail().name("multi_alias_array_42");

    type_object->complete().struct_type().member_seq().emplace_back(cst_multi_alias_array_42);

    CompleteStructMember cst_my_array_arrays;
    cst_my_array_arrays.common().member_id(memberId++);
    cst_my_array_arrays.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_array_arrays.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_array_arrays.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_array_arrays.common().member_flags().IS_OPTIONAL(false);
    cst_my_array_arrays.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_array_arrays.common().member_flags().IS_KEY(false);
    cst_my_array_arrays.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_array_arrays.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("MyMiniArray", {5}, true));


    cst_my_array_arrays.detail().name("my_array_arrays");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array_arrays);

    CompleteStructMember cst_my_sequences_array;
    cst_my_sequences_array.common().member_id(memberId++);
    cst_my_sequences_array.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_sequences_array.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_sequences_array.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_sequences_array.common().member_flags().IS_OPTIONAL(false);
    cst_my_sequences_array.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_sequences_array.common().member_flags().IS_KEY(false);
    cst_my_sequences_array.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_sequences_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("MySequenceLong", {23}, true));


    cst_my_sequences_array.detail().name("my_sequences_array");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_sequences_array);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ComplexStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ComplexStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ComplexStruct", true);
}

const TypeIdentifier* GetMyUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("MyUnion", complete);
}

const TypeObject* GetMyUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyUnionObject();
    }
    // else
    return GetMinimalMyUnionObject();
}

const TypeObject* GetMinimalMyUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyUnion", false);
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

    type_object->minimal().union_type().discriminator().common().type_id(*GetMyEnumIdentifier(false));

    MemberId memberId = 0;
    MinimalUnionMember mst_basic;
    mst_basic.common().member_id(memberId++);
    mst_basic.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_basic.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_basic.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_basic.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_basic.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_basic.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_basic.common().member_flags().IS_DEFAULT(false);
    mst_basic.common().type_id(*GetBasicStructIdentifier(false));
    mst_basic.common().label_seq().emplace_back(::A);
    MD5 basic_hash("basic");
    for(int i = 0; i < 4; ++i)
    {
        mst_basic.detail().name_hash()[i] = basic_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_basic);

    MinimalUnionMember mst_complex;
    mst_complex.common().member_id(memberId++);
    mst_complex.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_complex.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_complex.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_complex.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_complex.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_complex.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_complex.common().member_flags().IS_DEFAULT(false);
    mst_complex.common().type_id(*GetComplexStructIdentifier(false));
    mst_complex.common().label_seq().emplace_back(::B);
    mst_complex.common().label_seq().emplace_back(::C);
    MD5 complex_hash("complex");
    for(int i = 0; i < 4; ++i)
    {
        mst_complex.detail().name_hash()[i] = complex_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_complex);


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

    TypeObjectFactory::get_instance()->add_type_object("MyUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("MyUnion", false);
}

const TypeObject* GetCompleteMyUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyUnion", true);
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

    type_object->complete().union_type().discriminator().common().type_id(*GetMyEnumIdentifier(true));


    MemberId memberId = 0;
    CompleteUnionMember cst_basic;
    cst_basic.common().member_id(memberId++);
    cst_basic.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_basic.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_basic.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_basic.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_basic.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_basic.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_basic.common().member_flags().IS_DEFAULT(false);
    cst_basic.common().type_id(*GetBasicStructIdentifier(true));cst_basic.common().label_seq().emplace_back(::A);

    cst_basic.detail().name("basic");

    type_object->complete().union_type().member_seq().emplace_back(cst_basic);

    CompleteUnionMember cst_complex;
    cst_complex.common().member_id(memberId++);
    cst_complex.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_complex.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_complex.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_complex.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_complex.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_complex.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_complex.common().member_flags().IS_DEFAULT(false);
    cst_complex.common().type_id(*GetComplexStructIdentifier(true));cst_complex.common().label_seq().emplace_back(::B);
    cst_complex.common().label_seq().emplace_back(::C);

    cst_complex.detail().name("complex");

    type_object->complete().union_type().member_seq().emplace_back(cst_complex);


    // Header
    type_object->complete().union_type().header().detail().type_name("MyUnion");


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

    TypeObjectFactory::get_instance()->add_type_object("MyUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("MyUnion", true);
}

const TypeIdentifier* GetMyUnion2Identifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyUnion2", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyUnion2Object(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("MyUnion2", complete);
}

const TypeObject* GetMyUnion2Object(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyUnion2", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyUnion2Object();
    }
    // else
    return GetMinimalMyUnion2Object();
}

const TypeObject* GetMinimalMyUnion2Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyUnion2", false);
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
    MinimalUnionMember mst_uno;
    mst_uno.common().member_id(memberId++);
    mst_uno.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uno.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uno.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uno.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_uno.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_uno.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_uno.common().member_flags().IS_DEFAULT(false);
    mst_uno.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_uno.common().label_seq().emplace_back(A);
    MD5 uno_hash("uno");
    for(int i = 0; i < 4; ++i)
    {
        mst_uno.detail().name_hash()[i] = uno_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_uno);

    MinimalUnionMember mst_imString;
    mst_imString.common().member_id(memberId++);
    mst_imString.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_imString.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_imString.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_imString.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_imString.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_imString.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_imString.common().member_flags().IS_DEFAULT(false);
    mst_imString.common().type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    mst_imString.common().label_seq().emplace_back(B);
    MD5 imString_hash("imString");
    for(int i = 0; i < 4; ++i)
    {
        mst_imString.detail().name_hash()[i] = imString_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_imString);

    MinimalUnionMember mst_tres;
    mst_tres.common().member_id(memberId++);
    mst_tres.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_tres.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_tres.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_tres.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_tres.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_tres.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_tres.common().member_flags().IS_DEFAULT(false);
    mst_tres.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_tres.common().label_seq().emplace_back(C);
    MD5 tres_hash("tres");
    for(int i = 0; i < 4; ++i)
    {
        mst_tres.detail().name_hash()[i] = tres_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_tres);


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

    TypeObjectFactory::get_instance()->add_type_object("MyUnion2", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("MyUnion2", false);
}

const TypeObject* GetCompleteMyUnion2Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyUnion2", true);
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
    CompleteUnionMember cst_uno;
    cst_uno.common().member_id(memberId++);
    cst_uno.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uno.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uno.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uno.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_uno.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_uno.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_uno.common().member_flags().IS_DEFAULT(false);
    cst_uno.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_uno.common().label_seq().emplace_back(A);

    cst_uno.detail().name("uno");

    type_object->complete().union_type().member_seq().emplace_back(cst_uno);

    CompleteUnionMember cst_imString;
    cst_imString.common().member_id(memberId++);
    cst_imString.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_imString.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_imString.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_imString.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_imString.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_imString.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_imString.common().member_flags().IS_DEFAULT(false);
    cst_imString.common().type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));

    cst_imString.common().label_seq().emplace_back(B);

    cst_imString.detail().name("imString");

    type_object->complete().union_type().member_seq().emplace_back(cst_imString);

    CompleteUnionMember cst_tres;
    cst_tres.common().member_id(memberId++);
    cst_tres.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_tres.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_tres.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_tres.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_tres.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_tres.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_tres.common().member_flags().IS_DEFAULT(false);
    cst_tres.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_tres.common().label_seq().emplace_back(C);

    cst_tres.detail().name("tres");

    type_object->complete().union_type().member_seq().emplace_back(cst_tres);


    // Header
    type_object->complete().union_type().header().detail().type_name("MyUnion2");


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

    TypeObjectFactory::get_instance()->add_type_object("MyUnion2", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("MyUnion2", true);
}

const TypeIdentifier* GetCompleteStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("CompleteStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetCompleteStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("CompleteStruct", complete);
}

const TypeObject* GetCompleteStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("CompleteStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteCompleteStructObject();
    }
    //else
    return GetMinimalCompleteStructObject();
}

const TypeObject* GetMinimalCompleteStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("CompleteStruct", false);
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
    mst_my_union.common().member_type_id(*GetMyUnionIdentifier(false));
    MD5 my_union_hash("my_union");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_union.detail().name_hash()[i] = my_union_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_union);

    MinimalStructMember mst_my_union_2;
    mst_my_union_2.common().member_id(memberId++);
    mst_my_union_2.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_union_2.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_union_2.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_union_2.common().member_flags().IS_OPTIONAL(false);
    mst_my_union_2.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_union_2.common().member_flags().IS_KEY(false);
    mst_my_union_2.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_union_2.common().member_type_id(*GetMyUnion2Identifier(false));
    MD5 my_union_2_hash("my_union_2");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_union_2.detail().name_hash()[i] = my_union_2_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_union_2);


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

    TypeObjectFactory::get_instance()->add_type_object("CompleteStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("CompleteStruct", false);
}

const TypeObject* GetCompleteCompleteStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("CompleteStruct", true);
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
    cst_my_union.common().member_type_id(*GetMyUnionIdentifier(true));
    cst_my_union.detail().name("my_union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union);

    CompleteStructMember cst_my_union_2;
    cst_my_union_2.common().member_id(memberId++);
    cst_my_union_2.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_union_2.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_union_2.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_union_2.common().member_flags().IS_OPTIONAL(false);
    cst_my_union_2.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_union_2.common().member_flags().IS_KEY(false);
    cst_my_union_2.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_union_2.common().member_type_id(*GetMyUnion2Identifier(true));
    cst_my_union_2.detail().name("my_union_2");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union_2);


    // Header
    type_object->complete().struct_type().header().detail().type_name("CompleteStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("CompleteStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("CompleteStruct", true);
}

const TypeIdentifier* GetKeyedStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("KeyedStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetKeyedStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("KeyedStruct", complete);
}

const TypeObject* GetKeyedStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("KeyedStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteKeyedStructObject();
    }
    //else
    return GetMinimalKeyedStructObject();
}

const TypeObject* GetMinimalKeyedStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("KeyedStruct", false);
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
    MinimalStructMember mst_key;
    mst_key.common().member_id(memberId++);
    mst_key.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_key.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_key.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_key.common().member_flags().IS_OPTIONAL(false);
    mst_key.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_key.common().member_flags().IS_KEY(true);
    mst_key.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_key.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    MD5 key_hash("key");
    for(int i = 0; i < 4; ++i)
    {
        mst_key.detail().name_hash()[i] = key_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_key);

    MinimalStructMember mst_basic;
    mst_basic.common().member_id(memberId++);
    mst_basic.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_basic.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_basic.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_basic.common().member_flags().IS_OPTIONAL(false);
    mst_basic.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_basic.common().member_flags().IS_KEY(false);
    mst_basic.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_basic.common().member_type_id(*GetBasicStructIdentifier(false));
    MD5 basic_hash("basic");
    for(int i = 0; i < 4; ++i)
    {
        mst_basic.detail().name_hash()[i] = basic_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_basic);


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

    TypeObjectFactory::get_instance()->add_type_object("KeyedStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("KeyedStruct", false);
}

const TypeObject* GetCompleteKeyedStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("KeyedStruct", true);
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
    CompleteStructMember cst_key;
    cst_key.common().member_id(memberId++);
    cst_key.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_key.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_key.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_key.common().member_flags().IS_OPTIONAL(false);
    cst_key.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_key.common().member_flags().IS_KEY(true);
    cst_key.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_key.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    cst_key.detail().name("key");

    {
        AppliedAnnotation ann;
        //ann.annotation_typeid(GetKeyIdentifier(true));
        ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("Key"));
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
            
        cst_key.detail().ann_custom().push_back(ann);
    }

    type_object->complete().struct_type().member_seq().emplace_back(cst_key);

    CompleteStructMember cst_basic;
    cst_basic.common().member_id(memberId++);
    cst_basic.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_basic.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_basic.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_basic.common().member_flags().IS_OPTIONAL(false);
    cst_basic.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_basic.common().member_flags().IS_KEY(false);
    cst_basic.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_basic.common().member_type_id(*GetBasicStructIdentifier(true));
    cst_basic.detail().name("basic");

    type_object->complete().struct_type().member_seq().emplace_back(cst_basic);


    // Header
    type_object->complete().struct_type().header().detail().type_name("KeyedStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("KeyedStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("KeyedStruct", true);
}
