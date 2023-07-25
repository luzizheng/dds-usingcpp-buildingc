/*!
 * @file types.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_TYPES_H_
#define _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_TYPES_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(types_SOURCE)
#define types_DllAPI __declspec( dllexport )
#else
#define types_DllAPI __declspec( dllimport )
#endif // types_SOURCE
#else
#define types_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define types_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace eprosima {
    namespace fastdds {
        namespace statistics {
            namespace detail {
                /*!
                 * @brief This class represents the structure EntityId_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class EntityId_s
                {
                public:

                    /*!
                     * @brief Default constructor.
                     */
                    eProsima_user_DllExport EntityId_s();

                    /*!
                     * @brief Default destructor.
                     */
                    eProsima_user_DllExport ~EntityId_s();

                    /*!
                     * @brief Copy constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::EntityId_s that will be copied.
                     */
                    eProsima_user_DllExport EntityId_s(
                            const EntityId_s& x);

                    /*!
                     * @brief Move constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::EntityId_s that will be copied.
                     */
                    eProsima_user_DllExport EntityId_s(
                            EntityId_s&& x) noexcept;

                    /*!
                     * @brief Copy assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::EntityId_s that will be copied.
                     */
                    eProsima_user_DllExport EntityId_s& operator =(
                            const EntityId_s& x);

                    /*!
                     * @brief Move assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::EntityId_s that will be copied.
                     */
                    eProsima_user_DllExport EntityId_s& operator =(
                            EntityId_s&& x) noexcept;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::EntityId_s object to compare.
                     */
                    eProsima_user_DllExport bool operator ==(
                            const EntityId_s& x) const;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::EntityId_s object to compare.
                     */
                    eProsima_user_DllExport bool operator !=(
                            const EntityId_s& x) const;

                    /*!
                     * @brief This function copies the value in member value
                     * @param _value New value to be copied in member value
                     */
                    eProsima_user_DllExport void value(
                            const std::array<uint8_t, 4>& _value);

                    /*!
                     * @brief This function moves the value in member value
                     * @param _value New value to be moved in member value
                     */
                    eProsima_user_DllExport void value(
                            std::array<uint8_t, 4>&& _value);

                    /*!
                     * @brief This function returns a constant reference to member value
                     * @return Constant reference to member value
                     */
                    eProsima_user_DllExport const std::array<uint8_t, 4>& value() const;

                    /*!
                     * @brief This function returns a reference to member value
                     * @return Reference to member value
                     */
                    eProsima_user_DllExport std::array<uint8_t, 4>& value();

                    /*!
                    * @brief This function returns the maximum serialized size of an object
                    * depending on the buffer alignment.
                    * @param current_alignment Buffer alignment.
                    * @return Maximum serialized size.
                    */
                    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function returns the serialized size of a data depending on the buffer alignment.
                     * @param data Data which is calculated its serialized size.
                     * @param current_alignment Buffer alignment.
                     * @return Serialized size.
                     */
                    eProsima_user_DllExport static size_t getCdrSerializedSize(
                            const eprosima::fastdds::statistics::detail::EntityId_s& data,
                            size_t current_alignment = 0);


                    /*!
                     * @brief This function serializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serialize(
                            eprosima::fastcdr::Cdr& cdr) const;

                    /*!
                     * @brief This function deserializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void deserialize(
                            eprosima::fastcdr::Cdr& cdr);



                    /*!
                     * @brief This function returns the maximum serialized size of the Key of an object
                     * depending on the buffer alignment.
                     * @param current_alignment Buffer alignment.
                     * @return Maximum serialized size.
                     */
                    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function tells you if the Key has been defined for this type
                     */
                    eProsima_user_DllExport static bool isKeyDefined();

                    /*!
                     * @brief This function serializes the key members of an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serializeKey(
                            eprosima::fastcdr::Cdr& cdr) const;

                private:

                    std::array<uint8_t, 4> m_value;

                };
                /*!
                 * @brief This class represents the structure GuidPrefix_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class GuidPrefix_s
                {
                public:

                    /*!
                     * @brief Default constructor.
                     */
                    eProsima_user_DllExport GuidPrefix_s();

                    /*!
                     * @brief Default destructor.
                     */
                    eProsima_user_DllExport ~GuidPrefix_s();

                    /*!
                     * @brief Copy constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::GuidPrefix_s that will be copied.
                     */
                    eProsima_user_DllExport GuidPrefix_s(
                            const GuidPrefix_s& x);

                    /*!
                     * @brief Move constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::GuidPrefix_s that will be copied.
                     */
                    eProsima_user_DllExport GuidPrefix_s(
                            GuidPrefix_s&& x) noexcept;

                    /*!
                     * @brief Copy assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::GuidPrefix_s that will be copied.
                     */
                    eProsima_user_DllExport GuidPrefix_s& operator =(
                            const GuidPrefix_s& x);

                    /*!
                     * @brief Move assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::GuidPrefix_s that will be copied.
                     */
                    eProsima_user_DllExport GuidPrefix_s& operator =(
                            GuidPrefix_s&& x) noexcept;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::GuidPrefix_s object to compare.
                     */
                    eProsima_user_DllExport bool operator ==(
                            const GuidPrefix_s& x) const;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::GuidPrefix_s object to compare.
                     */
                    eProsima_user_DllExport bool operator !=(
                            const GuidPrefix_s& x) const;

                    /*!
                     * @brief This function copies the value in member value
                     * @param _value New value to be copied in member value
                     */
                    eProsima_user_DllExport void value(
                            const std::array<uint8_t, 12>& _value);

                    /*!
                     * @brief This function moves the value in member value
                     * @param _value New value to be moved in member value
                     */
                    eProsima_user_DllExport void value(
                            std::array<uint8_t, 12>&& _value);

                    /*!
                     * @brief This function returns a constant reference to member value
                     * @return Constant reference to member value
                     */
                    eProsima_user_DllExport const std::array<uint8_t, 12>& value() const;

                    /*!
                     * @brief This function returns a reference to member value
                     * @return Reference to member value
                     */
                    eProsima_user_DllExport std::array<uint8_t, 12>& value();

                    /*!
                    * @brief This function returns the maximum serialized size of an object
                    * depending on the buffer alignment.
                    * @param current_alignment Buffer alignment.
                    * @return Maximum serialized size.
                    */
                    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function returns the serialized size of a data depending on the buffer alignment.
                     * @param data Data which is calculated its serialized size.
                     * @param current_alignment Buffer alignment.
                     * @return Serialized size.
                     */
                    eProsima_user_DllExport static size_t getCdrSerializedSize(
                            const eprosima::fastdds::statistics::detail::GuidPrefix_s& data,
                            size_t current_alignment = 0);


                    /*!
                     * @brief This function serializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serialize(
                            eprosima::fastcdr::Cdr& cdr) const;

                    /*!
                     * @brief This function deserializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void deserialize(
                            eprosima::fastcdr::Cdr& cdr);



                    /*!
                     * @brief This function returns the maximum serialized size of the Key of an object
                     * depending on the buffer alignment.
                     * @param current_alignment Buffer alignment.
                     * @return Maximum serialized size.
                     */
                    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function tells you if the Key has been defined for this type
                     */
                    eProsima_user_DllExport static bool isKeyDefined();

                    /*!
                     * @brief This function serializes the key members of an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serializeKey(
                            eprosima::fastcdr::Cdr& cdr) const;

                private:

                    std::array<uint8_t, 12> m_value;

                };
                /*!
                 * @brief This class represents the structure GUID_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class GUID_s
                {
                public:

                    /*!
                     * @brief Default constructor.
                     */
                    eProsima_user_DllExport GUID_s();

                    /*!
                     * @brief Default destructor.
                     */
                    eProsima_user_DllExport ~GUID_s();

                    /*!
                     * @brief Copy constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::GUID_s that will be copied.
                     */
                    eProsima_user_DllExport GUID_s(
                            const GUID_s& x);

                    /*!
                     * @brief Move constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::GUID_s that will be copied.
                     */
                    eProsima_user_DllExport GUID_s(
                            GUID_s&& x) noexcept;

                    /*!
                     * @brief Copy assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::GUID_s that will be copied.
                     */
                    eProsima_user_DllExport GUID_s& operator =(
                            const GUID_s& x);

                    /*!
                     * @brief Move assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::GUID_s that will be copied.
                     */
                    eProsima_user_DllExport GUID_s& operator =(
                            GUID_s&& x) noexcept;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::GUID_s object to compare.
                     */
                    eProsima_user_DllExport bool operator ==(
                            const GUID_s& x) const;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::GUID_s object to compare.
                     */
                    eProsima_user_DllExport bool operator !=(
                            const GUID_s& x) const;

                    /*!
                     * @brief This function copies the value in member guidPrefix
                     * @param _guidPrefix New value to be copied in member guidPrefix
                     */
                    eProsima_user_DllExport void guidPrefix(
                            const eprosima::fastdds::statistics::detail::GuidPrefix_s& _guidPrefix);

                    /*!
                     * @brief This function moves the value in member guidPrefix
                     * @param _guidPrefix New value to be moved in member guidPrefix
                     */
                    eProsima_user_DllExport void guidPrefix(
                            eprosima::fastdds::statistics::detail::GuidPrefix_s&& _guidPrefix);

                    /*!
                     * @brief This function returns a constant reference to member guidPrefix
                     * @return Constant reference to member guidPrefix
                     */
                    eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GuidPrefix_s& guidPrefix() const;

                    /*!
                     * @brief This function returns a reference to member guidPrefix
                     * @return Reference to member guidPrefix
                     */
                    eProsima_user_DllExport eprosima::fastdds::statistics::detail::GuidPrefix_s& guidPrefix();
                    /*!
                     * @brief This function copies the value in member entityId
                     * @param _entityId New value to be copied in member entityId
                     */
                    eProsima_user_DllExport void entityId(
                            const eprosima::fastdds::statistics::detail::EntityId_s& _entityId);

                    /*!
                     * @brief This function moves the value in member entityId
                     * @param _entityId New value to be moved in member entityId
                     */
                    eProsima_user_DllExport void entityId(
                            eprosima::fastdds::statistics::detail::EntityId_s&& _entityId);

                    /*!
                     * @brief This function returns a constant reference to member entityId
                     * @return Constant reference to member entityId
                     */
                    eProsima_user_DllExport const eprosima::fastdds::statistics::detail::EntityId_s& entityId() const;

                    /*!
                     * @brief This function returns a reference to member entityId
                     * @return Reference to member entityId
                     */
                    eProsima_user_DllExport eprosima::fastdds::statistics::detail::EntityId_s& entityId();

                    /*!
                    * @brief This function returns the maximum serialized size of an object
                    * depending on the buffer alignment.
                    * @param current_alignment Buffer alignment.
                    * @return Maximum serialized size.
                    */
                    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function returns the serialized size of a data depending on the buffer alignment.
                     * @param data Data which is calculated its serialized size.
                     * @param current_alignment Buffer alignment.
                     * @return Serialized size.
                     */
                    eProsima_user_DllExport static size_t getCdrSerializedSize(
                            const eprosima::fastdds::statistics::detail::GUID_s& data,
                            size_t current_alignment = 0);


                    /*!
                     * @brief This function serializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serialize(
                            eprosima::fastcdr::Cdr& cdr) const;

                    /*!
                     * @brief This function deserializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void deserialize(
                            eprosima::fastcdr::Cdr& cdr);



                    /*!
                     * @brief This function returns the maximum serialized size of the Key of an object
                     * depending on the buffer alignment.
                     * @param current_alignment Buffer alignment.
                     * @return Maximum serialized size.
                     */
                    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function tells you if the Key has been defined for this type
                     */
                    eProsima_user_DllExport static bool isKeyDefined();

                    /*!
                     * @brief This function serializes the key members of an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serializeKey(
                            eprosima::fastcdr::Cdr& cdr) const;

                private:

                    eprosima::fastdds::statistics::detail::GuidPrefix_s m_guidPrefix;
                    eprosima::fastdds::statistics::detail::EntityId_s m_entityId;

                };
                /*!
                 * @brief This class represents the structure SequenceNumber_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class SequenceNumber_s
                {
                public:

                    /*!
                     * @brief Default constructor.
                     */
                    eProsima_user_DllExport SequenceNumber_s();

                    /*!
                     * @brief Default destructor.
                     */
                    eProsima_user_DllExport ~SequenceNumber_s();

                    /*!
                     * @brief Copy constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::SequenceNumber_s that will be copied.
                     */
                    eProsima_user_DllExport SequenceNumber_s(
                            const SequenceNumber_s& x);

                    /*!
                     * @brief Move constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::SequenceNumber_s that will be copied.
                     */
                    eProsima_user_DllExport SequenceNumber_s(
                            SequenceNumber_s&& x) noexcept;

                    /*!
                     * @brief Copy assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::SequenceNumber_s that will be copied.
                     */
                    eProsima_user_DllExport SequenceNumber_s& operator =(
                            const SequenceNumber_s& x);

                    /*!
                     * @brief Move assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::SequenceNumber_s that will be copied.
                     */
                    eProsima_user_DllExport SequenceNumber_s& operator =(
                            SequenceNumber_s&& x) noexcept;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::SequenceNumber_s object to compare.
                     */
                    eProsima_user_DllExport bool operator ==(
                            const SequenceNumber_s& x) const;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::SequenceNumber_s object to compare.
                     */
                    eProsima_user_DllExport bool operator !=(
                            const SequenceNumber_s& x) const;

                    /*!
                     * @brief This function sets a value in member high
                     * @param _high New value for member high
                     */
                    eProsima_user_DllExport void high(
                            int32_t _high);

                    /*!
                     * @brief This function returns the value of member high
                     * @return Value of member high
                     */
                    eProsima_user_DllExport int32_t high() const;

                    /*!
                     * @brief This function returns a reference to member high
                     * @return Reference to member high
                     */
                    eProsima_user_DllExport int32_t& high();

                    /*!
                     * @brief This function sets a value in member low
                     * @param _low New value for member low
                     */
                    eProsima_user_DllExport void low(
                            uint32_t _low);

                    /*!
                     * @brief This function returns the value of member low
                     * @return Value of member low
                     */
                    eProsima_user_DllExport uint32_t low() const;

                    /*!
                     * @brief This function returns a reference to member low
                     * @return Reference to member low
                     */
                    eProsima_user_DllExport uint32_t& low();


                    /*!
                    * @brief This function returns the maximum serialized size of an object
                    * depending on the buffer alignment.
                    * @param current_alignment Buffer alignment.
                    * @return Maximum serialized size.
                    */
                    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function returns the serialized size of a data depending on the buffer alignment.
                     * @param data Data which is calculated its serialized size.
                     * @param current_alignment Buffer alignment.
                     * @return Serialized size.
                     */
                    eProsima_user_DllExport static size_t getCdrSerializedSize(
                            const eprosima::fastdds::statistics::detail::SequenceNumber_s& data,
                            size_t current_alignment = 0);


                    /*!
                     * @brief This function serializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serialize(
                            eprosima::fastcdr::Cdr& cdr) const;

                    /*!
                     * @brief This function deserializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void deserialize(
                            eprosima::fastcdr::Cdr& cdr);



                    /*!
                     * @brief This function returns the maximum serialized size of the Key of an object
                     * depending on the buffer alignment.
                     * @param current_alignment Buffer alignment.
                     * @return Maximum serialized size.
                     */
                    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function tells you if the Key has been defined for this type
                     */
                    eProsima_user_DllExport static bool isKeyDefined();

                    /*!
                     * @brief This function serializes the key members of an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serializeKey(
                            eprosima::fastcdr::Cdr& cdr) const;

                private:

                    int32_t m_high;
                    uint32_t m_low;

                };
                /*!
                 * @brief This class represents the structure SampleIdentity_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class SampleIdentity_s
                {
                public:

                    /*!
                     * @brief Default constructor.
                     */
                    eProsima_user_DllExport SampleIdentity_s();

                    /*!
                     * @brief Default destructor.
                     */
                    eProsima_user_DllExport ~SampleIdentity_s();

                    /*!
                     * @brief Copy constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::SampleIdentity_s that will be copied.
                     */
                    eProsima_user_DllExport SampleIdentity_s(
                            const SampleIdentity_s& x);

                    /*!
                     * @brief Move constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::SampleIdentity_s that will be copied.
                     */
                    eProsima_user_DllExport SampleIdentity_s(
                            SampleIdentity_s&& x) noexcept;

                    /*!
                     * @brief Copy assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::SampleIdentity_s that will be copied.
                     */
                    eProsima_user_DllExport SampleIdentity_s& operator =(
                            const SampleIdentity_s& x);

                    /*!
                     * @brief Move assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::SampleIdentity_s that will be copied.
                     */
                    eProsima_user_DllExport SampleIdentity_s& operator =(
                            SampleIdentity_s&& x) noexcept;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::SampleIdentity_s object to compare.
                     */
                    eProsima_user_DllExport bool operator ==(
                            const SampleIdentity_s& x) const;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::SampleIdentity_s object to compare.
                     */
                    eProsima_user_DllExport bool operator !=(
                            const SampleIdentity_s& x) const;

                    /*!
                     * @brief This function copies the value in member writer_guid
                     * @param _writer_guid New value to be copied in member writer_guid
                     */
                    eProsima_user_DllExport void writer_guid(
                            const eprosima::fastdds::statistics::detail::GUID_s& _writer_guid);

                    /*!
                     * @brief This function moves the value in member writer_guid
                     * @param _writer_guid New value to be moved in member writer_guid
                     */
                    eProsima_user_DllExport void writer_guid(
                            eprosima::fastdds::statistics::detail::GUID_s&& _writer_guid);

                    /*!
                     * @brief This function returns a constant reference to member writer_guid
                     * @return Constant reference to member writer_guid
                     */
                    eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GUID_s& writer_guid() const;

                    /*!
                     * @brief This function returns a reference to member writer_guid
                     * @return Reference to member writer_guid
                     */
                    eProsima_user_DllExport eprosima::fastdds::statistics::detail::GUID_s& writer_guid();
                    /*!
                     * @brief This function copies the value in member sequence_number
                     * @param _sequence_number New value to be copied in member sequence_number
                     */
                    eProsima_user_DllExport void sequence_number(
                            const eprosima::fastdds::statistics::detail::SequenceNumber_s& _sequence_number);

                    /*!
                     * @brief This function moves the value in member sequence_number
                     * @param _sequence_number New value to be moved in member sequence_number
                     */
                    eProsima_user_DllExport void sequence_number(
                            eprosima::fastdds::statistics::detail::SequenceNumber_s&& _sequence_number);

                    /*!
                     * @brief This function returns a constant reference to member sequence_number
                     * @return Constant reference to member sequence_number
                     */
                    eProsima_user_DllExport const eprosima::fastdds::statistics::detail::SequenceNumber_s& sequence_number() const;

                    /*!
                     * @brief This function returns a reference to member sequence_number
                     * @return Reference to member sequence_number
                     */
                    eProsima_user_DllExport eprosima::fastdds::statistics::detail::SequenceNumber_s& sequence_number();

                    /*!
                    * @brief This function returns the maximum serialized size of an object
                    * depending on the buffer alignment.
                    * @param current_alignment Buffer alignment.
                    * @return Maximum serialized size.
                    */
                    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function returns the serialized size of a data depending on the buffer alignment.
                     * @param data Data which is calculated its serialized size.
                     * @param current_alignment Buffer alignment.
                     * @return Serialized size.
                     */
                    eProsima_user_DllExport static size_t getCdrSerializedSize(
                            const eprosima::fastdds::statistics::detail::SampleIdentity_s& data,
                            size_t current_alignment = 0);


                    /*!
                     * @brief This function serializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serialize(
                            eprosima::fastcdr::Cdr& cdr) const;

                    /*!
                     * @brief This function deserializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void deserialize(
                            eprosima::fastcdr::Cdr& cdr);



                    /*!
                     * @brief This function returns the maximum serialized size of the Key of an object
                     * depending on the buffer alignment.
                     * @param current_alignment Buffer alignment.
                     * @return Maximum serialized size.
                     */
                    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function tells you if the Key has been defined for this type
                     */
                    eProsima_user_DllExport static bool isKeyDefined();

                    /*!
                     * @brief This function serializes the key members of an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serializeKey(
                            eprosima::fastcdr::Cdr& cdr) const;

                private:

                    eprosima::fastdds::statistics::detail::GUID_s m_writer_guid;
                    eprosima::fastdds::statistics::detail::SequenceNumber_s m_sequence_number;

                };
                /*!
                 * @brief This class represents the structure Locator_s defined by the user in the IDL file.
                 * @ingroup TYPES
                 */
                class Locator_s
                {
                public:

                    /*!
                     * @brief Default constructor.
                     */
                    eProsima_user_DllExport Locator_s();

                    /*!
                     * @brief Default destructor.
                     */
                    eProsima_user_DllExport ~Locator_s();

                    /*!
                     * @brief Copy constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::Locator_s that will be copied.
                     */
                    eProsima_user_DllExport Locator_s(
                            const Locator_s& x);

                    /*!
                     * @brief Move constructor.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::Locator_s that will be copied.
                     */
                    eProsima_user_DllExport Locator_s(
                            Locator_s&& x) noexcept;

                    /*!
                     * @brief Copy assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::Locator_s that will be copied.
                     */
                    eProsima_user_DllExport Locator_s& operator =(
                            const Locator_s& x);

                    /*!
                     * @brief Move assignment.
                     * @param x Reference to the object eprosima::fastdds::statistics::detail::Locator_s that will be copied.
                     */
                    eProsima_user_DllExport Locator_s& operator =(
                            Locator_s&& x) noexcept;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::Locator_s object to compare.
                     */
                    eProsima_user_DllExport bool operator ==(
                            const Locator_s& x) const;

                    /*!
                     * @brief Comparison operator.
                     * @param x eprosima::fastdds::statistics::detail::Locator_s object to compare.
                     */
                    eProsima_user_DllExport bool operator !=(
                            const Locator_s& x) const;

                    /*!
                     * @brief This function sets a value in member kind
                     * @param _kind New value for member kind
                     */
                    eProsima_user_DllExport void kind(
                            int32_t _kind);

                    /*!
                     * @brief This function returns the value of member kind
                     * @return Value of member kind
                     */
                    eProsima_user_DllExport int32_t kind() const;

                    /*!
                     * @brief This function returns a reference to member kind
                     * @return Reference to member kind
                     */
                    eProsima_user_DllExport int32_t& kind();

                    /*!
                     * @brief This function sets a value in member port
                     * @param _port New value for member port
                     */
                    eProsima_user_DllExport void port(
                            uint32_t _port);

                    /*!
                     * @brief This function returns the value of member port
                     * @return Value of member port
                     */
                    eProsima_user_DllExport uint32_t port() const;

                    /*!
                     * @brief This function returns a reference to member port
                     * @return Reference to member port
                     */
                    eProsima_user_DllExport uint32_t& port();

                    /*!
                     * @brief This function copies the value in member address
                     * @param _address New value to be copied in member address
                     */
                    eProsima_user_DllExport void address(
                            const std::array<uint8_t, 16>& _address);

                    /*!
                     * @brief This function moves the value in member address
                     * @param _address New value to be moved in member address
                     */
                    eProsima_user_DllExport void address(
                            std::array<uint8_t, 16>&& _address);

                    /*!
                     * @brief This function returns a constant reference to member address
                     * @return Constant reference to member address
                     */
                    eProsima_user_DllExport const std::array<uint8_t, 16>& address() const;

                    /*!
                     * @brief This function returns a reference to member address
                     * @return Reference to member address
                     */
                    eProsima_user_DllExport std::array<uint8_t, 16>& address();

                    /*!
                    * @brief This function returns the maximum serialized size of an object
                    * depending on the buffer alignment.
                    * @param current_alignment Buffer alignment.
                    * @return Maximum serialized size.
                    */
                    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function returns the serialized size of a data depending on the buffer alignment.
                     * @param data Data which is calculated its serialized size.
                     * @param current_alignment Buffer alignment.
                     * @return Serialized size.
                     */
                    eProsima_user_DllExport static size_t getCdrSerializedSize(
                            const eprosima::fastdds::statistics::detail::Locator_s& data,
                            size_t current_alignment = 0);


                    /*!
                     * @brief This function serializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serialize(
                            eprosima::fastcdr::Cdr& cdr) const;

                    /*!
                     * @brief This function deserializes an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void deserialize(
                            eprosima::fastcdr::Cdr& cdr);



                    /*!
                     * @brief This function returns the maximum serialized size of the Key of an object
                     * depending on the buffer alignment.
                     * @param current_alignment Buffer alignment.
                     * @return Maximum serialized size.
                     */
                    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                            size_t current_alignment = 0);

                    /*!
                     * @brief This function tells you if the Key has been defined for this type
                     */
                    eProsima_user_DllExport static bool isKeyDefined();

                    /*!
                     * @brief This function serializes the key members of an object using CDR serialization.
                     * @param cdr CDR serialization object.
                     */
                    eProsima_user_DllExport void serializeKey(
                            eprosima::fastcdr::Cdr& cdr) const;

                private:

                    int32_t m_kind;
                    uint32_t m_port;
                    std::array<uint8_t, 16> m_address;

                };
            } // namespace detail
            /*!
             * @brief This class represents the structure DiscoveryTime defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class DiscoveryTime
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport DiscoveryTime();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~DiscoveryTime();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::DiscoveryTime that will be copied.
                 */
                eProsima_user_DllExport DiscoveryTime(
                        const DiscoveryTime& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::DiscoveryTime that will be copied.
                 */
                eProsima_user_DllExport DiscoveryTime(
                        DiscoveryTime&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::DiscoveryTime that will be copied.
                 */
                eProsima_user_DllExport DiscoveryTime& operator =(
                        const DiscoveryTime& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::DiscoveryTime that will be copied.
                 */
                eProsima_user_DllExport DiscoveryTime& operator =(
                        DiscoveryTime&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::DiscoveryTime object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const DiscoveryTime& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::DiscoveryTime object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const DiscoveryTime& x) const;

                /*!
                 * @brief This function copies the value in member local_participant_guid
                 * @param _local_participant_guid New value to be copied in member local_participant_guid
                 */
                eProsima_user_DllExport void local_participant_guid(
                        const eprosima::fastdds::statistics::detail::GUID_s& _local_participant_guid);

                /*!
                 * @brief This function moves the value in member local_participant_guid
                 * @param _local_participant_guid New value to be moved in member local_participant_guid
                 */
                eProsima_user_DllExport void local_participant_guid(
                        eprosima::fastdds::statistics::detail::GUID_s&& _local_participant_guid);

                /*!
                 * @brief This function returns a constant reference to member local_participant_guid
                 * @return Constant reference to member local_participant_guid
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GUID_s& local_participant_guid() const;

                /*!
                 * @brief This function returns a reference to member local_participant_guid
                 * @return Reference to member local_participant_guid
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::GUID_s& local_participant_guid();
                /*!
                 * @brief This function copies the value in member remote_entity_guid
                 * @param _remote_entity_guid New value to be copied in member remote_entity_guid
                 */
                eProsima_user_DllExport void remote_entity_guid(
                        const eprosima::fastdds::statistics::detail::GUID_s& _remote_entity_guid);

                /*!
                 * @brief This function moves the value in member remote_entity_guid
                 * @param _remote_entity_guid New value to be moved in member remote_entity_guid
                 */
                eProsima_user_DllExport void remote_entity_guid(
                        eprosima::fastdds::statistics::detail::GUID_s&& _remote_entity_guid);

                /*!
                 * @brief This function returns a constant reference to member remote_entity_guid
                 * @return Constant reference to member remote_entity_guid
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GUID_s& remote_entity_guid() const;

                /*!
                 * @brief This function returns a reference to member remote_entity_guid
                 * @return Reference to member remote_entity_guid
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::GUID_s& remote_entity_guid();
                /*!
                 * @brief This function sets a value in member time
                 * @param _time New value for member time
                 */
                eProsima_user_DllExport void time(
                        uint64_t _time);

                /*!
                 * @brief This function returns the value of member time
                 * @return Value of member time
                 */
                eProsima_user_DllExport uint64_t time() const;

                /*!
                 * @brief This function returns a reference to member time
                 * @return Reference to member time
                 */
                eProsima_user_DllExport uint64_t& time();

                /*!
                 * @brief This function copies the value in member host
                 * @param _host New value to be copied in member host
                 */
                eProsima_user_DllExport void host(
                        const std::string& _host);

                /*!
                 * @brief This function moves the value in member host
                 * @param _host New value to be moved in member host
                 */
                eProsima_user_DllExport void host(
                        std::string&& _host);

                /*!
                 * @brief This function returns a constant reference to member host
                 * @return Constant reference to member host
                 */
                eProsima_user_DllExport const std::string& host() const;

                /*!
                 * @brief This function returns a reference to member host
                 * @return Reference to member host
                 */
                eProsima_user_DllExport std::string& host();
                /*!
                 * @brief This function copies the value in member user
                 * @param _user New value to be copied in member user
                 */
                eProsima_user_DllExport void user(
                        const std::string& _user);

                /*!
                 * @brief This function moves the value in member user
                 * @param _user New value to be moved in member user
                 */
                eProsima_user_DllExport void user(
                        std::string&& _user);

                /*!
                 * @brief This function returns a constant reference to member user
                 * @return Constant reference to member user
                 */
                eProsima_user_DllExport const std::string& user() const;

                /*!
                 * @brief This function returns a reference to member user
                 * @return Reference to member user
                 */
                eProsima_user_DllExport std::string& user();
                /*!
                 * @brief This function copies the value in member process
                 * @param _process New value to be copied in member process
                 */
                eProsima_user_DllExport void process(
                        const std::string& _process);

                /*!
                 * @brief This function moves the value in member process
                 * @param _process New value to be moved in member process
                 */
                eProsima_user_DllExport void process(
                        std::string&& _process);

                /*!
                 * @brief This function returns a constant reference to member process
                 * @return Constant reference to member process
                 */
                eProsima_user_DllExport const std::string& process() const;

                /*!
                 * @brief This function returns a reference to member process
                 * @return Reference to member process
                 */
                eProsima_user_DllExport std::string& process();

                /*!
                * @brief This function returns the maximum serialized size of an object
                * depending on the buffer alignment.
                * @param current_alignment Buffer alignment.
                * @return Maximum serialized size.
                */
                eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(
                        const eprosima::fastdds::statistics::DiscoveryTime& data,
                        size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(
                        eprosima::fastcdr::Cdr& cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(
                        eprosima::fastcdr::Cdr& cdr);



                /*!
                 * @brief This function returns the maximum serialized size of the Key of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function tells you if the Key has been defined for this type
                 */
                eProsima_user_DllExport static bool isKeyDefined();

                /*!
                 * @brief This function serializes the key members of an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serializeKey(
                        eprosima::fastcdr::Cdr& cdr) const;

            private:

                eprosima::fastdds::statistics::detail::GUID_s m_local_participant_guid;
                eprosima::fastdds::statistics::detail::GUID_s m_remote_entity_guid;
                uint64_t m_time;
                std::string m_host;
                std::string m_user;
                std::string m_process;

            };
            /*!
             * @brief This class represents the structure EntityCount defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class EntityCount
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport EntityCount();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~EntityCount();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::EntityCount that will be copied.
                 */
                eProsima_user_DllExport EntityCount(
                        const EntityCount& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::EntityCount that will be copied.
                 */
                eProsima_user_DllExport EntityCount(
                        EntityCount&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::EntityCount that will be copied.
                 */
                eProsima_user_DllExport EntityCount& operator =(
                        const EntityCount& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::EntityCount that will be copied.
                 */
                eProsima_user_DllExport EntityCount& operator =(
                        EntityCount&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::EntityCount object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const EntityCount& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::EntityCount object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const EntityCount& x) const;

                /*!
                 * @brief This function copies the value in member guid
                 * @param _guid New value to be copied in member guid
                 */
                eProsima_user_DllExport void guid(
                        const eprosima::fastdds::statistics::detail::GUID_s& _guid);

                /*!
                 * @brief This function moves the value in member guid
                 * @param _guid New value to be moved in member guid
                 */
                eProsima_user_DllExport void guid(
                        eprosima::fastdds::statistics::detail::GUID_s&& _guid);

                /*!
                 * @brief This function returns a constant reference to member guid
                 * @return Constant reference to member guid
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GUID_s& guid() const;

                /*!
                 * @brief This function returns a reference to member guid
                 * @return Reference to member guid
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::GUID_s& guid();
                /*!
                 * @brief This function sets a value in member count
                 * @param _count New value for member count
                 */
                eProsima_user_DllExport void count(
                        uint64_t _count);

                /*!
                 * @brief This function returns the value of member count
                 * @return Value of member count
                 */
                eProsima_user_DllExport uint64_t count() const;

                /*!
                 * @brief This function returns a reference to member count
                 * @return Reference to member count
                 */
                eProsima_user_DllExport uint64_t& count();


                /*!
                * @brief This function returns the maximum serialized size of an object
                * depending on the buffer alignment.
                * @param current_alignment Buffer alignment.
                * @return Maximum serialized size.
                */
                eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(
                        const eprosima::fastdds::statistics::EntityCount& data,
                        size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(
                        eprosima::fastcdr::Cdr& cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(
                        eprosima::fastcdr::Cdr& cdr);



                /*!
                 * @brief This function returns the maximum serialized size of the Key of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function tells you if the Key has been defined for this type
                 */
                eProsima_user_DllExport static bool isKeyDefined();

                /*!
                 * @brief This function serializes the key members of an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serializeKey(
                        eprosima::fastcdr::Cdr& cdr) const;

            private:

                eprosima::fastdds::statistics::detail::GUID_s m_guid;
                uint64_t m_count;

            };
            /*!
             * @brief This class represents the structure SampleIdentityCount defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class SampleIdentityCount
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport SampleIdentityCount();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~SampleIdentityCount();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::SampleIdentityCount that will be copied.
                 */
                eProsima_user_DllExport SampleIdentityCount(
                        const SampleIdentityCount& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::SampleIdentityCount that will be copied.
                 */
                eProsima_user_DllExport SampleIdentityCount(
                        SampleIdentityCount&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::SampleIdentityCount that will be copied.
                 */
                eProsima_user_DllExport SampleIdentityCount& operator =(
                        const SampleIdentityCount& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::SampleIdentityCount that will be copied.
                 */
                eProsima_user_DllExport SampleIdentityCount& operator =(
                        SampleIdentityCount&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::SampleIdentityCount object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const SampleIdentityCount& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::SampleIdentityCount object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const SampleIdentityCount& x) const;

                /*!
                 * @brief This function copies the value in member sample_id
                 * @param _sample_id New value to be copied in member sample_id
                 */
                eProsima_user_DllExport void sample_id(
                        const eprosima::fastdds::statistics::detail::SampleIdentity_s& _sample_id);

                /*!
                 * @brief This function moves the value in member sample_id
                 * @param _sample_id New value to be moved in member sample_id
                 */
                eProsima_user_DllExport void sample_id(
                        eprosima::fastdds::statistics::detail::SampleIdentity_s&& _sample_id);

                /*!
                 * @brief This function returns a constant reference to member sample_id
                 * @return Constant reference to member sample_id
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::SampleIdentity_s& sample_id() const;

                /*!
                 * @brief This function returns a reference to member sample_id
                 * @return Reference to member sample_id
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::SampleIdentity_s& sample_id();
                /*!
                 * @brief This function sets a value in member count
                 * @param _count New value for member count
                 */
                eProsima_user_DllExport void count(
                        uint64_t _count);

                /*!
                 * @brief This function returns the value of member count
                 * @return Value of member count
                 */
                eProsima_user_DllExport uint64_t count() const;

                /*!
                 * @brief This function returns a reference to member count
                 * @return Reference to member count
                 */
                eProsima_user_DllExport uint64_t& count();


                /*!
                * @brief This function returns the maximum serialized size of an object
                * depending on the buffer alignment.
                * @param current_alignment Buffer alignment.
                * @return Maximum serialized size.
                */
                eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(
                        const eprosima::fastdds::statistics::SampleIdentityCount& data,
                        size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(
                        eprosima::fastcdr::Cdr& cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(
                        eprosima::fastcdr::Cdr& cdr);



                /*!
                 * @brief This function returns the maximum serialized size of the Key of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function tells you if the Key has been defined for this type
                 */
                eProsima_user_DllExport static bool isKeyDefined();

                /*!
                 * @brief This function serializes the key members of an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serializeKey(
                        eprosima::fastcdr::Cdr& cdr) const;

            private:

                eprosima::fastdds::statistics::detail::SampleIdentity_s m_sample_id;
                uint64_t m_count;

            };
            /*!
             * @brief This class represents the structure Entity2LocatorTraffic defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class Entity2LocatorTraffic
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport Entity2LocatorTraffic();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~Entity2LocatorTraffic();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::Entity2LocatorTraffic that will be copied.
                 */
                eProsima_user_DllExport Entity2LocatorTraffic(
                        const Entity2LocatorTraffic& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::Entity2LocatorTraffic that will be copied.
                 */
                eProsima_user_DllExport Entity2LocatorTraffic(
                        Entity2LocatorTraffic&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::Entity2LocatorTraffic that will be copied.
                 */
                eProsima_user_DllExport Entity2LocatorTraffic& operator =(
                        const Entity2LocatorTraffic& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::Entity2LocatorTraffic that will be copied.
                 */
                eProsima_user_DllExport Entity2LocatorTraffic& operator =(
                        Entity2LocatorTraffic&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::Entity2LocatorTraffic object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const Entity2LocatorTraffic& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::Entity2LocatorTraffic object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const Entity2LocatorTraffic& x) const;

                /*!
                 * @brief This function copies the value in member src_guid
                 * @param _src_guid New value to be copied in member src_guid
                 */
                eProsima_user_DllExport void src_guid(
                        const eprosima::fastdds::statistics::detail::GUID_s& _src_guid);

                /*!
                 * @brief This function moves the value in member src_guid
                 * @param _src_guid New value to be moved in member src_guid
                 */
                eProsima_user_DllExport void src_guid(
                        eprosima::fastdds::statistics::detail::GUID_s&& _src_guid);

                /*!
                 * @brief This function returns a constant reference to member src_guid
                 * @return Constant reference to member src_guid
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GUID_s& src_guid() const;

                /*!
                 * @brief This function returns a reference to member src_guid
                 * @return Reference to member src_guid
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::GUID_s& src_guid();
                /*!
                 * @brief This function copies the value in member dst_locator
                 * @param _dst_locator New value to be copied in member dst_locator
                 */
                eProsima_user_DllExport void dst_locator(
                        const eprosima::fastdds::statistics::detail::Locator_s& _dst_locator);

                /*!
                 * @brief This function moves the value in member dst_locator
                 * @param _dst_locator New value to be moved in member dst_locator
                 */
                eProsima_user_DllExport void dst_locator(
                        eprosima::fastdds::statistics::detail::Locator_s&& _dst_locator);

                /*!
                 * @brief This function returns a constant reference to member dst_locator
                 * @return Constant reference to member dst_locator
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::Locator_s& dst_locator() const;

                /*!
                 * @brief This function returns a reference to member dst_locator
                 * @return Reference to member dst_locator
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::Locator_s& dst_locator();
                /*!
                 * @brief This function sets a value in member packet_count
                 * @param _packet_count New value for member packet_count
                 */
                eProsima_user_DllExport void packet_count(
                        uint64_t _packet_count);

                /*!
                 * @brief This function returns the value of member packet_count
                 * @return Value of member packet_count
                 */
                eProsima_user_DllExport uint64_t packet_count() const;

                /*!
                 * @brief This function returns a reference to member packet_count
                 * @return Reference to member packet_count
                 */
                eProsima_user_DllExport uint64_t& packet_count();

                /*!
                 * @brief This function sets a value in member byte_count
                 * @param _byte_count New value for member byte_count
                 */
                eProsima_user_DllExport void byte_count(
                        uint64_t _byte_count);

                /*!
                 * @brief This function returns the value of member byte_count
                 * @return Value of member byte_count
                 */
                eProsima_user_DllExport uint64_t byte_count() const;

                /*!
                 * @brief This function returns a reference to member byte_count
                 * @return Reference to member byte_count
                 */
                eProsima_user_DllExport uint64_t& byte_count();

                /*!
                 * @brief This function sets a value in member byte_magnitude_order
                 * @param _byte_magnitude_order New value for member byte_magnitude_order
                 */
                eProsima_user_DllExport void byte_magnitude_order(
                        int16_t _byte_magnitude_order);

                /*!
                 * @brief This function returns the value of member byte_magnitude_order
                 * @return Value of member byte_magnitude_order
                 */
                eProsima_user_DllExport int16_t byte_magnitude_order() const;

                /*!
                 * @brief This function returns a reference to member byte_magnitude_order
                 * @return Reference to member byte_magnitude_order
                 */
                eProsima_user_DllExport int16_t& byte_magnitude_order();


                /*!
                * @brief This function returns the maximum serialized size of an object
                * depending on the buffer alignment.
                * @param current_alignment Buffer alignment.
                * @return Maximum serialized size.
                */
                eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(
                        const eprosima::fastdds::statistics::Entity2LocatorTraffic& data,
                        size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(
                        eprosima::fastcdr::Cdr& cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(
                        eprosima::fastcdr::Cdr& cdr);



                /*!
                 * @brief This function returns the maximum serialized size of the Key of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function tells you if the Key has been defined for this type
                 */
                eProsima_user_DllExport static bool isKeyDefined();

                /*!
                 * @brief This function serializes the key members of an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serializeKey(
                        eprosima::fastcdr::Cdr& cdr) const;

            private:

                eprosima::fastdds::statistics::detail::GUID_s m_src_guid;
                eprosima::fastdds::statistics::detail::Locator_s m_dst_locator;
                uint64_t m_packet_count;
                uint64_t m_byte_count;
                int16_t m_byte_magnitude_order;

            };
            /*!
             * @brief This class represents the structure WriterReaderData defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class WriterReaderData
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport WriterReaderData();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~WriterReaderData();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::WriterReaderData that will be copied.
                 */
                eProsima_user_DllExport WriterReaderData(
                        const WriterReaderData& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::WriterReaderData that will be copied.
                 */
                eProsima_user_DllExport WriterReaderData(
                        WriterReaderData&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::WriterReaderData that will be copied.
                 */
                eProsima_user_DllExport WriterReaderData& operator =(
                        const WriterReaderData& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::WriterReaderData that will be copied.
                 */
                eProsima_user_DllExport WriterReaderData& operator =(
                        WriterReaderData&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::WriterReaderData object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const WriterReaderData& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::WriterReaderData object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const WriterReaderData& x) const;

                /*!
                 * @brief This function copies the value in member writer_guid
                 * @param _writer_guid New value to be copied in member writer_guid
                 */
                eProsima_user_DllExport void writer_guid(
                        const eprosima::fastdds::statistics::detail::GUID_s& _writer_guid);

                /*!
                 * @brief This function moves the value in member writer_guid
                 * @param _writer_guid New value to be moved in member writer_guid
                 */
                eProsima_user_DllExport void writer_guid(
                        eprosima::fastdds::statistics::detail::GUID_s&& _writer_guid);

                /*!
                 * @brief This function returns a constant reference to member writer_guid
                 * @return Constant reference to member writer_guid
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GUID_s& writer_guid() const;

                /*!
                 * @brief This function returns a reference to member writer_guid
                 * @return Reference to member writer_guid
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::GUID_s& writer_guid();
                /*!
                 * @brief This function copies the value in member reader_guid
                 * @param _reader_guid New value to be copied in member reader_guid
                 */
                eProsima_user_DllExport void reader_guid(
                        const eprosima::fastdds::statistics::detail::GUID_s& _reader_guid);

                /*!
                 * @brief This function moves the value in member reader_guid
                 * @param _reader_guid New value to be moved in member reader_guid
                 */
                eProsima_user_DllExport void reader_guid(
                        eprosima::fastdds::statistics::detail::GUID_s&& _reader_guid);

                /*!
                 * @brief This function returns a constant reference to member reader_guid
                 * @return Constant reference to member reader_guid
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GUID_s& reader_guid() const;

                /*!
                 * @brief This function returns a reference to member reader_guid
                 * @return Reference to member reader_guid
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::GUID_s& reader_guid();
                /*!
                 * @brief This function sets a value in member data
                 * @param _data New value for member data
                 */
                eProsima_user_DllExport void data(
                        float _data);

                /*!
                 * @brief This function returns the value of member data
                 * @return Value of member data
                 */
                eProsima_user_DllExport float data() const;

                /*!
                 * @brief This function returns a reference to member data
                 * @return Reference to member data
                 */
                eProsima_user_DllExport float& data();


                /*!
                * @brief This function returns the maximum serialized size of an object
                * depending on the buffer alignment.
                * @param current_alignment Buffer alignment.
                * @return Maximum serialized size.
                */
                eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(
                        const eprosima::fastdds::statistics::WriterReaderData& data,
                        size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(
                        eprosima::fastcdr::Cdr& cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(
                        eprosima::fastcdr::Cdr& cdr);



                /*!
                 * @brief This function returns the maximum serialized size of the Key of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function tells you if the Key has been defined for this type
                 */
                eProsima_user_DllExport static bool isKeyDefined();

                /*!
                 * @brief This function serializes the key members of an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serializeKey(
                        eprosima::fastcdr::Cdr& cdr) const;

            private:

                eprosima::fastdds::statistics::detail::GUID_s m_writer_guid;
                eprosima::fastdds::statistics::detail::GUID_s m_reader_guid;
                float m_data;

            };
            /*!
             * @brief This class represents the structure Locator2LocatorData defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class Locator2LocatorData
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport Locator2LocatorData();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~Locator2LocatorData();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::Locator2LocatorData that will be copied.
                 */
                eProsima_user_DllExport Locator2LocatorData(
                        const Locator2LocatorData& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::Locator2LocatorData that will be copied.
                 */
                eProsima_user_DllExport Locator2LocatorData(
                        Locator2LocatorData&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::Locator2LocatorData that will be copied.
                 */
                eProsima_user_DllExport Locator2LocatorData& operator =(
                        const Locator2LocatorData& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::Locator2LocatorData that will be copied.
                 */
                eProsima_user_DllExport Locator2LocatorData& operator =(
                        Locator2LocatorData&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::Locator2LocatorData object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const Locator2LocatorData& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::Locator2LocatorData object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const Locator2LocatorData& x) const;

                /*!
                 * @brief This function copies the value in member src_locator
                 * @param _src_locator New value to be copied in member src_locator
                 */
                eProsima_user_DllExport void src_locator(
                        const eprosima::fastdds::statistics::detail::Locator_s& _src_locator);

                /*!
                 * @brief This function moves the value in member src_locator
                 * @param _src_locator New value to be moved in member src_locator
                 */
                eProsima_user_DllExport void src_locator(
                        eprosima::fastdds::statistics::detail::Locator_s&& _src_locator);

                /*!
                 * @brief This function returns a constant reference to member src_locator
                 * @return Constant reference to member src_locator
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::Locator_s& src_locator() const;

                /*!
                 * @brief This function returns a reference to member src_locator
                 * @return Reference to member src_locator
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::Locator_s& src_locator();
                /*!
                 * @brief This function copies the value in member dst_locator
                 * @param _dst_locator New value to be copied in member dst_locator
                 */
                eProsima_user_DllExport void dst_locator(
                        const eprosima::fastdds::statistics::detail::Locator_s& _dst_locator);

                /*!
                 * @brief This function moves the value in member dst_locator
                 * @param _dst_locator New value to be moved in member dst_locator
                 */
                eProsima_user_DllExport void dst_locator(
                        eprosima::fastdds::statistics::detail::Locator_s&& _dst_locator);

                /*!
                 * @brief This function returns a constant reference to member dst_locator
                 * @return Constant reference to member dst_locator
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::Locator_s& dst_locator() const;

                /*!
                 * @brief This function returns a reference to member dst_locator
                 * @return Reference to member dst_locator
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::Locator_s& dst_locator();
                /*!
                 * @brief This function sets a value in member data
                 * @param _data New value for member data
                 */
                eProsima_user_DllExport void data(
                        float _data);

                /*!
                 * @brief This function returns the value of member data
                 * @return Value of member data
                 */
                eProsima_user_DllExport float data() const;

                /*!
                 * @brief This function returns a reference to member data
                 * @return Reference to member data
                 */
                eProsima_user_DllExport float& data();


                /*!
                * @brief This function returns the maximum serialized size of an object
                * depending on the buffer alignment.
                * @param current_alignment Buffer alignment.
                * @return Maximum serialized size.
                */
                eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(
                        const eprosima::fastdds::statistics::Locator2LocatorData& data,
                        size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(
                        eprosima::fastcdr::Cdr& cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(
                        eprosima::fastcdr::Cdr& cdr);



                /*!
                 * @brief This function returns the maximum serialized size of the Key of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function tells you if the Key has been defined for this type
                 */
                eProsima_user_DllExport static bool isKeyDefined();

                /*!
                 * @brief This function serializes the key members of an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serializeKey(
                        eprosima::fastcdr::Cdr& cdr) const;

            private:

                eprosima::fastdds::statistics::detail::Locator_s m_src_locator;
                eprosima::fastdds::statistics::detail::Locator_s m_dst_locator;
                float m_data;

            };
            /*!
             * @brief This class represents the structure EntityData defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class EntityData
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport EntityData();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~EntityData();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::EntityData that will be copied.
                 */
                eProsima_user_DllExport EntityData(
                        const EntityData& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::EntityData that will be copied.
                 */
                eProsima_user_DllExport EntityData(
                        EntityData&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::EntityData that will be copied.
                 */
                eProsima_user_DllExport EntityData& operator =(
                        const EntityData& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::EntityData that will be copied.
                 */
                eProsima_user_DllExport EntityData& operator =(
                        EntityData&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::EntityData object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const EntityData& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::EntityData object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const EntityData& x) const;

                /*!
                 * @brief This function copies the value in member guid
                 * @param _guid New value to be copied in member guid
                 */
                eProsima_user_DllExport void guid(
                        const eprosima::fastdds::statistics::detail::GUID_s& _guid);

                /*!
                 * @brief This function moves the value in member guid
                 * @param _guid New value to be moved in member guid
                 */
                eProsima_user_DllExport void guid(
                        eprosima::fastdds::statistics::detail::GUID_s&& _guid);

                /*!
                 * @brief This function returns a constant reference to member guid
                 * @return Constant reference to member guid
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GUID_s& guid() const;

                /*!
                 * @brief This function returns a reference to member guid
                 * @return Reference to member guid
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::GUID_s& guid();
                /*!
                 * @brief This function sets a value in member data
                 * @param _data New value for member data
                 */
                eProsima_user_DllExport void data(
                        float _data);

                /*!
                 * @brief This function returns the value of member data
                 * @return Value of member data
                 */
                eProsima_user_DllExport float data() const;

                /*!
                 * @brief This function returns a reference to member data
                 * @return Reference to member data
                 */
                eProsima_user_DllExport float& data();


                /*!
                * @brief This function returns the maximum serialized size of an object
                * depending on the buffer alignment.
                * @param current_alignment Buffer alignment.
                * @return Maximum serialized size.
                */
                eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(
                        const eprosima::fastdds::statistics::EntityData& data,
                        size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(
                        eprosima::fastcdr::Cdr& cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(
                        eprosima::fastcdr::Cdr& cdr);



                /*!
                 * @brief This function returns the maximum serialized size of the Key of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function tells you if the Key has been defined for this type
                 */
                eProsima_user_DllExport static bool isKeyDefined();

                /*!
                 * @brief This function serializes the key members of an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serializeKey(
                        eprosima::fastcdr::Cdr& cdr) const;

            private:

                eprosima::fastdds::statistics::detail::GUID_s m_guid;
                float m_data;

            };
            /*!
             * @brief This class represents the structure PhysicalData defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class PhysicalData
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport PhysicalData();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~PhysicalData();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::PhysicalData that will be copied.
                 */
                eProsima_user_DllExport PhysicalData(
                        const PhysicalData& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::PhysicalData that will be copied.
                 */
                eProsima_user_DllExport PhysicalData(
                        PhysicalData&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::PhysicalData that will be copied.
                 */
                eProsima_user_DllExport PhysicalData& operator =(
                        const PhysicalData& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::PhysicalData that will be copied.
                 */
                eProsima_user_DllExport PhysicalData& operator =(
                        PhysicalData&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::PhysicalData object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const PhysicalData& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::PhysicalData object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const PhysicalData& x) const;

                /*!
                 * @brief This function copies the value in member participant_guid
                 * @param _participant_guid New value to be copied in member participant_guid
                 */
                eProsima_user_DllExport void participant_guid(
                        const eprosima::fastdds::statistics::detail::GUID_s& _participant_guid);

                /*!
                 * @brief This function moves the value in member participant_guid
                 * @param _participant_guid New value to be moved in member participant_guid
                 */
                eProsima_user_DllExport void participant_guid(
                        eprosima::fastdds::statistics::detail::GUID_s&& _participant_guid);

                /*!
                 * @brief This function returns a constant reference to member participant_guid
                 * @return Constant reference to member participant_guid
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::detail::GUID_s& participant_guid() const;

                /*!
                 * @brief This function returns a reference to member participant_guid
                 * @return Reference to member participant_guid
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::detail::GUID_s& participant_guid();
                /*!
                 * @brief This function copies the value in member host
                 * @param _host New value to be copied in member host
                 */
                eProsima_user_DllExport void host(
                        const std::string& _host);

                /*!
                 * @brief This function moves the value in member host
                 * @param _host New value to be moved in member host
                 */
                eProsima_user_DllExport void host(
                        std::string&& _host);

                /*!
                 * @brief This function returns a constant reference to member host
                 * @return Constant reference to member host
                 */
                eProsima_user_DllExport const std::string& host() const;

                /*!
                 * @brief This function returns a reference to member host
                 * @return Reference to member host
                 */
                eProsima_user_DllExport std::string& host();
                /*!
                 * @brief This function copies the value in member user
                 * @param _user New value to be copied in member user
                 */
                eProsima_user_DllExport void user(
                        const std::string& _user);

                /*!
                 * @brief This function moves the value in member user
                 * @param _user New value to be moved in member user
                 */
                eProsima_user_DllExport void user(
                        std::string&& _user);

                /*!
                 * @brief This function returns a constant reference to member user
                 * @return Constant reference to member user
                 */
                eProsima_user_DllExport const std::string& user() const;

                /*!
                 * @brief This function returns a reference to member user
                 * @return Reference to member user
                 */
                eProsima_user_DllExport std::string& user();
                /*!
                 * @brief This function copies the value in member process
                 * @param _process New value to be copied in member process
                 */
                eProsima_user_DllExport void process(
                        const std::string& _process);

                /*!
                 * @brief This function moves the value in member process
                 * @param _process New value to be moved in member process
                 */
                eProsima_user_DllExport void process(
                        std::string&& _process);

                /*!
                 * @brief This function returns a constant reference to member process
                 * @return Constant reference to member process
                 */
                eProsima_user_DllExport const std::string& process() const;

                /*!
                 * @brief This function returns a reference to member process
                 * @return Reference to member process
                 */
                eProsima_user_DllExport std::string& process();

                /*!
                * @brief This function returns the maximum serialized size of an object
                * depending on the buffer alignment.
                * @param current_alignment Buffer alignment.
                * @return Maximum serialized size.
                */
                eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(
                        const eprosima::fastdds::statistics::PhysicalData& data,
                        size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(
                        eprosima::fastcdr::Cdr& cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(
                        eprosima::fastcdr::Cdr& cdr);



                /*!
                 * @brief This function returns the maximum serialized size of the Key of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                        size_t current_alignment = 0);

                /*!
                 * @brief This function tells you if the Key has been defined for this type
                 */
                eProsima_user_DllExport static bool isKeyDefined();

                /*!
                 * @brief This function serializes the key members of an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serializeKey(
                        eprosima::fastcdr::Cdr& cdr) const;

            private:

                eprosima::fastdds::statistics::detail::GUID_s m_participant_guid;
                std::string m_host;
                std::string m_user;
                std::string m_process;

            };
            /*!
             * @brief This class represents the bitmask EventKind defined by the user in the IDL file.
             * @ingroup TYPES
             */
            enum EventKind : uint32_t
            {
                HISTORY2HISTORY_LATENCY = 0x01 << 0,
                NETWORK_LATENCY = 0x01 << 1,
                PUBLICATION_THROUGHPUT = 0x01 << 2,
                SUBSCRIPTION_THROUGHPUT = 0x01 << 3,
                RTPS_SENT = 0x01 << 4,
                RTPS_LOST = 0x01 << 5,
                RESENT_DATAS = 0x01 << 6,
                HEARTBEAT_COUNT = 0x01 << 7,
                ACKNACK_COUNT = 0x01 << 8,
                NACKFRAG_COUNT = 0x01 << 9,
                GAP_COUNT = 0x01 << 10,
                DATA_COUNT = 0x01 << 11,
                PDP_PACKETS = 0x01 << 12,
                EDP_PACKETS = 0x01 << 13,
                DISCOVERED_ENTITY = 0x01 << 14,
                SAMPLE_DATAS = 0x01 << 15,
                PHYSICAL_DATA = 0x01 << 16
            };
            /*!
             * @brief This class represents the union Data defined by the user in the IDL file.
             * @ingroup TYPES
             */
            class Data
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport Data();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~Data();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::Data that will be copied.
                 */
                eProsima_user_DllExport Data(
                        const Data& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object eprosima::fastdds::statistics::Data that will be copied.
                 */
                eProsima_user_DllExport Data(
                        Data&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::Data that will be copied.
                 */
                eProsima_user_DllExport Data& operator =(
                        const Data& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object eprosima::fastdds::statistics::Data that will be copied.
                 */
                eProsima_user_DllExport Data& operator =(
                        Data&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::Data object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const Data& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x eprosima::fastdds::statistics::Data object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const Data& x) const;

                /*!
                 * @brief This function sets the discriminator value.
                 * @param __d New value for the discriminator.
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
                 */
                eProsima_user_DllExport void _d(
                        eprosima::fastdds::statistics::EventKind __d);

                /*!
                 * @brief This function returns the value of the discriminator.
                 * @return Value of the discriminator
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::EventKind _d() const;

                /*!
                 * @brief This function returns a reference to the discriminator.
                 * @return Reference to the discriminator.
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::EventKind& _d();

                /*!
                 * @brief This function copies the value in member writer_reader_data
                 * @param _writer_reader_data New value to be copied in member writer_reader_data
                 */
                eProsima_user_DllExport void writer_reader_data(
                        const eprosima::fastdds::statistics::WriterReaderData& _writer_reader_data);

                /*!
                 * @brief This function moves the value in member writer_reader_data
                 * @param _writer_reader_data New value to be moved in member writer_reader_data
                 */
                eProsima_user_DllExport void writer_reader_data(
                        eprosima::fastdds::statistics::WriterReaderData&& _writer_reader_data);

                /*!
                 * @brief This function returns a constant reference to member writer_reader_data
                 * @return Constant reference to member writer_reader_data
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::WriterReaderData& writer_reader_data() const;

                /*!
                 * @brief This function returns a reference to member writer_reader_data
                 * @return Reference to member writer_reader_data
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::WriterReaderData& writer_reader_data();
                /*!
                 * @brief This function copies the value in member locator2locator_data
                 * @param _locator2locator_data New value to be copied in member locator2locator_data
                 */
                eProsima_user_DllExport void locator2locator_data(
                        const eprosima::fastdds::statistics::Locator2LocatorData& _locator2locator_data);

                /*!
                 * @brief This function moves the value in member locator2locator_data
                 * @param _locator2locator_data New value to be moved in member locator2locator_data
                 */
                eProsima_user_DllExport void locator2locator_data(
                        eprosima::fastdds::statistics::Locator2LocatorData&& _locator2locator_data);

                /*!
                 * @brief This function returns a constant reference to member locator2locator_data
                 * @return Constant reference to member locator2locator_data
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::Locator2LocatorData& locator2locator_data() const;

                /*!
                 * @brief This function returns a reference to member locator2locator_data
                 * @return Reference to member locator2locator_data
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::Locator2LocatorData& locator2locator_data();
                /*!
                 * @brief This function copies the value in member entity_data
                 * @param _entity_data New value to be copied in member entity_data
                 */
                eProsima_user_DllExport void entity_data(
                        const eprosima::fastdds::statistics::EntityData& _entity_data);

                /*!
                 * @brief This function moves the value in member entity_data
                 * @param _entity_data New value to be moved in member entity_data
                 */
                eProsima_user_DllExport void entity_data(
                        eprosima::fastdds::statistics::EntityData&& _entity_data);

                /*!
                 * @brief This function returns a constant reference to member entity_data
                 * @return Constant reference to member entity_data
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::EntityData& entity_data() const;

                /*!
                 * @brief This function returns a reference to member entity_data
                 * @return Reference to member entity_data
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::EntityData& entity_data();
                /*!
                 * @brief This function copies the value in member entity2locator_traffic
                 * @param _entity2locator_traffic New value to be copied in member entity2locator_traffic
                 */
                eProsima_user_DllExport void entity2locator_traffic(
                        const eprosima::fastdds::statistics::Entity2LocatorTraffic& _entity2locator_traffic);

                /*!
                 * @brief This function moves the value in member entity2locator_traffic
                 * @param _entity2locator_traffic New value to be moved in member entity2locator_traffic
                 */
                eProsima_user_DllExport void entity2locator_traffic(
                        eprosima::fastdds::statistics::Entity2LocatorTraffic&& _entity2locator_traffic);

                /*!
                 * @brief This function returns a constant reference to member entity2locator_traffic
                 * @return Constant reference to member entity2locator_traffic
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::Entity2LocatorTraffic& entity2locator_traffic() const;

                /*!
                 * @brief This function returns a reference to member entity2locator_traffic
                 * @return Reference to member entity2locator_traffic
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::Entity2LocatorTraffic& entity2locator_traffic();
                /*!
                 * @brief This function copies the value in member entity_count
                 * @param _entity_count New value to be copied in member entity_count
                 */
                eProsima_user_DllExport void entity_count(
                        const eprosima::fastdds::statistics::EntityCount& _entity_count);

                /*!
                 * @brief This function moves the value in member entity_count
                 * @param _entity_count New value to be moved in member entity_count
                 */
                eProsima_user_DllExport void entity_count(
                        eprosima::fastdds::statistics::EntityCount&& _entity_count);

                /*!
                 * @brief This function returns a constant reference to member entity_count
                 * @return Constant reference to member entity_count
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::EntityCount& entity_count() const;

                /*!
                 * @brief This function returns a reference to member entity_count
                 * @return Reference to member entity_count
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::EntityCount& entity_count();
                /*!
                 * @brief This function copies the value in member discovery_time
                 * @param _discovery_time New value to be copied in member discovery_time
                 */
                eProsima_user_DllExport void discovery_time(
                        const eprosima::fastdds::statistics::DiscoveryTime& _discovery_time);

                /*!
                 * @brief This function moves the value in member discovery_time
                 * @param _discovery_time New value to be moved in member discovery_time
                 */
                eProsima_user_DllExport void discovery_time(
                        eprosima::fastdds::statistics::DiscoveryTime&& _discovery_time);

                /*!
                 * @brief This function returns a constant reference to member discovery_time
                 * @return Constant reference to member discovery_time
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::DiscoveryTime& discovery_time() const;

                /*!
                 * @brief This function returns a reference to member discovery_time
                 * @return Reference to member discovery_time
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::DiscoveryTime& discovery_time();
                /*!
                 * @brief This function copies the value in member sample_identity_count
                 * @param _sample_identity_count New value to be copied in member sample_identity_count
                 */
                eProsima_user_DllExport void sample_identity_count(
                        const eprosima::fastdds::statistics::SampleIdentityCount& _sample_identity_count);

                /*!
                 * @brief This function moves the value in member sample_identity_count
                 * @param _sample_identity_count New value to be moved in member sample_identity_count
                 */
                eProsima_user_DllExport void sample_identity_count(
                        eprosima::fastdds::statistics::SampleIdentityCount&& _sample_identity_count);

                /*!
                 * @brief This function returns a constant reference to member sample_identity_count
                 * @return Constant reference to member sample_identity_count
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::SampleIdentityCount& sample_identity_count() const;

                /*!
                 * @brief This function returns a reference to member sample_identity_count
                 * @return Reference to member sample_identity_count
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::SampleIdentityCount& sample_identity_count();
                /*!
                 * @brief This function copies the value in member physical_data
                 * @param _physical_data New value to be copied in member physical_data
                 */
                eProsima_user_DllExport void physical_data(
                        const eprosima::fastdds::statistics::PhysicalData& _physical_data);

                /*!
                 * @brief This function moves the value in member physical_data
                 * @param _physical_data New value to be moved in member physical_data
                 */
                eProsima_user_DllExport void physical_data(
                        eprosima::fastdds::statistics::PhysicalData&& _physical_data);

                /*!
                 * @brief This function returns a constant reference to member physical_data
                 * @return Constant reference to member physical_data
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport const eprosima::fastdds::statistics::PhysicalData& physical_data() const;

                /*!
                 * @brief This function returns a reference to member physical_data
                 * @return Reference to member physical_data
                 * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
                 */
                eProsima_user_DllExport eprosima::fastdds::statistics::PhysicalData& physical_data();

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(
                        const eprosima::fastdds::statistics::Data& data,
                        size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(
                        eprosima::fastcdr::Cdr& cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(
                        eprosima::fastcdr::Cdr& cdr);




            private:

                eprosima::fastdds::statistics::EventKind m__d;

                eprosima::fastdds::statistics::WriterReaderData m_writer_reader_data;
                eprosima::fastdds::statistics::Locator2LocatorData m_locator2locator_data;
                eprosima::fastdds::statistics::EntityData m_entity_data;
                eprosima::fastdds::statistics::Entity2LocatorTraffic m_entity2locator_traffic;
                eprosima::fastdds::statistics::EntityCount m_entity_count;
                eprosima::fastdds::statistics::DiscoveryTime m_discovery_time;
                eprosima::fastdds::statistics::SampleIdentityCount m_sample_identity_count;
                eprosima::fastdds::statistics::PhysicalData m_physical_data;
            };
        } // namespace statistics
    } // namespace fastdds
} // namespace eprosima

#endif // _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_TYPES_H_