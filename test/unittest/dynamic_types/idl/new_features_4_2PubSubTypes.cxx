/*!
 * @file new_features_4_2PubSubTypes.cpp
 * 此头文件包含序列化函数的实现。
 *
 * 此文件由工具fastcdrgen生成。
 */


#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

#include "new_features_4_2PubSubTypes.h"

using SerializedPayload_t = eprosima::fastrtps::rtps::SerializedPayload_t;
using InstanceHandle_t = eprosima::fastrtps::rtps::InstanceHandle_t;

NewAliasesPubSubType::NewAliasesPubSubType()
{
    setName("NewAliases");
    auto type_size = NewAliases::getMaxCdrSerializedSize();
    type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
    m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
    m_isGetKeyDefined = NewAliases::isKeyDefined();
    size_t keyLength = NewAliases::getKeyMaxCdrSerializedSize() > 16 ?
            NewAliases::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

NewAliasesPubSubType::~NewAliasesPubSubType()
{
    if (m_keyBuffer != nullptr)
    {
        free(m_keyBuffer);
    }
}

bool NewAliasesPubSubType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    NewAliases* p_type = static_cast<NewAliases*>(data);

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

bool NewAliasesPubSubType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    try
    {
        // Convert DATA to pointer of your type
        NewAliases* p_type = static_cast<NewAliases*>(data);

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

std::function<uint32_t()> NewAliasesPubSubType::getSerializedSizeProvider(
        void* data)
{
    return [data]() -> uint32_t
           {
               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<NewAliases*>(data))) +
                      4u /*encapsulation*/;
           };
}

void* NewAliasesPubSubType::createData()
{
    return reinterpret_cast<void*>(new NewAliases());
}

void NewAliasesPubSubType::deleteData(
        void* data)
{
    delete(reinterpret_cast<NewAliases*>(data));
}

bool NewAliasesPubSubType::getKey(
        void* data,
        InstanceHandle_t* handle,
        bool force_md5)
{
    if (!m_isGetKeyDefined)
    {
        return false;
    }

    NewAliases* p_type = static_cast<NewAliases*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
            NewAliases::getKeyMaxCdrSerializedSize());

    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
    p_type->serializeKey(ser);
    if (force_md5 || NewAliases::getKeyMaxCdrSerializedSize() > 16)
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




namespace bitmodule {



    BitsetBitmaskPubSubType::BitsetBitmaskPubSubType()
    {
        setName("bitmodule::BitsetBitmask");
        auto type_size = BitsetBitmask::getMaxCdrSerializedSize();
        type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
        m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
        m_isGetKeyDefined = BitsetBitmask::isKeyDefined();
        size_t keyLength = BitsetBitmask::getKeyMaxCdrSerializedSize() > 16 ?
                BitsetBitmask::getKeyMaxCdrSerializedSize() : 16;
        m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
        memset(m_keyBuffer, 0, keyLength);
    }

    BitsetBitmaskPubSubType::~BitsetBitmaskPubSubType()
    {
        if (m_keyBuffer != nullptr)
        {
            free(m_keyBuffer);
        }
    }

