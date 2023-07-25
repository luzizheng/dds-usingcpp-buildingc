/*!
 * @file typesPubSubTypes.h
 * 此头文件包含序列化函数的声明。
 *
 * 此文件由工具fastcdrgen生成。
 */


#ifndef _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_TYPES_PUBSUBTYPES_H_
#define _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_TYPES_PUBSUBTYPES_H_

#include <fastdds/dds/topic/TopicDataType.hpp>
#include <fastrtps/utils/md5.h>

#include "types.h"

#if !defined(GEN_API_VER) || (GEN_API_VER != 1)
#error \
    Generated types is not compatible with current installed Fast DDS. Please, regenerate it with fastddsgen.
#endif  // GEN_API_VER

namespace eprosima
{
    namespace fastdds
    {
        namespace statistics
        {
            namespace detail
            {
                /*!
                 * @brief This class represents the TopicDataType of the type EntityId_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class EntityId_sPubSubType : public eprosima::fastdds::dds::TopicDataType
                {
                public:

                    typedef EntityId_s type;

                    eProsima_user_DllExport EntityId_sPubSubType();

                    eProsima_user_DllExport virtual ~EntityId_sPubSubType();

                    eProsima_user_DllExport virtual bool serialize(
                            void* data,
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                    eProsima_user_DllExport virtual bool deserialize(
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                            void* data) override;

                    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                            void* data) override;

                    eProsima_user_DllExport virtual bool getKey(
                            void* data,
                            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                            bool force_md5 = false) override;

                    eProsima_user_DllExport virtual void* createData() override;

                    eProsima_user_DllExport virtual void deleteData(
                            void* data) override;

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                    eProsima_user_DllExport inline bool is_bounded() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                    eProsima_user_DllExport inline bool is_plain() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                    eProsima_user_DllExport inline bool construct_sample(
                            void* memory) const override
                    {
                        new (memory) EntityId_s();
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                    MD5 m_md5;
                    unsigned char* m_keyBuffer;
                };
                /*!
                 * @brief This class represents the TopicDataType of the type GuidPrefix_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class GuidPrefix_sPubSubType : public eprosima::fastdds::dds::TopicDataType
                {
                public:

                    typedef GuidPrefix_s type;

                    eProsima_user_DllExport GuidPrefix_sPubSubType();

                    eProsima_user_DllExport virtual ~GuidPrefix_sPubSubType();

                    eProsima_user_DllExport virtual bool serialize(
                            void* data,
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                    eProsima_user_DllExport virtual bool deserialize(
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                            void* data) override;

                    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                            void* data) override;

                    eProsima_user_DllExport virtual bool getKey(
                            void* data,
                            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                            bool force_md5 = false) override;

                    eProsima_user_DllExport virtual void* createData() override;

                    eProsima_user_DllExport virtual void deleteData(
                            void* data) override;

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                    eProsima_user_DllExport inline bool is_bounded() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                    eProsima_user_DllExport inline bool is_plain() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                    eProsima_user_DllExport inline bool construct_sample(
                            void* memory) const override
                    {
                        new (memory) GuidPrefix_s();
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                    MD5 m_md5;
                    unsigned char* m_keyBuffer;
                };
                /*!
                 * @brief This class represents the TopicDataType of the type GUID_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class GUID_sPubSubType : public eprosima::fastdds::dds::TopicDataType
                {
                public:

                    typedef GUID_s type;

                    eProsima_user_DllExport GUID_sPubSubType();

                    eProsima_user_DllExport virtual ~GUID_sPubSubType();

                    eProsima_user_DllExport virtual bool serialize(
                            void* data,
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                    eProsima_user_DllExport virtual bool deserialize(
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                            void* data) override;

                    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                            void* data) override;

                    eProsima_user_DllExport virtual bool getKey(
                            void* data,
                            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                            bool force_md5 = false) override;

                    eProsima_user_DllExport virtual void* createData() override;

                    eProsima_user_DllExport virtual void deleteData(
                            void* data) override;

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                    eProsima_user_DllExport inline bool is_bounded() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                    eProsima_user_DllExport inline bool is_plain() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                    eProsima_user_DllExport inline bool construct_sample(
                            void* memory) const override
                    {
                        new (memory) GUID_s();
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                    MD5 m_md5;
                    unsigned char* m_keyBuffer;
                };
                /*!
                 * @brief This class represents the TopicDataType of the type SequenceNumber_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class SequenceNumber_sPubSubType : public eprosima::fastdds::dds::TopicDataType
                {
                public:

                    typedef SequenceNumber_s type;

                    eProsima_user_DllExport SequenceNumber_sPubSubType();

                    eProsima_user_DllExport virtual ~SequenceNumber_sPubSubType();

                    eProsima_user_DllExport virtual bool serialize(
                            void* data,
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                    eProsima_user_DllExport virtual bool deserialize(
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                            void* data) override;

                    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                            void* data) override;

                    eProsima_user_DllExport virtual bool getKey(
                            void* data,
                            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                            bool force_md5 = false) override;

                    eProsima_user_DllExport virtual void* createData() override;

                    eProsima_user_DllExport virtual void deleteData(
                            void* data) override;

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                    eProsima_user_DllExport inline bool is_bounded() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                    eProsima_user_DllExport inline bool is_plain() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                    eProsima_user_DllExport inline bool construct_sample(
                            void* memory) const override
                    {
                        new (memory) SequenceNumber_s();
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                    MD5 m_md5;
                    unsigned char* m_keyBuffer;
                };
                /*!
                 * @brief This class represents the TopicDataType of the type SampleIdentity_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class SampleIdentity_sPubSubType : public eprosima::fastdds::dds::TopicDataType
                {
                public:

                    typedef SampleIdentity_s type;

                    eProsima_user_DllExport SampleIdentity_sPubSubType();

                    eProsima_user_DllExport virtual ~SampleIdentity_sPubSubType();

                    eProsima_user_DllExport virtual bool serialize(
                            void* data,
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                    eProsima_user_DllExport virtual bool deserialize(
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                            void* data) override;

                    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                            void* data) override;

                    eProsima_user_DllExport virtual bool getKey(
                            void* data,
                            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                            bool force_md5 = false) override;

                    eProsima_user_DllExport virtual void* createData() override;

                    eProsima_user_DllExport virtual void deleteData(
                            void* data) override;

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                    eProsima_user_DllExport inline bool is_bounded() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                    eProsima_user_DllExport inline bool is_plain() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                    eProsima_user_DllExport inline bool construct_sample(
                            void* memory) const override
                    {
                        new (memory) SampleIdentity_s();
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                    MD5 m_md5;
                    unsigned char* m_keyBuffer;
                };
                /*!
                 * @brief This class represents the TopicDataType of the type Locator_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class Locator_sPubSubType : public eprosima::fastdds::dds::TopicDataType
                {
                public:

                    typedef Locator_s type;

                    eProsima_user_DllExport Locator_sPubSubType();

                    eProsima_user_DllExport virtual ~Locator_sPubSubType();

                    eProsima_user_DllExport virtual bool serialize(
                            void* data,
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                    eProsima_user_DllExport virtual bool deserialize(
                            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                            void* data) override;

                    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                            void* data) override;

                    eProsima_user_DllExport virtual bool getKey(
                            void* data,
                            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                            bool force_md5 = false) override;

                    eProsima_user_DllExport virtual void* createData() override;

                    eProsima_user_DllExport virtual void deleteData(
                            void* data) override;

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                    eProsima_user_DllExport inline bool is_bounded() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

                #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                    eProsima_user_DllExport inline bool is_plain() const override
                    {
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                    eProsima_user_DllExport inline bool construct_sample(
                            void* memory) const override
                    {
                        new (memory) Locator_s();
                        return true;
                    }

                #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                    MD5 m_md5;
                    unsigned char* m_keyBuffer;
                };
            }
            /*!
             * @brief This class represents the TopicDataType of the type DiscoveryTime defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class DiscoveryTimePubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef DiscoveryTime type;

                eProsima_user_DllExport DiscoveryTimePubSubType();

                eProsima_user_DllExport virtual ~DiscoveryTimePubSubType();

                eProsima_user_DllExport virtual bool serialize(
                        void* data,
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                eProsima_user_DllExport virtual bool deserialize(
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                        void* data) override;

                eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                        void* data) override;

                eProsima_user_DllExport virtual bool getKey(
                        void* data,
                        eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport virtual void* createData() override;

                eProsima_user_DllExport virtual void deleteData(
                        void* data) override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                eProsima_user_DllExport inline bool is_plain() const override
                {
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    (void)memory;
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                MD5 m_md5;
                unsigned char* m_keyBuffer;
            };
            /*!
             * @brief This class represents the TopicDataType of the type EntityCount defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class EntityCountPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef EntityCount type;

                eProsima_user_DllExport EntityCountPubSubType();

                eProsima_user_DllExport virtual ~EntityCountPubSubType();

                eProsima_user_DllExport virtual bool serialize(
                        void* data,
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                eProsima_user_DllExport virtual bool deserialize(
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                        void* data) override;

                eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                        void* data) override;

                eProsima_user_DllExport virtual bool getKey(
                        void* data,
                        eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport virtual void* createData() override;

                eProsima_user_DllExport virtual void deleteData(
                        void* data) override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                eProsima_user_DllExport inline bool is_plain() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    new (memory) EntityCount();
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                MD5 m_md5;
                unsigned char* m_keyBuffer;
            };
            /*!
             * @brief This class represents the TopicDataType of the type SampleIdentityCount defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class SampleIdentityCountPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef SampleIdentityCount type;

                eProsima_user_DllExport SampleIdentityCountPubSubType();

                eProsima_user_DllExport virtual ~SampleIdentityCountPubSubType();

                eProsima_user_DllExport virtual bool serialize(
                        void* data,
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                eProsima_user_DllExport virtual bool deserialize(
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                        void* data) override;

                eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                        void* data) override;

                eProsima_user_DllExport virtual bool getKey(
                        void* data,
                        eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport virtual void* createData() override;

                eProsima_user_DllExport virtual void deleteData(
                        void* data) override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                eProsima_user_DllExport inline bool is_plain() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    new (memory) SampleIdentityCount();
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                MD5 m_md5;
                unsigned char* m_keyBuffer;
            };
            /*!
             * @brief This class represents the TopicDataType of the type Entity2LocatorTraffic defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class Entity2LocatorTrafficPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef Entity2LocatorTraffic type;

                eProsima_user_DllExport Entity2LocatorTrafficPubSubType();

                eProsima_user_DllExport virtual ~Entity2LocatorTrafficPubSubType();

                eProsima_user_DllExport virtual bool serialize(
                        void* data,
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                eProsima_user_DllExport virtual bool deserialize(
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                        void* data) override;

                eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                        void* data) override;

                eProsima_user_DllExport virtual bool getKey(
                        void* data,
                        eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport virtual void* createData() override;

                eProsima_user_DllExport virtual void deleteData(
                        void* data) override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                eProsima_user_DllExport inline bool is_plain() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    new (memory) Entity2LocatorTraffic();
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                MD5 m_md5;
                unsigned char* m_keyBuffer;
            };
            /*!
             * @brief This class represents the TopicDataType of the type WriterReaderData defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class WriterReaderDataPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef WriterReaderData type;

                eProsima_user_DllExport WriterReaderDataPubSubType();

                eProsima_user_DllExport virtual ~WriterReaderDataPubSubType();

                eProsima_user_DllExport virtual bool serialize(
                        void* data,
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                eProsima_user_DllExport virtual bool deserialize(
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                        void* data) override;

                eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                        void* data) override;

                eProsima_user_DllExport virtual bool getKey(
                        void* data,
                        eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport virtual void* createData() override;

                eProsima_user_DllExport virtual void deleteData(
                        void* data) override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                eProsima_user_DllExport inline bool is_plain() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    new (memory) WriterReaderData();
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                MD5 m_md5;
                unsigned char* m_keyBuffer;
            };
            /*!
             * @brief This class represents the TopicDataType of the type Locator2LocatorData defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class Locator2LocatorDataPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef Locator2LocatorData type;

                eProsima_user_DllExport Locator2LocatorDataPubSubType();

                eProsima_user_DllExport virtual ~Locator2LocatorDataPubSubType();

                eProsima_user_DllExport virtual bool serialize(
                        void* data,
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                eProsima_user_DllExport virtual bool deserialize(
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                        void* data) override;

                eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                        void* data) override;

                eProsima_user_DllExport virtual bool getKey(
                        void* data,
                        eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport virtual void* createData() override;

                eProsima_user_DllExport virtual void deleteData(
                        void* data) override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                eProsima_user_DllExport inline bool is_plain() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    new (memory) Locator2LocatorData();
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                MD5 m_md5;
                unsigned char* m_keyBuffer;
            };
            /*!
             * @brief This class represents the TopicDataType of the type EntityData defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class EntityDataPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef EntityData type;

                eProsima_user_DllExport EntityDataPubSubType();

                eProsima_user_DllExport virtual ~EntityDataPubSubType();

                eProsima_user_DllExport virtual bool serialize(
                        void* data,
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                eProsima_user_DllExport virtual bool deserialize(
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                        void* data) override;

                eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                        void* data) override;

                eProsima_user_DllExport virtual bool getKey(
                        void* data,
                        eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport virtual void* createData() override;

                eProsima_user_DllExport virtual void deleteData(
                        void* data) override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                eProsima_user_DllExport inline bool is_plain() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    new (memory) EntityData();
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                MD5 m_md5;
                unsigned char* m_keyBuffer;
            };
            /*!
             * @brief This class represents the TopicDataType of the type PhysicalData defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class PhysicalDataPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef PhysicalData type;

                eProsima_user_DllExport PhysicalDataPubSubType();

                eProsima_user_DllExport virtual ~PhysicalDataPubSubType();

                eProsima_user_DllExport virtual bool serialize(
                        void* data,
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

                eProsima_user_DllExport virtual bool deserialize(
                        eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                        void* data) override;

                eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                        void* data) override;

                eProsima_user_DllExport virtual bool getKey(
                        void* data,
                        eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport virtual void* createData() override;

                eProsima_user_DllExport virtual void deleteData(
                        void* data) override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
                eProsima_user_DllExport inline bool is_plain() const override
                {
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    (void)memory;
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

                MD5 m_md5;
                unsigned char* m_keyBuffer;
            };


        }
    }
}

#endif // _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_TYPES_PUBSUBTYPES_H_