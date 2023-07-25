/*!
 * @file types.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "types.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define eprosima_fastdds_statistics_DiscoveryTime_max_cdr_typesize 828ULL;
#define eprosima_fastdds_statistics_PhysicalData_max_cdr_typesize 800ULL;

#define eprosima_fastdds_statistics_detail_Locator_s_max_cdr_typesize 25ULL;

#define eprosima_fastdds_statistics_detail_GuidPrefix_s_max_cdr_typesize 13ULL;
#define eprosima_fastdds_statistics_detail_SampleIdentity_s_max_cdr_typesize 28ULL;
#define eprosima_fastdds_statistics_EntityData_max_cdr_typesize 24ULL;
#define eprosima_fastdds_statistics_Entity2LocatorTraffic_max_cdr_typesize 66ULL;
#define eprosima_fastdds_statistics_detail_EntityId_s_max_cdr_typesize 5ULL;
#define eprosima_fastdds_statistics_EntityCount_max_cdr_typesize 32ULL;
#define eprosima_fastdds_statistics_WriterReaderData_max_cdr_typesize 40ULL;
#define eprosima_fastdds_statistics_SampleIdentityCount_max_cdr_typesize 40ULL;
#define eprosima_fastdds_statistics_Locator2LocatorData_max_cdr_typesize 60ULL;
#define eprosima_fastdds_statistics_detail_GUID_s_max_cdr_typesize 18ULL;
#define eprosima_fastdds_statistics_detail_SequenceNumber_s_max_cdr_typesize 8ULL;
#define eprosima_fastdds_statistics_DiscoveryTime_max_key_cdr_typesize 36ULL;
#define eprosima_fastdds_statistics_PhysicalData_max_key_cdr_typesize 18ULL;

#define eprosima_fastdds_statistics_detail_Locator_s_max_key_cdr_typesize 0ULL;

#define eprosima_fastdds_statistics_detail_GuidPrefix_s_max_key_cdr_typesize 0ULL;
#define eprosima_fastdds_statistics_detail_SampleIdentity_s_max_key_cdr_typesize 0ULL;
#define eprosima_fastdds_statistics_EntityData_max_key_cdr_typesize 18ULL;
#define eprosima_fastdds_statistics_Entity2LocatorTraffic_max_key_cdr_typesize 45ULL;
#define eprosima_fastdds_statistics_detail_EntityId_s_max_key_cdr_typesize 0ULL;
#define eprosima_fastdds_statistics_EntityCount_max_key_cdr_typesize 18ULL;
#define eprosima_fastdds_statistics_WriterReaderData_max_key_cdr_typesize 36ULL;
#define eprosima_fastdds_statistics_SampleIdentityCount_max_key_cdr_typesize 28ULL;
#define eprosima_fastdds_statistics_Locator2LocatorData_max_key_cdr_typesize 53ULL;
#define eprosima_fastdds_statistics_detail_GUID_s_max_key_cdr_typesize 0ULL;
#define eprosima_fastdds_statistics_detail_SequenceNumber_s_max_key_cdr_typesize 0ULL;

eprosima::fastdds::statistics::detail::EntityId_s::EntityId_s()
{
    // octet m_value
    memset(&m_value, 0, (4) * 1);

}

eprosima::fastdds::statistics::detail::EntityId_s::~EntityId_s()
{
}

eprosima::fastdds::statistics::detail::EntityId_s::EntityId_s(
        const EntityId_s& x)
{
    m_value = x.m_value;
}

eprosima::fastdds::statistics::detail::EntityId_s::EntityId_s(
        EntityId_s&& x) noexcept 
{
    m_value = std::move(x.m_value);
}

eprosima::fastdds::statistics::detail::EntityId_s& eprosima::fastdds::statistics::detail::EntityId_s::operator =(
        const EntityId_s& x)
{

    m_value = x.m_value;

    return *this;
}

eprosima::fastdds::statistics::detail::EntityId_s& eprosima::fastdds::statistics::detail::EntityId_s::operator =(
        EntityId_s&& x) noexcept
{

    m_value = std::move(x.m_value);

    return *this;
}

bool eprosima::fastdds::statistics::detail::EntityId_s::operator ==(
        const EntityId_s& x) const
{

    return (m_value == x.m_value);
}

bool eprosima::fastdds::statistics::detail::EntityId_s::operator !=(
        const EntityId_s& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::detail::EntityId_s::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_EntityId_s_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::detail::EntityId_s::getCdrSerializedSize(
        const eprosima::fastdds::statistics::detail::EntityId_s& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((4) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::detail::EntityId_s::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_value;


}

void eprosima::fastdds::statistics::detail::EntityId_s::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_value;

}

/*!
 * @brief This function copies the value in member value
 * @param _value New value to be copied in member value
 */
void eprosima::fastdds::statistics::detail::EntityId_s::value(
        const std::array<uint8_t, 4>& _value)
{
    m_value = _value;
}

/*!
 * @brief This function moves the value in member value
 * @param _value New value to be moved in member value
 */
void eprosima::fastdds::statistics::detail::EntityId_s::value(
        std::array<uint8_t, 4>&& _value)
{
    m_value = std::move(_value);
}

/*!
 * @brief This function returns a constant reference to member value
 * @return Constant reference to member value
 */
const std::array<uint8_t, 4>& eprosima::fastdds::statistics::detail::EntityId_s::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
std::array<uint8_t, 4>& eprosima::fastdds::statistics::detail::EntityId_s::value()
{
    return m_value;
}


size_t eprosima::fastdds::statistics::detail::EntityId_s::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_EntityId_s_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::detail::EntityId_s::isKeyDefined()
{
    return false;
}

void eprosima::fastdds::statistics::detail::EntityId_s::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

eprosima::fastdds::statistics::detail::GuidPrefix_s::GuidPrefix_s()
{
    // octet m_value
    memset(&m_value, 0, (12) * 1);

}

eprosima::fastdds::statistics::detail::GuidPrefix_s::~GuidPrefix_s()
{
}

eprosima::fastdds::statistics::detail::GuidPrefix_s::GuidPrefix_s(
        const GuidPrefix_s& x)
{
    m_value = x.m_value;
}

eprosima::fastdds::statistics::detail::GuidPrefix_s::GuidPrefix_s(
        GuidPrefix_s&& x) noexcept 
{
    m_value = std::move(x.m_value);
}

eprosima::fastdds::statistics::detail::GuidPrefix_s& eprosima::fastdds::statistics::detail::GuidPrefix_s::operator =(
        const GuidPrefix_s& x)
{

    m_value = x.m_value;

    return *this;
}

eprosima::fastdds::statistics::detail::GuidPrefix_s& eprosima::fastdds::statistics::detail::GuidPrefix_s::operator =(
        GuidPrefix_s&& x) noexcept
{

    m_value = std::move(x.m_value);

    return *this;
}

bool eprosima::fastdds::statistics::detail::GuidPrefix_s::operator ==(
        const GuidPrefix_s& x) const
{

    return (m_value == x.m_value);
}

