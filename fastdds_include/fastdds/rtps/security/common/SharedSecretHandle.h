/*!
 * @file SharedSecretHandle.h
 */
#ifndef _FASTDDS_RTPS_SECURITY_COMMON_SHAREDSECRETHANDLE_H_
#define _FASTDDS_RTPS_SECURITY_COMMON_SHAREDSECRETHANDLE_H_

#include <fastdds/rtps/security/common/Handle.h>

#include <vector>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

class SharedSecret
{
public:

    class BinaryData
    {
    public:

        BinaryData()
        {
        }

        BinaryData(
                const BinaryData& data)
            : name_(data.name_)
            , value_(data.value_)
        {
        }

        BinaryData(
                BinaryData&& data)
            : name_(std::move(data.name_))
            , value_(std::move(data.value_))
        {
        }

        BinaryData(
                const std::string& name,
                const std::vector<uint8_t>& value)
            : name_(name)
            , value_(value)
        {
        }

        BinaryData(
                std::string&& name,
                std::vector<uint8_t>&& value)
            : name_(std::move(name))
            , value_(std::move(value))
        {
        }

        BinaryData& operator =(
                const BinaryData& data)
        {
            name_ = data.name_;
            value_ = data.value_;
            return *this;
        }

        BinaryData& operator =(
                BinaryData&& data)
        {
            name_ = std::move(data.name_);
            value_ = std::move(data.value_);
            return *this;
        }

        void name(
                const std::string& name)
        {
            name_ = name;
        }

        void name(
                std::string&& name)
        {
            name_ = std::move(name);
        }

        const std::string& name() const
        {
            return name_;
        }

        std::string& name()
        {
            return name_;
        }

        void value(
                const std::vector<uint8_t>& value)
        {
            value_ = value;
        }

        void value(
                std::vector<uint8_t>&& value)
        {
            value_ = std::move(value);
        }

        const std::vector<uint8_t>& value() const
        {
            return value_;
        }

        std::vector<uint8_t>& value()
        {
            return value_;
        }

    private:

        std::string name_;

        std::vector<uint8_t> value_;
    };

    static const char* const class_id_;

    std::vector<BinaryData> data_;
};

class PKIDH;

typedef HandleImpl<SharedSecret, PKIDH> SharedSecretHandle;

class SharedSecretHelper
{
public:

    static const std::vector<uint8_t>* find_data_value(
            const SecretHandle& sharedsecret,
            const std::string& name);
};

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _FASTDDS_RTPS_SECURITY_COMMON_SHAREDSECRETHANDLE_H_
