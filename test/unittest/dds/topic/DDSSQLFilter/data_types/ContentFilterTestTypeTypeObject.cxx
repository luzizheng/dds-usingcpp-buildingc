/*!
 * @file ContentFilterTestTypeTypeObject.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "ContentFilterTestType.h"
#include "ContentFilterTestTypeTypeObject.h"
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

void registerContentFilterTestTypeTypes()
{
    TypeObjectFactory *factory = TypeObjectFactory::get_instance();
    factory->add_type_object("Color", GetColorIdentifier(true),
    GetColorObject(true));
    factory->add_type_object("Color", GetColorIdentifier(false),
    GetColorObject(false));

    factory->add_type_object("Material", GetMaterialIdentifier(true),
    GetMaterialObject(true));
    factory->add_type_object("Material", GetMaterialIdentifier(false),
    GetMaterialObject(false));

    factory->add_type_object("StructType", GetStructTypeIdentifier(true),
    GetStructTypeObject(true));
    factory->add_type_object("StructType", GetStructTypeIdentifier(false),
    GetStructTypeObject(false));



    factory->add_type_object("ContentFilterTestType", GetContentFilterTestTypeIdentifier(true),
    GetContentFilterTestTypeObject(true));
    factory->add_type_object("ContentFilterTestType", GetContentFilterTestTypeIdentifier(false),
    GetContentFilterTestTypeObject(false));

}

const TypeIdentifier* GetColorIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("Color", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetColorObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("Color", complete);
}

const TypeObject* GetColorObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Color", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteColorObject();
    }
    // else
    return GetMinimalColorObject();
}

const TypeObject* GetMinimalColorObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Color", false);
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
    MinimalEnumeratedLiteral mel_RED;
    mel_RED.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_RED.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_RED.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_RED.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_RED.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_RED.common().flags().IS_KEY(false); // Doesn't apply
    mel_RED.common().flags().IS_DEFAULT(false);
    mel_RED.common().value(value++);
    MD5 RED_hash("RED");
    for(int i = 0; i < 4; ++i)
    {
        mel_RED.detail().name_hash()[i] = RED_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_RED);

    MinimalEnumeratedLiteral mel_GREEN;
    mel_GREEN.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_GREEN.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_GREEN.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_GREEN.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_GREEN.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_GREEN.common().flags().IS_KEY(false); // Doesn't apply
    mel_GREEN.common().flags().IS_DEFAULT(false);
    mel_GREEN.common().value(value++);
    MD5 GREEN_hash("GREEN");
    for(int i = 0; i < 4; ++i)
    {
        mel_GREEN.detail().name_hash()[i] = GREEN_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_GREEN);

    MinimalEnumeratedLiteral mel_BLUE;
    mel_BLUE.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_BLUE.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_BLUE.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_BLUE.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_BLUE.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_BLUE.common().flags().IS_KEY(false); // Doesn't apply
    mel_BLUE.common().flags().IS_DEFAULT(false);
    mel_BLUE.common().value(value++);
    MD5 BLUE_hash("BLUE");
    for(int i = 0; i < 4; ++i)
    {
        mel_BLUE.detail().name_hash()[i] = BLUE_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_BLUE);

    MinimalEnumeratedLiteral mel_YELLOW;
    mel_YELLOW.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_YELLOW.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_YELLOW.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_YELLOW.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_YELLOW.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_YELLOW.common().flags().IS_KEY(false); // Doesn't apply
    mel_YELLOW.common().flags().IS_DEFAULT(false);
    mel_YELLOW.common().value(value++);
    MD5 YELLOW_hash("YELLOW");
    for(int i = 0; i < 4; ++i)
    {
        mel_YELLOW.detail().name_hash()[i] = YELLOW_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_YELLOW);

    MinimalEnumeratedLiteral mel_MAGENTA;
    mel_MAGENTA.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_MAGENTA.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_MAGENTA.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_MAGENTA.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_MAGENTA.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_MAGENTA.common().flags().IS_KEY(false); // Doesn't apply
    mel_MAGENTA.common().flags().IS_DEFAULT(false);
    mel_MAGENTA.common().value(value++);
    MD5 MAGENTA_hash("MAGENTA");
    for(int i = 0; i < 4; ++i)
    {
        mel_MAGENTA.detail().name_hash()[i] = MAGENTA_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_MAGENTA);


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

    TypeObjectFactory::get_instance()->add_type_object("Color", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("Color", false);
}

const TypeObject* GetCompleteColorObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Color", true);
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
    type_object->complete().enumerated_type().header().detail().type_name("Color");


    uint32_t value = 0;
    CompleteEnumeratedLiteral cel_RED;
    cel_RED.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_RED.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_RED.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_RED.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_RED.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_RED.common().flags().IS_KEY(false); // Doesn't apply
    cel_RED.common().flags().IS_DEFAULT(false);
    cel_RED.common().value(value++);
    cel_RED.detail().name("RED");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_RED);

    CompleteEnumeratedLiteral cel_GREEN;
    cel_GREEN.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_GREEN.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_GREEN.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_GREEN.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_GREEN.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_GREEN.common().flags().IS_KEY(false); // Doesn't apply
    cel_GREEN.common().flags().IS_DEFAULT(false);
    cel_GREEN.common().value(value++);
    cel_GREEN.detail().name("GREEN");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_GREEN);

    CompleteEnumeratedLiteral cel_BLUE;
    cel_BLUE.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_BLUE.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_BLUE.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_BLUE.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_BLUE.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_BLUE.common().flags().IS_KEY(false); // Doesn't apply
    cel_BLUE.common().flags().IS_DEFAULT(false);
    cel_BLUE.common().value(value++);
    cel_BLUE.detail().name("BLUE");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_BLUE);

    CompleteEnumeratedLiteral cel_YELLOW;
    cel_YELLOW.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_YELLOW.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_YELLOW.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_YELLOW.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_YELLOW.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_YELLOW.common().flags().IS_KEY(false); // Doesn't apply
    cel_YELLOW.common().flags().IS_DEFAULT(false);
    cel_YELLOW.common().value(value++);
    cel_YELLOW.detail().name("YELLOW");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_YELLOW);

    CompleteEnumeratedLiteral cel_MAGENTA;
    cel_MAGENTA.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_MAGENTA.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_MAGENTA.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_MAGENTA.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_MAGENTA.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_MAGENTA.common().flags().IS_KEY(false); // Doesn't apply
    cel_MAGENTA.common().flags().IS_DEFAULT(false);
    cel_MAGENTA.common().value(value++);
    cel_MAGENTA.detail().name("MAGENTA");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_MAGENTA);


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

    TypeObjectFactory::get_instance()->add_type_object("Color", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("Color", true);
}

const TypeIdentifier* GetMaterialIdentifier(bool complete)
{
    const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("Material", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMaterialObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("Material", complete);
}

const TypeObject* GetMaterialObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Material", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMaterialObject();
    }
    // else
    return GetMinimalMaterialObject();
}

const TypeObject* GetMinimalMaterialObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Material", false);
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
    MinimalEnumeratedLiteral mel_WOOD;
    mel_WOOD.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_WOOD.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_WOOD.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_WOOD.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_WOOD.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_WOOD.common().flags().IS_KEY(false); // Doesn't apply
    mel_WOOD.common().flags().IS_DEFAULT(false);
    mel_WOOD.common().value(value++);
    MD5 WOOD_hash("WOOD");
    for(int i = 0; i < 4; ++i)
    {
        mel_WOOD.detail().name_hash()[i] = WOOD_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_WOOD);

    MinimalEnumeratedLiteral mel_PLASTIC;
    mel_PLASTIC.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_PLASTIC.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_PLASTIC.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_PLASTIC.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_PLASTIC.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_PLASTIC.common().flags().IS_KEY(false); // Doesn't apply
    mel_PLASTIC.common().flags().IS_DEFAULT(false);
    mel_PLASTIC.common().value(value++);
    MD5 PLASTIC_hash("PLASTIC");
    for(int i = 0; i < 4; ++i)
    {
        mel_PLASTIC.detail().name_hash()[i] = PLASTIC_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_PLASTIC);

    MinimalEnumeratedLiteral mel_METAL;
    mel_METAL.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_METAL.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_METAL.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_METAL.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_METAL.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_METAL.common().flags().IS_KEY(false); // Doesn't apply
    mel_METAL.common().flags().IS_DEFAULT(false);
    mel_METAL.common().value(value++);
    MD5 METAL_hash("METAL");
    for(int i = 0; i < 4; ++i)
    {
        mel_METAL.detail().name_hash()[i] = METAL_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_METAL);

    MinimalEnumeratedLiteral mel_CONCRETE;
    mel_CONCRETE.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_CONCRETE.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_CONCRETE.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_CONCRETE.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_CONCRETE.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_CONCRETE.common().flags().IS_KEY(false); // Doesn't apply
    mel_CONCRETE.common().flags().IS_DEFAULT(false);
    mel_CONCRETE.common().value(value++);
    MD5 CONCRETE_hash("CONCRETE");
    for(int i = 0; i < 4; ++i)
    {
        mel_CONCRETE.detail().name_hash()[i] = CONCRETE_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_CONCRETE);

    MinimalEnumeratedLiteral mel_STONE;
    mel_STONE.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    mel_STONE.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    mel_STONE.common().flags().IS_EXTERNAL(false); // Doesn't apply
    mel_STONE.common().flags().IS_OPTIONAL(false); // Doesn't apply
    mel_STONE.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mel_STONE.common().flags().IS_KEY(false); // Doesn't apply
    mel_STONE.common().flags().IS_DEFAULT(false);
    mel_STONE.common().value(value++);
    MD5 STONE_hash("STONE");
    for(int i = 0; i < 4; ++i)
    {
        mel_STONE.detail().name_hash()[i] = STONE_hash.digest[i];
    }
    type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_STONE);


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

    TypeObjectFactory::get_instance()->add_type_object("Material", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("Material", false);
}

const TypeObject* GetCompleteMaterialObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Material", true);
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
    type_object->complete().enumerated_type().header().detail().type_name("Material");


    uint32_t value = 0;
    CompleteEnumeratedLiteral cel_WOOD;
    cel_WOOD.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_WOOD.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_WOOD.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_WOOD.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_WOOD.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_WOOD.common().flags().IS_KEY(false); // Doesn't apply
    cel_WOOD.common().flags().IS_DEFAULT(false);
    cel_WOOD.common().value(value++);
    cel_WOOD.detail().name("WOOD");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_WOOD);

    CompleteEnumeratedLiteral cel_PLASTIC;
    cel_PLASTIC.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_PLASTIC.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_PLASTIC.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_PLASTIC.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_PLASTIC.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_PLASTIC.common().flags().IS_KEY(false); // Doesn't apply
    cel_PLASTIC.common().flags().IS_DEFAULT(false);
    cel_PLASTIC.common().value(value++);
    cel_PLASTIC.detail().name("PLASTIC");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_PLASTIC);

    CompleteEnumeratedLiteral cel_METAL;
    cel_METAL.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_METAL.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_METAL.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_METAL.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_METAL.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_METAL.common().flags().IS_KEY(false); // Doesn't apply
    cel_METAL.common().flags().IS_DEFAULT(false);
    cel_METAL.common().value(value++);
    cel_METAL.detail().name("METAL");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_METAL);

    CompleteEnumeratedLiteral cel_CONCRETE;
    cel_CONCRETE.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_CONCRETE.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_CONCRETE.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_CONCRETE.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_CONCRETE.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_CONCRETE.common().flags().IS_KEY(false); // Doesn't apply
    cel_CONCRETE.common().flags().IS_DEFAULT(false);
    cel_CONCRETE.common().value(value++);
    cel_CONCRETE.detail().name("CONCRETE");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_CONCRETE);

    CompleteEnumeratedLiteral cel_STONE;
    cel_STONE.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
    cel_STONE.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
    cel_STONE.common().flags().IS_EXTERNAL(false); // Doesn't apply
    cel_STONE.common().flags().IS_OPTIONAL(false); // Doesn't apply
    cel_STONE.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cel_STONE.common().flags().IS_KEY(false); // Doesn't apply
    cel_STONE.common().flags().IS_DEFAULT(false);
    cel_STONE.common().value(value++);
    cel_STONE.detail().name("STONE");

    type_object->complete().enumerated_type().literal_seq().emplace_back(cel_STONE);


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

    TypeObjectFactory::get_instance()->add_type_object("Material", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("Material", true);
}

const TypeIdentifier* GetStructTypeIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("StructType", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetStructTypeObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("StructType", complete);
}

const TypeObject* GetStructTypeObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructType", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteStructTypeObject();
    }
    //else
    return GetMinimalStructTypeObject();
}

const TypeObject* GetMinimalStructTypeObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructType", false);
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
    type_object->minimal().struct_type().struct_flags().IS_NESTED(true);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    MinimalStructMember mst_char_field;
    mst_char_field.common().member_id(memberId++);
    mst_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_char_field.common().member_flags().IS_OPTIONAL(false);
    mst_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_char_field.common().member_flags().IS_KEY(false);
    mst_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("char", false));

    MD5 char_field_hash("char_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_char_field.detail().name_hash()[i] = char_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_char_field);

    MinimalStructMember mst_uint8_field;
    mst_uint8_field.common().member_id(memberId++);
    mst_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint8_field.common().member_flags().IS_OPTIONAL(false);
    mst_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint8_field.common().member_flags().IS_KEY(false);
    mst_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    MD5 uint8_field_hash("uint8_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint8_field.detail().name_hash()[i] = uint8_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint8_field);

    MinimalStructMember mst_int16_field;
    mst_int16_field.common().member_id(memberId++);
    mst_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int16_field.common().member_flags().IS_OPTIONAL(false);
    mst_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int16_field.common().member_flags().IS_KEY(false);
    mst_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int16_t", false));

    MD5 int16_field_hash("int16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_int16_field.detail().name_hash()[i] = int16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int16_field);

    MinimalStructMember mst_uint16_field;
    mst_uint16_field.common().member_id(memberId++);
    mst_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint16_field.common().member_flags().IS_OPTIONAL(false);
    mst_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint16_field.common().member_flags().IS_KEY(false);
    mst_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

    MD5 uint16_field_hash("uint16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint16_field.detail().name_hash()[i] = uint16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint16_field);

    MinimalStructMember mst_int32_field;
    mst_int32_field.common().member_id(memberId++);
    mst_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int32_field.common().member_flags().IS_OPTIONAL(false);
    mst_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int32_field.common().member_flags().IS_KEY(false);
    mst_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MD5 int32_field_hash("int32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_int32_field.detail().name_hash()[i] = int32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int32_field);

    MinimalStructMember mst_uint32_field;
    mst_uint32_field.common().member_id(memberId++);
    mst_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint32_field.common().member_flags().IS_OPTIONAL(false);
    mst_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint32_field.common().member_flags().IS_KEY(false);
    mst_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    MD5 uint32_field_hash("uint32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint32_field.detail().name_hash()[i] = uint32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint32_field);

    MinimalStructMember mst_int64_field;
    mst_int64_field.common().member_id(memberId++);
    mst_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int64_field.common().member_flags().IS_OPTIONAL(false);
    mst_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int64_field.common().member_flags().IS_KEY(false);
    mst_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    MD5 int64_field_hash("int64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_int64_field.detail().name_hash()[i] = int64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int64_field);

    MinimalStructMember mst_uint64_field;
    mst_uint64_field.common().member_id(memberId++);
    mst_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint64_field.common().member_flags().IS_OPTIONAL(false);
    mst_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint64_field.common().member_flags().IS_KEY(false);
    mst_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint64_t", false));

    MD5 uint64_field_hash("uint64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint64_field.detail().name_hash()[i] = uint64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint64_field);

    MinimalStructMember mst_float_field;
    mst_float_field.common().member_id(memberId++);
    mst_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_float_field.common().member_flags().IS_OPTIONAL(false);
    mst_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_float_field.common().member_flags().IS_KEY(false);
    mst_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("float", false));

    MD5 float_field_hash("float_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_float_field.detail().name_hash()[i] = float_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_float_field);

    MinimalStructMember mst_double_field;
    mst_double_field.common().member_id(memberId++);
    mst_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_double_field.common().member_flags().IS_KEY(false);
    mst_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("double", false));

    MD5 double_field_hash("double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_double_field.detail().name_hash()[i] = double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_double_field);

    MinimalStructMember mst_long_double_field;
    mst_long_double_field.common().member_id(memberId++);
    mst_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_long_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_long_double_field.common().member_flags().IS_KEY(false);
    mst_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("longdouble", false));

    MD5 long_double_field_hash("long_double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_long_double_field.detail().name_hash()[i] = long_double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_long_double_field);

    MinimalStructMember mst_bool_field;
    mst_bool_field.common().member_id(memberId++);
    mst_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bool_field.common().member_flags().IS_OPTIONAL(false);
    mst_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bool_field.common().member_flags().IS_KEY(false);
    mst_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("bool", false));

    MD5 bool_field_hash("bool_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bool_field.detail().name_hash()[i] = bool_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bool_field);

    MinimalStructMember mst_string_field;
    mst_string_field.common().member_id(memberId++);
    mst_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_string_field.common().member_flags().IS_OPTIONAL(false);
    mst_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_string_field.common().member_flags().IS_KEY(false);
    mst_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    MD5 string_field_hash("string_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_string_field.detail().name_hash()[i] = string_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_string_field);

    MinimalStructMember mst_enum_field;
    mst_enum_field.common().member_id(memberId++);
    mst_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_enum_field.common().member_flags().IS_OPTIONAL(false);
    mst_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_enum_field.common().member_flags().IS_KEY(false);
    mst_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_enum_field.common().member_type_id(*GetColorIdentifier(false));
    MD5 enum_field_hash("enum_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_enum_field.detail().name_hash()[i] = enum_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_enum_field);

    MinimalStructMember mst_enum2_field;
    mst_enum2_field.common().member_id(memberId++);
    mst_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_enum2_field.common().member_flags().IS_OPTIONAL(false);
    mst_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_enum2_field.common().member_flags().IS_KEY(false);
    mst_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_enum2_field.common().member_type_id(*GetMaterialIdentifier(false));
    MD5 enum2_field_hash("enum2_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_enum2_field.detail().name_hash()[i] = enum2_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_enum2_field);


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

    TypeObjectFactory::get_instance()->add_type_object("StructType", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StructType", false);
}

const TypeObject* GetCompleteStructTypeObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("StructType", true);
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
    type_object->complete().struct_type().struct_flags().IS_NESTED(true);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    CompleteStructMember cst_char_field;
    cst_char_field.common().member_id(memberId++);
    cst_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_char_field.common().member_flags().IS_OPTIONAL(false);
    cst_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_char_field.common().member_flags().IS_KEY(false);
    cst_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("char", false));

    cst_char_field.detail().name("char_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_char_field);

    CompleteStructMember cst_uint8_field;
    cst_uint8_field.common().member_id(memberId++);
    cst_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint8_field.common().member_flags().IS_OPTIONAL(false);
    cst_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint8_field.common().member_flags().IS_KEY(false);
    cst_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    cst_uint8_field.detail().name("uint8_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint8_field);

    CompleteStructMember cst_int16_field;
    cst_int16_field.common().member_id(memberId++);
    cst_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int16_field.common().member_flags().IS_OPTIONAL(false);
    cst_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int16_field.common().member_flags().IS_KEY(false);
    cst_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int16_t", false));

    cst_int16_field.detail().name("int16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int16_field);

    CompleteStructMember cst_uint16_field;
    cst_uint16_field.common().member_id(memberId++);
    cst_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint16_field.common().member_flags().IS_OPTIONAL(false);
    cst_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint16_field.common().member_flags().IS_KEY(false);
    cst_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

    cst_uint16_field.detail().name("uint16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint16_field);

    CompleteStructMember cst_int32_field;
    cst_int32_field.common().member_id(memberId++);
    cst_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int32_field.common().member_flags().IS_OPTIONAL(false);
    cst_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int32_field.common().member_flags().IS_KEY(false);
    cst_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    cst_int32_field.detail().name("int32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int32_field);

    CompleteStructMember cst_uint32_field;
    cst_uint32_field.common().member_id(memberId++);
    cst_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint32_field.common().member_flags().IS_OPTIONAL(false);
    cst_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint32_field.common().member_flags().IS_KEY(false);
    cst_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    cst_uint32_field.detail().name("uint32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint32_field);

    CompleteStructMember cst_int64_field;
    cst_int64_field.common().member_id(memberId++);
    cst_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int64_field.common().member_flags().IS_OPTIONAL(false);
    cst_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int64_field.common().member_flags().IS_KEY(false);
    cst_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    cst_int64_field.detail().name("int64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int64_field);

    CompleteStructMember cst_uint64_field;
    cst_uint64_field.common().member_id(memberId++);
    cst_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint64_field.common().member_flags().IS_OPTIONAL(false);
    cst_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint64_field.common().member_flags().IS_KEY(false);
    cst_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint64_t", false));

    cst_uint64_field.detail().name("uint64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint64_field);

    CompleteStructMember cst_float_field;
    cst_float_field.common().member_id(memberId++);
    cst_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_float_field.common().member_flags().IS_OPTIONAL(false);
    cst_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_float_field.common().member_flags().IS_KEY(false);
    cst_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("float", false));

    cst_float_field.detail().name("float_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_float_field);

    CompleteStructMember cst_double_field;
    cst_double_field.common().member_id(memberId++);
    cst_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_double_field.common().member_flags().IS_KEY(false);
    cst_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("double", false));

    cst_double_field.detail().name("double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_double_field);

    CompleteStructMember cst_long_double_field;
    cst_long_double_field.common().member_id(memberId++);
    cst_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_long_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_long_double_field.common().member_flags().IS_KEY(false);
    cst_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("longdouble", false));

    cst_long_double_field.detail().name("long_double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_long_double_field);

    CompleteStructMember cst_bool_field;
    cst_bool_field.common().member_id(memberId++);
    cst_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bool_field.common().member_flags().IS_OPTIONAL(false);
    cst_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bool_field.common().member_flags().IS_KEY(false);
    cst_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("bool", false));

    cst_bool_field.detail().name("bool_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bool_field);

    CompleteStructMember cst_string_field;
    cst_string_field.common().member_id(memberId++);
    cst_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_string_field.common().member_flags().IS_OPTIONAL(false);
    cst_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_string_field.common().member_flags().IS_KEY(false);
    cst_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    cst_string_field.detail().name("string_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_string_field);

    CompleteStructMember cst_enum_field;
    cst_enum_field.common().member_id(memberId++);
    cst_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_enum_field.common().member_flags().IS_OPTIONAL(false);
    cst_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_enum_field.common().member_flags().IS_KEY(false);
    cst_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_enum_field.common().member_type_id(*GetColorIdentifier(true));
    cst_enum_field.detail().name("enum_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_enum_field);

    CompleteStructMember cst_enum2_field;
    cst_enum2_field.common().member_id(memberId++);
    cst_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_enum2_field.common().member_flags().IS_OPTIONAL(false);
    cst_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_enum2_field.common().member_flags().IS_KEY(false);
    cst_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_enum2_field.common().member_type_id(*GetMaterialIdentifier(true));
    cst_enum2_field.detail().name("enum2_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_enum2_field);


    // Header
    type_object->complete().struct_type().header().detail().type_name("StructType");
    // TODO inheritance

    {
        AppliedAnnotation ann;
        //ann.annotation_typeid(GetnestedIdentifier(true));
        ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("nested"));
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
            
        type_object->complete().struct_type().header().detail().ann_custom().push_back(ann);
    }
        

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

    TypeObjectFactory::get_instance()->add_type_object("StructType", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("StructType", true);
}



const TypeIdentifier* GetContentFilterTestTypeIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("ContentFilterTestType", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetContentFilterTestTypeObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("ContentFilterTestType", complete);
}

const TypeObject* GetContentFilterTestTypeObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ContentFilterTestType", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteContentFilterTestTypeObject();
    }
    //else
    return GetMinimalContentFilterTestTypeObject();
}

const TypeObject* GetMinimalContentFilterTestTypeObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ContentFilterTestType", false);
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
    MinimalStructMember mst_char_field;
    mst_char_field.common().member_id(memberId++);
    mst_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_char_field.common().member_flags().IS_OPTIONAL(false);
    mst_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_char_field.common().member_flags().IS_KEY(false);
    mst_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("char", false));

    MD5 char_field_hash("char_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_char_field.detail().name_hash()[i] = char_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_char_field);

    MinimalStructMember mst_uint8_field;
    mst_uint8_field.common().member_id(memberId++);
    mst_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint8_field.common().member_flags().IS_OPTIONAL(false);
    mst_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint8_field.common().member_flags().IS_KEY(false);
    mst_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    MD5 uint8_field_hash("uint8_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint8_field.detail().name_hash()[i] = uint8_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint8_field);

    MinimalStructMember mst_int16_field;
    mst_int16_field.common().member_id(memberId++);
    mst_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int16_field.common().member_flags().IS_OPTIONAL(false);
    mst_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int16_field.common().member_flags().IS_KEY(false);
    mst_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int16_t", false));

    MD5 int16_field_hash("int16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_int16_field.detail().name_hash()[i] = int16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int16_field);

    MinimalStructMember mst_uint16_field;
    mst_uint16_field.common().member_id(memberId++);
    mst_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint16_field.common().member_flags().IS_OPTIONAL(false);
    mst_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint16_field.common().member_flags().IS_KEY(false);
    mst_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

    MD5 uint16_field_hash("uint16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint16_field.detail().name_hash()[i] = uint16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint16_field);

    MinimalStructMember mst_int32_field;
    mst_int32_field.common().member_id(memberId++);
    mst_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int32_field.common().member_flags().IS_OPTIONAL(false);
    mst_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int32_field.common().member_flags().IS_KEY(false);
    mst_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MD5 int32_field_hash("int32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_int32_field.detail().name_hash()[i] = int32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int32_field);

    MinimalStructMember mst_uint32_field;
    mst_uint32_field.common().member_id(memberId++);
    mst_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint32_field.common().member_flags().IS_OPTIONAL(false);
    mst_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint32_field.common().member_flags().IS_KEY(false);
    mst_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    MD5 uint32_field_hash("uint32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint32_field.detail().name_hash()[i] = uint32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint32_field);

    MinimalStructMember mst_int64_field;
    mst_int64_field.common().member_id(memberId++);
    mst_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_int64_field.common().member_flags().IS_OPTIONAL(false);
    mst_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_int64_field.common().member_flags().IS_KEY(false);
    mst_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    MD5 int64_field_hash("int64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_int64_field.detail().name_hash()[i] = int64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_int64_field);

    MinimalStructMember mst_uint64_field;
    mst_uint64_field.common().member_id(memberId++);
    mst_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uint64_field.common().member_flags().IS_OPTIONAL(false);
    mst_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uint64_field.common().member_flags().IS_KEY(false);
    mst_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint64_t", false));

    MD5 uint64_field_hash("uint64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_uint64_field.detail().name_hash()[i] = uint64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uint64_field);

    MinimalStructMember mst_float_field;
    mst_float_field.common().member_id(memberId++);
    mst_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_float_field.common().member_flags().IS_OPTIONAL(false);
    mst_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_float_field.common().member_flags().IS_KEY(false);
    mst_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("float", false));

    MD5 float_field_hash("float_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_float_field.detail().name_hash()[i] = float_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_float_field);

    MinimalStructMember mst_double_field;
    mst_double_field.common().member_id(memberId++);
    mst_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_double_field.common().member_flags().IS_KEY(false);
    mst_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("double", false));

    MD5 double_field_hash("double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_double_field.detail().name_hash()[i] = double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_double_field);

    MinimalStructMember mst_long_double_field;
    mst_long_double_field.common().member_id(memberId++);
    mst_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_long_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_long_double_field.common().member_flags().IS_KEY(false);
    mst_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("longdouble", false));

    MD5 long_double_field_hash("long_double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_long_double_field.detail().name_hash()[i] = long_double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_long_double_field);

    MinimalStructMember mst_bool_field;
    mst_bool_field.common().member_id(memberId++);
    mst_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bool_field.common().member_flags().IS_OPTIONAL(false);
    mst_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bool_field.common().member_flags().IS_KEY(false);
    mst_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("bool", false));

    MD5 bool_field_hash("bool_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bool_field.detail().name_hash()[i] = bool_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bool_field);

    MinimalStructMember mst_string_field;
    mst_string_field.common().member_id(memberId++);
    mst_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_string_field.common().member_flags().IS_OPTIONAL(false);
    mst_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_string_field.common().member_flags().IS_KEY(false);
    mst_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    MD5 string_field_hash("string_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_string_field.detail().name_hash()[i] = string_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_string_field);

    MinimalStructMember mst_enum_field;
    mst_enum_field.common().member_id(memberId++);
    mst_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_enum_field.common().member_flags().IS_OPTIONAL(false);
    mst_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_enum_field.common().member_flags().IS_KEY(false);
    mst_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_enum_field.common().member_type_id(*GetColorIdentifier(false));
    MD5 enum_field_hash("enum_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_enum_field.detail().name_hash()[i] = enum_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_enum_field);

    MinimalStructMember mst_enum2_field;
    mst_enum2_field.common().member_id(memberId++);
    mst_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_enum2_field.common().member_flags().IS_OPTIONAL(false);
    mst_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_enum2_field.common().member_flags().IS_KEY(false);
    mst_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_enum2_field.common().member_type_id(*GetMaterialIdentifier(false));
    MD5 enum2_field_hash("enum2_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_enum2_field.detail().name_hash()[i] = enum2_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_enum2_field);

    MinimalStructMember mst_struct_field;
    mst_struct_field.common().member_id(memberId++);
    mst_struct_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_struct_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_struct_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_struct_field.common().member_flags().IS_OPTIONAL(false);
    mst_struct_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_struct_field.common().member_flags().IS_KEY(false);
    mst_struct_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_struct_field.common().member_type_id(*GetStructTypeIdentifier(false));
    MD5 struct_field_hash("struct_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_struct_field.detail().name_hash()[i] = struct_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_struct_field);

    MinimalStructMember mst_array_char_field;
    mst_array_char_field.common().member_id(memberId++);
    mst_array_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_char_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_char_field.common().member_flags().IS_KEY(false);
    mst_array_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("char", {max_array_size}, false));


    MD5 array_char_field_hash("array_char_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_char_field.detail().name_hash()[i] = array_char_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_char_field);

    MinimalStructMember mst_array_uint8_field;
    mst_array_uint8_field.common().member_id(memberId++);
    mst_array_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_uint8_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_uint8_field.common().member_flags().IS_KEY(false);
    mst_array_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint8_t", {max_array_size}, false));


    MD5 array_uint8_field_hash("array_uint8_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_uint8_field.detail().name_hash()[i] = array_uint8_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_uint8_field);

    MinimalStructMember mst_array_int16_field;
    mst_array_int16_field.common().member_id(memberId++);
    mst_array_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_int16_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_int16_field.common().member_flags().IS_KEY(false);
    mst_array_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int16_t", {max_array_size}, false));


    MD5 array_int16_field_hash("array_int16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_int16_field.detail().name_hash()[i] = array_int16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_int16_field);

    MinimalStructMember mst_array_uint16_field;
    mst_array_uint16_field.common().member_id(memberId++);
    mst_array_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_uint16_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_uint16_field.common().member_flags().IS_KEY(false);
    mst_array_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint16_t", {max_array_size}, false));


    MD5 array_uint16_field_hash("array_uint16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_uint16_field.detail().name_hash()[i] = array_uint16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_uint16_field);

    MinimalStructMember mst_array_int32_field;
    mst_array_int32_field.common().member_id(memberId++);
    mst_array_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_int32_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_int32_field.common().member_flags().IS_KEY(false);
    mst_array_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {max_array_size}, false));


    MD5 array_int32_field_hash("array_int32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_int32_field.detail().name_hash()[i] = array_int32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_int32_field);

    MinimalStructMember mst_array_uint32_field;
    mst_array_uint32_field.common().member_id(memberId++);
    mst_array_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_uint32_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_uint32_field.common().member_flags().IS_KEY(false);
    mst_array_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint32_t", {max_array_size}, false));


    MD5 array_uint32_field_hash("array_uint32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_uint32_field.detail().name_hash()[i] = array_uint32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_uint32_field);

    MinimalStructMember mst_array_int64_field;
    mst_array_int64_field.common().member_id(memberId++);
    mst_array_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_int64_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_int64_field.common().member_flags().IS_KEY(false);
    mst_array_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int64_t", {max_array_size}, false));


    MD5 array_int64_field_hash("array_int64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_int64_field.detail().name_hash()[i] = array_int64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_int64_field);

    MinimalStructMember mst_array_uint64_field;
    mst_array_uint64_field.common().member_id(memberId++);
    mst_array_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_uint64_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_uint64_field.common().member_flags().IS_KEY(false);
    mst_array_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint64_t", {max_array_size}, false));


    MD5 array_uint64_field_hash("array_uint64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_uint64_field.detail().name_hash()[i] = array_uint64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_uint64_field);

    MinimalStructMember mst_array_float_field;
    mst_array_float_field.common().member_id(memberId++);
    mst_array_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_float_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_float_field.common().member_flags().IS_KEY(false);
    mst_array_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("float", {max_array_size}, false));


    MD5 array_float_field_hash("array_float_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_float_field.detail().name_hash()[i] = array_float_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_float_field);

    MinimalStructMember mst_array_double_field;
    mst_array_double_field.common().member_id(memberId++);
    mst_array_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_double_field.common().member_flags().IS_KEY(false);
    mst_array_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("double", {max_array_size}, false));


    MD5 array_double_field_hash("array_double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_double_field.detail().name_hash()[i] = array_double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_double_field);

    MinimalStructMember mst_array_long_double_field;
    mst_array_long_double_field.common().member_id(memberId++);
    mst_array_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_long_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_long_double_field.common().member_flags().IS_KEY(false);
    mst_array_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("longdouble", {max_array_size}, false));


    MD5 array_long_double_field_hash("array_long_double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_long_double_field.detail().name_hash()[i] = array_long_double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_long_double_field);

    MinimalStructMember mst_array_bool_field;
    mst_array_bool_field.common().member_id(memberId++);
    mst_array_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_bool_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_bool_field.common().member_flags().IS_KEY(false);
    mst_array_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("bool", {max_array_size}, false));


    MD5 array_bool_field_hash("array_bool_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_bool_field.detail().name_hash()[i] = array_bool_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_bool_field);

    MinimalStructMember mst_array_string_field;
    mst_array_string_field.common().member_id(memberId++);
    mst_array_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_string_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_string_field.common().member_flags().IS_KEY(false);
    mst_array_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier(TypeNamesGenerator::get_string_type_name(255, false), {max_array_size}, false));


    MD5 array_string_field_hash("array_string_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_string_field.detail().name_hash()[i] = array_string_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_string_field);

    MinimalStructMember mst_array_enum_field;
    mst_array_enum_field.common().member_id(memberId++);
    mst_array_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_enum_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_enum_field.common().member_flags().IS_KEY(false);
    mst_array_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_enum_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("Color", {max_array_size}, false));


    MD5 array_enum_field_hash("array_enum_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_enum_field.detail().name_hash()[i] = array_enum_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_enum_field);

    MinimalStructMember mst_array_enum2_field;
    mst_array_enum2_field.common().member_id(memberId++);
    mst_array_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_enum2_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_enum2_field.common().member_flags().IS_KEY(false);
    mst_array_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_enum2_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("Material", {max_array_size}, false));


    MD5 array_enum2_field_hash("array_enum2_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_enum2_field.detail().name_hash()[i] = array_enum2_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_enum2_field);

    MinimalStructMember mst_array_struct_field;
    mst_array_struct_field.common().member_id(memberId++);
    mst_array_struct_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_array_struct_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_array_struct_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_array_struct_field.common().member_flags().IS_OPTIONAL(false);
    mst_array_struct_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_array_struct_field.common().member_flags().IS_KEY(false);
    mst_array_struct_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_array_struct_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("StructType", {max_array_size}, false));


    MD5 array_struct_field_hash("array_struct_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_array_struct_field.detail().name_hash()[i] = array_struct_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_array_struct_field);

    MinimalStructMember mst_bounded_sequence_char_field;
    mst_bounded_sequence_char_field.common().member_id(memberId++);
    mst_bounded_sequence_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_char_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_char_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("char", max_seq_size, false));


    MD5 bounded_sequence_char_field_hash("bounded_sequence_char_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_char_field.detail().name_hash()[i] = bounded_sequence_char_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_char_field);

    MinimalStructMember mst_bounded_sequence_uint8_field;
    mst_bounded_sequence_uint8_field.common().member_id(memberId++);
    mst_bounded_sequence_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_uint8_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_uint8_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", max_seq_size, false));


    MD5 bounded_sequence_uint8_field_hash("bounded_sequence_uint8_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_uint8_field.detail().name_hash()[i] = bounded_sequence_uint8_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_uint8_field);

    MinimalStructMember mst_bounded_sequence_int16_field;
    mst_bounded_sequence_int16_field.common().member_id(memberId++);
    mst_bounded_sequence_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_int16_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_int16_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int16_t", max_seq_size, false));


    MD5 bounded_sequence_int16_field_hash("bounded_sequence_int16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_int16_field.detail().name_hash()[i] = bounded_sequence_int16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_int16_field);

    MinimalStructMember mst_bounded_sequence_uint16_field;
    mst_bounded_sequence_uint16_field.common().member_id(memberId++);
    mst_bounded_sequence_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_uint16_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_uint16_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint16_t", max_seq_size, false));


    MD5 bounded_sequence_uint16_field_hash("bounded_sequence_uint16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_uint16_field.detail().name_hash()[i] = bounded_sequence_uint16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_uint16_field);

    MinimalStructMember mst_bounded_sequence_int32_field;
    mst_bounded_sequence_int32_field.common().member_id(memberId++);
    mst_bounded_sequence_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_int32_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_int32_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", max_seq_size, false));


    MD5 bounded_sequence_int32_field_hash("bounded_sequence_int32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_int32_field.detail().name_hash()[i] = bounded_sequence_int32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_int32_field);

    MinimalStructMember mst_bounded_sequence_uint32_field;
    mst_bounded_sequence_uint32_field.common().member_id(memberId++);
    mst_bounded_sequence_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_uint32_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_uint32_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint32_t", max_seq_size, false));


    MD5 bounded_sequence_uint32_field_hash("bounded_sequence_uint32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_uint32_field.detail().name_hash()[i] = bounded_sequence_uint32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_uint32_field);

    MinimalStructMember mst_bounded_sequence_int64_field;
    mst_bounded_sequence_int64_field.common().member_id(memberId++);
    mst_bounded_sequence_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_int64_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_int64_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int64_t", max_seq_size, false));


    MD5 bounded_sequence_int64_field_hash("bounded_sequence_int64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_int64_field.detail().name_hash()[i] = bounded_sequence_int64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_int64_field);

    MinimalStructMember mst_bounded_sequence_uint64_field;
    mst_bounded_sequence_uint64_field.common().member_id(memberId++);
    mst_bounded_sequence_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_uint64_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_uint64_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint64_t", max_seq_size, false));


    MD5 bounded_sequence_uint64_field_hash("bounded_sequence_uint64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_uint64_field.detail().name_hash()[i] = bounded_sequence_uint64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_uint64_field);

    MinimalStructMember mst_bounded_sequence_float_field;
    mst_bounded_sequence_float_field.common().member_id(memberId++);
    mst_bounded_sequence_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_float_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_float_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("float", max_seq_size, false));


    MD5 bounded_sequence_float_field_hash("bounded_sequence_float_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_float_field.detail().name_hash()[i] = bounded_sequence_float_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_float_field);

    MinimalStructMember mst_bounded_sequence_double_field;
    mst_bounded_sequence_double_field.common().member_id(memberId++);
    mst_bounded_sequence_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_double_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("double", max_seq_size, false));


    MD5 bounded_sequence_double_field_hash("bounded_sequence_double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_double_field.detail().name_hash()[i] = bounded_sequence_double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_double_field);

    MinimalStructMember mst_bounded_sequence_long_double_field;
    mst_bounded_sequence_long_double_field.common().member_id(memberId++);
    mst_bounded_sequence_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_long_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_long_double_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("longdouble", max_seq_size, false));


    MD5 bounded_sequence_long_double_field_hash("bounded_sequence_long_double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_long_double_field.detail().name_hash()[i] = bounded_sequence_long_double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_long_double_field);

    MinimalStructMember mst_bounded_sequence_bool_field;
    mst_bounded_sequence_bool_field.common().member_id(memberId++);
    mst_bounded_sequence_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_bool_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_bool_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("bool", max_seq_size, false));


    MD5 bounded_sequence_bool_field_hash("bounded_sequence_bool_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_bool_field.detail().name_hash()[i] = bounded_sequence_bool_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_bool_field);

    MinimalStructMember mst_bounded_sequence_string_field;
    mst_bounded_sequence_string_field.common().member_id(memberId++);
    mst_bounded_sequence_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_string_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_string_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier(TypeNamesGenerator::get_string_type_name(255, false), max_seq_size, false));


    MD5 bounded_sequence_string_field_hash("bounded_sequence_string_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_string_field.detail().name_hash()[i] = bounded_sequence_string_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_string_field);

    MinimalStructMember mst_bounded_sequence_enum_field;
    mst_bounded_sequence_enum_field.common().member_id(memberId++);
    mst_bounded_sequence_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_enum_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_enum_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_enum_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("Color", max_seq_size, false));


    MD5 bounded_sequence_enum_field_hash("bounded_sequence_enum_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_enum_field.detail().name_hash()[i] = bounded_sequence_enum_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_enum_field);

    MinimalStructMember mst_bounded_sequence_enum2_field;
    mst_bounded_sequence_enum2_field.common().member_id(memberId++);
    mst_bounded_sequence_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_enum2_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_enum2_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_enum2_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("Material", max_seq_size, false));


    MD5 bounded_sequence_enum2_field_hash("bounded_sequence_enum2_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_enum2_field.detail().name_hash()[i] = bounded_sequence_enum2_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_enum2_field);

    MinimalStructMember mst_bounded_sequence_struct_field;
    mst_bounded_sequence_struct_field.common().member_id(memberId++);
    mst_bounded_sequence_struct_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_bounded_sequence_struct_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_bounded_sequence_struct_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_bounded_sequence_struct_field.common().member_flags().IS_OPTIONAL(false);
    mst_bounded_sequence_struct_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_bounded_sequence_struct_field.common().member_flags().IS_KEY(false);
    mst_bounded_sequence_struct_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_bounded_sequence_struct_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("StructType", max_seq_size, false));


    MD5 bounded_sequence_struct_field_hash("bounded_sequence_struct_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_bounded_sequence_struct_field.detail().name_hash()[i] = bounded_sequence_struct_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_bounded_sequence_struct_field);

    MinimalStructMember mst_unbounded_sequence_char_field;
    mst_unbounded_sequence_char_field.common().member_id(memberId++);
    mst_unbounded_sequence_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_char_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_char_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("char", 0, false));


    MD5 unbounded_sequence_char_field_hash("unbounded_sequence_char_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_char_field.detail().name_hash()[i] = unbounded_sequence_char_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_char_field);

    MinimalStructMember mst_unbounded_sequence_uint8_field;
    mst_unbounded_sequence_uint8_field.common().member_id(memberId++);
    mst_unbounded_sequence_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_uint8_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_uint8_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 0, false));


    MD5 unbounded_sequence_uint8_field_hash("unbounded_sequence_uint8_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_uint8_field.detail().name_hash()[i] = unbounded_sequence_uint8_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_uint8_field);

    MinimalStructMember mst_unbounded_sequence_int16_field;
    mst_unbounded_sequence_int16_field.common().member_id(memberId++);
    mst_unbounded_sequence_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_int16_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_int16_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int16_t", 0, false));


    MD5 unbounded_sequence_int16_field_hash("unbounded_sequence_int16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_int16_field.detail().name_hash()[i] = unbounded_sequence_int16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_int16_field);

    MinimalStructMember mst_unbounded_sequence_uint16_field;
    mst_unbounded_sequence_uint16_field.common().member_id(memberId++);
    mst_unbounded_sequence_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_uint16_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_uint16_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint16_t", 0, false));


    MD5 unbounded_sequence_uint16_field_hash("unbounded_sequence_uint16_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_uint16_field.detail().name_hash()[i] = unbounded_sequence_uint16_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_uint16_field);

    MinimalStructMember mst_unbounded_sequence_int32_field;
    mst_unbounded_sequence_int32_field.common().member_id(memberId++);
    mst_unbounded_sequence_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_int32_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_int32_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", 0, false));


    MD5 unbounded_sequence_int32_field_hash("unbounded_sequence_int32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_int32_field.detail().name_hash()[i] = unbounded_sequence_int32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_int32_field);

    MinimalStructMember mst_unbounded_sequence_uint32_field;
    mst_unbounded_sequence_uint32_field.common().member_id(memberId++);
    mst_unbounded_sequence_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_uint32_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_uint32_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint32_t", 0, false));


    MD5 unbounded_sequence_uint32_field_hash("unbounded_sequence_uint32_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_uint32_field.detail().name_hash()[i] = unbounded_sequence_uint32_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_uint32_field);

    MinimalStructMember mst_unbounded_sequence_int64_field;
    mst_unbounded_sequence_int64_field.common().member_id(memberId++);
    mst_unbounded_sequence_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_int64_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_int64_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int64_t", 0, false));


    MD5 unbounded_sequence_int64_field_hash("unbounded_sequence_int64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_int64_field.detail().name_hash()[i] = unbounded_sequence_int64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_int64_field);

    MinimalStructMember mst_unbounded_sequence_uint64_field;
    mst_unbounded_sequence_uint64_field.common().member_id(memberId++);
    mst_unbounded_sequence_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_uint64_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_uint64_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint64_t", 0, false));


    MD5 unbounded_sequence_uint64_field_hash("unbounded_sequence_uint64_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_uint64_field.detail().name_hash()[i] = unbounded_sequence_uint64_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_uint64_field);

    MinimalStructMember mst_unbounded_sequence_float_field;
    mst_unbounded_sequence_float_field.common().member_id(memberId++);
    mst_unbounded_sequence_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_float_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_float_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("float", 0, false));


    MD5 unbounded_sequence_float_field_hash("unbounded_sequence_float_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_float_field.detail().name_hash()[i] = unbounded_sequence_float_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_float_field);

    MinimalStructMember mst_unbounded_sequence_double_field;
    mst_unbounded_sequence_double_field.common().member_id(memberId++);
    mst_unbounded_sequence_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_double_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("double", 0, false));


    MD5 unbounded_sequence_double_field_hash("unbounded_sequence_double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_double_field.detail().name_hash()[i] = unbounded_sequence_double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_double_field);

    MinimalStructMember mst_unbounded_sequence_long_double_field;
    mst_unbounded_sequence_long_double_field.common().member_id(memberId++);
    mst_unbounded_sequence_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_long_double_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_long_double_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("longdouble", 0, false));


    MD5 unbounded_sequence_long_double_field_hash("unbounded_sequence_long_double_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_long_double_field.detail().name_hash()[i] = unbounded_sequence_long_double_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_long_double_field);

    MinimalStructMember mst_unbounded_sequence_bool_field;
    mst_unbounded_sequence_bool_field.common().member_id(memberId++);
    mst_unbounded_sequence_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_bool_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_bool_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("bool", 0, false));


    MD5 unbounded_sequence_bool_field_hash("unbounded_sequence_bool_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_bool_field.detail().name_hash()[i] = unbounded_sequence_bool_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_bool_field);

    MinimalStructMember mst_unbounded_sequence_string_field;
    mst_unbounded_sequence_string_field.common().member_id(memberId++);
    mst_unbounded_sequence_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_string_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_string_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier(TypeNamesGenerator::get_string_type_name(255, false), 0, false));


    MD5 unbounded_sequence_string_field_hash("unbounded_sequence_string_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_string_field.detail().name_hash()[i] = unbounded_sequence_string_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_string_field);

    MinimalStructMember mst_unbounded_sequence_enum_field;
    mst_unbounded_sequence_enum_field.common().member_id(memberId++);
    mst_unbounded_sequence_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_enum_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_enum_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_enum_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("Color", 0, false));


    MD5 unbounded_sequence_enum_field_hash("unbounded_sequence_enum_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_enum_field.detail().name_hash()[i] = unbounded_sequence_enum_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_enum_field);

    MinimalStructMember mst_unbounded_sequence_enum2_field;
    mst_unbounded_sequence_enum2_field.common().member_id(memberId++);
    mst_unbounded_sequence_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_enum2_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_enum2_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_enum2_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("Material", 0, false));


    MD5 unbounded_sequence_enum2_field_hash("unbounded_sequence_enum2_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_enum2_field.detail().name_hash()[i] = unbounded_sequence_enum2_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_enum2_field);

    MinimalStructMember mst_unbounded_sequence_struct_field;
    mst_unbounded_sequence_struct_field.common().member_id(memberId++);
    mst_unbounded_sequence_struct_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_unbounded_sequence_struct_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_unbounded_sequence_struct_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_unbounded_sequence_struct_field.common().member_flags().IS_OPTIONAL(false);
    mst_unbounded_sequence_struct_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_unbounded_sequence_struct_field.common().member_flags().IS_KEY(false);
    mst_unbounded_sequence_struct_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_unbounded_sequence_struct_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("StructType", 0, false));


    MD5 unbounded_sequence_struct_field_hash("unbounded_sequence_struct_field");
    for(int i = 0; i < 4; ++i)
    {
        mst_unbounded_sequence_struct_field.detail().name_hash()[i] = unbounded_sequence_struct_field_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_unbounded_sequence_struct_field);


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

    TypeObjectFactory::get_instance()->add_type_object("ContentFilterTestType", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ContentFilterTestType", false);
}

const TypeObject* GetCompleteContentFilterTestTypeObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("ContentFilterTestType", true);
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
    CompleteStructMember cst_char_field;
    cst_char_field.common().member_id(memberId++);
    cst_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_char_field.common().member_flags().IS_OPTIONAL(false);
    cst_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_char_field.common().member_flags().IS_KEY(false);
    cst_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("char", false));

    cst_char_field.detail().name("char_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_char_field);

    CompleteStructMember cst_uint8_field;
    cst_uint8_field.common().member_id(memberId++);
    cst_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint8_field.common().member_flags().IS_OPTIONAL(false);
    cst_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint8_field.common().member_flags().IS_KEY(false);
    cst_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    cst_uint8_field.detail().name("uint8_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint8_field);

    CompleteStructMember cst_int16_field;
    cst_int16_field.common().member_id(memberId++);
    cst_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int16_field.common().member_flags().IS_OPTIONAL(false);
    cst_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int16_field.common().member_flags().IS_KEY(false);
    cst_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int16_t", false));

    cst_int16_field.detail().name("int16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int16_field);

    CompleteStructMember cst_uint16_field;
    cst_uint16_field.common().member_id(memberId++);
    cst_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint16_field.common().member_flags().IS_OPTIONAL(false);
    cst_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint16_field.common().member_flags().IS_KEY(false);
    cst_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint16_t", false));

    cst_uint16_field.detail().name("uint16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint16_field);

    CompleteStructMember cst_int32_field;
    cst_int32_field.common().member_id(memberId++);
    cst_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int32_field.common().member_flags().IS_OPTIONAL(false);
    cst_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int32_field.common().member_flags().IS_KEY(false);
    cst_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    cst_int32_field.detail().name("int32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int32_field);

    CompleteStructMember cst_uint32_field;
    cst_uint32_field.common().member_id(memberId++);
    cst_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint32_field.common().member_flags().IS_OPTIONAL(false);
    cst_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint32_field.common().member_flags().IS_KEY(false);
    cst_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    cst_uint32_field.detail().name("uint32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint32_field);

    CompleteStructMember cst_int64_field;
    cst_int64_field.common().member_id(memberId++);
    cst_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_int64_field.common().member_flags().IS_OPTIONAL(false);
    cst_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_int64_field.common().member_flags().IS_KEY(false);
    cst_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int64_t", false));

    cst_int64_field.detail().name("int64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_int64_field);

    CompleteStructMember cst_uint64_field;
    cst_uint64_field.common().member_id(memberId++);
    cst_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uint64_field.common().member_flags().IS_OPTIONAL(false);
    cst_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uint64_field.common().member_flags().IS_KEY(false);
    cst_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint64_t", false));

    cst_uint64_field.detail().name("uint64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uint64_field);

    CompleteStructMember cst_float_field;
    cst_float_field.common().member_id(memberId++);
    cst_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_float_field.common().member_flags().IS_OPTIONAL(false);
    cst_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_float_field.common().member_flags().IS_KEY(false);
    cst_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("float", false));

    cst_float_field.detail().name("float_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_float_field);

    CompleteStructMember cst_double_field;
    cst_double_field.common().member_id(memberId++);
    cst_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_double_field.common().member_flags().IS_KEY(false);
    cst_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("double", false));

    cst_double_field.detail().name("double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_double_field);

    CompleteStructMember cst_long_double_field;
    cst_long_double_field.common().member_id(memberId++);
    cst_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_long_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_long_double_field.common().member_flags().IS_KEY(false);
    cst_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("longdouble", false));

    cst_long_double_field.detail().name("long_double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_long_double_field);

    CompleteStructMember cst_bool_field;
    cst_bool_field.common().member_id(memberId++);
    cst_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bool_field.common().member_flags().IS_OPTIONAL(false);
    cst_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bool_field.common().member_flags().IS_KEY(false);
    cst_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("bool", false));

    cst_bool_field.detail().name("bool_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bool_field);

    CompleteStructMember cst_string_field;
    cst_string_field.common().member_id(memberId++);
    cst_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_string_field.common().member_flags().IS_OPTIONAL(false);
    cst_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_string_field.common().member_flags().IS_KEY(false);
    cst_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    cst_string_field.detail().name("string_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_string_field);

    CompleteStructMember cst_enum_field;
    cst_enum_field.common().member_id(memberId++);
    cst_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_enum_field.common().member_flags().IS_OPTIONAL(false);
    cst_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_enum_field.common().member_flags().IS_KEY(false);
    cst_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_enum_field.common().member_type_id(*GetColorIdentifier(true));
    cst_enum_field.detail().name("enum_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_enum_field);

    CompleteStructMember cst_enum2_field;
    cst_enum2_field.common().member_id(memberId++);
    cst_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_enum2_field.common().member_flags().IS_OPTIONAL(false);
    cst_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_enum2_field.common().member_flags().IS_KEY(false);
    cst_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_enum2_field.common().member_type_id(*GetMaterialIdentifier(true));
    cst_enum2_field.detail().name("enum2_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_enum2_field);

    CompleteStructMember cst_struct_field;
    cst_struct_field.common().member_id(memberId++);
    cst_struct_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_struct_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_struct_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_struct_field.common().member_flags().IS_OPTIONAL(false);
    cst_struct_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_struct_field.common().member_flags().IS_KEY(false);
    cst_struct_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_struct_field.common().member_type_id(*GetStructTypeIdentifier(true));
    cst_struct_field.detail().name("struct_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_struct_field);

    CompleteStructMember cst_array_char_field;
    cst_array_char_field.common().member_id(memberId++);
    cst_array_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_char_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_char_field.common().member_flags().IS_KEY(false);
    cst_array_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("char", {max_array_size}, true));


    cst_array_char_field.detail().name("array_char_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_char_field);

    CompleteStructMember cst_array_uint8_field;
    cst_array_uint8_field.common().member_id(memberId++);
    cst_array_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_uint8_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_uint8_field.common().member_flags().IS_KEY(false);
    cst_array_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint8_t", {max_array_size}, true));


    cst_array_uint8_field.detail().name("array_uint8_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_uint8_field);

    CompleteStructMember cst_array_int16_field;
    cst_array_int16_field.common().member_id(memberId++);
    cst_array_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_int16_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_int16_field.common().member_flags().IS_KEY(false);
    cst_array_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int16_t", {max_array_size}, true));


    cst_array_int16_field.detail().name("array_int16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_int16_field);

    CompleteStructMember cst_array_uint16_field;
    cst_array_uint16_field.common().member_id(memberId++);
    cst_array_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_uint16_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_uint16_field.common().member_flags().IS_KEY(false);
    cst_array_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint16_t", {max_array_size}, true));


    cst_array_uint16_field.detail().name("array_uint16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_uint16_field);

    CompleteStructMember cst_array_int32_field;
    cst_array_int32_field.common().member_id(memberId++);
    cst_array_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_int32_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_int32_field.common().member_flags().IS_KEY(false);
    cst_array_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int32_t", {max_array_size}, true));


    cst_array_int32_field.detail().name("array_int32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_int32_field);

    CompleteStructMember cst_array_uint32_field;
    cst_array_uint32_field.common().member_id(memberId++);
    cst_array_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_uint32_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_uint32_field.common().member_flags().IS_KEY(false);
    cst_array_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint32_t", {max_array_size}, true));


    cst_array_uint32_field.detail().name("array_uint32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_uint32_field);

    CompleteStructMember cst_array_int64_field;
    cst_array_int64_field.common().member_id(memberId++);
    cst_array_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_int64_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_int64_field.common().member_flags().IS_KEY(false);
    cst_array_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("int64_t", {max_array_size}, true));


    cst_array_int64_field.detail().name("array_int64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_int64_field);

    CompleteStructMember cst_array_uint64_field;
    cst_array_uint64_field.common().member_id(memberId++);
    cst_array_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_uint64_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_uint64_field.common().member_flags().IS_KEY(false);
    cst_array_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint64_t", {max_array_size}, true));


    cst_array_uint64_field.detail().name("array_uint64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_uint64_field);

    CompleteStructMember cst_array_float_field;
    cst_array_float_field.common().member_id(memberId++);
    cst_array_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_float_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_float_field.common().member_flags().IS_KEY(false);
    cst_array_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("float", {max_array_size}, true));


    cst_array_float_field.detail().name("array_float_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_float_field);

    CompleteStructMember cst_array_double_field;
    cst_array_double_field.common().member_id(memberId++);
    cst_array_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_double_field.common().member_flags().IS_KEY(false);
    cst_array_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("double", {max_array_size}, true));


    cst_array_double_field.detail().name("array_double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_double_field);

    CompleteStructMember cst_array_long_double_field;
    cst_array_long_double_field.common().member_id(memberId++);
    cst_array_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_long_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_long_double_field.common().member_flags().IS_KEY(false);
    cst_array_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("longdouble", {max_array_size}, true));


    cst_array_long_double_field.detail().name("array_long_double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_long_double_field);

    CompleteStructMember cst_array_bool_field;
    cst_array_bool_field.common().member_id(memberId++);
    cst_array_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_bool_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_bool_field.common().member_flags().IS_KEY(false);
    cst_array_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("bool", {max_array_size}, true));


    cst_array_bool_field.detail().name("array_bool_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_bool_field);

    CompleteStructMember cst_array_string_field;
    cst_array_string_field.common().member_id(memberId++);
    cst_array_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_string_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_string_field.common().member_flags().IS_KEY(false);
    cst_array_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier(TypeNamesGenerator::get_string_type_name(255, false), {max_array_size}, true));


    cst_array_string_field.detail().name("array_string_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_string_field);

    CompleteStructMember cst_array_enum_field;
    cst_array_enum_field.common().member_id(memberId++);
    cst_array_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_enum_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_enum_field.common().member_flags().IS_KEY(false);
    cst_array_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_enum_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("Color", {max_array_size}, true));


    cst_array_enum_field.detail().name("array_enum_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_enum_field);

    CompleteStructMember cst_array_enum2_field;
    cst_array_enum2_field.common().member_id(memberId++);
    cst_array_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_enum2_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_enum2_field.common().member_flags().IS_KEY(false);
    cst_array_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_enum2_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("Material", {max_array_size}, true));


    cst_array_enum2_field.detail().name("array_enum2_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_enum2_field);

    CompleteStructMember cst_array_struct_field;
    cst_array_struct_field.common().member_id(memberId++);
    cst_array_struct_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_array_struct_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_array_struct_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_array_struct_field.common().member_flags().IS_OPTIONAL(false);
    cst_array_struct_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_array_struct_field.common().member_flags().IS_KEY(false);
    cst_array_struct_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_array_struct_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("StructType", {max_array_size}, true));


    cst_array_struct_field.detail().name("array_struct_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_array_struct_field);

    CompleteStructMember cst_bounded_sequence_char_field;
    cst_bounded_sequence_char_field.common().member_id(memberId++);
    cst_bounded_sequence_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_char_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_char_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("char", max_seq_size, true));


    cst_bounded_sequence_char_field.detail().name("bounded_sequence_char_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_char_field);

    CompleteStructMember cst_bounded_sequence_uint8_field;
    cst_bounded_sequence_uint8_field.common().member_id(memberId++);
    cst_bounded_sequence_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_uint8_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_uint8_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", max_seq_size, true));


    cst_bounded_sequence_uint8_field.detail().name("bounded_sequence_uint8_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_uint8_field);

    CompleteStructMember cst_bounded_sequence_int16_field;
    cst_bounded_sequence_int16_field.common().member_id(memberId++);
    cst_bounded_sequence_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_int16_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_int16_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int16_t", max_seq_size, true));


    cst_bounded_sequence_int16_field.detail().name("bounded_sequence_int16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_int16_field);

    CompleteStructMember cst_bounded_sequence_uint16_field;
    cst_bounded_sequence_uint16_field.common().member_id(memberId++);
    cst_bounded_sequence_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_uint16_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_uint16_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint16_t", max_seq_size, true));


    cst_bounded_sequence_uint16_field.detail().name("bounded_sequence_uint16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_uint16_field);

    CompleteStructMember cst_bounded_sequence_int32_field;
    cst_bounded_sequence_int32_field.common().member_id(memberId++);
    cst_bounded_sequence_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_int32_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_int32_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", max_seq_size, true));


    cst_bounded_sequence_int32_field.detail().name("bounded_sequence_int32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_int32_field);

    CompleteStructMember cst_bounded_sequence_uint32_field;
    cst_bounded_sequence_uint32_field.common().member_id(memberId++);
    cst_bounded_sequence_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_uint32_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_uint32_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint32_t", max_seq_size, true));


    cst_bounded_sequence_uint32_field.detail().name("bounded_sequence_uint32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_uint32_field);

    CompleteStructMember cst_bounded_sequence_int64_field;
    cst_bounded_sequence_int64_field.common().member_id(memberId++);
    cst_bounded_sequence_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_int64_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_int64_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int64_t", max_seq_size, true));


    cst_bounded_sequence_int64_field.detail().name("bounded_sequence_int64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_int64_field);

    CompleteStructMember cst_bounded_sequence_uint64_field;
    cst_bounded_sequence_uint64_field.common().member_id(memberId++);
    cst_bounded_sequence_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_uint64_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_uint64_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint64_t", max_seq_size, true));


    cst_bounded_sequence_uint64_field.detail().name("bounded_sequence_uint64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_uint64_field);

    CompleteStructMember cst_bounded_sequence_float_field;
    cst_bounded_sequence_float_field.common().member_id(memberId++);
    cst_bounded_sequence_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_float_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_float_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("float", max_seq_size, true));


    cst_bounded_sequence_float_field.detail().name("bounded_sequence_float_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_float_field);

    CompleteStructMember cst_bounded_sequence_double_field;
    cst_bounded_sequence_double_field.common().member_id(memberId++);
    cst_bounded_sequence_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_double_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("double", max_seq_size, true));


    cst_bounded_sequence_double_field.detail().name("bounded_sequence_double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_double_field);

    CompleteStructMember cst_bounded_sequence_long_double_field;
    cst_bounded_sequence_long_double_field.common().member_id(memberId++);
    cst_bounded_sequence_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_long_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_long_double_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("longdouble", max_seq_size, true));


    cst_bounded_sequence_long_double_field.detail().name("bounded_sequence_long_double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_long_double_field);

    CompleteStructMember cst_bounded_sequence_bool_field;
    cst_bounded_sequence_bool_field.common().member_id(memberId++);
    cst_bounded_sequence_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_bool_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_bool_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("bool", max_seq_size, true));


    cst_bounded_sequence_bool_field.detail().name("bounded_sequence_bool_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_bool_field);

    CompleteStructMember cst_bounded_sequence_string_field;
    cst_bounded_sequence_string_field.common().member_id(memberId++);
    cst_bounded_sequence_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_string_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_string_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier(TypeNamesGenerator::get_string_type_name(255, false), max_seq_size, true));


    cst_bounded_sequence_string_field.detail().name("bounded_sequence_string_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_string_field);

    CompleteStructMember cst_bounded_sequence_enum_field;
    cst_bounded_sequence_enum_field.common().member_id(memberId++);
    cst_bounded_sequence_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_enum_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_enum_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_enum_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("Color", max_seq_size, true));


    cst_bounded_sequence_enum_field.detail().name("bounded_sequence_enum_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_enum_field);

    CompleteStructMember cst_bounded_sequence_enum2_field;
    cst_bounded_sequence_enum2_field.common().member_id(memberId++);
    cst_bounded_sequence_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_enum2_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_enum2_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_enum2_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("Material", max_seq_size, true));


    cst_bounded_sequence_enum2_field.detail().name("bounded_sequence_enum2_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_enum2_field);

    CompleteStructMember cst_bounded_sequence_struct_field;
    cst_bounded_sequence_struct_field.common().member_id(memberId++);
    cst_bounded_sequence_struct_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_bounded_sequence_struct_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_bounded_sequence_struct_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_bounded_sequence_struct_field.common().member_flags().IS_OPTIONAL(false);
    cst_bounded_sequence_struct_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_bounded_sequence_struct_field.common().member_flags().IS_KEY(false);
    cst_bounded_sequence_struct_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_bounded_sequence_struct_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("StructType", max_seq_size, true));


    cst_bounded_sequence_struct_field.detail().name("bounded_sequence_struct_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_bounded_sequence_struct_field);

    CompleteStructMember cst_unbounded_sequence_char_field;
    cst_unbounded_sequence_char_field.common().member_id(memberId++);
    cst_unbounded_sequence_char_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_char_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_char_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_char_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_char_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_char_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_char_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_char_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("char", 0, true));


    cst_unbounded_sequence_char_field.detail().name("unbounded_sequence_char_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_char_field);

    CompleteStructMember cst_unbounded_sequence_uint8_field;
    cst_unbounded_sequence_uint8_field.common().member_id(memberId++);
    cst_unbounded_sequence_uint8_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_uint8_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_uint8_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_uint8_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_uint8_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_uint8_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_uint8_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_uint8_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 0, true));


    cst_unbounded_sequence_uint8_field.detail().name("unbounded_sequence_uint8_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_uint8_field);

    CompleteStructMember cst_unbounded_sequence_int16_field;
    cst_unbounded_sequence_int16_field.common().member_id(memberId++);
    cst_unbounded_sequence_int16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_int16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_int16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_int16_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_int16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_int16_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_int16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_int16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int16_t", 0, true));


    cst_unbounded_sequence_int16_field.detail().name("unbounded_sequence_int16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_int16_field);

    CompleteStructMember cst_unbounded_sequence_uint16_field;
    cst_unbounded_sequence_uint16_field.common().member_id(memberId++);
    cst_unbounded_sequence_uint16_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_uint16_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_uint16_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_uint16_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_uint16_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_uint16_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_uint16_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_uint16_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint16_t", 0, true));


    cst_unbounded_sequence_uint16_field.detail().name("unbounded_sequence_uint16_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_uint16_field);

    CompleteStructMember cst_unbounded_sequence_int32_field;
    cst_unbounded_sequence_int32_field.common().member_id(memberId++);
    cst_unbounded_sequence_int32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_int32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_int32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_int32_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_int32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_int32_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_int32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_int32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int32_t", 0, true));


    cst_unbounded_sequence_int32_field.detail().name("unbounded_sequence_int32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_int32_field);

    CompleteStructMember cst_unbounded_sequence_uint32_field;
    cst_unbounded_sequence_uint32_field.common().member_id(memberId++);
    cst_unbounded_sequence_uint32_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_uint32_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_uint32_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_uint32_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_uint32_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_uint32_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_uint32_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_uint32_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint32_t", 0, true));


    cst_unbounded_sequence_uint32_field.detail().name("unbounded_sequence_uint32_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_uint32_field);

    CompleteStructMember cst_unbounded_sequence_int64_field;
    cst_unbounded_sequence_int64_field.common().member_id(memberId++);
    cst_unbounded_sequence_int64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_int64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_int64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_int64_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_int64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_int64_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_int64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_int64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("int64_t", 0, true));


    cst_unbounded_sequence_int64_field.detail().name("unbounded_sequence_int64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_int64_field);

    CompleteStructMember cst_unbounded_sequence_uint64_field;
    cst_unbounded_sequence_uint64_field.common().member_id(memberId++);
    cst_unbounded_sequence_uint64_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_uint64_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_uint64_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_uint64_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_uint64_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_uint64_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_uint64_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_uint64_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint64_t", 0, true));


    cst_unbounded_sequence_uint64_field.detail().name("unbounded_sequence_uint64_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_uint64_field);

    CompleteStructMember cst_unbounded_sequence_float_field;
    cst_unbounded_sequence_float_field.common().member_id(memberId++);
    cst_unbounded_sequence_float_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_float_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_float_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_float_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_float_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_float_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_float_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_float_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("float", 0, true));


    cst_unbounded_sequence_float_field.detail().name("unbounded_sequence_float_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_float_field);

    CompleteStructMember cst_unbounded_sequence_double_field;
    cst_unbounded_sequence_double_field.common().member_id(memberId++);
    cst_unbounded_sequence_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_double_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("double", 0, true));


    cst_unbounded_sequence_double_field.detail().name("unbounded_sequence_double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_double_field);

    CompleteStructMember cst_unbounded_sequence_long_double_field;
    cst_unbounded_sequence_long_double_field.common().member_id(memberId++);
    cst_unbounded_sequence_long_double_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_long_double_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_long_double_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_long_double_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_long_double_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_long_double_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_long_double_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_long_double_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("longdouble", 0, true));


    cst_unbounded_sequence_long_double_field.detail().name("unbounded_sequence_long_double_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_long_double_field);

    CompleteStructMember cst_unbounded_sequence_bool_field;
    cst_unbounded_sequence_bool_field.common().member_id(memberId++);
    cst_unbounded_sequence_bool_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_bool_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_bool_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_bool_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_bool_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_bool_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_bool_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_bool_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("bool", 0, true));


    cst_unbounded_sequence_bool_field.detail().name("unbounded_sequence_bool_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_bool_field);

    CompleteStructMember cst_unbounded_sequence_string_field;
    cst_unbounded_sequence_string_field.common().member_id(memberId++);
    cst_unbounded_sequence_string_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_string_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_string_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_string_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_string_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_string_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_string_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_string_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier(TypeNamesGenerator::get_string_type_name(255, false), 0, true));


    cst_unbounded_sequence_string_field.detail().name("unbounded_sequence_string_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_string_field);

    CompleteStructMember cst_unbounded_sequence_enum_field;
    cst_unbounded_sequence_enum_field.common().member_id(memberId++);
    cst_unbounded_sequence_enum_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_enum_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_enum_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_enum_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_enum_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_enum_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_enum_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_enum_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("Color", 0, true));


    cst_unbounded_sequence_enum_field.detail().name("unbounded_sequence_enum_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_enum_field);

    CompleteStructMember cst_unbounded_sequence_enum2_field;
    cst_unbounded_sequence_enum2_field.common().member_id(memberId++);
    cst_unbounded_sequence_enum2_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_enum2_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_enum2_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_enum2_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_enum2_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_enum2_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_enum2_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_enum2_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("Material", 0, true));


    cst_unbounded_sequence_enum2_field.detail().name("unbounded_sequence_enum2_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_enum2_field);

    CompleteStructMember cst_unbounded_sequence_struct_field;
    cst_unbounded_sequence_struct_field.common().member_id(memberId++);
    cst_unbounded_sequence_struct_field.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_unbounded_sequence_struct_field.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_unbounded_sequence_struct_field.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_unbounded_sequence_struct_field.common().member_flags().IS_OPTIONAL(false);
    cst_unbounded_sequence_struct_field.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_unbounded_sequence_struct_field.common().member_flags().IS_KEY(false);
    cst_unbounded_sequence_struct_field.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_unbounded_sequence_struct_field.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("StructType", 0, true));


    cst_unbounded_sequence_struct_field.detail().name("unbounded_sequence_struct_field");

    type_object->complete().struct_type().member_seq().emplace_back(cst_unbounded_sequence_struct_field);


    // Header
    type_object->complete().struct_type().header().detail().type_name("ContentFilterTestType");
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

    TypeObjectFactory::get_instance()->add_type_object("ContentFilterTestType", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("ContentFilterTestType", true);
}
