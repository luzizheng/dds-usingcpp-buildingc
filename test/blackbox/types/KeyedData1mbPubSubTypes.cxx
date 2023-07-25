/*!
 * @file KeyedData1mbPubSubTypes.cpp
 * 此头文件包含序列化函数的实现。
 *
 * 此文件由工具fastcdrgen生成。
 */


#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

#include "KeyedData1mbPubSubTypes.h"

using SerializedPayload_t = eprosima::fastrtps::rtps::SerializedPayload_t;
using InstanceHandle_t = eprosima::fastrtps::rtps::InstanceHandle_t;

KeyedData1mbPubSubType::KeyedData1mbPubSubType()
{
    setName("KeyedData1mb");
    auto type_size = KeyedData1mb::getMaxCdrSerializedSize();
    type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
    m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
    m_isGetKeyDefined = KeyedData1mb::isKeyDefined();
    size_t keyLength = KeyedData1mb::getKeyMaxCdrSerializedSize() > 16 ?
            KeyedData1mb::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

KeyedData1mbPubSubType::~KeyedData1mbPubSubType()
{
    if (m_keyBuffer != nullptr)
    {
        free(m_keyBuffer);
    }
}

bool KeyedData1mbPubSubType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    KeyedData1mb* p_type = static_cast<KeyedData1mb*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    try
    {
        // Serialize encapsulation
        ser.serialize_encapsulation();
        // Serialize the object.
        p_type->serialize(ser);
    }
    catch (eprosima::fastcdr::exception::Exception& /*exception*/)
    {
        return false;
    }

    // Get the serialized length
    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
    return true;
}

bool KeyedData1mbPubSubType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    try
    {
        // Convert DATA to pointer of your type
        KeyedData1mb* p_type = static_cast<KeyedData1mb*>(data);

        // Object that manages the raw buffer.
        eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length);

        // Object that deserializes the data.
        eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);

        // Deserialize encapsulation.
        deser.read_encapsulation();
        payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

        // Deserialize the object.
        p_type->deserialize(deser);
    }
    catch (eprosima::fastcdr::exception::Exception& /*exception*/)
    {
        return false;
    }

    return true;
}

std::function<uint32_t()> KeyedData1mbPubSubType::getSerializedSizeProvider(
        void* data)
{
    return [data]() -> uint32_t
           {
               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<KeyedData1mb*>(data))) +
                      4u /*encapsulation*/;
           };
}

void* KeyedData1mbPubSubType::createData()
{
    return reinterpret_cast<void*>(new KeyedData1mb());
}

void KeyedData1mbPubSubType::deleteData(
        void* data)
{
    delete(reinterpret_cast<KeyedData1mb*>(data));
}

bool KeyedData1mbPubSubType::getKey(
        void* data,
        InstanceHandle_t* handle,
        bool force_md5)
{
    if (!m_isGetKeyDefined)
    {
        return false;
    }

    KeyedData1mb* p_type = static_cast<KeyedData1mb*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
            KeyedData1mb::getKeyMaxCdrSerializedSize());

    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
    p_type->serializeKey(ser);
    if (force_md5 || KeyedData1mb::getKeyMaxCdrSerializedSize() > 16)
    {
        m_md5.init();
        m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.getSerializedDataLength()));
        m_md5.finalize();
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_md5.digest[i];
        }
    }
    else
    {
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

