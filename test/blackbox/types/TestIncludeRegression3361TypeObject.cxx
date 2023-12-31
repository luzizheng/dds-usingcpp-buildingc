/*!
 * @file TestIncludeRegression3361TypeObject.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "TestIncludeRegression3361.h"
#include "TestIncludeRegression3361TypeObject.h"
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

void registerTestIncludeRegression3361Types()
{
    TypeObjectFactory *factory = TypeObjectFactory::get_instance();
    factory->add_type_object("TestModule::MACHINEID", TestModule::GetMACHINEIDIdentifier(true),
            TestModule::GetMACHINEIDObject(true));
    factory->add_type_object("TestModule::MACHINEID", TestModule::GetMACHINEIDIdentifier(false),
            TestModule::GetMACHINEIDObject(false));


}

namespace TestModule {
    const TypeIdentifier* GetMACHINEIDIdentifier(bool complete)
    {
        const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MACHINEID", complete);
        if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
        {
            return c_identifier;
        }

        GetMACHINEIDObject(complete); // Generated inside
        return TypeObjectFactory::get_instance()->get_type_identifier("MACHINEID", complete);
    }

    const TypeObject* GetMACHINEIDObject(bool complete)
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MACHINEID", complete);
        if (c_type_object != nullptr)
        {
            return c_type_object;
        }
        else if (complete)
        {
            return GetCompleteMACHINEIDObject();
        }
        else
        {
            return GetMinimalMACHINEIDObject();
        }
    }

    const TypeObject* GetMinimalMACHINEIDObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MACHINEID", false);
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
        const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier(TypeNamesGenerator::get_string_type_name(255, false), false);


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
        TypeObjectFactory::get_instance()->add_alias("MACHINEID", TypeNamesGenerator::get_string_type_name(255, false));

        TypeObjectFactory::get_instance()->add_type_object("MACHINEID", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("MACHINEID", false);
    }

    const TypeObject* GetCompleteMACHINEIDObject()
    {
        const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MACHINEID", true);
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
        type_object->complete().alias_type().header().detail().type_name("MACHINEID");

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
        const TypeIdentifier *relatedType = TypeObjectFactory::get_instance()->get_type_identifier_trying_complete(TypeNamesGenerator::get_string_type_name(255, false));


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
        TypeObjectFactory::get_instance()->add_alias("MACHINEID", TypeNamesGenerator::get_string_type_name(255, false));

        TypeObjectFactory::get_instance()->add_type_object("MACHINEID", &identifier, type_object);
        delete type_object;
        return TypeObjectFactory::get_instance()->get_type_object("MACHINEID", true);
    }

} // namespace TestModule