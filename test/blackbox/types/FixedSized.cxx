/*!
 * @file FixedSized.cpp
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

#include "FixedSized.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define FixedSized_max_cdr_typesize 2ULL;
#define FixedSized_max_key_cdr_typesize 0ULL;

FixedSized::FixedSized()
{
    // unsigned short m_index
    m_index = 0;

}

FixedSized::~FixedSized()
{
}

FixedSized::FixedSized(
        const FixedSized& x)
{
    m_index = x.m_index;
}

FixedSized::FixedSized(
        FixedSized&& x) noexcept 
{
    m_index = x.m_index;
}

FixedSized& FixedSized::operator =(
        const FixedSized& x)
{

    m_index = x.m_index;

    return *this;
}

FixedSized& FixedSized::operator =(
        FixedSized&& x) noexcept
{

    m_index = x.m_index;

    return *this;
}

bool FixedSized::operator ==(
        const FixedSized& x) const
{

    return (m_index == x.m_index);
}

bool FixedSized::operator !=(
        const FixedSized& x) const
{
    return !(*this == x);
}

size_t FixedSized::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return FixedSized_max_cdr_typesize;
}

size_t FixedSized::getCdrSerializedSize(
        const FixedSized& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    return current_alignment - initial_alignment;
}

void FixedSized::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_index;

}

void FixedSized::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_index;
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void FixedSized::index(
        uint16_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint16_t FixedSized::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint16_t& FixedSized::index()
{
    return m_index;
}



size_t FixedSized::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return FixedSized_max_key_cdr_typesize;
}

bool FixedSized::isKeyDefined()
{
    return false;
}

void FixedSized::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

