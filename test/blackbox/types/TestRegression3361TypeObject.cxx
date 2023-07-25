/*!
 * @file TestRegression3361TypeObject.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "TestRegression3361.h"
#include "TestRegression3361TypeObject.h"
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

void registerTestRegression3361Types()
{
    TypeObjectFactory *factory = TypeObjectFactory::get_instance();
    factory->add_type_object("TestModule::MACHINEID", TestModule::GetMACHINEIDIdentifier(true),
            TestModule::GetMACHINEIDObject(true));
    factory->add_type_object("TestModule::MACHINEID", TestModule::GetMACHINEIDIdentifier(false),
            TestModule::GetMACHINEIDObject(false));


    factory->add_type_object("TestRegression3361", GetTestRegression3361Identifier(true),
    GetTestRegression3361Object(true));
    factory->add_type_object("TestRegression3361", GetTestRegression3361Identifier(false),
    GetTestRegression3361Object(false));

}

const TypeIdentifier* GetTestRegression3361Identifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("TestRegression3361", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetTestRegression3361Object(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("TestRegression3361", complete);
}

const TypeObject* GetTestRegression3361Object(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("TestRegression3361", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteTestRegression3361Object();
    }
    //else
    return GetMinimalTestRegression3361Object();
}

const TypeObject* GetMinimalTestRegression3361Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("TestRegression3361", false);
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
    MinimalStructMember mst_uuid;
    mst_uuid.common().member_id(memberId++);
    mst_uuid.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_uuid.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_uuid.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_uuid.common().member_flags().IS_OPTIONAL(false);
    mst_uuid.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_uuid.common().member_flags().IS_KEY(false);
    mst_uuid.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_uuid.common().member_type_id(*TestModule::GetMACHINEIDIdentifier(false));
    MD5 uuid_hash("uuid");
    for(int i = 0; i < 4; ++i)
    {
        mst_uuid.detail().name_hash()[i] = uuid_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_uuid);


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

    TypeObjectFactory::get_instance()->add_type_object("TestRegression3361", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("TestRegression3361", false);
}

const TypeObject* GetCompleteTestRegression3361Object()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("TestRegression3361", true);
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
    CompleteStructMember cst_uuid;
    cst_uuid.common().member_id(memberId++);
    cst_uuid.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_uuid.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_uuid.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_uuid.common().member_flags().IS_OPTIONAL(false);
    cst_uuid.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_uuid.common().member_flags().IS_KEY(false);
    cst_uuid.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_uuid.common().member_type_id(*TestModule::GetMACHINEIDIdentifier(true));
    cst_uuid.detail().name("uuid");

    type_object->complete().struct_type().member_seq().emplace_back(cst_uuid);


    // Header
    type_object->complete().struct_type().header().detail().type_name("TestRegression3361");
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

    TypeObjectFactory::get_instance()->add_type_object("TestRegression3361", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("TestRegression3361", true);
}
