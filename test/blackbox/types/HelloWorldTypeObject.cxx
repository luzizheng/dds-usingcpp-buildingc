/*!
 * @file HelloWorldTypeObject.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "HelloWorld.h"
#include "HelloWorldTypeObject.h"
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

void registerHelloWorldTypes()
{
    TypeObjectFactory *factory = TypeObjectFactory::get_instance();
    factory->add_type_object("HelloWorld", GetHelloWorldIdentifier(true),
    GetHelloWorldObject(true));
    factory->add_type_object("HelloWorld", GetHelloWorldIdentifier(false),
    GetHelloWorldObject(false));

}

const TypeIdentifier* GetHelloWorldIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("HelloWorld", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetHelloWorldObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("HelloWorld", complete);
}

const TypeObject* GetHelloWorldObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("HelloWorld", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteHelloWorldObject();
    }
    //else
    return GetMinimalHelloWorldObject();
}

const TypeObject* GetMinimalHelloWorldObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("HelloWorld", false);
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
    MinimalStructMember mst_index;
    mst_index.common().member_id(memberId++);
    mst_index.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_index.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_index.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_index.common().member_flags().IS_OPTIONAL(false);
    mst_index.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_index.common().member_flags().IS_KEY(false);
    mst_index.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        mst_index.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier(cppType, false));
    }

    MD5 index_hash("index");
    for(int i = 0; i < 4; ++i)
    {
        mst_index.detail().name_hash()[i] = index_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_index);

    MinimalStructMember mst_message;
    mst_message.common().member_id(memberId++);
    mst_message.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_message.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_message.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_message.common().member_flags().IS_OPTIONAL(false);
    mst_message.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_message.common().member_flags().IS_KEY(false);
    mst_message.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_message.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    MD5 message_hash("message");
    for(int i = 0; i < 4; ++i)
    {
        mst_message.detail().name_hash()[i] = message_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_message);


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

    TypeObjectFactory::get_instance()->add_type_object("HelloWorld", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("HelloWorld", false);
}

const TypeObject* GetCompleteHelloWorldObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("HelloWorld", true);
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
    CompleteStructMember cst_index;
    cst_index.common().member_id(memberId++);
    cst_index.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_index.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_index.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_index.common().member_flags().IS_OPTIONAL(false);
    cst_index.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_index.common().member_flags().IS_KEY(false);
    cst_index.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    {
        std::string cppType = "uint32_t";
        if (cppType == "long double")
        {
            cppType = "longdouble";
        }
        cst_index.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier(cppType, false));
    }

    cst_index.detail().name("index");

    type_object->complete().struct_type().member_seq().emplace_back(cst_index);

    CompleteStructMember cst_message;
    cst_message.common().member_id(memberId++);
    cst_message.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_message.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_message.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_message.common().member_flags().IS_OPTIONAL(false);
    cst_message.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_message.common().member_flags().IS_KEY(false);
    cst_message.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_message.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    cst_message.detail().name("message");

    type_object->complete().struct_type().member_seq().emplace_back(cst_message);


    // Header
    type_object->complete().struct_type().header().detail().type_name("HelloWorld");
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

    TypeObjectFactory::get_instance()->add_type_object("HelloWorld", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("HelloWorld", true);
}