bool eprosima::fastdds::statistics::detail::GuidPrefix_s::operator !=(
        const GuidPrefix_s& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::detail::GuidPrefix_s::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_GuidPrefix_s_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::detail::GuidPrefix_s::getCdrSerializedSize(
        const eprosima::fastdds::statistics::detail::GuidPrefix_s& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((12) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::detail::GuidPrefix_s::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_value;


}

void eprosima::fastdds::statistics::detail::GuidPrefix_s::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_value;

}

/*!
 * @brief This function copies the value in member value
 * @param _value New value to be copied in member value
 */
void eprosima::fastdds::statistics::detail::GuidPrefix_s::value(
        const std::array<uint8_t, 12>& _value)
{
    m_value = _value;
}

/*!
 * @brief This function moves the value in member value
 * @param _value New value to be moved in member value
 */
void eprosima::fastdds::statistics::detail::GuidPrefix_s::value(
        std::array<uint8_t, 12>&& _value)
{
    m_value = std::move(_value);
}

/*!
 * @brief This function returns a constant reference to member value
 * @return Constant reference to member value
 */
const std::array<uint8_t, 12>& eprosima::fastdds::statistics::detail::GuidPrefix_s::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
std::array<uint8_t, 12>& eprosima::fastdds::statistics::detail::GuidPrefix_s::value()
{
    return m_value;
}


size_t eprosima::fastdds::statistics::detail::GuidPrefix_s::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_GuidPrefix_s_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::detail::GuidPrefix_s::isKeyDefined()
{
    return false;
}

void eprosima::fastdds::statistics::detail::GuidPrefix_s::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

eprosima::fastdds::statistics::detail::GUID_s::GUID_s()
{
    // eprosima::fastdds::statistics::detail::GuidPrefix_s m_guidPrefix

    // eprosima::fastdds::statistics::detail::EntityId_s m_entityId


}

eprosima::fastdds::statistics::detail::GUID_s::~GUID_s()
{


}

eprosima::fastdds::statistics::detail::GUID_s::GUID_s(
        const GUID_s& x)
{
    m_guidPrefix = x.m_guidPrefix;
    m_entityId = x.m_entityId;
}

eprosima::fastdds::statistics::detail::GUID_s::GUID_s(
        GUID_s&& x) noexcept 
{
    m_guidPrefix = std::move(x.m_guidPrefix);
    m_entityId = std::move(x.m_entityId);
}

eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::detail::GUID_s::operator =(
        const GUID_s& x)
{

    m_guidPrefix = x.m_guidPrefix;
    m_entityId = x.m_entityId;

    return *this;
}

eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::detail::GUID_s::operator =(
        GUID_s&& x) noexcept
{

    m_guidPrefix = std::move(x.m_guidPrefix);
    m_entityId = std::move(x.m_entityId);

    return *this;
}

bool eprosima::fastdds::statistics::detail::GUID_s::operator ==(
        const GUID_s& x) const
{

    return (m_guidPrefix == x.m_guidPrefix && m_entityId == x.m_entityId);
}

bool eprosima::fastdds::statistics::detail::GUID_s::operator !=(
        const GUID_s& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::detail::GUID_s::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_GUID_s_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(
        const eprosima::fastdds::statistics::detail::GUID_s& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::GuidPrefix_s::getCdrSerializedSize(data.guidPrefix(), current_alignment);
    current_alignment += eprosima::fastdds::statistics::detail::EntityId_s::getCdrSerializedSize(data.entityId(), current_alignment);

    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::detail::GUID_s::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_guidPrefix;
    scdr << m_entityId;

}

void eprosima::fastdds::statistics::detail::GUID_s::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_guidPrefix;
    dcdr >> m_entityId;
}

/*!
 * @brief This function copies the value in member guidPrefix
 * @param _guidPrefix New value to be copied in member guidPrefix
 */
void eprosima::fastdds::statistics::detail::GUID_s::guidPrefix(
        const eprosima::fastdds::statistics::detail::GuidPrefix_s& _guidPrefix)
{
    m_guidPrefix = _guidPrefix;
}

/*!
 * @brief This function moves the value in member guidPrefix
 * @param _guidPrefix New value to be moved in member guidPrefix
 */
void eprosima::fastdds::statistics::detail::GUID_s::guidPrefix(
        eprosima::fastdds::statistics::detail::GuidPrefix_s&& _guidPrefix)
{
    m_guidPrefix = std::move(_guidPrefix);
}

/*!
 * @brief This function returns a constant reference to member guidPrefix
 * @return Constant reference to member guidPrefix
 */
const eprosima::fastdds::statistics::detail::GuidPrefix_s& eprosima::fastdds::statistics::detail::GUID_s::guidPrefix() const
{
    return m_guidPrefix;
}

/*!
 * @brief This function returns a reference to member guidPrefix
 * @return Reference to member guidPrefix
 */
eprosima::fastdds::statistics::detail::GuidPrefix_s& eprosima::fastdds::statistics::detail::GUID_s::guidPrefix()
{
    return m_guidPrefix;
}
/*!
 * @brief This function copies the value in member entityId
 * @param _entityId New value to be copied in member entityId
 */
void eprosima::fastdds::statistics::detail::GUID_s::entityId(
        const eprosima::fastdds::statistics::detail::EntityId_s& _entityId)
{
    m_entityId = _entityId;
}

/*!
 * @brief This function moves the value in member entityId
 * @param _entityId New value to be moved in member entityId
 */
void eprosima::fastdds::statistics::detail::GUID_s::entityId(
        eprosima::fastdds::statistics::detail::EntityId_s&& _entityId)
{
    m_entityId = std::move(_entityId);
}

/*!
 * @brief This function returns a constant reference to member entityId
 * @return Constant reference to member entityId
 */
const eprosima::fastdds::statistics::detail::EntityId_s& eprosima::fastdds::statistics::detail::GUID_s::entityId() const
{
    return m_entityId;
}

/*!
 * @brief This function returns a reference to member entityId
 * @return Reference to member entityId
 */
eprosima::fastdds::statistics::detail::EntityId_s& eprosima::fastdds::statistics::detail::GUID_s::entityId()
{
    return m_entityId;
}


size_t eprosima::fastdds::statistics::detail::GUID_s::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_GUID_s_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::detail::GUID_s::isKeyDefined()
{
    return false;
}

void eprosima::fastdds::statistics::detail::GUID_s::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

eprosima::fastdds::statistics::detail::SequenceNumber_s::SequenceNumber_s()
{
    // long m_high
    m_high = 0;
    // unsigned long m_low
    m_low = 0;

}

eprosima::fastdds::statistics::detail::SequenceNumber_s::~SequenceNumber_s()
{


}

eprosima::fastdds::statistics::detail::SequenceNumber_s::SequenceNumber_s(
        const SequenceNumber_s& x)
{
    m_high = x.m_high;
    m_low = x.m_low;
}

eprosima::fastdds::statistics::detail::SequenceNumber_s::SequenceNumber_s(
        SequenceNumber_s&& x) noexcept 
{
    m_high = x.m_high;
    m_low = x.m_low;
}

eprosima::fastdds::statistics::detail::SequenceNumber_s& eprosima::fastdds::statistics::detail::SequenceNumber_s::operator =(
        const SequenceNumber_s& x)
{

    m_high = x.m_high;
    m_low = x.m_low;

    return *this;
}

eprosima::fastdds::statistics::detail::SequenceNumber_s& eprosima::fastdds::statistics::detail::SequenceNumber_s::operator =(
        SequenceNumber_s&& x) noexcept
{

    m_high = x.m_high;
    m_low = x.m_low;

    return *this;
}

bool eprosima::fastdds::statistics::detail::SequenceNumber_s::operator ==(
        const SequenceNumber_s& x) const
{

    return (m_high == x.m_high && m_low == x.m_low);
}

bool eprosima::fastdds::statistics::detail::SequenceNumber_s::operator !=(
        const SequenceNumber_s& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::detail::SequenceNumber_s::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_SequenceNumber_s_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::detail::SequenceNumber_s::getCdrSerializedSize(
        const eprosima::fastdds::statistics::detail::SequenceNumber_s& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::detail::SequenceNumber_s::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_high;
    scdr << m_low;

}

void eprosima::fastdds::statistics::detail::SequenceNumber_s::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_high;
    dcdr >> m_low;
}

/*!
 * @brief This function sets a value in member high
 * @param _high New value for member high
 */
void eprosima::fastdds::statistics::detail::SequenceNumber_s::high(
        int32_t _high)
{
    m_high = _high;
}

/*!
 * @brief This function returns the value of member high
 * @return Value of member high
 */
int32_t eprosima::fastdds::statistics::detail::SequenceNumber_s::high() const
{
    return m_high;
}

/*!
 * @brief This function returns a reference to member high
 * @return Reference to member high
 */
int32_t& eprosima::fastdds::statistics::detail::SequenceNumber_s::high()
{
    return m_high;
}

/*!
 * @brief This function sets a value in member low
 * @param _low New value for member low
 */
void eprosima::fastdds::statistics::detail::SequenceNumber_s::low(
        uint32_t _low)
{
    m_low = _low;
}

/*!
 * @brief This function returns the value of member low
 * @return Value of member low
 */
uint32_t eprosima::fastdds::statistics::detail::SequenceNumber_s::low() const
{
    return m_low;
}

/*!
 * @brief This function returns a reference to member low
 * @return Reference to member low
 */
uint32_t& eprosima::fastdds::statistics::detail::SequenceNumber_s::low()
{
    return m_low;
}



size_t eprosima::fastdds::statistics::detail::SequenceNumber_s::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_SequenceNumber_s_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::detail::SequenceNumber_s::isKeyDefined()
{
    return false;
}

void eprosima::fastdds::statistics::detail::SequenceNumber_s::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

eprosima::fastdds::statistics::detail::SampleIdentity_s::SampleIdentity_s()
{
    // eprosima::fastdds::statistics::detail::GUID_s m_writer_guid

    // eprosima::fastdds::statistics::detail::SequenceNumber_s m_sequence_number


}

eprosima::fastdds::statistics::detail::SampleIdentity_s::~SampleIdentity_s()
{


}

eprosima::fastdds::statistics::detail::SampleIdentity_s::SampleIdentity_s(
        const SampleIdentity_s& x)
{
    m_writer_guid = x.m_writer_guid;
    m_sequence_number = x.m_sequence_number;
}

eprosima::fastdds::statistics::detail::SampleIdentity_s::SampleIdentity_s(
        SampleIdentity_s&& x) noexcept 
{
    m_writer_guid = std::move(x.m_writer_guid);
    m_sequence_number = std::move(x.m_sequence_number);
}

eprosima::fastdds::statistics::detail::SampleIdentity_s& eprosima::fastdds::statistics::detail::SampleIdentity_s::operator =(
        const SampleIdentity_s& x)
{

    m_writer_guid = x.m_writer_guid;
    m_sequence_number = x.m_sequence_number;

    return *this;
}

eprosima::fastdds::statistics::detail::SampleIdentity_s& eprosima::fastdds::statistics::detail::SampleIdentity_s::operator =(
        SampleIdentity_s&& x) noexcept
{

    m_writer_guid = std::move(x.m_writer_guid);
    m_sequence_number = std::move(x.m_sequence_number);

    return *this;
}

bool eprosima::fastdds::statistics::detail::SampleIdentity_s::operator ==(
        const SampleIdentity_s& x) const
{

    return (m_writer_guid == x.m_writer_guid && m_sequence_number == x.m_sequence_number);
}

bool eprosima::fastdds::statistics::detail::SampleIdentity_s::operator !=(
        const SampleIdentity_s& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::detail::SampleIdentity_s::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_SampleIdentity_s_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::detail::SampleIdentity_s::getCdrSerializedSize(
        const eprosima::fastdds::statistics::detail::SampleIdentity_s& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(data.writer_guid(), current_alignment);
    current_alignment += eprosima::fastdds::statistics::detail::SequenceNumber_s::getCdrSerializedSize(data.sequence_number(), current_alignment);

    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::detail::SampleIdentity_s::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_writer_guid;
    scdr << m_sequence_number;

}

void eprosima::fastdds::statistics::detail::SampleIdentity_s::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_writer_guid;
    dcdr >> m_sequence_number;
}

/*!
 * @brief This function copies the value in member writer_guid
 * @param _writer_guid New value to be copied in member writer_guid
 */
void eprosima::fastdds::statistics::detail::SampleIdentity_s::writer_guid(
        const eprosima::fastdds::statistics::detail::GUID_s& _writer_guid)
{
    m_writer_guid = _writer_guid;
}

/*!
 * @brief This function moves the value in member writer_guid
 * @param _writer_guid New value to be moved in member writer_guid
 */
void eprosima::fastdds::statistics::detail::SampleIdentity_s::writer_guid(
        eprosima::fastdds::statistics::detail::GUID_s&& _writer_guid)
{
    m_writer_guid = std::move(_writer_guid);
}

/*!
 * @brief This function returns a constant reference to member writer_guid
 * @return Constant reference to member writer_guid
 */
const eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::detail::SampleIdentity_s::writer_guid() const
{
    return m_writer_guid;
}

/*!
 * @brief This function returns a reference to member writer_guid
 * @return Reference to member writer_guid
 */
eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::detail::SampleIdentity_s::writer_guid()
{
    return m_writer_guid;
}
/*!
 * @brief This function copies the value in member sequence_number
 * @param _sequence_number New value to be copied in member sequence_number
 */
void eprosima::fastdds::statistics::detail::SampleIdentity_s::sequence_number(
        const eprosima::fastdds::statistics::detail::SequenceNumber_s& _sequence_number)
{
    m_sequence_number = _sequence_number;
}

/*!
 * @brief This function moves the value in member sequence_number
 * @param _sequence_number New value to be moved in member sequence_number
 */
void eprosima::fastdds::statistics::detail::SampleIdentity_s::sequence_number(
        eprosima::fastdds::statistics::detail::SequenceNumber_s&& _sequence_number)
{
    m_sequence_number = std::move(_sequence_number);
}

/*!
 * @brief This function returns a constant reference to member sequence_number
 * @return Constant reference to member sequence_number
 */
const eprosima::fastdds::statistics::detail::SequenceNumber_s& eprosima::fastdds::statistics::detail::SampleIdentity_s::sequence_number() const
{
    return m_sequence_number;
}

/*!
 * @brief This function returns a reference to member sequence_number
 * @return Reference to member sequence_number
 */
eprosima::fastdds::statistics::detail::SequenceNumber_s& eprosima::fastdds::statistics::detail::SampleIdentity_s::sequence_number()
{
    return m_sequence_number;
}


size_t eprosima::fastdds::statistics::detail::SampleIdentity_s::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_SampleIdentity_s_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::detail::SampleIdentity_s::isKeyDefined()
{
    return false;
}

void eprosima::fastdds::statistics::detail::SampleIdentity_s::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

eprosima::fastdds::statistics::detail::Locator_s::Locator_s()
{
    // long m_kind
    m_kind = 0;
    // unsigned long m_port
    m_port = 0;
    // octet m_address
    memset(&m_address, 0, (16) * 1);

}

eprosima::fastdds::statistics::detail::Locator_s::~Locator_s()
{



}

eprosima::fastdds::statistics::detail::Locator_s::Locator_s(
        const Locator_s& x)
{
    m_kind = x.m_kind;
    m_port = x.m_port;
    m_address = x.m_address;
}

eprosima::fastdds::statistics::detail::Locator_s::Locator_s(
        Locator_s&& x) noexcept 
{
    m_kind = x.m_kind;
    m_port = x.m_port;
    m_address = std::move(x.m_address);
}

eprosima::fastdds::statistics::detail::Locator_s& eprosima::fastdds::statistics::detail::Locator_s::operator =(
        const Locator_s& x)
{

    m_kind = x.m_kind;
    m_port = x.m_port;
    m_address = x.m_address;

    return *this;
}

eprosima::fastdds::statistics::detail::Locator_s& eprosima::fastdds::statistics::detail::Locator_s::operator =(
        Locator_s&& x) noexcept
{

    m_kind = x.m_kind;
    m_port = x.m_port;
    m_address = std::move(x.m_address);

    return *this;
}

bool eprosima::fastdds::statistics::detail::Locator_s::operator ==(
        const Locator_s& x) const
{

    return (m_kind == x.m_kind && m_port == x.m_port && m_address == x.m_address);
}

bool eprosima::fastdds::statistics::detail::Locator_s::operator !=(
        const Locator_s& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::detail::Locator_s::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_Locator_s_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::detail::Locator_s::getCdrSerializedSize(
        const eprosima::fastdds::statistics::detail::Locator_s& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((16) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::detail::Locator_s::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_kind;
    scdr << m_port;
    scdr << m_address;


}

void eprosima::fastdds::statistics::detail::Locator_s::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_kind;
    dcdr >> m_port;
    dcdr >> m_address;

}

/*!
 * @brief This function sets a value in member kind
 * @param _kind New value for member kind
 */
void eprosima::fastdds::statistics::detail::Locator_s::kind(
        int32_t _kind)
{
    m_kind = _kind;
}

/*!
 * @brief This function returns the value of member kind
 * @return Value of member kind
 */
int32_t eprosima::fastdds::statistics::detail::Locator_s::kind() const
{
    return m_kind;
}

/*!
 * @brief This function returns a reference to member kind
 * @return Reference to member kind
 */
int32_t& eprosima::fastdds::statistics::detail::Locator_s::kind()
{
    return m_kind;
}

/*!
 * @brief This function sets a value in member port
 * @param _port New value for member port
 */
void eprosima::fastdds::statistics::detail::Locator_s::port(
        uint32_t _port)
{
    m_port = _port;
}

/*!
 * @brief This function returns the value of member port
 * @return Value of member port
 */
uint32_t eprosima::fastdds::statistics::detail::Locator_s::port() const
{
    return m_port;
}

/*!
 * @brief This function returns a reference to member port
 * @return Reference to member port
 */
uint32_t& eprosima::fastdds::statistics::detail::Locator_s::port()
{
    return m_port;
}

/*!
 * @brief This function copies the value in member address
 * @param _address New value to be copied in member address
 */
void eprosima::fastdds::statistics::detail::Locator_s::address(
        const std::array<uint8_t, 16>& _address)
{
    m_address = _address;
}

/*!
 * @brief This function moves the value in member address
 * @param _address New value to be moved in member address
 */
void eprosima::fastdds::statistics::detail::Locator_s::address(
        std::array<uint8_t, 16>&& _address)
{
    m_address = std::move(_address);
}

/*!
 * @brief This function returns a constant reference to member address
 * @return Constant reference to member address
 */
const std::array<uint8_t, 16>& eprosima::fastdds::statistics::detail::Locator_s::address() const
{
    return m_address;
}

/*!
 * @brief This function returns a reference to member address
 * @return Reference to member address
 */
std::array<uint8_t, 16>& eprosima::fastdds::statistics::detail::Locator_s::address()
{
    return m_address;
}


size_t eprosima::fastdds::statistics::detail::Locator_s::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_detail_Locator_s_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::detail::Locator_s::isKeyDefined()
{
    return false;
}

void eprosima::fastdds::statistics::detail::Locator_s::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


eprosima::fastdds::statistics::DiscoveryTime::DiscoveryTime()
{
    // eprosima::fastdds::statistics::detail::GUID_s m_local_participant_guid

    // eprosima::fastdds::statistics::detail::GUID_s m_remote_entity_guid

    // unsigned long long m_time
    m_time = 0;
    // string m_host
    m_host ="";
    // string m_user
    m_user ="";
    // string m_process
    m_process ="";

}

eprosima::fastdds::statistics::DiscoveryTime::~DiscoveryTime()
{






}

eprosima::fastdds::statistics::DiscoveryTime::DiscoveryTime(
        const DiscoveryTime& x)
{
    m_local_participant_guid = x.m_local_participant_guid;
    m_remote_entity_guid = x.m_remote_entity_guid;
    m_time = x.m_time;
    m_host = x.m_host;
    m_user = x.m_user;
    m_process = x.m_process;
}

eprosima::fastdds::statistics::DiscoveryTime::DiscoveryTime(
        DiscoveryTime&& x) noexcept 
{
    m_local_participant_guid = std::move(x.m_local_participant_guid);
    m_remote_entity_guid = std::move(x.m_remote_entity_guid);
    m_time = x.m_time;
    m_host = std::move(x.m_host);
    m_user = std::move(x.m_user);
    m_process = std::move(x.m_process);
}

eprosima::fastdds::statistics::DiscoveryTime& eprosima::fastdds::statistics::DiscoveryTime::operator =(
        const DiscoveryTime& x)
{

    m_local_participant_guid = x.m_local_participant_guid;
    m_remote_entity_guid = x.m_remote_entity_guid;
    m_time = x.m_time;
    m_host = x.m_host;
    m_user = x.m_user;
    m_process = x.m_process;

    return *this;
}

eprosima::fastdds::statistics::DiscoveryTime& eprosima::fastdds::statistics::DiscoveryTime::operator =(
        DiscoveryTime&& x) noexcept
{

    m_local_participant_guid = std::move(x.m_local_participant_guid);
    m_remote_entity_guid = std::move(x.m_remote_entity_guid);
    m_time = x.m_time;
    m_host = std::move(x.m_host);
    m_user = std::move(x.m_user);
    m_process = std::move(x.m_process);

    return *this;
}

bool eprosima::fastdds::statistics::DiscoveryTime::operator ==(
        const DiscoveryTime& x) const
{

    return (m_local_participant_guid == x.m_local_participant_guid && m_remote_entity_guid == x.m_remote_entity_guid && m_time == x.m_time && m_host == x.m_host && m_user == x.m_user && m_process == x.m_process);
}

bool eprosima::fastdds::statistics::DiscoveryTime::operator !=(
        const DiscoveryTime& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::DiscoveryTime::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_DiscoveryTime_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::DiscoveryTime::getCdrSerializedSize(
        const eprosima::fastdds::statistics::DiscoveryTime& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(data.local_participant_guid(), current_alignment);
    current_alignment += eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(data.remote_entity_guid(), current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.host().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.user().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.process().size() + 1;


    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::DiscoveryTime::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_local_participant_guid;
    scdr << m_remote_entity_guid;
    scdr << m_time;
    scdr << m_host.c_str();
    scdr << m_user.c_str();
    scdr << m_process.c_str();

}

void eprosima::fastdds::statistics::DiscoveryTime::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_local_participant_guid;
    dcdr >> m_remote_entity_guid;
    dcdr >> m_time;
    dcdr >> m_host;
    dcdr >> m_user;
    dcdr >> m_process;
}

/*!
 * @brief This function copies the value in member local_participant_guid
 * @param _local_participant_guid New value to be copied in member local_participant_guid
 */
void eprosima::fastdds::statistics::DiscoveryTime::local_participant_guid(
        const eprosima::fastdds::statistics::detail::GUID_s& _local_participant_guid)
{
    m_local_participant_guid = _local_participant_guid;
}

/*!
 * @brief This function moves the value in member local_participant_guid
 * @param _local_participant_guid New value to be moved in member local_participant_guid
 */
void eprosima::fastdds::statistics::DiscoveryTime::local_participant_guid(
        eprosima::fastdds::statistics::detail::GUID_s&& _local_participant_guid)
{
    m_local_participant_guid = std::move(_local_participant_guid);
}

/*!
 * @brief This function returns a constant reference to member local_participant_guid
 * @return Constant reference to member local_participant_guid
 */
const eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::DiscoveryTime::local_participant_guid() const
{
    return m_local_participant_guid;
}

/*!
 * @brief This function returns a reference to member local_participant_guid
 * @return Reference to member local_participant_guid
 */
eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::DiscoveryTime::local_participant_guid()
{
    return m_local_participant_guid;
}
/*!
 * @brief This function copies the value in member remote_entity_guid
 * @param _remote_entity_guid New value to be copied in member remote_entity_guid
 */
void eprosima::fastdds::statistics::DiscoveryTime::remote_entity_guid(
        const eprosima::fastdds::statistics::detail::GUID_s& _remote_entity_guid)
{
    m_remote_entity_guid = _remote_entity_guid;
}

/*!
 * @brief This function moves the value in member remote_entity_guid
 * @param _remote_entity_guid New value to be moved in member remote_entity_guid
 */
void eprosima::fastdds::statistics::DiscoveryTime::remote_entity_guid(
        eprosima::fastdds::statistics::detail::GUID_s&& _remote_entity_guid)
{
    m_remote_entity_guid = std::move(_remote_entity_guid);
}

/*!
 * @brief This function returns a constant reference to member remote_entity_guid
 * @return Constant reference to member remote_entity_guid
 */
const eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::DiscoveryTime::remote_entity_guid() const
{
    return m_remote_entity_guid;
}

/*!
 * @brief This function returns a reference to member remote_entity_guid
 * @return Reference to member remote_entity_guid
 */
eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::DiscoveryTime::remote_entity_guid()
{
    return m_remote_entity_guid;
}
/*!
 * @brief This function sets a value in member time
 * @param _time New value for member time
 */
void eprosima::fastdds::statistics::DiscoveryTime::time(
        uint64_t _time)
{
    m_time = _time;
}

/*!
 * @brief This function returns the value of member time
 * @return Value of member time
 */
uint64_t eprosima::fastdds::statistics::DiscoveryTime::time() const
{
    return m_time;
}

/*!
 * @brief This function returns a reference to member time
 * @return Reference to member time
 */
uint64_t& eprosima::fastdds::statistics::DiscoveryTime::time()
{
    return m_time;
}

/*!
 * @brief This function copies the value in member host
 * @param _host New value to be copied in member host
 */
void eprosima::fastdds::statistics::DiscoveryTime::host(
        const std::string& _host)
{
    m_host = _host;
}

/*!
 * @brief This function moves the value in member host
 * @param _host New value to be moved in member host
 */
void eprosima::fastdds::statistics::DiscoveryTime::host(
        std::string&& _host)
{
    m_host = std::move(_host);
}

/*!
 * @brief This function returns a constant reference to member host
 * @return Constant reference to member host
 */
const std::string& eprosima::fastdds::statistics::DiscoveryTime::host() const
{
    return m_host;
}

/*!
 * @brief This function returns a reference to member host
 * @return Reference to member host
 */
std::string& eprosima::fastdds::statistics::DiscoveryTime::host()
{
    return m_host;
}
/*!
 * @brief This function copies the value in member user
 * @param _user New value to be copied in member user
 */
void eprosima::fastdds::statistics::DiscoveryTime::user(
        const std::string& _user)
{
    m_user = _user;
}

/*!
 * @brief This function moves the value in member user
 * @param _user New value to be moved in member user
 */
void eprosima::fastdds::statistics::DiscoveryTime::user(
        std::string&& _user)
{
    m_user = std::move(_user);
}

/*!
 * @brief This function returns a constant reference to member user
 * @return Constant reference to member user
 */
const std::string& eprosima::fastdds::statistics::DiscoveryTime::user() const
{
    return m_user;
}

/*!
 * @brief This function returns a reference to member user
 * @return Reference to member user
 */
std::string& eprosima::fastdds::statistics::DiscoveryTime::user()
{
    return m_user;
}
/*!
 * @brief This function copies the value in member process
 * @param _process New value to be copied in member process
 */
void eprosima::fastdds::statistics::DiscoveryTime::process(
        const std::string& _process)
{
    m_process = _process;
}

/*!
 * @brief This function moves the value in member process
 * @param _process New value to be moved in member process
 */
void eprosima::fastdds::statistics::DiscoveryTime::process(
        std::string&& _process)
{
    m_process = std::move(_process);
}

/*!
 * @brief This function returns a constant reference to member process
 * @return Constant reference to member process
 */
const std::string& eprosima::fastdds::statistics::DiscoveryTime::process() const
{
    return m_process;
}

/*!
 * @brief This function returns a reference to member process
 * @return Reference to member process
 */
std::string& eprosima::fastdds::statistics::DiscoveryTime::process()
{
    return m_process;
}


size_t eprosima::fastdds::statistics::DiscoveryTime::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_DiscoveryTime_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::DiscoveryTime::isKeyDefined()
{
    return true;
}

void eprosima::fastdds::statistics::DiscoveryTime::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
    m_local_participant_guid.serialize(scdr);    
   m_remote_entity_guid.serialize(scdr);    
 
 
 
  
}

eprosima::fastdds::statistics::EntityCount::EntityCount()
{
    // eprosima::fastdds::statistics::detail::GUID_s m_guid

    // unsigned long long m_count
    m_count = 0;

}

eprosima::fastdds::statistics::EntityCount::~EntityCount()
{


}

eprosima::fastdds::statistics::EntityCount::EntityCount(
        const EntityCount& x)
{
    m_guid = x.m_guid;
    m_count = x.m_count;
}

eprosima::fastdds::statistics::EntityCount::EntityCount(
        EntityCount&& x) noexcept 
{
    m_guid = std::move(x.m_guid);
    m_count = x.m_count;
}

eprosima::fastdds::statistics::EntityCount& eprosima::fastdds::statistics::EntityCount::operator =(
        const EntityCount& x)
{

    m_guid = x.m_guid;
    m_count = x.m_count;

    return *this;
}

eprosima::fastdds::statistics::EntityCount& eprosima::fastdds::statistics::EntityCount::operator =(
        EntityCount&& x) noexcept
{

    m_guid = std::move(x.m_guid);
    m_count = x.m_count;

    return *this;
}

bool eprosima::fastdds::statistics::EntityCount::operator ==(
        const EntityCount& x) const
{

    return (m_guid == x.m_guid && m_count == x.m_count);
}

bool eprosima::fastdds::statistics::EntityCount::operator !=(
        const EntityCount& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::EntityCount::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_EntityCount_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::EntityCount::getCdrSerializedSize(
        const eprosima::fastdds::statistics::EntityCount& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(data.guid(), current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::EntityCount::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_guid;
    scdr << m_count;

}

void eprosima::fastdds::statistics::EntityCount::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_guid;
    dcdr >> m_count;
}

/*!
 * @brief This function copies the value in member guid
 * @param _guid New value to be copied in member guid
 */
void eprosima::fastdds::statistics::EntityCount::guid(
        const eprosima::fastdds::statistics::detail::GUID_s& _guid)
{
    m_guid = _guid;
}

/*!
 * @brief This function moves the value in member guid
 * @param _guid New value to be moved in member guid
 */
void eprosima::fastdds::statistics::EntityCount::guid(
        eprosima::fastdds::statistics::detail::GUID_s&& _guid)
{
    m_guid = std::move(_guid);
}

/*!
 * @brief This function returns a constant reference to member guid
 * @return Constant reference to member guid
 */
const eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::EntityCount::guid() const
{
    return m_guid;
}

/*!
 * @brief This function returns a reference to member guid
 * @return Reference to member guid
 */
eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::EntityCount::guid()
{
    return m_guid;
}
/*!
 * @brief This function sets a value in member count
 * @param _count New value for member count
 */
void eprosima::fastdds::statistics::EntityCount::count(
        uint64_t _count)
{
    m_count = _count;
}

/*!
 * @brief This function returns the value of member count
 * @return Value of member count
 */
uint64_t eprosima::fastdds::statistics::EntityCount::count() const
{
    return m_count;
}

/*!
 * @brief This function returns a reference to member count
 * @return Reference to member count
 */
uint64_t& eprosima::fastdds::statistics::EntityCount::count()
{
    return m_count;
}



size_t eprosima::fastdds::statistics::EntityCount::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_EntityCount_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::EntityCount::isKeyDefined()
{
    return true;
}

void eprosima::fastdds::statistics::EntityCount::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
    m_guid.serialize(scdr);    
  
}

eprosima::fastdds::statistics::SampleIdentityCount::SampleIdentityCount()
{
    // eprosima::fastdds::statistics::detail::SampleIdentity_s m_sample_id

    // unsigned long long m_count
    m_count = 0;

}

eprosima::fastdds::statistics::SampleIdentityCount::~SampleIdentityCount()
{


}

eprosima::fastdds::statistics::SampleIdentityCount::SampleIdentityCount(
        const SampleIdentityCount& x)
{
    m_sample_id = x.m_sample_id;
    m_count = x.m_count;
}

eprosima::fastdds::statistics::SampleIdentityCount::SampleIdentityCount(
        SampleIdentityCount&& x) noexcept 
{
    m_sample_id = std::move(x.m_sample_id);
    m_count = x.m_count;
}

eprosima::fastdds::statistics::SampleIdentityCount& eprosima::fastdds::statistics::SampleIdentityCount::operator =(
        const SampleIdentityCount& x)
{

    m_sample_id = x.m_sample_id;
    m_count = x.m_count;

    return *this;
}

eprosima::fastdds::statistics::SampleIdentityCount& eprosima::fastdds::statistics::SampleIdentityCount::operator =(
        SampleIdentityCount&& x) noexcept
{

    m_sample_id = std::move(x.m_sample_id);
    m_count = x.m_count;

    return *this;
}

bool eprosima::fastdds::statistics::SampleIdentityCount::operator ==(
        const SampleIdentityCount& x) const
{

    return (m_sample_id == x.m_sample_id && m_count == x.m_count);
}

bool eprosima::fastdds::statistics::SampleIdentityCount::operator !=(
        const SampleIdentityCount& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::SampleIdentityCount::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_SampleIdentityCount_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::SampleIdentityCount::getCdrSerializedSize(
        const eprosima::fastdds::statistics::SampleIdentityCount& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::SampleIdentity_s::getCdrSerializedSize(data.sample_id(), current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::SampleIdentityCount::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_sample_id;
    scdr << m_count;

}

void eprosima::fastdds::statistics::SampleIdentityCount::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_sample_id;
    dcdr >> m_count;
}

/*!
 * @brief This function copies the value in member sample_id
 * @param _sample_id New value to be copied in member sample_id
 */
void eprosima::fastdds::statistics::SampleIdentityCount::sample_id(
        const eprosima::fastdds::statistics::detail::SampleIdentity_s& _sample_id)
{
    m_sample_id = _sample_id;
}

/*!
 * @brief This function moves the value in member sample_id
 * @param _sample_id New value to be moved in member sample_id
 */
void eprosima::fastdds::statistics::SampleIdentityCount::sample_id(
        eprosima::fastdds::statistics::detail::SampleIdentity_s&& _sample_id)
{
    m_sample_id = std::move(_sample_id);
}

/*!
 * @brief This function returns a constant reference to member sample_id
 * @return Constant reference to member sample_id
 */
const eprosima::fastdds::statistics::detail::SampleIdentity_s& eprosima::fastdds::statistics::SampleIdentityCount::sample_id() const
{
    return m_sample_id;
}

/*!
 * @brief This function returns a reference to member sample_id
 * @return Reference to member sample_id
 */
eprosima::fastdds::statistics::detail::SampleIdentity_s& eprosima::fastdds::statistics::SampleIdentityCount::sample_id()
{
    return m_sample_id;
}
/*!
 * @brief This function sets a value in member count
 * @param _count New value for member count
 */
void eprosima::fastdds::statistics::SampleIdentityCount::count(
        uint64_t _count)
{
    m_count = _count;
}

/*!
 * @brief This function returns the value of member count
 * @return Value of member count
 */
uint64_t eprosima::fastdds::statistics::SampleIdentityCount::count() const
{
    return m_count;
}

/*!
 * @brief This function returns a reference to member count
 * @return Reference to member count
 */
uint64_t& eprosima::fastdds::statistics::SampleIdentityCount::count()
{
    return m_count;
}



size_t eprosima::fastdds::statistics::SampleIdentityCount::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_SampleIdentityCount_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::SampleIdentityCount::isKeyDefined()
{
    return true;
}

void eprosima::fastdds::statistics::SampleIdentityCount::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
    m_sample_id.serialize(scdr);    
  
}

eprosima::fastdds::statistics::Entity2LocatorTraffic::Entity2LocatorTraffic()
{
    // eprosima::fastdds::statistics::detail::GUID_s m_src_guid

    // eprosima::fastdds::statistics::detail::Locator_s m_dst_locator

    // unsigned long long m_packet_count
    m_packet_count = 0;
    // unsigned long long m_byte_count
    m_byte_count = 0;
    // short m_byte_magnitude_order
    m_byte_magnitude_order = 0;

}

eprosima::fastdds::statistics::Entity2LocatorTraffic::~Entity2LocatorTraffic()
{





}

eprosima::fastdds::statistics::Entity2LocatorTraffic::Entity2LocatorTraffic(
        const Entity2LocatorTraffic& x)
{
    m_src_guid = x.m_src_guid;
    m_dst_locator = x.m_dst_locator;
    m_packet_count = x.m_packet_count;
    m_byte_count = x.m_byte_count;
    m_byte_magnitude_order = x.m_byte_magnitude_order;
}

eprosima::fastdds::statistics::Entity2LocatorTraffic::Entity2LocatorTraffic(
        Entity2LocatorTraffic&& x) noexcept 
{
    m_src_guid = std::move(x.m_src_guid);
    m_dst_locator = std::move(x.m_dst_locator);
    m_packet_count = x.m_packet_count;
    m_byte_count = x.m_byte_count;
    m_byte_magnitude_order = x.m_byte_magnitude_order;
}

eprosima::fastdds::statistics::Entity2LocatorTraffic& eprosima::fastdds::statistics::Entity2LocatorTraffic::operator =(
        const Entity2LocatorTraffic& x)
{

    m_src_guid = x.m_src_guid;
    m_dst_locator = x.m_dst_locator;
    m_packet_count = x.m_packet_count;
    m_byte_count = x.m_byte_count;
    m_byte_magnitude_order = x.m_byte_magnitude_order;

    return *this;
}

eprosima::fastdds::statistics::Entity2LocatorTraffic& eprosima::fastdds::statistics::Entity2LocatorTraffic::operator =(
        Entity2LocatorTraffic&& x) noexcept
{

    m_src_guid = std::move(x.m_src_guid);
    m_dst_locator = std::move(x.m_dst_locator);
    m_packet_count = x.m_packet_count;
    m_byte_count = x.m_byte_count;
    m_byte_magnitude_order = x.m_byte_magnitude_order;

    return *this;
}

bool eprosima::fastdds::statistics::Entity2LocatorTraffic::operator ==(
        const Entity2LocatorTraffic& x) const
{

    return (m_src_guid == x.m_src_guid && m_dst_locator == x.m_dst_locator && m_packet_count == x.m_packet_count && m_byte_count == x.m_byte_count && m_byte_magnitude_order == x.m_byte_magnitude_order);
}

bool eprosima::fastdds::statistics::Entity2LocatorTraffic::operator !=(
        const Entity2LocatorTraffic& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::Entity2LocatorTraffic::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_Entity2LocatorTraffic_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::Entity2LocatorTraffic::getCdrSerializedSize(
        const eprosima::fastdds::statistics::Entity2LocatorTraffic& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(data.src_guid(), current_alignment);
    current_alignment += eprosima::fastdds::statistics::detail::Locator_s::getCdrSerializedSize(data.dst_locator(), current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);



    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::Entity2LocatorTraffic::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_src_guid;
    scdr << m_dst_locator;
    scdr << m_packet_count;
    scdr << m_byte_count;
    scdr << m_byte_magnitude_order;

}

void eprosima::fastdds::statistics::Entity2LocatorTraffic::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_src_guid;
    dcdr >> m_dst_locator;
    dcdr >> m_packet_count;
    dcdr >> m_byte_count;
    dcdr >> m_byte_magnitude_order;
}

/*!
 * @brief This function copies the value in member src_guid
 * @param _src_guid New value to be copied in member src_guid
 */
void eprosima::fastdds::statistics::Entity2LocatorTraffic::src_guid(
        const eprosima::fastdds::statistics::detail::GUID_s& _src_guid)
{
    m_src_guid = _src_guid;
}

/*!
 * @brief This function moves the value in member src_guid
 * @param _src_guid New value to be moved in member src_guid
 */
void eprosima::fastdds::statistics::Entity2LocatorTraffic::src_guid(
        eprosima::fastdds::statistics::detail::GUID_s&& _src_guid)
{
    m_src_guid = std::move(_src_guid);
}

/*!
 * @brief This function returns a constant reference to member src_guid
 * @return Constant reference to member src_guid
 */
const eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::Entity2LocatorTraffic::src_guid() const
{
    return m_src_guid;
}

/*!
 * @brief This function returns a reference to member src_guid
 * @return Reference to member src_guid
 */
eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::Entity2LocatorTraffic::src_guid()
{
    return m_src_guid;
}
/*!
 * @brief This function copies the value in member dst_locator
 * @param _dst_locator New value to be copied in member dst_locator
 */
void eprosima::fastdds::statistics::Entity2LocatorTraffic::dst_locator(
        const eprosima::fastdds::statistics::detail::Locator_s& _dst_locator)
{
    m_dst_locator = _dst_locator;
}

/*!
 * @brief This function moves the value in member dst_locator
 * @param _dst_locator New value to be moved in member dst_locator
 */
void eprosima::fastdds::statistics::Entity2LocatorTraffic::dst_locator(
        eprosima::fastdds::statistics::detail::Locator_s&& _dst_locator)
{
    m_dst_locator = std::move(_dst_locator);
}

/*!
 * @brief This function returns a constant reference to member dst_locator
 * @return Constant reference to member dst_locator
 */
const eprosima::fastdds::statistics::detail::Locator_s& eprosima::fastdds::statistics::Entity2LocatorTraffic::dst_locator() const
{
    return m_dst_locator;
}

/*!
 * @brief This function returns a reference to member dst_locator
 * @return Reference to member dst_locator
 */
eprosima::fastdds::statistics::detail::Locator_s& eprosima::fastdds::statistics::Entity2LocatorTraffic::dst_locator()
{
    return m_dst_locator;
}
/*!
 * @brief This function sets a value in member packet_count
 * @param _packet_count New value for member packet_count
 */
void eprosima::fastdds::statistics::Entity2LocatorTraffic::packet_count(
        uint64_t _packet_count)
{
    m_packet_count = _packet_count;
}

/*!
 * @brief This function returns the value of member packet_count
 * @return Value of member packet_count
 */
uint64_t eprosima::fastdds::statistics::Entity2LocatorTraffic::packet_count() const
{
    return m_packet_count;
}

/*!
 * @brief This function returns a reference to member packet_count
 * @return Reference to member packet_count
 */
uint64_t& eprosima::fastdds::statistics::Entity2LocatorTraffic::packet_count()
{
    return m_packet_count;
}

/*!
 * @brief This function sets a value in member byte_count
 * @param _byte_count New value for member byte_count
 */
void eprosima::fastdds::statistics::Entity2LocatorTraffic::byte_count(
        uint64_t _byte_count)
{
    m_byte_count = _byte_count;
}

/*!
 * @brief This function returns the value of member byte_count
 * @return Value of member byte_count
 */
uint64_t eprosima::fastdds::statistics::Entity2LocatorTraffic::byte_count() const
{
    return m_byte_count;
}

/*!
 * @brief This function returns a reference to member byte_count
 * @return Reference to member byte_count
 */
uint64_t& eprosima::fastdds::statistics::Entity2LocatorTraffic::byte_count()
{
    return m_byte_count;
}

/*!
 * @brief This function sets a value in member byte_magnitude_order
 * @param _byte_magnitude_order New value for member byte_magnitude_order
 */
void eprosima::fastdds::statistics::Entity2LocatorTraffic::byte_magnitude_order(
        int16_t _byte_magnitude_order)
{
    m_byte_magnitude_order = _byte_magnitude_order;
}

/*!
 * @brief This function returns the value of member byte_magnitude_order
 * @return Value of member byte_magnitude_order
 */
int16_t eprosima::fastdds::statistics::Entity2LocatorTraffic::byte_magnitude_order() const
{
    return m_byte_magnitude_order;
}

/*!
 * @brief This function returns a reference to member byte_magnitude_order
 * @return Reference to member byte_magnitude_order
 */
int16_t& eprosima::fastdds::statistics::Entity2LocatorTraffic::byte_magnitude_order()
{
    return m_byte_magnitude_order;
}



size_t eprosima::fastdds::statistics::Entity2LocatorTraffic::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_Entity2LocatorTraffic_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::Entity2LocatorTraffic::isKeyDefined()
{
    return true;
}

void eprosima::fastdds::statistics::Entity2LocatorTraffic::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
    m_src_guid.serialize(scdr);    
   m_dst_locator.serialize(scdr);    
 
 
  
}

eprosima::fastdds::statistics::WriterReaderData::WriterReaderData()
{
    // eprosima::fastdds::statistics::detail::GUID_s m_writer_guid

    // eprosima::fastdds::statistics::detail::GUID_s m_reader_guid

    // float m_data
    m_data = 0.0;

}

eprosima::fastdds::statistics::WriterReaderData::~WriterReaderData()
{



}

eprosima::fastdds::statistics::WriterReaderData::WriterReaderData(
        const WriterReaderData& x)
{
    m_writer_guid = x.m_writer_guid;
    m_reader_guid = x.m_reader_guid;
    m_data = x.m_data;
}

eprosima::fastdds::statistics::WriterReaderData::WriterReaderData(
        WriterReaderData&& x) noexcept 
{
    m_writer_guid = std::move(x.m_writer_guid);
    m_reader_guid = std::move(x.m_reader_guid);
    m_data = x.m_data;
}

eprosima::fastdds::statistics::WriterReaderData& eprosima::fastdds::statistics::WriterReaderData::operator =(
        const WriterReaderData& x)
{

    m_writer_guid = x.m_writer_guid;
    m_reader_guid = x.m_reader_guid;
    m_data = x.m_data;

    return *this;
}

eprosima::fastdds::statistics::WriterReaderData& eprosima::fastdds::statistics::WriterReaderData::operator =(
        WriterReaderData&& x) noexcept
{

    m_writer_guid = std::move(x.m_writer_guid);
    m_reader_guid = std::move(x.m_reader_guid);
    m_data = x.m_data;

    return *this;
}

bool eprosima::fastdds::statistics::WriterReaderData::operator ==(
        const WriterReaderData& x) const
{

    return (m_writer_guid == x.m_writer_guid && m_reader_guid == x.m_reader_guid && m_data == x.m_data);
}

bool eprosima::fastdds::statistics::WriterReaderData::operator !=(
        const WriterReaderData& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::WriterReaderData::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_WriterReaderData_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::WriterReaderData::getCdrSerializedSize(
        const eprosima::fastdds::statistics::WriterReaderData& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(data.writer_guid(), current_alignment);
    current_alignment += eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(data.reader_guid(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::WriterReaderData::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_writer_guid;
    scdr << m_reader_guid;
    scdr << m_data;

}

void eprosima::fastdds::statistics::WriterReaderData::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_writer_guid;
    dcdr >> m_reader_guid;
    dcdr >> m_data;
}

/*!
 * @brief This function copies the value in member writer_guid
 * @param _writer_guid New value to be copied in member writer_guid
 */
void eprosima::fastdds::statistics::WriterReaderData::writer_guid(
        const eprosima::fastdds::statistics::detail::GUID_s& _writer_guid)
{
    m_writer_guid = _writer_guid;
}

/*!
 * @brief This function moves the value in member writer_guid
 * @param _writer_guid New value to be moved in member writer_guid
 */
void eprosima::fastdds::statistics::WriterReaderData::writer_guid(
        eprosima::fastdds::statistics::detail::GUID_s&& _writer_guid)
{
    m_writer_guid = std::move(_writer_guid);
}

/*!
 * @brief This function returns a constant reference to member writer_guid
 * @return Constant reference to member writer_guid
 */
const eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::WriterReaderData::writer_guid() const
{
    return m_writer_guid;
}

/*!
 * @brief This function returns a reference to member writer_guid
 * @return Reference to member writer_guid
 */
eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::WriterReaderData::writer_guid()
{
    return m_writer_guid;
}
/*!
 * @brief This function copies the value in member reader_guid
 * @param _reader_guid New value to be copied in member reader_guid
 */
void eprosima::fastdds::statistics::WriterReaderData::reader_guid(
        const eprosima::fastdds::statistics::detail::GUID_s& _reader_guid)
{
    m_reader_guid = _reader_guid;
}

/*!
 * @brief This function moves the value in member reader_guid
 * @param _reader_guid New value to be moved in member reader_guid
 */
void eprosima::fastdds::statistics::WriterReaderData::reader_guid(
        eprosima::fastdds::statistics::detail::GUID_s&& _reader_guid)
{
    m_reader_guid = std::move(_reader_guid);
}

/*!
 * @brief This function returns a constant reference to member reader_guid
 * @return Constant reference to member reader_guid
 */
const eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::WriterReaderData::reader_guid() const
{
    return m_reader_guid;
}

/*!
 * @brief This function returns a reference to member reader_guid
 * @return Reference to member reader_guid
 */
eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::WriterReaderData::reader_guid()
{
    return m_reader_guid;
}
/*!
 * @brief This function sets a value in member data
 * @param _data New value for member data
 */
void eprosima::fastdds::statistics::WriterReaderData::data(
        float _data)
{
    m_data = _data;
}

/*!
 * @brief This function returns the value of member data
 * @return Value of member data
 */
float eprosima::fastdds::statistics::WriterReaderData::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
float& eprosima::fastdds::statistics::WriterReaderData::data()
{
    return m_data;
}



size_t eprosima::fastdds::statistics::WriterReaderData::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_WriterReaderData_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::WriterReaderData::isKeyDefined()
{
    return true;
}

void eprosima::fastdds::statistics::WriterReaderData::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
    m_writer_guid.serialize(scdr);    
   m_reader_guid.serialize(scdr);    
  
}

eprosima::fastdds::statistics::Locator2LocatorData::Locator2LocatorData()
{
    // eprosima::fastdds::statistics::detail::Locator_s m_src_locator

    // eprosima::fastdds::statistics::detail::Locator_s m_dst_locator

    // float m_data
    m_data = 0.0;

}

eprosima::fastdds::statistics::Locator2LocatorData::~Locator2LocatorData()
{



}

eprosima::fastdds::statistics::Locator2LocatorData::Locator2LocatorData(
        const Locator2LocatorData& x)
{
    m_src_locator = x.m_src_locator;
    m_dst_locator = x.m_dst_locator;
    m_data = x.m_data;
}

eprosima::fastdds::statistics::Locator2LocatorData::Locator2LocatorData(
        Locator2LocatorData&& x) noexcept 
{
    m_src_locator = std::move(x.m_src_locator);
    m_dst_locator = std::move(x.m_dst_locator);
    m_data = x.m_data;
}

eprosima::fastdds::statistics::Locator2LocatorData& eprosima::fastdds::statistics::Locator2LocatorData::operator =(
        const Locator2LocatorData& x)
{

    m_src_locator = x.m_src_locator;
    m_dst_locator = x.m_dst_locator;
    m_data = x.m_data;

    return *this;
}

eprosima::fastdds::statistics::Locator2LocatorData& eprosima::fastdds::statistics::Locator2LocatorData::operator =(
        Locator2LocatorData&& x) noexcept
{

    m_src_locator = std::move(x.m_src_locator);
    m_dst_locator = std::move(x.m_dst_locator);
    m_data = x.m_data;

    return *this;
}

bool eprosima::fastdds::statistics::Locator2LocatorData::operator ==(
        const Locator2LocatorData& x) const
{

    return (m_src_locator == x.m_src_locator && m_dst_locator == x.m_dst_locator && m_data == x.m_data);
}

bool eprosima::fastdds::statistics::Locator2LocatorData::operator !=(
        const Locator2LocatorData& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::Locator2LocatorData::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_Locator2LocatorData_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::Locator2LocatorData::getCdrSerializedSize(
        const eprosima::fastdds::statistics::Locator2LocatorData& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::Locator_s::getCdrSerializedSize(data.src_locator(), current_alignment);
    current_alignment += eprosima::fastdds::statistics::detail::Locator_s::getCdrSerializedSize(data.dst_locator(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::Locator2LocatorData::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_src_locator;
    scdr << m_dst_locator;
    scdr << m_data;

}

void eprosima::fastdds::statistics::Locator2LocatorData::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_src_locator;
    dcdr >> m_dst_locator;
    dcdr >> m_data;
}

/*!
 * @brief This function copies the value in member src_locator
 * @param _src_locator New value to be copied in member src_locator
 */
void eprosima::fastdds::statistics::Locator2LocatorData::src_locator(
        const eprosima::fastdds::statistics::detail::Locator_s& _src_locator)
{
    m_src_locator = _src_locator;
}

/*!
 * @brief This function moves the value in member src_locator
 * @param _src_locator New value to be moved in member src_locator
 */
void eprosima::fastdds::statistics::Locator2LocatorData::src_locator(
        eprosima::fastdds::statistics::detail::Locator_s&& _src_locator)
{
    m_src_locator = std::move(_src_locator);
}

/*!
 * @brief This function returns a constant reference to member src_locator
 * @return Constant reference to member src_locator
 */
const eprosima::fastdds::statistics::detail::Locator_s& eprosima::fastdds::statistics::Locator2LocatorData::src_locator() const
{
    return m_src_locator;
}

/*!
 * @brief This function returns a reference to member src_locator
 * @return Reference to member src_locator
 */
eprosima::fastdds::statistics::detail::Locator_s& eprosima::fastdds::statistics::Locator2LocatorData::src_locator()
{
    return m_src_locator;
}
/*!
 * @brief This function copies the value in member dst_locator
 * @param _dst_locator New value to be copied in member dst_locator
 */
void eprosima::fastdds::statistics::Locator2LocatorData::dst_locator(
        const eprosima::fastdds::statistics::detail::Locator_s& _dst_locator)
{
    m_dst_locator = _dst_locator;
}

/*!
 * @brief This function moves the value in member dst_locator
 * @param _dst_locator New value to be moved in member dst_locator
 */
void eprosima::fastdds::statistics::Locator2LocatorData::dst_locator(
        eprosima::fastdds::statistics::detail::Locator_s&& _dst_locator)
{
    m_dst_locator = std::move(_dst_locator);
}

/*!
 * @brief This function returns a constant reference to member dst_locator
 * @return Constant reference to member dst_locator
 */
const eprosima::fastdds::statistics::detail::Locator_s& eprosima::fastdds::statistics::Locator2LocatorData::dst_locator() const
{
    return m_dst_locator;
}

/*!
 * @brief This function returns a reference to member dst_locator
 * @return Reference to member dst_locator
 */
eprosima::fastdds::statistics::detail::Locator_s& eprosima::fastdds::statistics::Locator2LocatorData::dst_locator()
{
    return m_dst_locator;
}
/*!
 * @brief This function sets a value in member data
 * @param _data New value for member data
 */
void eprosima::fastdds::statistics::Locator2LocatorData::data(
        float _data)
{
    m_data = _data;
}

/*!
 * @brief This function returns the value of member data
 * @return Value of member data
 */
float eprosima::fastdds::statistics::Locator2LocatorData::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
float& eprosima::fastdds::statistics::Locator2LocatorData::data()
{
    return m_data;
}



size_t eprosima::fastdds::statistics::Locator2LocatorData::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_Locator2LocatorData_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::Locator2LocatorData::isKeyDefined()
{
    return true;
}

void eprosima::fastdds::statistics::Locator2LocatorData::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
    m_src_locator.serialize(scdr);    
   m_dst_locator.serialize(scdr);    
  
}

eprosima::fastdds::statistics::EntityData::EntityData()
{
    // eprosima::fastdds::statistics::detail::GUID_s m_guid

    // float m_data
    m_data = 0.0;

}

eprosima::fastdds::statistics::EntityData::~EntityData()
{


}

eprosima::fastdds::statistics::EntityData::EntityData(
        const EntityData& x)
{
    m_guid = x.m_guid;
    m_data = x.m_data;
}

eprosima::fastdds::statistics::EntityData::EntityData(
        EntityData&& x) noexcept 
{
    m_guid = std::move(x.m_guid);
    m_data = x.m_data;
}

eprosima::fastdds::statistics::EntityData& eprosima::fastdds::statistics::EntityData::operator =(
        const EntityData& x)
{

    m_guid = x.m_guid;
    m_data = x.m_data;

    return *this;
}

eprosima::fastdds::statistics::EntityData& eprosima::fastdds::statistics::EntityData::operator =(
        EntityData&& x) noexcept
{

    m_guid = std::move(x.m_guid);
    m_data = x.m_data;

    return *this;
}

bool eprosima::fastdds::statistics::EntityData::operator ==(
        const EntityData& x) const
{

    return (m_guid == x.m_guid && m_data == x.m_data);
}

bool eprosima::fastdds::statistics::EntityData::operator !=(
        const EntityData& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::EntityData::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_EntityData_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::EntityData::getCdrSerializedSize(
        const eprosima::fastdds::statistics::EntityData& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(data.guid(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::EntityData::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_guid;
    scdr << m_data;

}

void eprosima::fastdds::statistics::EntityData::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_guid;
    dcdr >> m_data;
}

/*!
 * @brief This function copies the value in member guid
 * @param _guid New value to be copied in member guid
 */
void eprosima::fastdds::statistics::EntityData::guid(
        const eprosima::fastdds::statistics::detail::GUID_s& _guid)
{
    m_guid = _guid;
}

/*!
 * @brief This function moves the value in member guid
 * @param _guid New value to be moved in member guid
 */
void eprosima::fastdds::statistics::EntityData::guid(
        eprosima::fastdds::statistics::detail::GUID_s&& _guid)
{
    m_guid = std::move(_guid);
}

/*!
 * @brief This function returns a constant reference to member guid
 * @return Constant reference to member guid
 */
const eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::EntityData::guid() const
{
    return m_guid;
}

/*!
 * @brief This function returns a reference to member guid
 * @return Reference to member guid
 */
eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::EntityData::guid()
{
    return m_guid;
}
/*!
 * @brief This function sets a value in member data
 * @param _data New value for member data
 */
void eprosima::fastdds::statistics::EntityData::data(
        float _data)
{
    m_data = _data;
}

/*!
 * @brief This function returns the value of member data
 * @return Value of member data
 */
float eprosima::fastdds::statistics::EntityData::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
float& eprosima::fastdds::statistics::EntityData::data()
{
    return m_data;
}



size_t eprosima::fastdds::statistics::EntityData::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_EntityData_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::EntityData::isKeyDefined()
{
    return true;
}

void eprosima::fastdds::statistics::EntityData::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
    m_guid.serialize(scdr);    
  
}

eprosima::fastdds::statistics::PhysicalData::PhysicalData()
{
    // eprosima::fastdds::statistics::detail::GUID_s m_participant_guid

    // string m_host
    m_host ="";
    // string m_user
    m_user ="";
    // string m_process
    m_process ="";

}

eprosima::fastdds::statistics::PhysicalData::~PhysicalData()
{




}

eprosima::fastdds::statistics::PhysicalData::PhysicalData(
        const PhysicalData& x)
{
    m_participant_guid = x.m_participant_guid;
    m_host = x.m_host;
    m_user = x.m_user;
    m_process = x.m_process;
}

eprosima::fastdds::statistics::PhysicalData::PhysicalData(
        PhysicalData&& x) noexcept 
{
    m_participant_guid = std::move(x.m_participant_guid);
    m_host = std::move(x.m_host);
    m_user = std::move(x.m_user);
    m_process = std::move(x.m_process);
}

eprosima::fastdds::statistics::PhysicalData& eprosima::fastdds::statistics::PhysicalData::operator =(
        const PhysicalData& x)
{

    m_participant_guid = x.m_participant_guid;
    m_host = x.m_host;
    m_user = x.m_user;
    m_process = x.m_process;

    return *this;
}

eprosima::fastdds::statistics::PhysicalData& eprosima::fastdds::statistics::PhysicalData::operator =(
        PhysicalData&& x) noexcept
{

    m_participant_guid = std::move(x.m_participant_guid);
    m_host = std::move(x.m_host);
    m_user = std::move(x.m_user);
    m_process = std::move(x.m_process);

    return *this;
}

bool eprosima::fastdds::statistics::PhysicalData::operator ==(
        const PhysicalData& x) const
{

    return (m_participant_guid == x.m_participant_guid && m_host == x.m_host && m_user == x.m_user && m_process == x.m_process);
}

bool eprosima::fastdds::statistics::PhysicalData::operator !=(
        const PhysicalData& x) const
{
    return !(*this == x);
}

size_t eprosima::fastdds::statistics::PhysicalData::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_PhysicalData_max_cdr_typesize;
}

size_t eprosima::fastdds::statistics::PhysicalData::getCdrSerializedSize(
        const eprosima::fastdds::statistics::PhysicalData& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += eprosima::fastdds::statistics::detail::GUID_s::getCdrSerializedSize(data.participant_guid(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.host().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.user().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.process().size() + 1;


    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::PhysicalData::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_participant_guid;
    scdr << m_host.c_str();
    scdr << m_user.c_str();
    scdr << m_process.c_str();

}

void eprosima::fastdds::statistics::PhysicalData::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_participant_guid;
    dcdr >> m_host;
    dcdr >> m_user;
    dcdr >> m_process;
}

/*!
 * @brief This function copies the value in member participant_guid
 * @param _participant_guid New value to be copied in member participant_guid
 */
void eprosima::fastdds::statistics::PhysicalData::participant_guid(
        const eprosima::fastdds::statistics::detail::GUID_s& _participant_guid)
{
    m_participant_guid = _participant_guid;
}

/*!
 * @brief This function moves the value in member participant_guid
 * @param _participant_guid New value to be moved in member participant_guid
 */
void eprosima::fastdds::statistics::PhysicalData::participant_guid(
        eprosima::fastdds::statistics::detail::GUID_s&& _participant_guid)
{
    m_participant_guid = std::move(_participant_guid);
}

/*!
 * @brief This function returns a constant reference to member participant_guid
 * @return Constant reference to member participant_guid
 */
const eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::PhysicalData::participant_guid() const
{
    return m_participant_guid;
}

/*!
 * @brief This function returns a reference to member participant_guid
 * @return Reference to member participant_guid
 */
eprosima::fastdds::statistics::detail::GUID_s& eprosima::fastdds::statistics::PhysicalData::participant_guid()
{
    return m_participant_guid;
}
/*!
 * @brief This function copies the value in member host
 * @param _host New value to be copied in member host
 */
void eprosima::fastdds::statistics::PhysicalData::host(
        const std::string& _host)
{
    m_host = _host;
}

/*!
 * @brief This function moves the value in member host
 * @param _host New value to be moved in member host
 */
void eprosima::fastdds::statistics::PhysicalData::host(
        std::string&& _host)
{
    m_host = std::move(_host);
}

/*!
 * @brief This function returns a constant reference to member host
 * @return Constant reference to member host
 */
const std::string& eprosima::fastdds::statistics::PhysicalData::host() const
{
    return m_host;
}

/*!
 * @brief This function returns a reference to member host
 * @return Reference to member host
 */
std::string& eprosima::fastdds::statistics::PhysicalData::host()
{
    return m_host;
}
/*!
 * @brief This function copies the value in member user
 * @param _user New value to be copied in member user
 */
void eprosima::fastdds::statistics::PhysicalData::user(
        const std::string& _user)
{
    m_user = _user;
}

/*!
 * @brief This function moves the value in member user
 * @param _user New value to be moved in member user
 */
void eprosima::fastdds::statistics::PhysicalData::user(
        std::string&& _user)
{
    m_user = std::move(_user);
}

/*!
 * @brief This function returns a constant reference to member user
 * @return Constant reference to member user
 */
const std::string& eprosima::fastdds::statistics::PhysicalData::user() const
{
    return m_user;
}

/*!
 * @brief This function returns a reference to member user
 * @return Reference to member user
 */
std::string& eprosima::fastdds::statistics::PhysicalData::user()
{
    return m_user;
}
/*!
 * @brief This function copies the value in member process
 * @param _process New value to be copied in member process
 */
void eprosima::fastdds::statistics::PhysicalData::process(
        const std::string& _process)
{
    m_process = _process;
}

/*!
 * @brief This function moves the value in member process
 * @param _process New value to be moved in member process
 */
void eprosima::fastdds::statistics::PhysicalData::process(
        std::string&& _process)
{
    m_process = std::move(_process);
}

/*!
 * @brief This function returns a constant reference to member process
 * @return Constant reference to member process
 */
const std::string& eprosima::fastdds::statistics::PhysicalData::process() const
{
    return m_process;
}

/*!
 * @brief This function returns a reference to member process
 * @return Reference to member process
 */
std::string& eprosima::fastdds::statistics::PhysicalData::process()
{
    return m_process;
}


size_t eprosima::fastdds::statistics::PhysicalData::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return eprosima_fastdds_statistics_PhysicalData_max_key_cdr_typesize;
}

bool eprosima::fastdds::statistics::PhysicalData::isKeyDefined()
{
    return true;
}

void eprosima::fastdds::statistics::PhysicalData::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
    m_participant_guid.serialize(scdr);    
 
 
  
}


eprosima::fastdds::statistics::Data::Data()
{
    m__d = HISTORY2HISTORY_LATENCY;
    // eprosima::fastdds::statistics::WriterReaderData m_writer_reader_data

    // eprosima::fastdds::statistics::Locator2LocatorData m_locator2locator_data

    // eprosima::fastdds::statistics::EntityData m_entity_data

    // eprosima::fastdds::statistics::Entity2LocatorTraffic m_entity2locator_traffic

    // eprosima::fastdds::statistics::EntityCount m_entity_count

    // eprosima::fastdds::statistics::DiscoveryTime m_discovery_time

    // eprosima::fastdds::statistics::SampleIdentityCount m_sample_identity_count

    // eprosima::fastdds::statistics::PhysicalData m_physical_data

}

eprosima::fastdds::statistics::Data::~Data()
{
}

eprosima::fastdds::statistics::Data::Data(
        const Data& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        m_writer_reader_data = x.m_writer_reader_data;
        break;
        case NETWORK_LATENCY:
        m_locator2locator_data = x.m_locator2locator_data;
        break;
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        m_entity_data = x.m_entity_data;
        break;
        case RTPS_SENT:
        case RTPS_LOST:
        m_entity2locator_traffic = x.m_entity2locator_traffic;
        break;
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        m_entity_count = x.m_entity_count;
        break;
        case DISCOVERED_ENTITY:
        m_discovery_time = x.m_discovery_time;
        break;
        case SAMPLE_DATAS:
        m_sample_identity_count = x.m_sample_identity_count;
        break;
        case PHYSICAL_DATA:
        m_physical_data = x.m_physical_data;
        break;
        default:
        break;
    }
}

eprosima::fastdds::statistics::Data::Data(
        Data&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        m_writer_reader_data = std::move(x.m_writer_reader_data);
        break;
        case NETWORK_LATENCY:
        m_locator2locator_data = std::move(x.m_locator2locator_data);
        break;
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        m_entity_data = std::move(x.m_entity_data);
        break;
        case RTPS_SENT:
        case RTPS_LOST:
        m_entity2locator_traffic = std::move(x.m_entity2locator_traffic);
        break;
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        m_entity_count = std::move(x.m_entity_count);
        break;
        case DISCOVERED_ENTITY:
        m_discovery_time = std::move(x.m_discovery_time);
        break;
        case SAMPLE_DATAS:
        m_sample_identity_count = std::move(x.m_sample_identity_count);
        break;
        case PHYSICAL_DATA:
        m_physical_data = std::move(x.m_physical_data);
        break;
        default:
        break;
    }
}

