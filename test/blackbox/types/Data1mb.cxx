/*!
 * @file Data1mb.cpp
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

#include "Data1mb.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define Data1mb_max_cdr_typesize 1024004ULL;
#define Data1mb_max_key_cdr_typesize 0ULL;

Data1mb::Data1mb()
{
    // sequence<octet, 1024000> m_data


}

Data1mb::~Data1mb()
{
}

Data1mb::Data1mb(
        const Data1mb& x)
{
    m_data = x.m_data;
}

Data1mb::Data1mb(
        Data1mb&& x) noexcept 
{
    m_data = std::move(x.m_data);
}

Data1mb& Data1mb::operator =(
        const Data1mb& x)
{

    m_data = x.m_data;

    return *this;
}

Data1mb& Data1mb::operator =(
        Data1mb&& x) noexcept
{

    m_data = std::move(x.m_data);

    return *this;
}

bool Data1mb::operator ==(
        const Data1mb& x) const
{

    return (m_data == x.m_data);
}

bool Data1mb::operator !=(
        const Data1mb& x) const
{
    return !(*this == x);
}

size_t Data1mb::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return Data1mb_max_cdr_typesize;
}

size_t Data1mb::getCdrSerializedSize(
        const Data1mb& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.data().size() > 0)
    {
        current_alignment += (data.data().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    return current_alignment - initial_alignment;
}

void Data1mb::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_data;
}

void Data1mb::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_data;}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void Data1mb::data(
        const std::vector<uint8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void Data1mb::data(
        std::vector<uint8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<uint8_t>& Data1mb::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<uint8_t>& Data1mb::data()
{
    return m_data;
}


size_t Data1mb::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return Data1mb_max_key_cdr_typesize;
}

bool Data1mb::isKeyDefined()
{
    return false;
}

void Data1mb::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

