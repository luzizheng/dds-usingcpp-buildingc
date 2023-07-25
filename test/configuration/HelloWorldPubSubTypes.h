/*!
 * @file HelloWorldPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * 此文件由工具fastcdrgen生成。
 */


#ifndef _FAST_DDS_GENERATED_HELLOWORLD_PUBSUBTYPES_H_
#define _FAST_DDS_GENERATED_HELLOWORLD_PUBSUBTYPES_H_

#include <fastdds/dds/topic/TopicDataType.hpp>
#include <fastrtps/utils/md5.h>

#include "HelloWorld.h"


#if !defined(GEN_API_VER) || (GEN_API_VER != 1)
#error \
    Generated HelloWorld is not compatible with current installed Fast DDS. Please, regenerate it with fastddsgen.
#endif  // GEN_API_VER


#ifndef SWIG
namespace detail {

    template<typename Tag, typename Tag::type M>
    struct HelloWorld_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct HelloWorld_f
    {
        typedef std::array<char, 20> HelloWorld::* type;
        friend constexpr type get(
                HelloWorld_f);
    };

    template struct HelloWorld_rob<HelloWorld_f, &HelloWorld::m_message>;

    template <typename T, typename Tag>
    inline size_t constexpr HelloWorld_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
#endif

/*!
 * @brief This class represents the TopicDataType of the type HelloWorld defined by the user in the IDL file.
 * @ingroup HelloWorld
 */
class HelloWorldPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef HelloWorld type;

    eProsima_user_DllExport HelloWorldPubSubType();

    eProsima_user_DllExport virtual ~HelloWorldPubSubType() override;

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
        new (memory) HelloWorld();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 24ULL == (detail::HelloWorld_offset_of<HelloWorld, detail::HelloWorld_f>() + sizeof(std::array<char, 20>));

    }};

#endif // _FAST_DDS_GENERATED_HELLOWORLD_PUBSUBTYPES_H_

