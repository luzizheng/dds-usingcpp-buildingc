/*!
 * @file KeyedHelloWorld.cpp
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

#include "KeyedHelloWorld.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define KeyedHelloWorld_max_cdr_typesize 137ULL;
#define KeyedHelloWorld_max_key_cdr_typesize 2ULL;

KeyedHelloWorld::KeyedHelloWorld()
{
    // unsigned short m_key
    m_key = 0;
    // unsigned short m_index
    m_index = 0;
    // string m_message
    m_message ="";

}

KeyedHelloWorld::~KeyedHelloWorld()
{



}

KeyedHelloWorld::KeyedHelloWorld(
        const KeyedHelloWorld& x)
{
    m_key = x.m_key;
    m_index = x.m_index;
    m_message = x.m_message;
}

KeyedHelloWorld::KeyedHelloWorld(
        KeyedHelloWorld&& x) noexcept 
{
    m_key = x.m_key;
    m_index = x.m_index;
    m_message = std::move(x.m_message);
}

KeyedHelloWorld& KeyedHelloWorld::operator =(
        const KeyedHelloWorld& x)
{

    m_key = x.m_key;
    m_index = x.m_index;
    m_message = x.m_message;

    return *this;
}

KeyedHelloWorld& KeyedHelloWorld::operator =(
        KeyedHelloWorld&& x) noexcept
{

    m_key = x.m_key;
    m_index = x.m_index;
    m_message = std::move(x.m_message);

    return *this;
}

bool KeyedHelloWorld::operator ==(
        const KeyedHelloWorld& x) const
{

    return (m_key == x.m_key && m_index == x.m_index && m_message == x.m_message);
}

bool KeyedHelloWorld::operator !=(
        const KeyedHelloWorld& x) const
{
    return !(*this == x);
}

size_t KeyedHelloWorld::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return KeyedHelloWorld_max_cdr_typesize;
}

size_t KeyedHelloWorld::getCdrSerializedSize(
        const KeyedHelloWorld& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.message().size() + 1;


    return current_alignment - initial_alignment;
}

void KeyedHelloWorld::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_key;
    scdr << m_index;
    scdr << m_message.c_str();

}

void KeyedHelloWorld::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_key;
    dcdr >> m_index;
    {
        std::string aux;
        dcdr >> aux;
        m_message = aux.c_str();
    }
}

/*!
 * @brief This function sets a value in member key
 * @param _key New value for member key
 */
void KeyedHelloWorld::key(
        uint16_t _key)
{
    m_key = _key;
}

/*!
 * @brief This function returns the value of member key
 * @return Value of member key
 */
uint16_t KeyedHelloWorld::key() const
{
    return m_key;
}

/*!
 * @brief This function returns a reference to member key
 * @return Reference to member key
 */
uint16_t& KeyedHelloWorld::key()
{
    return m_key;
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void KeyedHelloWorld::index(
        uint16_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint16_t KeyedHelloWorld::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint16_t& KeyedHelloWorld::index()
{
    return m_index;
}

/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void KeyedHelloWorld::message(
        const eprosima::fastrtps::fixed_string<128>& _message)
{
    m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void KeyedHelloWorld::message(
        eprosima::fastrtps::fixed_string<128>&& _message)
{
    m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const eprosima::fastrtps::fixed_string<128>& KeyedHelloWorld::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
eprosima::fastrtps::fixed_string<128>& KeyedHelloWorld::message()
{
    return m_message;
}


size_t KeyedHelloWorld::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return KeyedHelloWorld_max_key_cdr_typesize;
}

bool KeyedHelloWorld::isKeyDefined()
{
    return true;
}

void KeyedHelloWorld::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
   scdr << m_key;
   
 
  
}

