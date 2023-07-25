/*!
 * @file BinaryProperty.h
 */

#ifndef _FASTDDS_RTPS_COMMON_BINARYPROPERTY_H_
#define _FASTDDS_RTPS_COMMON_BINARYPROPERTY_H_

#include <string>
#include <vector>
#include <iostream>
#include <cstdint>

namespace eprosima {
namespace fastrtps {
namespace rtps {

class BinaryProperty
{
    public:

        BinaryProperty() : propagate_(false) {}

        BinaryProperty(const BinaryProperty& property) :
            name_(property.name_),
            value_(property.value_),
            propagate_(property.propagate_) {}

        BinaryProperty(BinaryProperty&& property) :
            name_(std::move(property.name_)),
            value_(std::move(property.value_)),
            propagate_(property.propagate_) {}

        BinaryProperty(const std::string& name,
                const std::vector<uint8_t>& value) :
            name_(name), value_(value) {}

        BinaryProperty(std::string&& name,
                std::vector<uint8_t>&& value) :
            name_(std::move(name)), value_(std::move(value)) {}

        BinaryProperty& operator=(const BinaryProperty& property)
        {
            name_ = property.name_;
            value_ = property.value_;
            propagate_ = property.propagate_;
            return *this;
        }

        BinaryProperty& operator=(BinaryProperty&& property)
        {
            name_ = std::move(property.name_);
            value_ = std::move(property.value_);
            propagate_ = property.propagate_;
            return *this;
        }

        bool operator==(const BinaryProperty& b) const
        {
            return (this->name_ == b.name_) &&
                   (this->value_ == b.value_);
        }

        void name(const std::string& name)
        {
            name_ = name;
        }

        void name(std::string&& name)
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

        void value(const std::vector<uint8_t>& value)
        {
            value_ = value;
        }

        void value(std::vector<uint8_t>&& value)
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

        void propagate(bool propagate)
        {
            propagate_ = propagate;
        }

        bool propagate() const
        {
            return propagate_;
        }

        bool& propagate()
        {
            return propagate_;
        }

    private:

        std::string name_;

        std::vector<uint8_t> value_;

        bool propagate_;
};

typedef std::vector<BinaryProperty> BinaryPropertySeq;

class BinaryPropertyHelper
{
    public:

        static size_t serialized_size(const BinaryProperty& binary_property, size_t current_alignment = 0)
        {
            if(binary_property.propagate())
            {
                size_t initial_alignment = current_alignment;

                current_alignment += 4 + alignment(current_alignment, 4) + binary_property.name().size() + 1;
                current_alignment += 4 + alignment(current_alignment, 4) + binary_property.value().size();

                return current_alignment - initial_alignment;
            }
            else
                return 0;
        }

        static size_t serialized_size(const BinaryPropertySeq& binary_properties, size_t current_alignment = 0)
        {
            size_t initial_alignment = current_alignment;

            current_alignment += 4 + alignment(current_alignment, 4);
            for(auto binary_property = binary_properties.begin(); binary_property != binary_properties.end(); ++binary_property)
                current_alignment += serialized_size(*binary_property, current_alignment);

            return current_alignment - initial_alignment;
        }

    private:

        inline static size_t alignment(size_t current_alignment, size_t dataSize) { return (dataSize - (current_alignment % dataSize)) & (dataSize-1);}
};

} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _FASTDDS_RTPS_COMMON_BINARYPROPERTY_H_
