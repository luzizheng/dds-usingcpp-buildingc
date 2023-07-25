/*!
 * @file KeyedData1mb.cpp
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

#include "KeyedData1mb.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define KeyedData1mb_max_cdr_typesize 1024004ULL;
#define KeyedData1mb_max_key_cdr_typesize 2ULL;

KeyedData1mb::KeyedData1mb()
{
    // unsigned short m_key
    m_key = 0;
    // sequence<octet, 1023996> m_data


}

KeyedData1mb::~KeyedData1mb()
{


}

KeyedData1mb::KeyedData1mb(
        const KeyedData1mb& x)
{
    m_key = x.m_key;
    m_data = x.m_data;
}

KeyedData1mb::KeyedData1mb(
        KeyedData1mb&& x) noexcept 
{
    m_key = x.m_key;
    m_data = std::move(x.m_data);
}

KeyedData1mb& KeyedData1mb::operator =(
        const KeyedData1mb& x)
{

    m_key = x.m_key;
    m_data = x.m_data;

    return *this;
}

KeyedData1mb& KeyedData1mb::operator =(
        KeyedData1mb&& x) noexcept
{

    m_key = x.m_key;
    m_data = std::move(x.m_data);

    return *this;
}

bool KeyedData1mb::operator ==(
        const KeyedData1mb& x) const
{

    return (m_key == x.m_key && m_data == x.m_data);
}

bool KeyedData1mb::operator !=(
        const KeyedData1mb& x) const
{
    return !(*this == x);
}

size_t KeyedData1mb::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return KeyedData1mb_max_cdr_typesize;
}

size_t KeyedData1mb::getCdrSerializedSize(
        const KeyedData1mb& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.data().size() > 0)
    {
        current_alignment += (data.data().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void KeyedData1mb::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_key;
    scdr << m_data;

}

void KeyedData1mb::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_key;
    dcdr >> m_data;
}

/*!
 * @brief This function sets a value in member key
 * @param _key New value for member key
 */
void KeyedData1mb::key(
        uint16_t _key)
{
    m_key = _key;
}

/*!
 * @brief This function returns the value of member key
 * @return Value of member key
 */
uint16_t KeyedData1mb::key() const
{
    return m_key;
}

/*!
 * @brief This function returns a reference to member key
 * @return Reference to member key
 */
uint16_t& KeyedData1mb::key()
{
    return m_key;
}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void KeyedData1mb::data(
        const std::vector<uint8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void KeyedData1mb::data(
        std::vector<uint8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<uint8_t>& KeyedData1mb::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<uint8_t>& KeyedData1mb::data()
{
    return m_data;
}


size_t KeyedData1mb::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return KeyedData1mb_max_key_cdr_typesize;
}

bool KeyedData1mb::isKeyDefined()
{
    return true;
}

void KeyedData1mb::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
   scdr << m_key;
   
  
}

