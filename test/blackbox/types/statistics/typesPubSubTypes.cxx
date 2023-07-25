/*!
 * @file typesPubSubTypes.cpp
 * 此头文件包含序列化函数的实现。
 *
 * 此文件由工具fastcdrgen生成。
 */


#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

#include "typesPubSubTypes.h"

using SerializedPayload_t = eprosima::fastrtps::rtps::SerializedPayload_t;
using InstanceHandle_t = eprosima::fastrtps::rtps::InstanceHandle_t;

namespace eprosima {
    namespace fastdds {
        namespace statistics {
            namespace detail {
                EntityId_sPubSubType::EntityId_sPubSubType()
                {
                    setName("eprosima::fastdds::statistics::detail::EntityId_s");
                    auto type_size = EntityId_s::getMaxCdrSerializedSize();
                    type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                    m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                    m_isGetKeyDefined = EntityId_s::isKeyDefined();
                    size_t keyLength = EntityId_s::getKeyMaxCdrSerializedSize() > 16 ?
                            EntityId_s::getKeyMaxCdrSerializedSize() : 16;
                    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                    memset(m_keyBuffer, 0, keyLength);
                }

                EntityId_sPubSubType::~EntityId_sPubSubType()
                {
                    if (m_keyBuffer != nullptr)
                    {
                        free(m_keyBuffer);
                    }
                }

                bool EntityId_sPubSubType::serialize(
                        void* data,
                        SerializedPayload_t* payload)
                {
                    EntityId_s* p_type = static_cast<EntityId_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                    // Serialize encapsulation
                    ser.serialize_encapsulation();

                    try
                    {
                        // Serialize the object.
                        p_type->serialize(ser);
                    }
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    // Get the serialized length
                    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                    return true;
                }

                bool EntityId_sPubSubType::deserialize(
                        SerializedPayload_t* payload,
                        void* data)
                {
                    try
                    {
                        //Convert DATA to pointer of your type
                        EntityId_s* p_type = static_cast<EntityId_s*>(data);

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
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    return true;
                }

                std::function<uint32_t()> EntityId_sPubSubType::getSerializedSizeProvider(
                        void* data)
                {
                    return [data]() -> uint32_t
                           {
                               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<EntityId_s*>(data))) +
                                      4u /*encapsulation*/;
                           };
                }

                void* EntityId_sPubSubType::createData()
                {
                    return reinterpret_cast<void*>(new EntityId_s());
                }

                void EntityId_sPubSubType::deleteData(
                        void* data)
                {
                    delete(reinterpret_cast<EntityId_s*>(data));
                }

                bool EntityId_sPubSubType::getKey(
                        void* data,
                        InstanceHandle_t* handle,
                        bool force_md5)
                {
                    if (!m_isGetKeyDefined)
                    {
                        return false;
                    }

                    EntityId_s* p_type = static_cast<EntityId_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                            EntityId_s::getKeyMaxCdrSerializedSize());

                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                    p_type->serializeKey(ser);
                    if (force_md5 || EntityId_s::getKeyMaxCdrSerializedSize() > 16)
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

                GuidPrefix_sPubSubType::GuidPrefix_sPubSubType()
                {
                    setName("eprosima::fastdds::statistics::detail::GuidPrefix_s");
                    auto type_size = GuidPrefix_s::getMaxCdrSerializedSize();
                    type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                    m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                    m_isGetKeyDefined = GuidPrefix_s::isKeyDefined();
                    size_t keyLength = GuidPrefix_s::getKeyMaxCdrSerializedSize() > 16 ?
                            GuidPrefix_s::getKeyMaxCdrSerializedSize() : 16;
                    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                    memset(m_keyBuffer, 0, keyLength);
                }

                GuidPrefix_sPubSubType::~GuidPrefix_sPubSubType()
                {
                    if (m_keyBuffer != nullptr)
                    {
                        free(m_keyBuffer);
                    }
                }

                bool GuidPrefix_sPubSubType::serialize(
                        void* data,
                        SerializedPayload_t* payload)
                {
                    GuidPrefix_s* p_type = static_cast<GuidPrefix_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                    // Serialize encapsulation
                    ser.serialize_encapsulation();

                    try
                    {
                        // Serialize the object.
                        p_type->serialize(ser);
                    }
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    // Get the serialized length
                    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                    return true;
                }