    bool BitsetBitmaskPubSubType::serialize(
            void* data,
            SerializedPayload_t* payload)
    {
        BitsetBitmask* p_type = static_cast<BitsetBitmask*>(data);

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

    bool BitsetBitmaskPubSubType::deserialize(
            SerializedPayload_t* payload,
            void* data)
    {
        try
        {
            // Convert DATA to pointer of your type
            BitsetBitmask* p_type = static_cast<BitsetBitmask*>(data);

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

    std::function<uint32_t()> BitsetBitmaskPubSubType::getSerializedSizeProvider(
            void* data)
    {
        return [data]() -> uint32_t
               {
                   return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<BitsetBitmask*>(data))) +
                          4u /*encapsulation*/;
               };
    }

    void* BitsetBitmaskPubSubType::createData()
    {
        return reinterpret_cast<void*>(new BitsetBitmask());
    }

    void BitsetBitmaskPubSubType::deleteData(
            void* data)
    {
        delete(reinterpret_cast<BitsetBitmask*>(data));
    }

    bool BitsetBitmaskPubSubType::getKey(
            void* data,
            InstanceHandle_t* handle,
            bool force_md5)
    {
        if (!m_isGetKeyDefined)
        {
            return false;
        }

        BitsetBitmask* p_type = static_cast<BitsetBitmask*>(data);

        // Object that manages the raw buffer.
        eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                BitsetBitmask::getKeyMaxCdrSerializedSize());

        // Object that serializes the data.
        eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
        p_type->serializeKey(ser);
        if (force_md5 || BitsetBitmask::getKeyMaxCdrSerializedSize() > 16)
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

    BM2PubSubType::BM2PubSubType()
    {
        setName("bitmodule::BM2");
        auto type_size = BM2::getMaxCdrSerializedSize();
        type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
        m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
        m_isGetKeyDefined = BM2::isKeyDefined();
        size_t keyLength = BM2::getKeyMaxCdrSerializedSize() > 16 ?
                BM2::getKeyMaxCdrSerializedSize() : 16;
        m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
        memset(m_keyBuffer, 0, keyLength);
    }

    BM2PubSubType::~BM2PubSubType()
    {
        if (m_keyBuffer != nullptr)
        {
            free(m_keyBuffer);
        }
    }

    bool BM2PubSubType::serialize(
            void* data,
            SerializedPayload_t* payload)
    {
        BM2* p_type = static_cast<BM2*>(data);

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

    bool BM2PubSubType::deserialize(
            SerializedPayload_t* payload,
            void* data)
    {
        try
        {
            // Convert DATA to pointer of your type
            BM2* p_type = static_cast<BM2*>(data);

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

    std::function<uint32_t()> BM2PubSubType::getSerializedSizeProvider(
            void* data)
    {
        return [data]() -> uint32_t
               {
                   return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<BM2*>(data))) +
                          4u /*encapsulation*/;
               };
    }

    void* BM2PubSubType::createData()
    {
        return reinterpret_cast<void*>(new BM2());
    }

    void BM2PubSubType::deleteData(
            void* data)
    {
        delete(reinterpret_cast<BM2*>(data));
    }

    bool BM2PubSubType::getKey(
            void* data,
            InstanceHandle_t* handle,
            bool force_md5)
    {
        if (!m_isGetKeyDefined)
        {
            return false;
        }

        BM2* p_type = static_cast<BM2*>(data);

        // Object that manages the raw buffer.
        eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                BM2::getKeyMaxCdrSerializedSize());

        // Object that serializes the data.
        eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
        p_type->serializeKey(ser);
        if (force_md5 || BM2::getKeyMaxCdrSerializedSize() > 16)
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


} //End of namespace bitmodule

StructTestPubSubType::StructTestPubSubType()
{
    setName("StructTest");
    auto type_size = StructTest::getMaxCdrSerializedSize();
    type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
    m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
    m_isGetKeyDefined = StructTest::isKeyDefined();
    size_t keyLength = StructTest::getKeyMaxCdrSerializedSize() > 16 ?
            StructTest::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

StructTestPubSubType::~StructTestPubSubType()
{
    if (m_keyBuffer != nullptr)
    {
        free(m_keyBuffer);
    }
}

bool StructTestPubSubType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    StructTest* p_type = static_cast<StructTest*>(data);

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

bool StructTestPubSubType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    try
    {
        // Convert DATA to pointer of your type
        StructTest* p_type = static_cast<StructTest*>(data);

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

std::function<uint32_t()> StructTestPubSubType::getSerializedSizeProvider(
        void* data)
{
    return [data]() -> uint32_t
           {
               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<StructTest*>(data))) +
                      4u /*encapsulation*/;
           };
}

void* StructTestPubSubType::createData()
{
    return reinterpret_cast<void*>(new StructTest());
}

void StructTestPubSubType::deleteData(
        void* data)
{
    delete(reinterpret_cast<StructTest*>(data));
}

bool StructTestPubSubType::getKey(
        void* data,
        InstanceHandle_t* handle,
        bool force_md5)
{
    if (!m_isGetKeyDefined)
    {
        return false;
    }

    StructTest* p_type = static_cast<StructTest*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
            StructTest::getKeyMaxCdrSerializedSize());

    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
    p_type->serializeKey(ser);
    if (force_md5 || StructTest::getKeyMaxCdrSerializedSize() > 16)
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

