/*!
 * @file TypesTypeObject.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "Types.h"
#include "TypesTypeObject.h"
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

void registerTypesTypes()
{
    static std::once_flag once_flag;
    std::call_once(once_flag, []()
            {
                TypeObjectFactory *factory = TypeObjectFactory::get_instance();
                factory->add_type_object("MyEnum", GetMyEnumIdentifier(true),
                GetMyEnumObject(true));
                factory->add_type_object("MyEnum", GetMyEnumIdentifier(false),
                GetMyEnumObject(false));

                factory->add_type_object("MyBadEnum", GetMyBadEnumIdentifier(true),
                GetMyBadEnumObject(true));
                factory->add_type_object("MyBadEnum", GetMyBadEnumIdentifier(false),
                GetMyBadEnumObject(false));

                factory->add_type_object("MyEnumStruct", GetMyEnumStructIdentifier(true),
                GetMyEnumStructObject(true));
                factory->add_type_object("MyEnumStruct", GetMyEnumStructIdentifier(false),
                GetMyEnumStructObject(false));

                factory->add_type_object("MyBadEnumStruct", GetMyBadEnumStructIdentifier(true),
                GetMyBadEnumStructObject(true));
                factory->add_type_object("MyBadEnumStruct", GetMyBadEnumStructIdentifier(false),
                GetMyBadEnumStructObject(false));

                factory->add_type_object("MyAliasEnum", GetMyAliasEnumIdentifier(true),
                GetMyAliasEnumObject(true));
                factory->add_type_object("MyAliasEnum", GetMyAliasEnumIdentifier(false),
                GetMyAliasEnumObject(false));

                factory->add_type_object("MyAliasEnumStruct", GetMyAliasEnumStructIdentifier(true),
                GetMyAliasEnumStructObject(true));
                factory->add_type_object("MyAliasEnumStruct", GetMyAliasEnumStructIdentifier(false),
                GetMyAliasEnumStructObject(false));

                factory->add_type_object("BasicStruct", GetBasicStructIdentifier(true),
                GetBasicStructObject(true));
                factory->add_type_object("BasicStruct", GetBasicStructIdentifier(false),
                GetBasicStructObject(false));

                factory->add_type_object("BasicNamesStruct", GetBasicNamesStructIdentifier(true),
                GetBasicNamesStructObject(true));
                factory->add_type_object("BasicNamesStruct", GetBasicNamesStructIdentifier(false),
                GetBasicNamesStructObject(false));

                factory->add_type_object("BasicBadStruct", GetBasicBadStructIdentifier(true),
                GetBasicBadStructObject(true));
                factory->add_type_object("BasicBadStruct", GetBasicBadStructIdentifier(false),
                GetBasicBadStructObject(false));

                factory->add_type_object("BasicWideStruct", GetBasicWideStructIdentifier(true),
                GetBasicWideStructObject(true));
                factory->add_type_object("BasicWideStruct", GetBasicWideStructIdentifier(false),
                GetBasicWideStructObject(false));

                factory->add_type_object("BadBasicWideStruct", GetBadBasicWideStructIdentifier(true),
                GetBadBasicWideStructObject(true));
                factory->add_type_object("BadBasicWideStruct", GetBadBasicWideStructIdentifier(false),
                GetBadBasicWideStructObject(false));

                factory->add_type_object("StringStruct", GetStringStructIdentifier(true),
                GetStringStructObject(true));
                factory->add_type_object("StringStruct", GetStringStructIdentifier(false),
                GetStringStructObject(false));

                factory->add_type_object("LargeStringStruct", GetLargeStringStructIdentifier(true),
                GetLargeStringStructObject(true));
                factory->add_type_object("LargeStringStruct", GetLargeStringStructIdentifier(false),
                GetLargeStringStructObject(false));

                factory->add_type_object("WStringStruct", GetWStringStructIdentifier(true),
                GetWStringStructObject(true));
                factory->add_type_object("WStringStruct", GetWStringStructIdentifier(false),
                GetWStringStructObject(false));

                factory->add_type_object("LargeWStringStruct", GetLargeWStringStructIdentifier(true),
                GetLargeWStringStructObject(true));
                factory->add_type_object("LargeWStringStruct", GetLargeWStringStructIdentifier(false),
                GetLargeWStringStructObject(false));

                factory->add_type_object("ArrayStruct", GetArrayStructIdentifier(true),
                GetArrayStructObject(true));
                factory->add_type_object("ArrayStruct", GetArrayStructIdentifier(false),
                GetArrayStructObject(false));

                factory->add_type_object("ArrayStructEqual", GetArrayStructEqualIdentifier(true),
                GetArrayStructEqualObject(true));
                factory->add_type_object("ArrayStructEqual", GetArrayStructEqualIdentifier(false),
                GetArrayStructEqualObject(false));

                factory->add_type_object("ArrayBadStruct", GetArrayBadStructIdentifier(true),
                GetArrayBadStructObject(true));
                factory->add_type_object("ArrayBadStruct", GetArrayBadStructIdentifier(false),
                GetArrayBadStructObject(false));

                factory->add_type_object("ArrayDimensionsStruct", GetArrayDimensionsStructIdentifier(true),
                GetArrayDimensionsStructObject(true));
                factory->add_type_object("ArrayDimensionsStruct", GetArrayDimensionsStructIdentifier(false),
                GetArrayDimensionsStructObject(false));

                factory->add_type_object("ArraySizeStruct", GetArraySizeStructIdentifier(true),
                GetArraySizeStructObject(true));
                factory->add_type_object("ArraySizeStruct", GetArraySizeStructIdentifier(false),
                GetArraySizeStructObject(false));

                factory->add_type_object("SequenceStruct", GetSequenceStructIdentifier(true),
                GetSequenceStructObject(true));
                factory->add_type_object("SequenceStruct", GetSequenceStructIdentifier(false),
                GetSequenceStructObject(false));

                factory->add_type_object("SequenceStructEqual", GetSequenceStructEqualIdentifier(true),
                GetSequenceStructEqualObject(true));
                factory->add_type_object("SequenceStructEqual", GetSequenceStructEqualIdentifier(false),
                GetSequenceStructEqualObject(false));

                factory->add_type_object("SequenceBadStruct", GetSequenceBadStructIdentifier(true),
                GetSequenceBadStructObject(true));
                factory->add_type_object("SequenceBadStruct", GetSequenceBadStructIdentifier(false),
                GetSequenceBadStructObject(false));

                factory->add_type_object("SequenceBoundsStruct", GetSequenceBoundsStructIdentifier(true),
                GetSequenceBoundsStructObject(true));
                factory->add_type_object("SequenceBoundsStruct", GetSequenceBoundsStructIdentifier(false),
                GetSequenceBoundsStructObject(false));

                factory->add_type_object("SequenceSequenceStruct", GetSequenceSequenceStructIdentifier(true),
                GetSequenceSequenceStructObject(true));
                factory->add_type_object("SequenceSequenceStruct", GetSequenceSequenceStructIdentifier(false),
                GetSequenceSequenceStructObject(false));

                factory->add_type_object("SequenceSequenceBoundsStruct", GetSequenceSequenceBoundsStructIdentifier(true),
                GetSequenceSequenceBoundsStructObject(true));
                factory->add_type_object("SequenceSequenceBoundsStruct", GetSequenceSequenceBoundsStructIdentifier(false),
                GetSequenceSequenceBoundsStructObject(false));

                factory->add_type_object("MapStruct", GetMapStructIdentifier(true),
                GetMapStructObject(true));
                factory->add_type_object("MapStruct", GetMapStructIdentifier(false),
                GetMapStructObject(false));

                factory->add_type_object("MapStructEqual", GetMapStructEqualIdentifier(true),
                GetMapStructEqualObject(true));
                factory->add_type_object("MapStructEqual", GetMapStructEqualIdentifier(false),
                GetMapStructEqualObject(false));

                factory->add_type_object("MapBadKeyStruct", GetMapBadKeyStructIdentifier(true),
                GetMapBadKeyStructObject(true));
                factory->add_type_object("MapBadKeyStruct", GetMapBadKeyStructIdentifier(false),
                GetMapBadKeyStructObject(false));

                factory->add_type_object("MapBadElemStruct", GetMapBadElemStructIdentifier(true),
                GetMapBadElemStructObject(true));
                factory->add_type_object("MapBadElemStruct", GetMapBadElemStructIdentifier(false),
                GetMapBadElemStructObject(false));

                factory->add_type_object("MapBoundsStruct", GetMapBoundsStructIdentifier(true),
                GetMapBoundsStructObject(true));
                factory->add_type_object("MapBoundsStruct", GetMapBoundsStructIdentifier(false),
                GetMapBoundsStructObject(false));

                factory->add_type_object("MapMapStruct", GetMapMapStructIdentifier(true),
                GetMapMapStructObject(true));
                factory->add_type_object("MapMapStruct", GetMapMapStructIdentifier(false),
                GetMapMapStructObject(false));

                factory->add_type_object("MapMapBoundsStruct", GetMapMapBoundsStructIdentifier(true),
                GetMapMapBoundsStructObject(true));
                factory->add_type_object("MapMapBoundsStruct", GetMapMapBoundsStructIdentifier(false),
                GetMapMapBoundsStructObject(false));

                factory->add_type_object("SimpleUnion", GetSimpleUnionIdentifier(true),
                GetSimpleUnionObject(true));
                factory->add_type_object("SimpleUnion", GetSimpleUnionIdentifier(false),
                GetSimpleUnionObject(false));

                factory->add_type_object("SimpleUnionNames", GetSimpleUnionNamesIdentifier(true),
                GetSimpleUnionNamesObject(true));
                factory->add_type_object("SimpleUnionNames", GetSimpleUnionNamesIdentifier(false),
                GetSimpleUnionNamesObject(false));

                factory->add_type_object("SimpleTypeUnion", GetSimpleTypeUnionIdentifier(true),
                GetSimpleTypeUnionObject(true));
                factory->add_type_object("SimpleTypeUnion", GetSimpleTypeUnionIdentifier(false),
                GetSimpleTypeUnionObject(false));

                factory->add_type_object("SimpleBadUnion", GetSimpleBadUnionIdentifier(true),
                GetSimpleBadUnionObject(true));
                factory->add_type_object("SimpleBadUnion", GetSimpleBadUnionIdentifier(false),
                GetSimpleBadUnionObject(false));

                factory->add_type_object("SimpleBadDiscUnion", GetSimpleBadDiscUnionIdentifier(true),
                GetSimpleBadDiscUnionObject(true));
                factory->add_type_object("SimpleBadDiscUnion", GetSimpleBadDiscUnionIdentifier(false),
                GetSimpleBadDiscUnionObject(false));

                factory->add_type_object("SimpleUnionStruct", GetSimpleUnionStructIdentifier(true),
                GetSimpleUnionStructObject(true));
                factory->add_type_object("SimpleUnionStruct", GetSimpleUnionStructIdentifier(false),
                GetSimpleUnionStructObject(false));

                factory->add_type_object("SimpleUnionStructEqual", GetSimpleUnionStructEqualIdentifier(true),
                GetSimpleUnionStructEqualObject(true));
                factory->add_type_object("SimpleUnionStructEqual", GetSimpleUnionStructEqualIdentifier(false),
                GetSimpleUnionStructEqualObject(false));

                factory->add_type_object("SimpleUnionNamesStruct", GetSimpleUnionNamesStructIdentifier(true),
                GetSimpleUnionNamesStructObject(true));
                factory->add_type_object("SimpleUnionNamesStruct", GetSimpleUnionNamesStructIdentifier(false),
                GetSimpleUnionNamesStructObject(false));

                factory->add_type_object("SimpleTypeUnionStruct", GetSimpleTypeUnionStructIdentifier(true),
                GetSimpleTypeUnionStructObject(true));
                factory->add_type_object("SimpleTypeUnionStruct", GetSimpleTypeUnionStructIdentifier(false),
                GetSimpleTypeUnionStructObject(false));

                factory->add_type_object("SimpleBadUnionStruct", GetSimpleBadUnionStructIdentifier(true),
                GetSimpleBadUnionStructObject(true));
                factory->add_type_object("SimpleBadUnionStruct", GetSimpleBadUnionStructIdentifier(false),
                GetSimpleBadUnionStructObject(false));

                factory->add_type_object("SimplBadDiscUnionStruct", GetSimplBadDiscUnionStructIdentifier(true),
                GetSimplBadDiscUnionStructObject(true));
                factory->add_type_object("SimplBadDiscUnionStruct", GetSimplBadDiscUnionStructIdentifier(false),
                GetSimplBadDiscUnionStructObject(false));

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

const TypeIdentifier* GetMyBadEnumIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyBadEnum", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyBadEnumObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyBadEnum", complete);
}

const TypeObject* GetMyBadEnumObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBadEnum", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyBadEnumObject();
    }
    // else
    return GetMinimalMyBadEnumObject();
}

const TypeObject* GetMinimalMyBadEnumObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBadEnum", false);
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
    MinimalEnumeratedLiteral mel_A1;
    mel_A1.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_A1.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_A1.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_A1.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_A1.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_A1.common().flags().IS_KEY(false); // Doesn't apply
    mel_A1.common().flags().IS_DEFAULT(false);
    mel_A1.common().value(value++);
    MD5 A1_hash("A1");
    for(int i = 0; i < 4; ++i)
    {
        mel_A1.detail().name_hash()[i] = A1_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_A1);

    MinimalEnumeratedLiteral mel_B1;
    mel_B1.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_B1.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_B1.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_B1.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_B1.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_B1.common().flags().IS_KEY(false); // Doesn't apply
    mel_B1.common().flags().IS_DEFAULT(false);
    mel_B1.common().value(value++);
    MD5 B1_hash("B1");
    for(int i = 0; i < 4; ++i)
    {
        mel_B1.detail().name_hash()[i] = B1_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_B1);

    MinimalEnumeratedLiteral mel_C1;
    mel_C1.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_C1.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_C1.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_C1.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_C1.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_C1.common().flags().IS_KEY(false); // Doesn't apply
    mel_C1.common().flags().IS_DEFAULT(false);
    mel_C1.common().value(value++);
    MD5 C1_hash("C1");
    for(int i = 0; i < 4; ++i)
    {
        mel_C1.detail().name_hash()[i] = C1_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_C1);


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

    TypeObjectFactory::get_instance()->add_type_object("MyBadEnum", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyBadEnum", false);
}

const TypeObject* GetCompleteMyBadEnumObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBadEnum", true);
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
    type_object->complete().enumerated_type().header().detail().type_name("MyBadEnum");


    uint32_t value = 0;
    CompleteEnumeratedLiteral cel_A1;
    cel_A1.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_A1.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_A1.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_A1.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_A1.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_A1.common().flags().IS_KEY(false); // Doesn't apply
    cel_A1.common().flags().IS_DEFAULT(false);
    cel_A1.common().value(value++);
    cel_A1.detail().name("A1");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_A1);

    CompleteEnumeratedLiteral cel_B1;
    cel_B1.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_B1.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_B1.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_B1.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_B1.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_B1.common().flags().IS_KEY(false); // Doesn't apply
    cel_B1.common().flags().IS_DEFAULT(false);
    cel_B1.common().value(value++);
    cel_B1.detail().name("B1");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_B1);

    CompleteEnumeratedLiteral cel_C1;
    cel_C1.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_C1.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_C1.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_C1.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_C1.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_C1.common().flags().IS_KEY(false); // Doesn't apply
    cel_C1.common().flags().IS_DEFAULT(false);
    cel_C1.common().value(value++);
    cel_C1.detail().name("C1");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_C1);


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

    TypeObjectFactory::get_instance()->add_type_object("MyBadEnum", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyBadEnum", true);
}

const TypeIdentifier* GetMyEnumStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyEnumStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyEnumStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyEnumStruct", complete);
}

const TypeObject* GetMyEnumStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnumStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyEnumStructObject();
    }
    //else
    return GetMinimalMyEnumStructObject();
}

const TypeObject* GetMinimalMyEnumStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnumStruct", false);
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

    TypeObjectFactory::get_instance()->add_type_object("MyEnumStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyEnumStruct", false);
}

const TypeObject* GetCompleteMyEnumStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyEnumStruct", true);
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
    type_object->complete().struct_type().header().detail().type_name("MyEnumStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("MyEnumStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyEnumStruct", true);
}

const TypeIdentifier* GetMyBadEnumStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyBadEnumStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyBadEnumStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyBadEnumStruct", complete);
}

const TypeObject* GetMyBadEnumStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBadEnumStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyBadEnumStructObject();
    }
    //else
    return GetMinimalMyBadEnumStructObject();
}

const TypeObject* GetMinimalMyBadEnumStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBadEnumStruct", false);
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
    mst_my_enum.common().member_type_id(*GetMyBadEnumIdentifier(false));
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

    TypeObjectFactory::get_instance()->add_type_object("MyBadEnumStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyBadEnumStruct", false);
}

const TypeObject* GetCompleteMyBadEnumStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyBadEnumStruct", true);
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
    cst_my_enum.common().member_type_id(*GetMyBadEnumIdentifier(true));
    cst_my_enum.detail().name("my_enum");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_enum);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MyBadEnumStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("MyBadEnumStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyBadEnumStruct", true);
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

const TypeIdentifier* GetMyAliasEnumStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnumStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyAliasEnumStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MyAliasEnumStruct", complete);
}

const TypeObject* GetMyAliasEnumStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnumStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyAliasEnumStructObject();
    }
    //else
    return GetMinimalMyAliasEnumStructObject();
}

const TypeObject* GetMinimalMyAliasEnumStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnumStruct", false);
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
    mst_my_enum.common().member_type_id(*GetMyAliasEnumIdentifier(false));
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

    TypeObjectFactory::get_instance()->add_type_object("MyAliasEnumStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasEnumStruct", false);
}

const TypeObject* GetCompleteMyAliasEnumStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyAliasEnumStruct", true);
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
    cst_my_enum.common().member_type_id(*GetMyAliasEnumIdentifier(true));
    cst_my_enum.detail().name("my_enum");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_enum);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MyAliasEnumStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("MyAliasEnumStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MyAliasEnumStruct", true);
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

const TypeIdentifier* GetBasicNamesStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BasicNamesStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetBasicNamesStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("BasicNamesStruct", complete);
}

const TypeObject* GetBasicNamesStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicNamesStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteBasicNamesStructObject();
    }
    //else
    return GetMinimalBasicNamesStructObject();
}

const TypeObject* GetMinimalBasicNamesStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicNamesStruct", false);
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
    MinimalStructMember mst_my_bool_name;
    mst_my_bool_name.common().member_id(memberId++);
    mst_my_bool_name.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_bool_name.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_bool_name.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_bool_name.common().member_flags().IS_OPTIONAL(false);
    mst_my_bool_name.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_bool_name.common().member_flags().IS_KEY(false);
    mst_my_bool_name.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_bool_name.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("bool", false));

    MD5 my_bool_name_hash("my_bool_name");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_bool_name.detail().name_hash()[i] = my_bool_name_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_bool_name);

    MinimalStructMember mst_my_int32_name;
    mst_my_int32_name.common().member_id(memberId++);
    mst_my_int32_name.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_int32_name.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_int32_name.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_int32_name.common().member_flags().IS_OPTIONAL(false);
    mst_my_int32_name.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_int32_name.common().member_flags().IS_KEY(false);
    mst_my_int32_name.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_int32_name.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MD5 my_int32_name_hash("my_int32_name");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_int32_name.detail().name_hash()[i] = my_int32_name_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_int32_name);

    MinimalStructMember mst_my_string_name;
    mst_my_string_name.common().member_id(memberId++);
    mst_my_string_name.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_string_name.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_string_name.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_string_name.common().member_flags().IS_OPTIONAL(false);
    mst_my_string_name.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_string_name.common().member_flags().IS_KEY(false);
    mst_my_string_name.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_string_name.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    MD5 my_string_name_hash("my_string_name");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_string_name.detail().name_hash()[i] = my_string_name_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_string_name);


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

    TypeObjectFactory::get_instance()->add_type_object("BasicNamesStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BasicNamesStruct", false);
}

const TypeObject* GetCompleteBasicNamesStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicNamesStruct", true);
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
    CompleteStructMember cst_my_bool_name;
    cst_my_bool_name.common().member_id(memberId++);
    cst_my_bool_name.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_bool_name.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_bool_name.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_bool_name.common().member_flags().IS_OPTIONAL(false);
    cst_my_bool_name.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_bool_name.common().member_flags().IS_KEY(false);
    cst_my_bool_name.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_bool_name.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("bool", false));

    cst_my_bool_name.detail().name("my_bool_name");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_bool_name);

    CompleteStructMember cst_my_int32_name;
    cst_my_int32_name.common().member_id(memberId++);
    cst_my_int32_name.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_int32_name.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_int32_name.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_int32_name.common().member_flags().IS_OPTIONAL(false);
    cst_my_int32_name.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_int32_name.common().member_flags().IS_KEY(false);
    cst_my_int32_name.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_int32_name.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    cst_my_int32_name.detail().name("my_int32_name");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_int32_name);

    CompleteStructMember cst_my_string_name;
    cst_my_string_name.common().member_id(memberId++);
    cst_my_string_name.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_string_name.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_string_name.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_string_name.common().member_flags().IS_OPTIONAL(false);
    cst_my_string_name.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_string_name.common().member_flags().IS_KEY(false);
    cst_my_string_name.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_string_name.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    cst_my_string_name.detail().name("my_string_name");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_string_name);


    // Header
    type_object->complete().struct_type().header().detail().type_name("BasicNamesStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("BasicNamesStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BasicNamesStruct", true);
}

const TypeIdentifier* GetBasicBadStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BasicBadStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetBasicBadStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("BasicBadStruct", complete);
}

const TypeObject* GetBasicBadStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicBadStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteBasicBadStructObject();
    }
    //else
    return GetMinimalBasicBadStructObject();
}

const TypeObject* GetMinimalBasicBadStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicBadStruct", false);
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
    mst_my_bool.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    MD5 my_bool_hash("my_bool");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_bool.detail().name_hash()[i] = my_bool_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_bool);

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

    TypeObjectFactory::get_instance()->add_type_object("BasicBadStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BasicBadStruct", false);
}

const TypeObject* GetCompleteBasicBadStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicBadStruct", true);
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
    cst_my_bool.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    cst_my_bool.detail().name("my_bool");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_bool);

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
    type_object->complete().struct_type().header().detail().type_name("BasicBadStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("BasicBadStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BasicBadStruct", true);
}

const TypeIdentifier* GetBasicWideStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BasicWideStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetBasicWideStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("BasicWideStruct", complete);
}

const TypeObject* GetBasicWideStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicWideStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteBasicWideStructObject();
    }
    //else
    return GetMinimalBasicWideStructObject();
}

const TypeObject* GetMinimalBasicWideStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicWideStruct", false);
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

    MinimalStructMember mst_new_int32;
    mst_new_int32.common().member_id(memberId++);
    mst_new_int32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_new_int32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_new_int32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_new_int32.common().member_flags().IS_OPTIONAL(false);
    mst_new_int32.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_new_int32.common().member_flags().IS_KEY(false);
    mst_new_int32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_new_int32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MD5 new_int32_hash("new_int32");
    for(int i = 0; i < 4; ++i)
    {
        mst_new_int32.detail().name_hash()[i] = new_int32_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_new_int32);

    MinimalStructMember mst_new_string;
    mst_new_string.common().member_id(memberId++);
    mst_new_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_new_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_new_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_new_string.common().member_flags().IS_OPTIONAL(false);
    mst_new_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_new_string.common().member_flags().IS_KEY(false);
    mst_new_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_new_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    MD5 new_string_hash("new_string");
    for(int i = 0; i < 4; ++i)
    {
        mst_new_string.detail().name_hash()[i] = new_string_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_new_string);


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

    TypeObjectFactory::get_instance()->add_type_object("BasicWideStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BasicWideStruct", false);
}

const TypeObject* GetCompleteBasicWideStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BasicWideStruct", true);
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

    CompleteStructMember cst_new_int32;
    cst_new_int32.common().member_id(memberId++);
    cst_new_int32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_new_int32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_new_int32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_new_int32.common().member_flags().IS_OPTIONAL(false);
    cst_new_int32.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_new_int32.common().member_flags().IS_KEY(false);
    cst_new_int32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_new_int32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    cst_new_int32.detail().name("new_int32");

    type_object->complete().struct_type().member_seq().emplace_back(cst_new_int32);

    CompleteStructMember cst_new_string;
    cst_new_string.common().member_id(memberId++);
    cst_new_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_new_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_new_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_new_string.common().member_flags().IS_OPTIONAL(false);
    cst_new_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_new_string.common().member_flags().IS_KEY(false);
    cst_new_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_new_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    cst_new_string.detail().name("new_string");

    type_object->complete().struct_type().member_seq().emplace_back(cst_new_string);


    // Header
    type_object->complete().struct_type().header().detail().type_name("BasicWideStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("BasicWideStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BasicWideStruct", true);
}

const TypeIdentifier* GetBadBasicWideStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("BadBasicWideStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetBadBasicWideStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("BadBasicWideStruct", complete);
}

const TypeObject* GetBadBasicWideStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BadBasicWideStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteBadBasicWideStructObject();
    }
    //else
    return GetMinimalBadBasicWideStructObject();
}

const TypeObject* GetMinimalBadBasicWideStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BadBasicWideStruct", false);
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
    MinimalStructMember mst_new_int32;
    mst_new_int32.common().member_id(memberId++);
    mst_new_int32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_new_int32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_new_int32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_new_int32.common().member_flags().IS_OPTIONAL(false);
    mst_new_int32.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_new_int32.common().member_flags().IS_KEY(false);
    mst_new_int32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_new_int32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MD5 new_int32_hash("new_int32");
    for(int i = 0; i < 4; ++i)
    {
        mst_new_int32.detail().name_hash()[i] = new_int32_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_new_int32);

    MinimalStructMember mst_new_string;
    mst_new_string.common().member_id(memberId++);
    mst_new_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_new_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_new_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_new_string.common().member_flags().IS_OPTIONAL(false);
    mst_new_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_new_string.common().member_flags().IS_KEY(false);
    mst_new_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_new_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    MD5 new_string_hash("new_string");
    for(int i = 0; i < 4; ++i)
    {
        mst_new_string.detail().name_hash()[i] = new_string_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_new_string);

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

    TypeObjectFactory::get_instance()->add_type_object("BadBasicWideStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BadBasicWideStruct", false);
}

const TypeObject* GetCompleteBadBasicWideStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("BadBasicWideStruct", true);
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
    CompleteStructMember cst_new_int32;
    cst_new_int32.common().member_id(memberId++);
    cst_new_int32.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_new_int32.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_new_int32.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_new_int32.common().member_flags().IS_OPTIONAL(false);
    cst_new_int32.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_new_int32.common().member_flags().IS_KEY(false);
    cst_new_int32.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_new_int32.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    cst_new_int32.detail().name("new_int32");

    type_object->complete().struct_type().member_seq().emplace_back(cst_new_int32);

    CompleteStructMember cst_new_string;
    cst_new_string.common().member_id(memberId++);
    cst_new_string.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_new_string.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_new_string.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_new_string.common().member_flags().IS_OPTIONAL(false);
    cst_new_string.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_new_string.common().member_flags().IS_KEY(false);
    cst_new_string.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_new_string.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    cst_new_string.detail().name("new_string");

    type_object->complete().struct_type().member_seq().emplace_back(cst_new_string);

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
    type_object->complete().struct_type().header().detail().type_name("BadBasicWideStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("BadBasicWideStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("BadBasicWideStruct", true);
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

const TypeIdentifier* GetArrayStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ArrayStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetArrayStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ArrayStruct", complete);
}

const TypeObject* GetArrayStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteArrayStructObject();
    }
    //else
    return GetMinimalArrayStructObject();
}

const TypeObject* GetMinimalArrayStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayStruct", false);
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
    mst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {2}, false));


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

    TypeObjectFactory::get_instance()->add_type_object("ArrayStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayStruct", false);
}

const TypeObject* GetCompleteArrayStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayStruct", true);
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
    cst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {2}, true));


    cst_my_array.detail().name("my_array");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ArrayStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ArrayStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayStruct", true);
}

const TypeIdentifier* GetArrayStructEqualIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ArrayStructEqual", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetArrayStructEqualObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ArrayStructEqual", complete);
}

const TypeObject* GetArrayStructEqualObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayStructEqual", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteArrayStructEqualObject();
    }
    //else
    return GetMinimalArrayStructEqualObject();
}

const TypeObject* GetMinimalArrayStructEqualObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayStructEqual", false);
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
    MinimalStructMember mst_my_array_equal;
    mst_my_array_equal.common().member_id(memberId++);
    mst_my_array_equal.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_array_equal.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_array_equal.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_array_equal.common().member_flags().IS_OPTIONAL(false);
    mst_my_array_equal.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_array_equal.common().member_flags().IS_KEY(false);
    mst_my_array_equal.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_array_equal.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {2}, false));


    MD5 my_array_equal_hash("my_array_equal");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_array_equal.detail().name_hash()[i] = my_array_equal_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_array_equal);


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

    TypeObjectFactory::get_instance()->add_type_object("ArrayStructEqual", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayStructEqual", false);
}

const TypeObject* GetCompleteArrayStructEqualObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayStructEqual", true);
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
    CompleteStructMember cst_my_array_equal;
    cst_my_array_equal.common().member_id(memberId++);
    cst_my_array_equal.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_array_equal.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_array_equal.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_array_equal.common().member_flags().IS_OPTIONAL(false);
    cst_my_array_equal.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_array_equal.common().member_flags().IS_KEY(false);
    cst_my_array_equal.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_array_equal.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {2}, true));


    cst_my_array_equal.detail().name("my_array_equal");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array_equal);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ArrayStructEqual");
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

    TypeObjectFactory::get_instance()->add_type_object("ArrayStructEqual", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayStructEqual", true);
}

const TypeIdentifier* GetArrayBadStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ArrayBadStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetArrayBadStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ArrayBadStruct", complete);
}

const TypeObject* GetArrayBadStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayBadStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteArrayBadStructObject();
    }
    //else
    return GetMinimalArrayBadStructObject();
}

const TypeObject* GetMinimalArrayBadStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayBadStruct", false);
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
    mst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint8_t", {2}, false));


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

    TypeObjectFactory::get_instance()->add_type_object("ArrayBadStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayBadStruct", false);
}

const TypeObject* GetCompleteArrayBadStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayBadStruct", true);
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
    cst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint8_t", {2}, true));


    cst_my_array.detail().name("my_array");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ArrayBadStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ArrayBadStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayBadStruct", true);
}

const TypeIdentifier* GetArrayDimensionsStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ArrayDimensionsStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetArrayDimensionsStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ArrayDimensionsStruct", complete);
}

const TypeObject* GetArrayDimensionsStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayDimensionsStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteArrayDimensionsStructObject();
    }
    //else
    return GetMinimalArrayDimensionsStructObject();
}

const TypeObject* GetMinimalArrayDimensionsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayDimensionsStruct", false);
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
    mst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {2, 2}, false));


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

    TypeObjectFactory::get_instance()->add_type_object("ArrayDimensionsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayDimensionsStruct", false);
}

const TypeObject* GetCompleteArrayDimensionsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArrayDimensionsStruct", true);
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
    cst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {2, 2}, true));


    cst_my_array.detail().name("my_array");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ArrayDimensionsStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ArrayDimensionsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArrayDimensionsStruct", true);
}

const TypeIdentifier* GetArraySizeStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ArraySizeStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetArraySizeStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ArraySizeStruct", complete);
}

const TypeObject* GetArraySizeStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArraySizeStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteArraySizeStructObject();
    }
    //else
    return GetMinimalArraySizeStructObject();
}

const TypeObject* GetMinimalArraySizeStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArraySizeStruct", false);
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
    mst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {5}, false));


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

    TypeObjectFactory::get_instance()->add_type_object("ArraySizeStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArraySizeStruct", false);
}

const TypeObject* GetCompleteArraySizeStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ArraySizeStruct", true);
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
    cst_my_array.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {5}, true));


    cst_my_array.detail().name("my_array");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_array);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ArraySizeStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("ArraySizeStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ArraySizeStruct", true);
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

const TypeIdentifier* GetSequenceStructEqualIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SequenceStructEqual", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSequenceStructEqualObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SequenceStructEqual", complete);
}

const TypeObject* GetSequenceStructEqualObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceStructEqual", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSequenceStructEqualObject();
    }
    //else
    return GetMinimalSequenceStructEqualObject();
}

const TypeObject* GetMinimalSequenceStructEqualObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceStructEqual", false);
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
    MinimalStructMember mst_my_sequence_equal;
    mst_my_sequence_equal.common().member_id(memberId++);
    mst_my_sequence_equal.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_sequence_equal.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_sequence_equal.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_sequence_equal.common().member_flags().IS_OPTIONAL(false);
    mst_my_sequence_equal.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_sequence_equal.common().member_flags().IS_KEY(false);
    mst_my_sequence_equal.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_sequence_equal.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", 2, false));


    MD5 my_sequence_equal_hash("my_sequence_equal");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_sequence_equal.detail().name_hash()[i] = my_sequence_equal_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_sequence_equal);


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

    TypeObjectFactory::get_instance()->add_type_object("SequenceStructEqual", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceStructEqual", false);
}

const TypeObject* GetCompleteSequenceStructEqualObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceStructEqual", true);
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
    CompleteStructMember cst_my_sequence_equal;
    cst_my_sequence_equal.common().member_id(memberId++);
    cst_my_sequence_equal.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_sequence_equal.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_sequence_equal.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_sequence_equal.common().member_flags().IS_OPTIONAL(false);
    cst_my_sequence_equal.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_sequence_equal.common().member_flags().IS_KEY(false);
    cst_my_sequence_equal.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_sequence_equal.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", 2, true));


    cst_my_sequence_equal.detail().name("my_sequence_equal");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_sequence_equal);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SequenceStructEqual");
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

    TypeObjectFactory::get_instance()->add_type_object("SequenceStructEqual", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceStructEqual", true);
}

const TypeIdentifier* GetSequenceBadStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SequenceBadStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSequenceBadStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SequenceBadStruct", complete);
}

const TypeObject* GetSequenceBadStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceBadStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSequenceBadStructObject();
    }
    //else
    return GetMinimalSequenceBadStructObject();
}

const TypeObject* GetMinimalSequenceBadStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceBadStruct", false);
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
    mst_my_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 2, false));


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

    TypeObjectFactory::get_instance()->add_type_object("SequenceBadStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceBadStruct", false);
}

const TypeObject* GetCompleteSequenceBadStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceBadStruct", true);
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
    cst_my_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 2, true));


    cst_my_sequence.detail().name("my_sequence");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_sequence);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SequenceBadStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SequenceBadStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceBadStruct", true);
}

const TypeIdentifier* GetSequenceBoundsStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SequenceBoundsStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSequenceBoundsStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SequenceBoundsStruct", complete);
}

const TypeObject* GetSequenceBoundsStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceBoundsStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSequenceBoundsStructObject();
    }
    //else
    return GetMinimalSequenceBoundsStructObject();
}

const TypeObject* GetMinimalSequenceBoundsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceBoundsStruct", false);
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
    mst_my_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", 4, false));


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

    TypeObjectFactory::get_instance()->add_type_object("SequenceBoundsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceBoundsStruct", false);
}

const TypeObject* GetCompleteSequenceBoundsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceBoundsStruct", true);
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
    cst_my_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", 4, true));


    cst_my_sequence.detail().name("my_sequence");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_sequence);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SequenceBoundsStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SequenceBoundsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceBoundsStruct", true);
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

const TypeIdentifier* GetSequenceSequenceBoundsStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SequenceSequenceBoundsStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSequenceSequenceBoundsStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SequenceSequenceBoundsStruct", complete);
}

const TypeObject* GetSequenceSequenceBoundsStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceBoundsStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSequenceSequenceBoundsStructObject();
    }
    //else
    return GetMinimalSequenceSequenceBoundsStructObject();
}

const TypeObject* GetMinimalSequenceSequenceBoundsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceBoundsStruct", false);
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
    mst_my_sequence_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier(TypeNamesGenerator::get_sequence_type_name("int32_t", 5), 5, false));


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

    TypeObjectFactory::get_instance()->add_type_object("SequenceSequenceBoundsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceBoundsStruct", false);
}

const TypeObject* GetCompleteSequenceSequenceBoundsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceBoundsStruct", true);
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
    cst_my_sequence_sequence.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier(TypeNamesGenerator::get_sequence_type_name("int32_t", 5), 5, true));


    cst_my_sequence_sequence.detail().name("my_sequence_sequence");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_sequence_sequence);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SequenceSequenceBoundsStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SequenceSequenceBoundsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SequenceSequenceBoundsStruct", true);
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

const TypeIdentifier* GetMapStructEqualIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MapStructEqual", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMapStructEqualObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MapStructEqual", complete);
}

const TypeObject* GetMapStructEqualObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapStructEqual", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMapStructEqualObject();
    }
    //else
    return GetMinimalMapStructEqualObject();
}

const TypeObject* GetMinimalMapStructEqualObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapStructEqual", false);
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
    MinimalStructMember mst_my_map_equal;
    mst_my_map_equal.common().member_id(memberId++);
    mst_my_map_equal.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_map_equal.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_map_equal.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_map_equal.common().member_flags().IS_OPTIONAL(false);
    mst_my_map_equal.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_map_equal.common().member_flags().IS_KEY(false);
    mst_my_map_equal.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_map_equal.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "int32_t", 2, false));


    MD5 my_map_equal_hash("my_map_equal");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_map_equal.detail().name_hash()[i] = my_map_equal_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_map_equal);


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

    TypeObjectFactory::get_instance()->add_type_object("MapStructEqual", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapStructEqual", false);
}

const TypeObject* GetCompleteMapStructEqualObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapStructEqual", true);
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
    CompleteStructMember cst_my_map_equal;
    cst_my_map_equal.common().member_id(memberId++);
    cst_my_map_equal.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_map_equal.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_map_equal.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_map_equal.common().member_flags().IS_OPTIONAL(false);
    cst_my_map_equal.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_map_equal.common().member_flags().IS_KEY(false);
    cst_my_map_equal.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_map_equal.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "int32_t", 2, true));


    cst_my_map_equal.detail().name("my_map_equal");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map_equal);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MapStructEqual");
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

    TypeObjectFactory::get_instance()->add_type_object("MapStructEqual", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapStructEqual", true);
}

const TypeIdentifier* GetMapBadKeyStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MapBadKeyStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMapBadKeyStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MapBadKeyStruct", complete);
}

const TypeObject* GetMapBadKeyStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapBadKeyStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMapBadKeyStructObject();
    }
    //else
    return GetMinimalMapBadKeyStructObject();
}

const TypeObject* GetMinimalMapBadKeyStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapBadKeyStruct", false);
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
    mst_my_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("uint8_t", "int32_t", 2, false));


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

    TypeObjectFactory::get_instance()->add_type_object("MapBadKeyStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapBadKeyStruct", false);
}

const TypeObject* GetCompleteMapBadKeyStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapBadKeyStruct", true);
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
    cst_my_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("uint8_t", "int32_t", 2, true));


    cst_my_map.detail().name("my_map");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MapBadKeyStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("MapBadKeyStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapBadKeyStruct", true);
}

const TypeIdentifier* GetMapBadElemStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MapBadElemStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMapBadElemStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MapBadElemStruct", complete);
}

const TypeObject* GetMapBadElemStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapBadElemStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMapBadElemStructObject();
    }
    //else
    return GetMinimalMapBadElemStructObject();
}

const TypeObject* GetMinimalMapBadElemStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapBadElemStruct", false);
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
    mst_my_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "int64_t", 2, false));


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

    TypeObjectFactory::get_instance()->add_type_object("MapBadElemStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapBadElemStruct", false);
}

const TypeObject* GetCompleteMapBadElemStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapBadElemStruct", true);
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
    cst_my_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "int64_t", 2, true));


    cst_my_map.detail().name("my_map");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MapBadElemStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("MapBadElemStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapBadElemStruct", true);
}

const TypeIdentifier* GetMapBoundsStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MapBoundsStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMapBoundsStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MapBoundsStruct", complete);
}

const TypeObject* GetMapBoundsStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapBoundsStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMapBoundsStructObject();
    }
    //else
    return GetMinimalMapBoundsStructObject();
}

const TypeObject* GetMinimalMapBoundsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapBoundsStruct", false);
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
    mst_my_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "int32_t", 4, false));


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

    TypeObjectFactory::get_instance()->add_type_object("MapBoundsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapBoundsStruct", false);
}

const TypeObject* GetCompleteMapBoundsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapBoundsStruct", true);
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
    cst_my_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", "int32_t", 4, true));


    cst_my_map.detail().name("my_map");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MapBoundsStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("MapBoundsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapBoundsStruct", true);
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

const TypeIdentifier* GetMapMapBoundsStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MapMapBoundsStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMapMapBoundsStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("MapMapBoundsStruct", complete);
}

const TypeObject* GetMapMapBoundsStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapMapBoundsStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMapMapBoundsStructObject();
    }
    //else
    return GetMinimalMapMapBoundsStructObject();
}

const TypeObject* GetMinimalMapMapBoundsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapMapBoundsStruct", false);
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
    mst_my_map_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", TypeNamesGenerator::get_map_type_name("int32_t", "int32_t", 3), 3, false));


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

    TypeObjectFactory::get_instance()->add_type_object("MapMapBoundsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapMapBoundsStruct", false);
}

const TypeObject* GetCompleteMapMapBoundsStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MapMapBoundsStruct", true);
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
    cst_my_map_map.common().member_type_id(*TypeObjectFactory::get_instance()->get_map_identifier("int32_t", TypeNamesGenerator::get_map_type_name("int32_t", "int32_t", 3), 3, true));


    cst_my_map_map.detail().name("my_map_map");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_map_map);


    // Header
    type_object->complete().struct_type().header().detail().type_name("MapMapBoundsStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("MapMapBoundsStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("MapMapBoundsStruct", true);
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

const TypeIdentifier* GetSimpleUnionNamesIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnionNames", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleUnionNamesObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnionNames", complete);
}

const TypeObject* GetSimpleUnionNamesObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNames", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleUnionNamesObject();
    }
    // else
    return GetMinimalSimpleUnionNamesObject();
}

const TypeObject* GetMinimalSimpleUnionNamesObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNames", false);
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
    MinimalUnionMember mst_first_case;
    mst_first_case.common().member_id(memberId++);
    mst_first_case.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_first_case.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_first_case.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_first_case.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_first_case.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_first_case.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_first_case.common().member_flags().IS_DEFAULT(false);
    mst_first_case.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_first_case.common().label_seq().emplace_back(A);
    MD5 first_case_hash("first_case");
    for(int i = 0; i < 4; ++i)
    {
        mst_first_case.detail().name_hash()[i] = first_case_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_first_case);

    MinimalUnionMember mst_second_case;
    mst_second_case.common().member_id(memberId++);
    mst_second_case.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_second_case.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_second_case.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_second_case.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_second_case.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_second_case.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_second_case.common().member_flags().IS_DEFAULT(false);
    mst_second_case.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    mst_second_case.common().label_seq().emplace_back(B);
    MD5 second_case_hash("second_case");
    for(int i = 0; i < 4; ++i)
    {
        mst_second_case.detail().name_hash()[i] = second_case_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_second_case);


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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnionNames", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNames", false);
}

const TypeObject* GetCompleteSimpleUnionNamesObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNames", true);
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
    CompleteUnionMember cst_first_case;
    cst_first_case.common().member_id(memberId++);
    cst_first_case.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_first_case.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_first_case.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_first_case.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_first_case.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_first_case.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_first_case.common().member_flags().IS_DEFAULT(false);
    cst_first_case.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_first_case.common().label_seq().emplace_back(A);

    cst_first_case.detail().name("first_case");

    type_object->complete().union_type().member_seq().emplace_back(cst_first_case);

    CompleteUnionMember cst_second_case;
    cst_second_case.common().member_id(memberId++);
    cst_second_case.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_second_case.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_second_case.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_second_case.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_second_case.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_second_case.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_second_case.common().member_flags().IS_DEFAULT(false);
    cst_second_case.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));
    cst_second_case.common().label_seq().emplace_back(B);

    cst_second_case.detail().name("second_case");

    type_object->complete().union_type().member_seq().emplace_back(cst_second_case);


    // Header
    type_object->complete().union_type().header().detail().type_name("SimpleUnionNames");


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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnionNames", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNames", true);
}

const TypeIdentifier* GetSimpleTypeUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleTypeUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleTypeUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleTypeUnion", complete);
}

const TypeObject* GetSimpleTypeUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleTypeUnionObject();
    }
    // else
    return GetMinimalSimpleTypeUnionObject();
}

const TypeObject* GetMinimalSimpleTypeUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnion", false);
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
    mst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

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

    TypeObjectFactory::get_instance()->add_type_object("SimpleTypeUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnion", false);
}

const TypeObject* GetCompleteSimpleTypeUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnion", true);
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
    cst_first.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));
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
    type_object->complete().union_type().header().detail().type_name("SimpleTypeUnion");


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

    TypeObjectFactory::get_instance()->add_type_object("SimpleTypeUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnion", true);
}

const TypeIdentifier* GetSimpleBadUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleBadUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleBadUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleBadUnion", complete);
}

const TypeObject* GetSimpleBadUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleBadUnionObject();
    }
    // else
    return GetMinimalSimpleBadUnionObject();
}

const TypeObject* GetMinimalSimpleBadUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnion", false);
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

    mst_second.common().label_seq().emplace_back(C);
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleBadUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnion", false);
}

const TypeObject* GetCompleteSimpleBadUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnion", true);
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
    cst_second.common().label_seq().emplace_back(C);

    cst_second.detail().name("second");

    type_object->complete().union_type().member_seq().emplace_back(cst_second);


    // Header
    type_object->complete().union_type().header().detail().type_name("SimpleBadUnion");


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

    TypeObjectFactory::get_instance()->add_type_object("SimpleBadUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnion", true);
}

const TypeIdentifier* GetSimpleBadDiscUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleBadDiscUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleBadDiscUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleBadDiscUnion", complete);
}

const TypeObject* GetSimpleBadDiscUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleBadDiscUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleBadDiscUnionObject();
    }
    // else
    return GetMinimalSimpleBadDiscUnionObject();
}

const TypeObject* GetMinimalSimpleBadDiscUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleBadDiscUnion", false);
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

    mst_first.common().label_seq().emplace_back(0);
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

    mst_second.common().label_seq().emplace_back(1);
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleBadDiscUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleBadDiscUnion", false);
}

const TypeObject* GetCompleteSimpleBadDiscUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleBadDiscUnion", true);
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
    cst_first.common().label_seq().emplace_back(0);

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
    cst_second.common().label_seq().emplace_back(1);

    cst_second.detail().name("second");

    type_object->complete().union_type().member_seq().emplace_back(cst_second);


    // Header
    type_object->complete().union_type().header().detail().type_name("SimpleBadDiscUnion");


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

    TypeObjectFactory::get_instance()->add_type_object("SimpleBadDiscUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleBadDiscUnion", true);
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

const TypeIdentifier* GetSimpleUnionStructEqualIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnionStructEqual", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleUnionStructEqualObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnionStructEqual", complete);
}

const TypeObject* GetSimpleUnionStructEqualObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStructEqual", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleUnionStructEqualObject();
    }
    //else
    return GetMinimalSimpleUnionStructEqualObject();
}

const TypeObject* GetMinimalSimpleUnionStructEqualObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStructEqual", false);
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
    MinimalStructMember mst_my_union_equal;
    mst_my_union_equal.common().member_id(memberId++);
    mst_my_union_equal.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_my_union_equal.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_my_union_equal.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_my_union_equal.common().member_flags().IS_OPTIONAL(false);
    mst_my_union_equal.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_my_union_equal.common().member_flags().IS_KEY(false);
    mst_my_union_equal.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_my_union_equal.common().member_type_id(*GetSimpleUnionIdentifier(false));
    MD5 my_union_equal_hash("my_union_equal");
    for(int i = 0; i < 4; ++i)
    {
        mst_my_union_equal.detail().name_hash()[i] = my_union_equal_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_my_union_equal);


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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnionStructEqual", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStructEqual", false);
}

const TypeObject* GetCompleteSimpleUnionStructEqualObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStructEqual", true);
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
    CompleteStructMember cst_my_union_equal;
    cst_my_union_equal.common().member_id(memberId++);
    cst_my_union_equal.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_my_union_equal.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_my_union_equal.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_my_union_equal.common().member_flags().IS_OPTIONAL(false);
    cst_my_union_equal.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_my_union_equal.common().member_flags().IS_KEY(false);
    cst_my_union_equal.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_my_union_equal.common().member_type_id(*GetSimpleUnionIdentifier(true));
    cst_my_union_equal.detail().name("my_union_equal");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union_equal);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SimpleUnionStructEqual");
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnionStructEqual", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnionStructEqual", true);
}

const TypeIdentifier* GetSimpleUnionNamesStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnionNamesStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleUnionNamesStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleUnionNamesStruct", complete);
}

const TypeObject* GetSimpleUnionNamesStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNamesStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleUnionNamesStructObject();
    }
    //else
    return GetMinimalSimpleUnionNamesStructObject();
}

const TypeObject* GetMinimalSimpleUnionNamesStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNamesStruct", false);
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
    mst_my_union.common().member_type_id(*GetSimpleUnionNamesIdentifier(false));
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnionNamesStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNamesStruct", false);
}

const TypeObject* GetCompleteSimpleUnionNamesStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNamesStruct", true);
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
    cst_my_union.common().member_type_id(*GetSimpleUnionNamesIdentifier(true));
    cst_my_union.detail().name("my_union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SimpleUnionNamesStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleUnionNamesStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleUnionNamesStruct", true);
}

const TypeIdentifier* GetSimpleTypeUnionStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleTypeUnionStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleTypeUnionStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleTypeUnionStruct", complete);
}

const TypeObject* GetSimpleTypeUnionStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnionStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleTypeUnionStructObject();
    }
    //else
    return GetMinimalSimpleTypeUnionStructObject();
}

const TypeObject* GetMinimalSimpleTypeUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnionStruct", false);
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
    mst_my_union.common().member_type_id(*GetSimpleTypeUnionIdentifier(false));
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleTypeUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnionStruct", false);
}

const TypeObject* GetCompleteSimpleTypeUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnionStruct", true);
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
    cst_my_union.common().member_type_id(*GetSimpleTypeUnionIdentifier(true));
    cst_my_union.detail().name("my_union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SimpleTypeUnionStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleTypeUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleTypeUnionStruct", true);
}

const TypeIdentifier* GetSimpleBadUnionStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimpleBadUnionStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimpleBadUnionStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SimpleBadUnionStruct", complete);
}

const TypeObject* GetSimpleBadUnionStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnionStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimpleBadUnionStructObject();
    }
    //else
    return GetMinimalSimpleBadUnionStructObject();
}

const TypeObject* GetMinimalSimpleBadUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnionStruct", false);
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
    mst_my_union.common().member_type_id(*GetSimpleBadUnionIdentifier(false));
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleBadUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnionStruct", false);
}

const TypeObject* GetCompleteSimpleBadUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnionStruct", true);
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
    cst_my_union.common().member_type_id(*GetSimpleBadUnionIdentifier(true));
    cst_my_union.detail().name("my_union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SimpleBadUnionStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SimpleBadUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimpleBadUnionStruct", true);
}

const TypeIdentifier* GetSimplBadDiscUnionStructIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("SimplBadDiscUnionStruct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetSimplBadDiscUnionStructObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("SimplBadDiscUnionStruct", complete);
}

const TypeObject* GetSimplBadDiscUnionStructObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimplBadDiscUnionStruct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteSimplBadDiscUnionStructObject();
    }
    //else
    return GetMinimalSimplBadDiscUnionStructObject();
}

const TypeObject* GetMinimalSimplBadDiscUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimplBadDiscUnionStruct", false);
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
    mst_my_union.common().member_type_id(*GetSimpleBadDiscUnionIdentifier(false));
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

    TypeObjectFactory::get_instance()->add_type_object("SimplBadDiscUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimplBadDiscUnionStruct", false);
}

const TypeObject* GetCompleteSimplBadDiscUnionStructObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("SimplBadDiscUnionStruct", true);
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
    cst_my_union.common().member_type_id(*GetSimpleBadDiscUnionIdentifier(true));
    cst_my_union.detail().name("my_union");

    type_object->complete().struct_type().member_seq().emplace_back(cst_my_union);


    // Header
    type_object->complete().struct_type().header().detail().type_name("SimplBadDiscUnionStruct");
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

    TypeObjectFactory::get_instance()->add_type_object("SimplBadDiscUnionStruct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("SimplBadDiscUnionStruct", true);
}