                bool GuidPrefix_sPubSubType::deserialize(
                        SerializedPayload_t* payload,
                        void* data)
                {
                    try
                    {
                        //Convert DATA to pointer of your type
                        GuidPrefix_s* p_type = static_cast<GuidPrefix_s*>(data);

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
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    return true;
                }

                std::function<uint32_t()> GuidPrefix_sPubSubType::getSerializedSizeProvider(
                        void* data)
                {
                    return [data]() -> uint32_t
                           {
                               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<GuidPrefix_s*>(data))) +
                                      4u /*encapsulation*/;
                           };
                }

                void* GuidPrefix_sPubSubType::createData()
                {
                    return reinterpret_cast<void*>(new GuidPrefix_s());
                }

                void GuidPrefix_sPubSubType::deleteData(
                        void* data)
                {
                    delete(reinterpret_cast<GuidPrefix_s*>(data));
                }

                bool GuidPrefix_sPubSubType::getKey(
                        void* data,
                        InstanceHandle_t* handle,
                        bool force_md5)
                {
                    if (!m_isGetKeyDefined)
                    {
                        return false;
                    }

                    GuidPrefix_s* p_type = static_cast<GuidPrefix_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                            GuidPrefix_s::getKeyMaxCdrSerializedSize());

                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                    p_type->serializeKey(ser);
                    if (force_md5 || GuidPrefix_s::getKeyMaxCdrSerializedSize() > 16)
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

                GUID_sPubSubType::GUID_sPubSubType()
                {
                    setName("eprosima::fastdds::statistics::detail::GUID_s");
                    auto type_size = GUID_s::getMaxCdrSerializedSize();
                    type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                    m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                    m_isGetKeyDefined = GUID_s::isKeyDefined();
                    size_t keyLength = GUID_s::getKeyMaxCdrSerializedSize() > 16 ?
                            GUID_s::getKeyMaxCdrSerializedSize() : 16;
                    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                    memset(m_keyBuffer, 0, keyLength);
                }

                GUID_sPubSubType::~GUID_sPubSubType()
                {
                    if (m_keyBuffer != nullptr)
                    {
                        free(m_keyBuffer);
                    }
                }

                bool GUID_sPubSubType::serialize(
                        void* data,
                        SerializedPayload_t* payload)
                {
                    GUID_s* p_type = static_cast<GUID_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                    // Serialize encapsulation
                    ser.serialize_encapsulation();

                    try
                    {
                        // Serialize the object.
                        p_type->serialize(ser);
                    }
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    // Get the serialized length
                    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                    return true;
                }

                bool GUID_sPubSubType::deserialize(
                        SerializedPayload_t* payload,
                        void* data)
                {
                    try
                    {
                        //Convert DATA to pointer of your type
                        GUID_s* p_type = static_cast<GUID_s*>(data);

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
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    return true;
                }

                std::function<uint32_t()> GUID_sPubSubType::getSerializedSizeProvider(
                        void* data)
                {
                    return [data]() -> uint32_t
                           {
                               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<GUID_s*>(data))) +
                                      4u /*encapsulation*/;
                           };
                }

                void* GUID_sPubSubType::createData()
                {
                    return reinterpret_cast<void*>(new GUID_s());
                }

                void GUID_sPubSubType::deleteData(
                        void* data)
                {
                    delete(reinterpret_cast<GUID_s*>(data));
                }

                bool GUID_sPubSubType::getKey(
                        void* data,
                        InstanceHandle_t* handle,
                        bool force_md5)
                {
                    if (!m_isGetKeyDefined)
                    {
                        return false;
                    }

                    GUID_s* p_type = static_cast<GUID_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                            GUID_s::getKeyMaxCdrSerializedSize());

                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                    p_type->serializeKey(ser);
                    if (force_md5 || GUID_s::getKeyMaxCdrSerializedSize() > 16)
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

                SequenceNumber_sPubSubType::SequenceNumber_sPubSubType()
                {
                    setName("eprosima::fastdds::statistics::detail::SequenceNumber_s");
                    auto type_size = SequenceNumber_s::getMaxCdrSerializedSize();
                    type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                    m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                    m_isGetKeyDefined = SequenceNumber_s::isKeyDefined();
                    size_t keyLength = SequenceNumber_s::getKeyMaxCdrSerializedSize() > 16 ?
                            SequenceNumber_s::getKeyMaxCdrSerializedSize() : 16;
                    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                    memset(m_keyBuffer, 0, keyLength);
                }

                SequenceNumber_sPubSubType::~SequenceNumber_sPubSubType()
                {
                    if (m_keyBuffer != nullptr)
                    {
                        free(m_keyBuffer);
                    }
                }

