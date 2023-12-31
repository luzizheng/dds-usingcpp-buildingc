

/*! 
 * @file WideEnumPubSubTypes.cpp
 * 此头文件包含序列化函数的实现。
 *
 * 此文件由工具fastcdrgen生成。
 */


#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

#include "WideEnumPubSubTypes.h"

using namespace eprosima::fastrtps;
using namespace eprosima::fastrtps::rtps;


MyEnumWideStructPubSubType::MyEnumWideStructPubSubType()
{
    setName("MyEnumWideStruct");
    m_typeSize = static_cast<uint32_t>(MyEnumWideStruct::getMaxCdrSerializedSize()) + 4 /*encapsulation*/;
    m_isGetKeyDefined = MyEnumWideStruct::isKeyDefined();
    size_t keyLength = MyEnumWideStruct::getKeyMaxCdrSerializedSize()>16 ? MyEnumWideStruct::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

MyEnumWideStructPubSubType::~MyEnumWideStructPubSubType()
{
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool MyEnumWideStructPubSubType::serialize(void *data, SerializedPayload_t *payload)
{
    MyEnumWideStruct *p_type = static_cast<MyEnumWideStruct*>(data);
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();

    try
    {
        p_type->serialize(ser); // Serialize the object:
    }
    catch(eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength()); //Get the serialized length
    return true;
}

bool MyEnumWideStructPubSubType::deserialize(SerializedPayload_t* payload, void* data)
{
    MyEnumWideStruct* p_type = static_cast<MyEnumWideStruct*>(data); //Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    try
    {
        p_type->deserialize(deser); //Deserialize the object:
    }
    catch(eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    return true;
}

std::function<uint32_t()> MyEnumWideStructPubSubType::getSerializedSizeProvider(void* data)
{
    return [data]() -> uint32_t
    {
        return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<MyEnumWideStruct*>(data))) + 4 /*encapsulation*/;
    };
}

void* MyEnumWideStructPubSubType::createData()
{
    return reinterpret_cast<void*>(new MyEnumWideStruct());
}

void MyEnumWideStructPubSubType::deleteData(void* data)
{
    delete(reinterpret_cast<MyEnumWideStruct*>(data));
}

bool MyEnumWideStructPubSubType::getKey(void *data, InstanceHandle_t* handle, bool force_md5)
{
    if(!m_isGetKeyDefined)
        return false;
    MyEnumWideStruct* p_type = static_cast<MyEnumWideStruct*>(data);
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),MyEnumWideStruct::getKeyMaxCdrSerializedSize());     // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);     // Object that serializes the data.
    p_type->serializeKey(ser);
    if(force_md5 || MyEnumWideStruct::getKeyMaxCdrSerializedSize()>16)    {
        m_md5.init();
        m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.getSerializedDataLength()));
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)        {
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)        {
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}


SimpleWideUnionStructPubSubType::SimpleWideUnionStructPubSubType()
{
    setName("SimpleWideUnionStruct");
    m_typeSize = static_cast<uint32_t>(SimpleWideUnionStruct::getMaxCdrSerializedSize()) + 4 /*encapsulation*/;
    m_isGetKeyDefined = SimpleWideUnionStruct::isKeyDefined();
    size_t keyLength = SimpleWideUnionStruct::getKeyMaxCdrSerializedSize()>16 ? SimpleWideUnionStruct::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

SimpleWideUnionStructPubSubType::~SimpleWideUnionStructPubSubType()
{
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool SimpleWideUnionStructPubSubType::serialize(void *data, SerializedPayload_t *payload)
{
    SimpleWideUnionStruct *p_type = static_cast<SimpleWideUnionStruct*>(data);
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();

    try
    {
        p_type->serialize(ser); // Serialize the object:
    }
    catch(eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength()); //Get the serialized length
    return true;
}

bool SimpleWideUnionStructPubSubType::deserialize(SerializedPayload_t* payload, void* data)
{
    SimpleWideUnionStruct* p_type = static_cast<SimpleWideUnionStruct*>(data); //Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    try
    {
        p_type->deserialize(deser); //Deserialize the object:
    }
    catch(eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    return true;
}

std::function<uint32_t()> SimpleWideUnionStructPubSubType::getSerializedSizeProvider(void* data)
{
    return [data]() -> uint32_t
    {
        return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<SimpleWideUnionStruct*>(data))) + 4 /*encapsulation*/;
    };
}

void* SimpleWideUnionStructPubSubType::createData()
{
    return reinterpret_cast<void*>(new SimpleWideUnionStruct());
}

void SimpleWideUnionStructPubSubType::deleteData(void* data)
{
    delete(reinterpret_cast<SimpleWideUnionStruct*>(data));
}

bool SimpleWideUnionStructPubSubType::getKey(void *data, InstanceHandle_t* handle, bool force_md5)
{
    if(!m_isGetKeyDefined)
        return false;
    SimpleWideUnionStruct* p_type = static_cast<SimpleWideUnionStruct*>(data);
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),SimpleWideUnionStruct::getKeyMaxCdrSerializedSize());     // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);     // Object that serializes the data.
    p_type->serializeKey(ser);
    if(force_md5 || SimpleWideUnionStruct::getKeyMaxCdrSerializedSize()>16)    {
        m_md5.init();
        m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.getSerializedDataLength()));
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)        {
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)        {
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