eprosima::fastdds::statistics::Data& eprosima::fastdds::statistics::Data::operator =(
        const Data& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        m_writer_reader_data = x.m_writer_reader_data;
        break;
        case NETWORK_LATENCY:
        m_locator2locator_data = x.m_locator2locator_data;
        break;
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        m_entity_data = x.m_entity_data;
        break;
        case RTPS_SENT:
        case RTPS_LOST:
        m_entity2locator_traffic = x.m_entity2locator_traffic;
        break;
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        m_entity_count = x.m_entity_count;
        break;
        case DISCOVERED_ENTITY:
        m_discovery_time = x.m_discovery_time;
        break;
        case SAMPLE_DATAS:
        m_sample_identity_count = x.m_sample_identity_count;
        break;
        case PHYSICAL_DATA:
        m_physical_data = x.m_physical_data;
        break;
        default:
        break;
    }

    return *this;
}

eprosima::fastdds::statistics::Data& eprosima::fastdds::statistics::Data::operator =(
        Data&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        m_writer_reader_data = std::move(x.m_writer_reader_data);
        break;
        case NETWORK_LATENCY:
        m_locator2locator_data = std::move(x.m_locator2locator_data);
        break;
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        m_entity_data = std::move(x.m_entity_data);
        break;
        case RTPS_SENT:
        case RTPS_LOST:
        m_entity2locator_traffic = std::move(x.m_entity2locator_traffic);
        break;
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        m_entity_count = std::move(x.m_entity_count);
        break;
        case DISCOVERED_ENTITY:
        m_discovery_time = std::move(x.m_discovery_time);
        break;
        case SAMPLE_DATAS:
        m_sample_identity_count = std::move(x.m_sample_identity_count);
        break;
        case PHYSICAL_DATA:
        m_physical_data = std::move(x.m_physical_data);
        break;
        default:
        break;
    }

    return *this;
}