                bool SequenceNumber_sPubSubType::serialize(
                        void* data,
                        SerializedPayload_t* payload)
                {
                    SequenceNumber_s* p_type = static_cast<SequenceNumber_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                    // Serialize encapsulation
                    ser.serialize_encapsulation();

                    try
                    {
                        // Serialize the object.
                        p_type->serialize(ser);
                    }
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    // Get the serialized length
                    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                    return true;
                }

                bool SequenceNumber_sPubSubType::deserialize(
                        SerializedPayload_t* payload,
                        void* data)
                {
                    try
                    {
                        //Convert DATA to pointer of your type
                        SequenceNumber_s* p_type = static_cast<SequenceNumber_s*>(data);

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
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    return true;
                }

                std::function<uint32_t()> SequenceNumber_sPubSubType::getSerializedSizeProvider(
                        void* data)
                {
                    return [data]() -> uint32_t
                           {
                               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<SequenceNumber_s*>(data))) +
                                      4u /*encapsulation*/;
                           };
                }

                void* SequenceNumber_sPubSubType::createData()
                {
                    return reinterpret_cast<void*>(new SequenceNumber_s());
                }

                void SequenceNumber_sPubSubType::deleteData(
                        void* data)
                {
                    delete(reinterpret_cast<SequenceNumber_s*>(data));
                }

                bool SequenceNumber_sPubSubType::getKey(
                        void* data,
                        InstanceHandle_t* handle,
                        bool force_md5)
                {
                    if (!m_isGetKeyDefined)
                    {
                        return false;
                    }

                    SequenceNumber_s* p_type = static_cast<SequenceNumber_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                            SequenceNumber_s::getKeyMaxCdrSerializedSize());

                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                    p_type->serializeKey(ser);
                    if (force_md5 || SequenceNumber_s::getKeyMaxCdrSerializedSize() > 16)
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

                SampleIdentity_sPubSubType::SampleIdentity_sPubSubType()
                {
                    setName("eprosima::fastdds::statistics::detail::SampleIdentity_s");
                    auto type_size = SampleIdentity_s::getMaxCdrSerializedSize();
                    type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                    m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                    m_isGetKeyDefined = SampleIdentity_s::isKeyDefined();
                    size_t keyLength = SampleIdentity_s::getKeyMaxCdrSerializedSize() > 16 ?
                            SampleIdentity_s::getKeyMaxCdrSerializedSize() : 16;
                    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                    memset(m_keyBuffer, 0, keyLength);
                }

                SampleIdentity_sPubSubType::~SampleIdentity_sPubSubType()
                {
                    if (m_keyBuffer != nullptr)
                    {
                        free(m_keyBuffer);
                    }
                }

                bool SampleIdentity_sPubSubType::serialize(
                        void* data,
                        SerializedPayload_t* payload)
                {
                    SampleIdentity_s* p_type = static_cast<SampleIdentity_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                    // Serialize encapsulation
                    ser.serialize_encapsulation();

                    try
                    {
                        // Serialize the object.
                        p_type->serialize(ser);
                    }
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    // Get the serialized length
                    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                    return true;
                }

                bool SampleIdentity_sPubSubType::deserialize(
                        SerializedPayload_t* payload,
                        void* data)
                {
                    try
                    {
                        //Convert DATA to pointer of your type
                        SampleIdentity_s* p_type = static_cast<SampleIdentity_s*>(data);

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
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    return true;
                }

                std::function<uint32_t()> SampleIdentity_sPubSubType::getSerializedSizeProvider(
                        void* data)
                {
                    return [data]() -> uint32_t
                           {
                               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<SampleIdentity_s*>(data))) +
                                      4u /*encapsulation*/;
                           };
                }

                void* SampleIdentity_sPubSubType::createData()
                {
                    return reinterpret_cast<void*>(new SampleIdentity_s());
                }

                void SampleIdentity_sPubSubType::deleteData(
                        void* data)
                {
                    delete(reinterpret_cast<SampleIdentity_s*>(data));
                }

                bool SampleIdentity_sPubSubType::getKey(
                        void* data,
                        InstanceHandle_t* handle,
                        bool force_md5)
                {
                    if (!m_isGetKeyDefined)
                    {
                        return false;
                    }

                    SampleIdentity_s* p_type = static_cast<SampleIdentity_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                            SampleIdentity_s::getKeyMaxCdrSerializedSize());

                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                    p_type->serializeKey(ser);
                    if (force_md5 || SampleIdentity_s::getKeyMaxCdrSerializedSize() > 16)
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

                Locator_sPubSubType::Locator_sPubSubType()
                {
                    setName("eprosima::fastdds::statistics::detail::Locator_s");
                    auto type_size = Locator_s::getMaxCdrSerializedSize();
                    type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                    m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                    m_isGetKeyDefined = Locator_s::isKeyDefined();
                    size_t keyLength = Locator_s::getKeyMaxCdrSerializedSize() > 16 ?
                            Locator_s::getKeyMaxCdrSerializedSize() : 16;
                    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                    memset(m_keyBuffer, 0, keyLength);
                }

                Locator_sPubSubType::~Locator_sPubSubType()
                {
                    if (m_keyBuffer != nullptr)
                    {
                        free(m_keyBuffer);
                    }
                }

                bool Locator_sPubSubType::serialize(
                        void* data,
                        SerializedPayload_t* payload)
                {
                    Locator_s* p_type = static_cast<Locator_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                    // Serialize encapsulation
                    ser.serialize_encapsulation();

                    try
                    {
                        // Serialize the object.
                        p_type->serialize(ser);
                    }
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    // Get the serialized length
                    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                    return true;
                }

                bool Locator_sPubSubType::deserialize(
                        SerializedPayload_t* payload,
                        void* data)
                {
                    try
                    {
                        //Convert DATA to pointer of your type
                        Locator_s* p_type = static_cast<Locator_s*>(data);

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
                    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                    {
                        return false;
                    }

                    return true;
                }

                std::function<uint32_t()> Locator_sPubSubType::getSerializedSizeProvider(
                        void* data)
                {
                    return [data]() -> uint32_t
                           {
                               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<Locator_s*>(data))) +
                                      4u /*encapsulation*/;
                           };
                }

                void* Locator_sPubSubType::createData()
                {
                    return reinterpret_cast<void*>(new Locator_s());
                }

                void Locator_sPubSubType::deleteData(
                        void* data)
                {
                    delete(reinterpret_cast<Locator_s*>(data));
                }

                bool Locator_sPubSubType::getKey(
                        void* data,
                        InstanceHandle_t* handle,
                        bool force_md5)
                {
                    if (!m_isGetKeyDefined)
                    {
                        return false;
                    }

                    Locator_s* p_type = static_cast<Locator_s*>(data);

                    // Object that manages the raw buffer.
                    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                            Locator_s::getKeyMaxCdrSerializedSize());

                    // Object that serializes the data.
                    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                    p_type->serializeKey(ser);
                    if (force_md5 || Locator_s::getKeyMaxCdrSerializedSize() > 16)
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


            } //End of namespace detail
            DiscoveryTimePubSubType::DiscoveryTimePubSubType()
            {
                setName("eprosima::fastdds::statistics::DiscoveryTime");
                auto type_size = DiscoveryTime::getMaxCdrSerializedSize();
                type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                m_isGetKeyDefined = DiscoveryTime::isKeyDefined();
                size_t keyLength = DiscoveryTime::getKeyMaxCdrSerializedSize() > 16 ?
                        DiscoveryTime::getKeyMaxCdrSerializedSize() : 16;
                m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                memset(m_keyBuffer, 0, keyLength);
            }

            DiscoveryTimePubSubType::~DiscoveryTimePubSubType()
            {
                if (m_keyBuffer != nullptr)
                {
                    free(m_keyBuffer);
                }
            }

            bool DiscoveryTimePubSubType::serialize(
                    void* data,
                    SerializedPayload_t* payload)
            {
                DiscoveryTime* p_type = static_cast<DiscoveryTime*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                // Serialize encapsulation
                ser.serialize_encapsulation();

                try
                {
                    // Serialize the object.
                    p_type->serialize(ser);
                }
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                // Get the serialized length
                payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                return true;
            }

            bool DiscoveryTimePubSubType::deserialize(
                    SerializedPayload_t* payload,
                    void* data)
            {
                try
                {
                    //Convert DATA to pointer of your type
                    DiscoveryTime* p_type = static_cast<DiscoveryTime*>(data);

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
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                return true;
            }

            std::function<uint32_t()> DiscoveryTimePubSubType::getSerializedSizeProvider(
                    void* data)
            {
                return [data]() -> uint32_t
                       {
                           return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<DiscoveryTime*>(data))) +
                                  4u /*encapsulation*/;
                       };
            }

            void* DiscoveryTimePubSubType::createData()
            {
                return reinterpret_cast<void*>(new DiscoveryTime());
            }

            void DiscoveryTimePubSubType::deleteData(
                    void* data)
            {
                delete(reinterpret_cast<DiscoveryTime*>(data));
            }

            bool DiscoveryTimePubSubType::getKey(
                    void* data,
                    InstanceHandle_t* handle,
                    bool force_md5)
            {
                if (!m_isGetKeyDefined)
                {
                    return false;
                }

                DiscoveryTime* p_type = static_cast<DiscoveryTime*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                        DiscoveryTime::getKeyMaxCdrSerializedSize());

                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                p_type->serializeKey(ser);
                if (force_md5 || DiscoveryTime::getKeyMaxCdrSerializedSize() > 16)
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

            EntityCountPubSubType::EntityCountPubSubType()
            {
                setName("eprosima::fastdds::statistics::EntityCount");
                auto type_size = EntityCount::getMaxCdrSerializedSize();
                type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                m_isGetKeyDefined = EntityCount::isKeyDefined();
                size_t keyLength = EntityCount::getKeyMaxCdrSerializedSize() > 16 ?
                        EntityCount::getKeyMaxCdrSerializedSize() : 16;
                m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                memset(m_keyBuffer, 0, keyLength);
            }

            EntityCountPubSubType::~EntityCountPubSubType()
            {
                if (m_keyBuffer != nullptr)
                {
                    free(m_keyBuffer);
                }
            }

            bool EntityCountPubSubType::serialize(
                    void* data,
                    SerializedPayload_t* payload)
            {
                EntityCount* p_type = static_cast<EntityCount*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                // Serialize encapsulation
                ser.serialize_encapsulation();

                try
                {
                    // Serialize the object.
                    p_type->serialize(ser);
                }
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                // Get the serialized length
                payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                return true;
            }

            bool EntityCountPubSubType::deserialize(
                    SerializedPayload_t* payload,
                    void* data)
            {
                try
                {
                    //Convert DATA to pointer of your type
                    EntityCount* p_type = static_cast<EntityCount*>(data);

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
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                return true;
            }

            std::function<uint32_t()> EntityCountPubSubType::getSerializedSizeProvider(
                    void* data)
            {
                return [data]() -> uint32_t
                       {
                           return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<EntityCount*>(data))) +
                                  4u /*encapsulation*/;
                       };
            }

            void* EntityCountPubSubType::createData()
            {
                return reinterpret_cast<void*>(new EntityCount());
            }

            void EntityCountPubSubType::deleteData(
                    void* data)
            {
                delete(reinterpret_cast<EntityCount*>(data));
            }

            bool EntityCountPubSubType::getKey(
                    void* data,
                    InstanceHandle_t* handle,
                    bool force_md5)
            {
                if (!m_isGetKeyDefined)
                {
                    return false;
                }

                EntityCount* p_type = static_cast<EntityCount*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                        EntityCount::getKeyMaxCdrSerializedSize());

                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                p_type->serializeKey(ser);
                if (force_md5 || EntityCount::getKeyMaxCdrSerializedSize() > 16)
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

            SampleIdentityCountPubSubType::SampleIdentityCountPubSubType()
            {
                setName("eprosima::fastdds::statistics::SampleIdentityCount");
                auto type_size = SampleIdentityCount::getMaxCdrSerializedSize();
                type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                m_isGetKeyDefined = SampleIdentityCount::isKeyDefined();
                size_t keyLength = SampleIdentityCount::getKeyMaxCdrSerializedSize() > 16 ?
                        SampleIdentityCount::getKeyMaxCdrSerializedSize() : 16;
                m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                memset(m_keyBuffer, 0, keyLength);
            }

            SampleIdentityCountPubSubType::~SampleIdentityCountPubSubType()
            {
                if (m_keyBuffer != nullptr)
                {
                    free(m_keyBuffer);
                }
            }

            bool SampleIdentityCountPubSubType::serialize(
                    void* data,
                    SerializedPayload_t* payload)
            {
                SampleIdentityCount* p_type = static_cast<SampleIdentityCount*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                // Serialize encapsulation
                ser.serialize_encapsulation();

                try
                {
                    // Serialize the object.
                    p_type->serialize(ser);
                }
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                // Get the serialized length
                payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                return true;
            }

            bool SampleIdentityCountPubSubType::deserialize(
                    SerializedPayload_t* payload,
                    void* data)
            {
                try
                {
                    //Convert DATA to pointer of your type
                    SampleIdentityCount* p_type = static_cast<SampleIdentityCount*>(data);

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
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                return true;
            }

            std::function<uint32_t()> SampleIdentityCountPubSubType::getSerializedSizeProvider(
                    void* data)
            {
                return [data]() -> uint32_t
                       {
                           return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<SampleIdentityCount*>(data))) +
                                  4u /*encapsulation*/;
                       };
            }

            void* SampleIdentityCountPubSubType::createData()
            {
                return reinterpret_cast<void*>(new SampleIdentityCount());
            }

            void SampleIdentityCountPubSubType::deleteData(
                    void* data)
            {
                delete(reinterpret_cast<SampleIdentityCount*>(data));
            }

            bool SampleIdentityCountPubSubType::getKey(
                    void* data,
                    InstanceHandle_t* handle,
                    bool force_md5)
            {
                if (!m_isGetKeyDefined)
                {
                    return false;
                }

                SampleIdentityCount* p_type = static_cast<SampleIdentityCount*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                        SampleIdentityCount::getKeyMaxCdrSerializedSize());

                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                p_type->serializeKey(ser);
                if (force_md5 || SampleIdentityCount::getKeyMaxCdrSerializedSize() > 16)
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

            Entity2LocatorTrafficPubSubType::Entity2LocatorTrafficPubSubType()
            {
                setName("eprosima::fastdds::statistics::Entity2LocatorTraffic");
                auto type_size = Entity2LocatorTraffic::getMaxCdrSerializedSize();
                type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                m_isGetKeyDefined = Entity2LocatorTraffic::isKeyDefined();
                size_t keyLength = Entity2LocatorTraffic::getKeyMaxCdrSerializedSize() > 16 ?
                        Entity2LocatorTraffic::getKeyMaxCdrSerializedSize() : 16;
                m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                memset(m_keyBuffer, 0, keyLength);
            }

            Entity2LocatorTrafficPubSubType::~Entity2LocatorTrafficPubSubType()
            {
                if (m_keyBuffer != nullptr)
                {
                    free(m_keyBuffer);
                }
            }

            bool Entity2LocatorTrafficPubSubType::serialize(
                    void* data,
                    SerializedPayload_t* payload)
            {
                Entity2LocatorTraffic* p_type = static_cast<Entity2LocatorTraffic*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                // Serialize encapsulation
                ser.serialize_encapsulation();

                try
                {
                    // Serialize the object.
                    p_type->serialize(ser);
                }
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                // Get the serialized length
                payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                return true;
            }

            bool Entity2LocatorTrafficPubSubType::deserialize(
                    SerializedPayload_t* payload,
                    void* data)
            {
                try
                {
                    //Convert DATA to pointer of your type
                    Entity2LocatorTraffic* p_type = static_cast<Entity2LocatorTraffic*>(data);

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
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                return true;
            }

            std::function<uint32_t()> Entity2LocatorTrafficPubSubType::getSerializedSizeProvider(
                    void* data)
            {
                return [data]() -> uint32_t
                       {
                           return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<Entity2LocatorTraffic*>(data))) +
                                  4u /*encapsulation*/;
                       };
            }

            void* Entity2LocatorTrafficPubSubType::createData()
            {
                return reinterpret_cast<void*>(new Entity2LocatorTraffic());
            }

            void Entity2LocatorTrafficPubSubType::deleteData(
                    void* data)
            {
                delete(reinterpret_cast<Entity2LocatorTraffic*>(data));
            }

            bool Entity2LocatorTrafficPubSubType::getKey(
                    void* data,
                    InstanceHandle_t* handle,
                    bool force_md5)
            {
                if (!m_isGetKeyDefined)
                {
                    return false;
                }

                Entity2LocatorTraffic* p_type = static_cast<Entity2LocatorTraffic*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                        Entity2LocatorTraffic::getKeyMaxCdrSerializedSize());

                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                p_type->serializeKey(ser);
                if (force_md5 || Entity2LocatorTraffic::getKeyMaxCdrSerializedSize() > 16)
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

            WriterReaderDataPubSubType::WriterReaderDataPubSubType()
            {
                setName("eprosima::fastdds::statistics::WriterReaderData");
                auto type_size = WriterReaderData::getMaxCdrSerializedSize();
                type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                m_isGetKeyDefined = WriterReaderData::isKeyDefined();
                size_t keyLength = WriterReaderData::getKeyMaxCdrSerializedSize() > 16 ?
                        WriterReaderData::getKeyMaxCdrSerializedSize() : 16;
                m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                memset(m_keyBuffer, 0, keyLength);
            }

            WriterReaderDataPubSubType::~WriterReaderDataPubSubType()
            {
                if (m_keyBuffer != nullptr)
                {
                    free(m_keyBuffer);
                }
            }

            bool WriterReaderDataPubSubType::serialize(
                    void* data,
                    SerializedPayload_t* payload)
            {
                WriterReaderData* p_type = static_cast<WriterReaderData*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                // Serialize encapsulation
                ser.serialize_encapsulation();

                try
                {
                    // Serialize the object.
                    p_type->serialize(ser);
                }
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                // Get the serialized length
                payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                return true;
            }

            bool WriterReaderDataPubSubType::deserialize(
                    SerializedPayload_t* payload,
                    void* data)
            {
                try
                {
                    //Convert DATA to pointer of your type
                    WriterReaderData* p_type = static_cast<WriterReaderData*>(data);

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
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                return true;
            }

            std::function<uint32_t()> WriterReaderDataPubSubType::getSerializedSizeProvider(
                    void* data)
            {
                return [data]() -> uint32_t
                       {
                           return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<WriterReaderData*>(data))) +
                                  4u /*encapsulation*/;
                       };
            }

            void* WriterReaderDataPubSubType::createData()
            {
                return reinterpret_cast<void*>(new WriterReaderData());
            }

            void WriterReaderDataPubSubType::deleteData(
                    void* data)
            {
                delete(reinterpret_cast<WriterReaderData*>(data));
            }

            bool WriterReaderDataPubSubType::getKey(
                    void* data,
                    InstanceHandle_t* handle,
                    bool force_md5)
            {
                if (!m_isGetKeyDefined)
                {
                    return false;
                }

                WriterReaderData* p_type = static_cast<WriterReaderData*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                        WriterReaderData::getKeyMaxCdrSerializedSize());

                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                p_type->serializeKey(ser);
                if (force_md5 || WriterReaderData::getKeyMaxCdrSerializedSize() > 16)
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

            Locator2LocatorDataPubSubType::Locator2LocatorDataPubSubType()
            {
                setName("eprosima::fastdds::statistics::Locator2LocatorData");
                auto type_size = Locator2LocatorData::getMaxCdrSerializedSize();
                type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                m_isGetKeyDefined = Locator2LocatorData::isKeyDefined();
                size_t keyLength = Locator2LocatorData::getKeyMaxCdrSerializedSize() > 16 ?
                        Locator2LocatorData::getKeyMaxCdrSerializedSize() : 16;
                m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                memset(m_keyBuffer, 0, keyLength);
            }

            Locator2LocatorDataPubSubType::~Locator2LocatorDataPubSubType()
            {
                if (m_keyBuffer != nullptr)
                {
                    free(m_keyBuffer);
                }
            }

            bool Locator2LocatorDataPubSubType::serialize(
                    void* data,
                    SerializedPayload_t* payload)
            {
                Locator2LocatorData* p_type = static_cast<Locator2LocatorData*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                // Serialize encapsulation
                ser.serialize_encapsulation();

                try
                {
                    // Serialize the object.
                    p_type->serialize(ser);
                }
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                // Get the serialized length
                payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                return true;
            }

            bool Locator2LocatorDataPubSubType::deserialize(
                    SerializedPayload_t* payload,
                    void* data)
            {
                try
                {
                    //Convert DATA to pointer of your type
                    Locator2LocatorData* p_type = static_cast<Locator2LocatorData*>(data);

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
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                return true;
            }

            std::function<uint32_t()> Locator2LocatorDataPubSubType::getSerializedSizeProvider(
                    void* data)
            {
                return [data]() -> uint32_t
                       {
                           return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<Locator2LocatorData*>(data))) +
                                  4u /*encapsulation*/;
                       };
            }

            void* Locator2LocatorDataPubSubType::createData()
            {
                return reinterpret_cast<void*>(new Locator2LocatorData());
            }

            void Locator2LocatorDataPubSubType::deleteData(
                    void* data)
            {
                delete(reinterpret_cast<Locator2LocatorData*>(data));
            }

            bool Locator2LocatorDataPubSubType::getKey(
                    void* data,
                    InstanceHandle_t* handle,
                    bool force_md5)
            {
                if (!m_isGetKeyDefined)
                {
                    return false;
                }

                Locator2LocatorData* p_type = static_cast<Locator2LocatorData*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                        Locator2LocatorData::getKeyMaxCdrSerializedSize());

                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                p_type->serializeKey(ser);
                if (force_md5 || Locator2LocatorData::getKeyMaxCdrSerializedSize() > 16)
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

            EntityDataPubSubType::EntityDataPubSubType()
            {
                setName("eprosima::fastdds::statistics::EntityData");
                auto type_size = EntityData::getMaxCdrSerializedSize();
                type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                m_isGetKeyDefined = EntityData::isKeyDefined();
                size_t keyLength = EntityData::getKeyMaxCdrSerializedSize() > 16 ?
                        EntityData::getKeyMaxCdrSerializedSize() : 16;
                m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                memset(m_keyBuffer, 0, keyLength);
            }

            EntityDataPubSubType::~EntityDataPubSubType()
            {
                if (m_keyBuffer != nullptr)
                {
                    free(m_keyBuffer);
                }
            }

            bool EntityDataPubSubType::serialize(
                    void* data,
                    SerializedPayload_t* payload)
            {
                EntityData* p_type = static_cast<EntityData*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                // Serialize encapsulation
                ser.serialize_encapsulation();

                try
                {
                    // Serialize the object.
                    p_type->serialize(ser);
                }
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                // Get the serialized length
                payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                return true;
            }

            bool EntityDataPubSubType::deserialize(
                    SerializedPayload_t* payload,
                    void* data)
            {
                try
                {
                    //Convert DATA to pointer of your type
                    EntityData* p_type = static_cast<EntityData*>(data);

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
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                return true;
            }

            std::function<uint32_t()> EntityDataPubSubType::getSerializedSizeProvider(
                    void* data)
            {
                return [data]() -> uint32_t
                       {
                           return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<EntityData*>(data))) +
                                  4u /*encapsulation*/;
                       };
            }

            void* EntityDataPubSubType::createData()
            {
                return reinterpret_cast<void*>(new EntityData());
            }

            void EntityDataPubSubType::deleteData(
                    void* data)
            {
                delete(reinterpret_cast<EntityData*>(data));
            }

            bool EntityDataPubSubType::getKey(
                    void* data,
                    InstanceHandle_t* handle,
                    bool force_md5)
            {
                if (!m_isGetKeyDefined)
                {
                    return false;
                }

                EntityData* p_type = static_cast<EntityData*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                        EntityData::getKeyMaxCdrSerializedSize());

                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                p_type->serializeKey(ser);
                if (force_md5 || EntityData::getKeyMaxCdrSerializedSize() > 16)
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

            PhysicalDataPubSubType::PhysicalDataPubSubType()
            {
                setName("eprosima::fastdds::statistics::PhysicalData");
                auto type_size = PhysicalData::getMaxCdrSerializedSize();
                type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */
                m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/
                m_isGetKeyDefined = PhysicalData::isKeyDefined();
                size_t keyLength = PhysicalData::getKeyMaxCdrSerializedSize() > 16 ?
                        PhysicalData::getKeyMaxCdrSerializedSize() : 16;
                m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
                memset(m_keyBuffer, 0, keyLength);
            }

            PhysicalDataPubSubType::~PhysicalDataPubSubType()
            {
                if (m_keyBuffer != nullptr)
                {
                    free(m_keyBuffer);
                }
            }

            bool PhysicalDataPubSubType::serialize(
                    void* data,
                    SerializedPayload_t* payload)
            {
                PhysicalData* p_type = static_cast<PhysicalData*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
                payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
                // Serialize encapsulation
                ser.serialize_encapsulation();

                try
                {
                    // Serialize the object.
                    p_type->serialize(ser);
                }
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                // Get the serialized length
                payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
                return true;
            }

            bool PhysicalDataPubSubType::deserialize(
                    SerializedPayload_t* payload,
                    void* data)
            {
                try
                {
                    //Convert DATA to pointer of your type
                    PhysicalData* p_type = static_cast<PhysicalData*>(data);

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
                catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
                {
                    return false;
                }

                return true;
            }

            std::function<uint32_t()> PhysicalDataPubSubType::getSerializedSizeProvider(
                    void* data)
            {
                return [data]() -> uint32_t
                       {
                           return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<PhysicalData*>(data))) +
                                  4u /*encapsulation*/;
                       };
            }

            void* PhysicalDataPubSubType::createData()
            {
                return reinterpret_cast<void*>(new PhysicalData());
            }

            void PhysicalDataPubSubType::deleteData(
                    void* data)
            {
                delete(reinterpret_cast<PhysicalData*>(data));
            }

            bool PhysicalDataPubSubType::getKey(
                    void* data,
                    InstanceHandle_t* handle,
                    bool force_md5)
            {
                if (!m_isGetKeyDefined)
                {
                    return false;
                }

                PhysicalData* p_type = static_cast<PhysicalData*>(data);

                // Object that manages the raw buffer.
                eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                        PhysicalData::getKeyMaxCdrSerializedSize());

                // Object that serializes the data.
                eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
                p_type->serializeKey(ser);
                if (force_md5 || PhysicalData::getKeyMaxCdrSerializedSize() > 16)
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




        } //End of namespace statistics

    } //End of namespace fastdds

} //End of namespace eprosima
