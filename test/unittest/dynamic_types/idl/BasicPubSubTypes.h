/*!
 * @file BasicPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * 此文件由工具fastcdrgen生成。
 */


#ifndef _FAST_DDS_GENERATED_BASIC_PUBSUBTYPES_H_
#define _FAST_DDS_GENERATED_BASIC_PUBSUBTYPES_H_

#include <fastdds/dds/topic/TopicDataType.hpp>
#include <fastrtps/utils/md5.h>

#include "Basic.h"


#if !defined(GEN_API_VER) || (GEN_API_VER != 1)
#error \
    Generated Basic is not compatible with current installed Fast DDS. Please, regenerate it with fastddsgen.
#endif  // GEN_API_VER


typedef MyEnum MyAliasEnum;
typedef MyAliasEnum MyAliasAliasEnum;

/*!
 * @brief This class represents the TopicDataType of the type EnumStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class EnumStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef EnumStruct type;

    eProsima_user_DllExport EnumStructPubSubType();

    eProsima_user_DllExport virtual ~EnumStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type AliasStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class AliasStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef AliasStruct type;

    eProsima_user_DllExport AliasStructPubSubType();

    eProsima_user_DllExport virtual ~AliasStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type AliasAliasStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class AliasAliasStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef AliasAliasStruct type;

    eProsima_user_DllExport AliasAliasStructPubSubType();

    eProsima_user_DllExport virtual ~AliasAliasStructPubSubType() override;

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

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct BoolStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct BoolStruct_f
    {
        typedef bool BoolStruct::* type;
        friend constexpr type get(
                BoolStruct_f);
    };

    template struct BoolStruct_rob<BoolStruct_f, &BoolStruct::m_my_bool>;

    template <typename T, typename Tag>
    inline size_t constexpr BoolStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type BoolStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class BoolStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef BoolStruct type;

    eProsima_user_DllExport BoolStructPubSubType();

    eProsima_user_DllExport virtual ~BoolStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) BoolStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 1ULL == (detail::BoolStruct_offset_of<BoolStruct, detail::BoolStruct_f>() + sizeof(bool));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct OctetStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct OctetStruct_f
    {
        typedef uint8_t OctetStruct::* type;
        friend constexpr type get(
                OctetStruct_f);
    };

    template struct OctetStruct_rob<OctetStruct_f, &OctetStruct::m_my_octet>;

    template <typename T, typename Tag>
    inline size_t constexpr OctetStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type OctetStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class OctetStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef OctetStruct type;

    eProsima_user_DllExport OctetStructPubSubType();

    eProsima_user_DllExport virtual ~OctetStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) OctetStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 1ULL == (detail::OctetStruct_offset_of<OctetStruct, detail::OctetStruct_f>() + sizeof(uint8_t));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct ShortStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct ShortStruct_f
    {
        typedef int16_t ShortStruct::* type;
        friend constexpr type get(
                ShortStruct_f);
    };

    template struct ShortStruct_rob<ShortStruct_f, &ShortStruct::m_my_int16>;

    template <typename T, typename Tag>
    inline size_t constexpr ShortStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type ShortStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ShortStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef ShortStruct type;

    eProsima_user_DllExport ShortStructPubSubType();

    eProsima_user_DllExport virtual ~ShortStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) ShortStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 2ULL == (detail::ShortStruct_offset_of<ShortStruct, detail::ShortStruct_f>() + sizeof(int16_t));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct LongStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct LongStruct_f
    {
        typedef int32_t LongStruct::* type;
        friend constexpr type get(
                LongStruct_f);
    };

    template struct LongStruct_rob<LongStruct_f, &LongStruct::m_my_int32>;

    template <typename T, typename Tag>
    inline size_t constexpr LongStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type LongStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class LongStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef LongStruct type;

    eProsima_user_DllExport LongStructPubSubType();

    eProsima_user_DllExport virtual ~LongStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) LongStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 4ULL == (detail::LongStruct_offset_of<LongStruct, detail::LongStruct_f>() + sizeof(int32_t));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct LongLongStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct LongLongStruct_f
    {
        typedef int64_t LongLongStruct::* type;
        friend constexpr type get(
                LongLongStruct_f);
    };

    template struct LongLongStruct_rob<LongLongStruct_f, &LongLongStruct::m_my_int64>;

    template <typename T, typename Tag>
    inline size_t constexpr LongLongStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type LongLongStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class LongLongStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef LongLongStruct type;

    eProsima_user_DllExport LongLongStructPubSubType();

    eProsima_user_DllExport virtual ~LongLongStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) LongLongStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 8ULL == (detail::LongLongStruct_offset_of<LongLongStruct, detail::LongLongStruct_f>() + sizeof(int64_t));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct UShortStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct UShortStruct_f
    {
        typedef uint16_t UShortStruct::* type;
        friend constexpr type get(
                UShortStruct_f);
    };

    template struct UShortStruct_rob<UShortStruct_f, &UShortStruct::m_my_uint16>;

    template <typename T, typename Tag>
    inline size_t constexpr UShortStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type UShortStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class UShortStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef UShortStruct type;

    eProsima_user_DllExport UShortStructPubSubType();

    eProsima_user_DllExport virtual ~UShortStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) UShortStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 2ULL == (detail::UShortStruct_offset_of<UShortStruct, detail::UShortStruct_f>() + sizeof(uint16_t));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct ULongStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct ULongStruct_f
    {
        typedef uint32_t ULongStruct::* type;
        friend constexpr type get(
                ULongStruct_f);
    };

    template struct ULongStruct_rob<ULongStruct_f, &ULongStruct::m_my_uint32>;

    template <typename T, typename Tag>
    inline size_t constexpr ULongStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type ULongStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ULongStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef ULongStruct type;

    eProsima_user_DllExport ULongStructPubSubType();

    eProsima_user_DllExport virtual ~ULongStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) ULongStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 4ULL == (detail::ULongStruct_offset_of<ULongStruct, detail::ULongStruct_f>() + sizeof(uint32_t));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct ULongLongStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct ULongLongStruct_f
    {
        typedef uint64_t ULongLongStruct::* type;
        friend constexpr type get(
                ULongLongStruct_f);
    };

    template struct ULongLongStruct_rob<ULongLongStruct_f, &ULongLongStruct::m_my_uint64>;

    template <typename T, typename Tag>
    inline size_t constexpr ULongLongStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type ULongLongStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ULongLongStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef ULongLongStruct type;

    eProsima_user_DllExport ULongLongStructPubSubType();

    eProsima_user_DllExport virtual ~ULongLongStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) ULongLongStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 8ULL == (detail::ULongLongStruct_offset_of<ULongLongStruct, detail::ULongLongStruct_f>() + sizeof(uint64_t));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct FloatStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct FloatStruct_f
    {
        typedef float FloatStruct::* type;
        friend constexpr type get(
                FloatStruct_f);
    };

    template struct FloatStruct_rob<FloatStruct_f, &FloatStruct::m_my_float32>;

    template <typename T, typename Tag>
    inline size_t constexpr FloatStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type FloatStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class FloatStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef FloatStruct type;

    eProsima_user_DllExport FloatStructPubSubType();

    eProsima_user_DllExport virtual ~FloatStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) FloatStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 4ULL == (detail::FloatStruct_offset_of<FloatStruct, detail::FloatStruct_f>() + sizeof(float));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct DoubleStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct DoubleStruct_f
    {
        typedef double DoubleStruct::* type;
        friend constexpr type get(
                DoubleStruct_f);
    };

    template struct DoubleStruct_rob<DoubleStruct_f, &DoubleStruct::m_my_float64>;

    template <typename T, typename Tag>
    inline size_t constexpr DoubleStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type DoubleStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class DoubleStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef DoubleStruct type;

    eProsima_user_DllExport DoubleStructPubSubType();

    eProsima_user_DllExport virtual ~DoubleStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) DoubleStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 8ULL == (detail::DoubleStruct_offset_of<DoubleStruct, detail::DoubleStruct_f>() + sizeof(double));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct LongDoubleStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct LongDoubleStruct_f
    {
        typedef long double LongDoubleStruct::* type;
        friend constexpr type get(
                LongDoubleStruct_f);
    };

    template struct LongDoubleStruct_rob<LongDoubleStruct_f, &LongDoubleStruct::m_my_float128>;

    template <typename T, typename Tag>
    inline size_t constexpr LongDoubleStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type LongDoubleStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class LongDoubleStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef LongDoubleStruct type;

    eProsima_user_DllExport LongDoubleStructPubSubType();

    eProsima_user_DllExport virtual ~LongDoubleStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) LongDoubleStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 16ULL == (detail::LongDoubleStruct_offset_of<LongDoubleStruct, detail::LongDoubleStruct_f>() + sizeof(long double));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct CharStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct CharStruct_f
    {
        typedef char CharStruct::* type;
        friend constexpr type get(
                CharStruct_f);
    };

    template struct CharStruct_rob<CharStruct_f, &CharStruct::m_my_char>;

    template <typename T, typename Tag>
    inline size_t constexpr CharStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type CharStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class CharStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef CharStruct type;

    eProsima_user_DllExport CharStructPubSubType();

    eProsima_user_DllExport virtual ~CharStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) CharStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 1ULL == (detail::CharStruct_offset_of<CharStruct, detail::CharStruct_f>() + sizeof(char));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct WCharStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct WCharStruct_f
    {
        typedef wchar_t WCharStruct::* type;
        friend constexpr type get(
                WCharStruct_f);
    };

    template struct WCharStruct_rob<WCharStruct_f, &WCharStruct::m_my_wchar>;

    template <typename T, typename Tag>
    inline size_t constexpr WCharStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type WCharStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class WCharStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef WCharStruct type;

    eProsima_user_DllExport WCharStructPubSubType();

    eProsima_user_DllExport virtual ~WCharStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) WCharStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 4ULL == (detail::WCharStruct_offset_of<WCharStruct, detail::WCharStruct_f>() + sizeof(wchar_t));

    }};

/*!
 * @brief This class represents the TopicDataType of the type StringStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class StringStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef StringStruct type;

    eProsima_user_DllExport StringStructPubSubType();

    eProsima_user_DllExport virtual ~StringStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type WStringStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class WStringStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef WStringStruct type;

    eProsima_user_DllExport WStringStructPubSubType();

    eProsima_user_DllExport virtual ~WStringStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type LargeStringStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class LargeStringStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef LargeStringStruct type;

    eProsima_user_DllExport LargeStringStructPubSubType();

    eProsima_user_DllExport virtual ~LargeStringStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type LargeWStringStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class LargeWStringStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef LargeWStringStruct type;

    eProsima_user_DllExport LargeWStringStructPubSubType();

    eProsima_user_DllExport virtual ~LargeWStringStructPubSubType() override;

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

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct ArraytStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct ArraytStruct_f
    {
        typedef std::array<std::array<std::array<int32_t, 2>, 2>, 2> ArraytStruct::* type;
        friend constexpr type get(
                ArraytStruct_f);
    };

    template struct ArraytStruct_rob<ArraytStruct_f, &ArraytStruct::m_my_array>;

    template <typename T, typename Tag>
    inline size_t constexpr ArraytStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type ArraytStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ArraytStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef ArraytStruct type;

    eProsima_user_DllExport ArraytStructPubSubType();

    eProsima_user_DllExport virtual ~ArraytStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) ArraytStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 32ULL == (detail::ArraytStruct_offset_of<ArraytStruct, detail::ArraytStruct_f>() + sizeof(std::array<std::array<std::array<int32_t, 2>, 2>, 2>));

    }};
typedef std::array<std::array<int32_t, 2>, 2> MyArray;

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct ArrayArrayStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct ArrayArrayStruct_f
    {
        typedef std::array<std::array<MyArray, 2>, 2> ArrayArrayStruct::* type;
        friend constexpr type get(
                ArrayArrayStruct_f);
    };

    template struct ArrayArrayStruct_rob<ArrayArrayStruct_f, &ArrayArrayStruct::m_my_array_array>;

    template <typename T, typename Tag>
    inline size_t constexpr ArrayArrayStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type ArrayArrayStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ArrayArrayStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef ArrayArrayStruct type;

    eProsima_user_DllExport ArrayArrayStructPubSubType();

    eProsima_user_DllExport virtual ~ArrayArrayStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) ArrayArrayStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 64ULL == (detail::ArrayArrayStruct_offset_of<ArrayArrayStruct, detail::ArrayArrayStruct_f>() + sizeof(std::array<std::array<MyArray, 2>, 2>));

    }};

/*!
 * @brief This class represents the TopicDataType of the type SequenceStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class SequenceStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef SequenceStruct type;

    eProsima_user_DllExport SequenceStructPubSubType();

    eProsima_user_DllExport virtual ~SequenceStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type SequenceSequenceStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class SequenceSequenceStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef SequenceSequenceStruct type;

    eProsima_user_DllExport SequenceSequenceStructPubSubType();

    eProsima_user_DllExport virtual ~SequenceSequenceStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type MapStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class MapStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef MapStruct type;

    eProsima_user_DllExport MapStructPubSubType();

    eProsima_user_DllExport virtual ~MapStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type MapMapStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class MapMapStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef MapMapStruct type;

    eProsima_user_DllExport MapMapStructPubSubType();

    eProsima_user_DllExport virtual ~MapMapStructPubSubType() override;

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


#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct BitsetStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct BitsetStruct_f
    {
        typedef MyBitset BitsetStruct::* type;
        friend constexpr type get(
                BitsetStruct_f);
    };

    template struct BitsetStruct_rob<BitsetStruct_f, &BitsetStruct::m_a>;

    template <typename T, typename Tag>
    inline size_t constexpr BitsetStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type BitsetStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class BitsetStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef BitsetStruct type;

    eProsima_user_DllExport BitsetStructPubSubType();

    eProsima_user_DllExport virtual ~BitsetStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) BitsetStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 8ULL == (detail::BitsetStruct_offset_of<BitsetStruct, detail::BitsetStruct_f>() + sizeof(MyBitset));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct StructStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct StructStruct_f
    {
        typedef int64_t StructStruct::* type;
        friend constexpr type get(
                StructStruct_f);
    };

    template struct StructStruct_rob<StructStruct_f, &StructStruct::m_b>;

    template <typename T, typename Tag>
    inline size_t constexpr StructStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type StructStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class StructStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef StructStruct type;

    eProsima_user_DllExport StructStructPubSubType();

    eProsima_user_DllExport virtual ~StructStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) StructStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 16ULL == (detail::StructStruct_offset_of<StructStruct, detail::StructStruct_f>() + sizeof(int64_t));

    }};

#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct StructStructStruct_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct StructStructStruct_f
    {
        typedef int64_t StructStructStruct::* type;
        friend constexpr type get(
                StructStructStruct_f);
    };

    template struct StructStructStruct_rob<StructStructStruct_f, &StructStructStruct::m_child_int64>;

    template <typename T, typename Tag>
    inline size_t constexpr StructStructStruct_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type StructStructStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class StructStructStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef StructStructStruct type;

    eProsima_user_DllExport StructStructStructPubSubType();

    eProsima_user_DllExport virtual ~StructStructStructPubSubType() override;

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
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) StructStructStruct();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 24ULL == (detail::StructStructStruct_offset_of<StructStructStruct, detail::StructStructStruct_f>() + sizeof(int64_t));

    }};




/*!
 * @brief This class represents the TopicDataType of the type SimpleUnionStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class SimpleUnionStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef SimpleUnionStruct type;

    eProsima_user_DllExport SimpleUnionStructPubSubType();

    eProsima_user_DllExport virtual ~SimpleUnionStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type UnionUnionUnionStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class UnionUnionUnionStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef UnionUnionUnionStruct type;

    eProsima_user_DllExport UnionUnionUnionStructPubSubType();

    eProsima_user_DllExport virtual ~UnionUnionUnionStructPubSubType() override;

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
 * @brief This class represents the TopicDataType of the type WCharUnionStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class WCharUnionStructPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef WCharUnionStruct type;

    eProsima_user_DllExport WCharUnionStructPubSubType();

    eProsima_user_DllExport virtual ~WCharUnionStructPubSubType() override;

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

#endif // _FAST_DDS_GENERATED_BASIC_PUBSUBTYPES_H_