bool eprosima::fastdds::statistics::Data::operator ==(
        const Data& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
            return (m_writer_reader_data == x.m_writer_reader_data);
            break;
        case NETWORK_LATENCY:
            return (m_locator2locator_data == x.m_locator2locator_data);
            break;
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
            return (m_entity_data == x.m_entity_data);
            break;
        case RTPS_SENT:
        case RTPS_LOST:
            return (m_entity2locator_traffic == x.m_entity2locator_traffic);
            break;
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
            return (m_entity_count == x.m_entity_count);
            break;
        case DISCOVERED_ENTITY:
            return (m_discovery_time == x.m_discovery_time);
            break;
        case SAMPLE_DATAS:
            return (m_sample_identity_count == x.m_sample_identity_count);
            break;
        case PHYSICAL_DATA:
            return (m_physical_data == x.m_physical_data);
            break;
        default:
        break;
    }
    return false;
}

bool eprosima::fastdds::statistics::Data::operator !=(
        const Data& x) const
{
    return !(*this == x);
}

void eprosima::fastdds::statistics::Data::_d(
        eprosima::fastdds::statistics::EventKind __d)
{
    bool b = false;

    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        switch(__d)
        {
            case HISTORY2HISTORY_LATENCY:
            b = true;
            break;
            default:
            break;
        }
        break;
        case NETWORK_LATENCY:
        switch(__d)
        {
            case NETWORK_LATENCY:
            b = true;
            break;
            default:
            break;
        }
        break;
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        switch(__d)
        {
            case PUBLICATION_THROUGHPUT:
            case SUBSCRIPTION_THROUGHPUT:
            b = true;
            break;
            default:
            break;
        }
        break;
        case RTPS_SENT:
        case RTPS_LOST:
        switch(__d)
        {
            case RTPS_SENT:
            case RTPS_LOST:
            b = true;
            break;
            default:
            break;
        }
        break;
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        switch(__d)
        {
            case RESENT_DATAS:
            case HEARTBEAT_COUNT:
            case ACKNACK_COUNT:
            case NACKFRAG_COUNT:
            case GAP_COUNT:
            case DATA_COUNT:
            case PDP_PACKETS:
            case EDP_PACKETS:
            b = true;
            break;
            default:
            break;
        }
        break;
        case DISCOVERED_ENTITY:
        switch(__d)
        {
            case DISCOVERED_ENTITY:
            b = true;
            break;
            default:
            break;
        }
        break;
        case SAMPLE_DATAS:
        switch(__d)
        {
            case SAMPLE_DATAS:
            b = true;
            break;
            default:
            break;
        }
        break;
        case PHYSICAL_DATA:
        switch(__d)
        {
            case PHYSICAL_DATA:
            b = true;
            break;
            default:
            break;
        }
        break;
    }

    if(!b)
    {
        throw BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

eprosima::fastdds::statistics::EventKind eprosima::fastdds::statistics::Data::_d() const
{
    return m__d;
}

eprosima::fastdds::statistics::EventKind& eprosima::fastdds::statistics::Data::_d()
{
    return m__d;
}

void eprosima::fastdds::statistics::Data::writer_reader_data(
        const eprosima::fastdds::statistics::WriterReaderData& _writer_reader_data)
{
    m_writer_reader_data = _writer_reader_data;
    m__d = HISTORY2HISTORY_LATENCY;
}

void eprosima::fastdds::statistics::Data::writer_reader_data(
        eprosima::fastdds::statistics::WriterReaderData&& _writer_reader_data)
{
    m_writer_reader_data = std::move(_writer_reader_data);
    m__d = HISTORY2HISTORY_LATENCY;
}

const eprosima::fastdds::statistics::WriterReaderData& eprosima::fastdds::statistics::Data::writer_reader_data() const
{
    bool b = false;

    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_writer_reader_data;
}

eprosima::fastdds::statistics::WriterReaderData& eprosima::fastdds::statistics::Data::writer_reader_data()
{
    bool b = false;

    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_writer_reader_data;
}
void eprosima::fastdds::statistics::Data::locator2locator_data(
        const eprosima::fastdds::statistics::Locator2LocatorData& _locator2locator_data)
{
    m_locator2locator_data = _locator2locator_data;
    m__d = NETWORK_LATENCY;
}

void eprosima::fastdds::statistics::Data::locator2locator_data(
        eprosima::fastdds::statistics::Locator2LocatorData&& _locator2locator_data)
{
    m_locator2locator_data = std::move(_locator2locator_data);
    m__d = NETWORK_LATENCY;
}

const eprosima::fastdds::statistics::Locator2LocatorData& eprosima::fastdds::statistics::Data::locator2locator_data() const
{
    bool b = false;

    switch(m__d)
    {
        case NETWORK_LATENCY:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_locator2locator_data;
}

eprosima::fastdds::statistics::Locator2LocatorData& eprosima::fastdds::statistics::Data::locator2locator_data()
{
    bool b = false;

    switch(m__d)
    {
        case NETWORK_LATENCY:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_locator2locator_data;
}
void eprosima::fastdds::statistics::Data::entity_data(
        const eprosima::fastdds::statistics::EntityData& _entity_data)
{
    m_entity_data = _entity_data;
    m__d = PUBLICATION_THROUGHPUT;
}

void eprosima::fastdds::statistics::Data::entity_data(
        eprosima::fastdds::statistics::EntityData&& _entity_data)
{
    m_entity_data = std::move(_entity_data);
    m__d = PUBLICATION_THROUGHPUT;
}

const eprosima::fastdds::statistics::EntityData& eprosima::fastdds::statistics::Data::entity_data() const
{
    bool b = false;

    switch(m__d)
    {
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_entity_data;
}

eprosima::fastdds::statistics::EntityData& eprosima::fastdds::statistics::Data::entity_data()
{
    bool b = false;

    switch(m__d)
    {
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_entity_data;
}
void eprosima::fastdds::statistics::Data::entity2locator_traffic(
        const eprosima::fastdds::statistics::Entity2LocatorTraffic& _entity2locator_traffic)
{
    m_entity2locator_traffic = _entity2locator_traffic;
    m__d = RTPS_SENT;
}

void eprosima::fastdds::statistics::Data::entity2locator_traffic(
        eprosima::fastdds::statistics::Entity2LocatorTraffic&& _entity2locator_traffic)
{
    m_entity2locator_traffic = std::move(_entity2locator_traffic);
    m__d = RTPS_SENT;
}

const eprosima::fastdds::statistics::Entity2LocatorTraffic& eprosima::fastdds::statistics::Data::entity2locator_traffic() const
{
    bool b = false;

    switch(m__d)
    {
        case RTPS_SENT:
        case RTPS_LOST:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_entity2locator_traffic;
}

eprosima::fastdds::statistics::Entity2LocatorTraffic& eprosima::fastdds::statistics::Data::entity2locator_traffic()
{
    bool b = false;

    switch(m__d)
    {
        case RTPS_SENT:
        case RTPS_LOST:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_entity2locator_traffic;
}
void eprosima::fastdds::statistics::Data::entity_count(
        const eprosima::fastdds::statistics::EntityCount& _entity_count)
{
    m_entity_count = _entity_count;
    m__d = RESENT_DATAS;
}

void eprosima::fastdds::statistics::Data::entity_count(
        eprosima::fastdds::statistics::EntityCount&& _entity_count)
{
    m_entity_count = std::move(_entity_count);
    m__d = RESENT_DATAS;
}

const eprosima::fastdds::statistics::EntityCount& eprosima::fastdds::statistics::Data::entity_count() const
{
    bool b = false;

    switch(m__d)
    {
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_entity_count;
}

eprosima::fastdds::statistics::EntityCount& eprosima::fastdds::statistics::Data::entity_count()
{
    bool b = false;

    switch(m__d)
    {
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_entity_count;
}
void eprosima::fastdds::statistics::Data::discovery_time(
        const eprosima::fastdds::statistics::DiscoveryTime& _discovery_time)
{
    m_discovery_time = _discovery_time;
    m__d = DISCOVERED_ENTITY;
}

void eprosima::fastdds::statistics::Data::discovery_time(
        eprosima::fastdds::statistics::DiscoveryTime&& _discovery_time)
{
    m_discovery_time = std::move(_discovery_time);
    m__d = DISCOVERED_ENTITY;
}

const eprosima::fastdds::statistics::DiscoveryTime& eprosima::fastdds::statistics::Data::discovery_time() const
{
    bool b = false;

    switch(m__d)
    {
        case DISCOVERED_ENTITY:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_discovery_time;
}

eprosima::fastdds::statistics::DiscoveryTime& eprosima::fastdds::statistics::Data::discovery_time()
{
    bool b = false;

    switch(m__d)
    {
        case DISCOVERED_ENTITY:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_discovery_time;
}
void eprosima::fastdds::statistics::Data::sample_identity_count(
        const eprosima::fastdds::statistics::SampleIdentityCount& _sample_identity_count)
{
    m_sample_identity_count = _sample_identity_count;
    m__d = SAMPLE_DATAS;
}

void eprosima::fastdds::statistics::Data::sample_identity_count(
        eprosima::fastdds::statistics::SampleIdentityCount&& _sample_identity_count)
{
    m_sample_identity_count = std::move(_sample_identity_count);
    m__d = SAMPLE_DATAS;
}

const eprosima::fastdds::statistics::SampleIdentityCount& eprosima::fastdds::statistics::Data::sample_identity_count() const
{
    bool b = false;

    switch(m__d)
    {
        case SAMPLE_DATAS:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_sample_identity_count;
}

eprosima::fastdds::statistics::SampleIdentityCount& eprosima::fastdds::statistics::Data::sample_identity_count()
{
    bool b = false;

    switch(m__d)
    {
        case SAMPLE_DATAS:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_sample_identity_count;
}
void eprosima::fastdds::statistics::Data::physical_data(
        const eprosima::fastdds::statistics::PhysicalData& _physical_data)
{
    m_physical_data = _physical_data;
    m__d = PHYSICAL_DATA;
}

void eprosima::fastdds::statistics::Data::physical_data(
        eprosima::fastdds::statistics::PhysicalData&& _physical_data)
{
    m_physical_data = std::move(_physical_data);
    m__d = PHYSICAL_DATA;
}

const eprosima::fastdds::statistics::PhysicalData& eprosima::fastdds::statistics::Data::physical_data() const
{
    bool b = false;

    switch(m__d)
    {
        case PHYSICAL_DATA:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_physical_data;
}

eprosima::fastdds::statistics::PhysicalData& eprosima::fastdds::statistics::Data::physical_data()
{
    bool b = false;

    switch(m__d)
    {
        case PHYSICAL_DATA:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_physical_data;
}

// TODO(Ricardo) Review
size_t eprosima::fastdds::statistics::Data::getCdrSerializedSize(
        const eprosima::fastdds::statistics::Data& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        current_alignment += eprosima::fastdds::statistics::WriterReaderData::getCdrSerializedSize(data.writer_reader_data(), current_alignment);
        break;
        case NETWORK_LATENCY:
        current_alignment += eprosima::fastdds::statistics::Locator2LocatorData::getCdrSerializedSize(data.locator2locator_data(), current_alignment);
        break;
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        current_alignment += eprosima::fastdds::statistics::EntityData::getCdrSerializedSize(data.entity_data(), current_alignment);
        break;
        case RTPS_SENT:
        case RTPS_LOST:
        current_alignment += eprosima::fastdds::statistics::Entity2LocatorTraffic::getCdrSerializedSize(data.entity2locator_traffic(), current_alignment);
        break;
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        current_alignment += eprosima::fastdds::statistics::EntityCount::getCdrSerializedSize(data.entity_count(), current_alignment);
        break;
        case DISCOVERED_ENTITY:
        current_alignment += eprosima::fastdds::statistics::DiscoveryTime::getCdrSerializedSize(data.discovery_time(), current_alignment);
        break;
        case SAMPLE_DATAS:
        current_alignment += eprosima::fastdds::statistics::SampleIdentityCount::getCdrSerializedSize(data.sample_identity_count(), current_alignment);
        break;
        case PHYSICAL_DATA:
        current_alignment += eprosima::fastdds::statistics::PhysicalData::getCdrSerializedSize(data.physical_data(), current_alignment);
        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void eprosima::fastdds::statistics::Data::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << (uint32_t)m__d;

    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        scdr << m_writer_reader_data;

        break;
        case NETWORK_LATENCY:
        scdr << m_locator2locator_data;

        break;
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        scdr << m_entity_data;

        break;
        case RTPS_SENT:
        case RTPS_LOST:
        scdr << m_entity2locator_traffic;

        break;
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        scdr << m_entity_count;

        break;
        case DISCOVERED_ENTITY:
        scdr << m_discovery_time;

        break;
        case SAMPLE_DATAS:
        scdr << m_sample_identity_count;

        break;
        case PHYSICAL_DATA:
        scdr << m_physical_data;

        break;
        default:
        break;
    }
}

void eprosima::fastdds::statistics::Data::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    {
        uint32_t bitmask_value = 0;
        dcdr >> bitmask_value;
        m__d = (eprosima::fastdds::statistics::EventKind)bitmask_value;
    }


    switch(m__d)
    {
        case HISTORY2HISTORY_LATENCY:
        dcdr >> m_writer_reader_data;
        break;
        case NETWORK_LATENCY:
        dcdr >> m_locator2locator_data;
        break;
        case PUBLICATION_THROUGHPUT:
        case SUBSCRIPTION_THROUGHPUT:
        dcdr >> m_entity_data;
        break;
        case RTPS_SENT:
        case RTPS_LOST:
        dcdr >> m_entity2locator_traffic;
        break;
        case RESENT_DATAS:
        case HEARTBEAT_COUNT:
        case ACKNACK_COUNT:
        case NACKFRAG_COUNT:
        case GAP_COUNT:
        case DATA_COUNT:
        case PDP_PACKETS:
        case EDP_PACKETS:
        dcdr >> m_entity_count;
        break;
        case DISCOVERED_ENTITY:
        dcdr >> m_discovery_time;
        break;
        case SAMPLE_DATAS:
        dcdr >> m_sample_identity_count;
        break;
        case PHYSICAL_DATA:
        dcdr >> m_physical_data;
        break;
        default:
        break;
    }
}




