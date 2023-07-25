/*!
 * @file StringTest.cpp
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

#include "StringTest.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define StringTest_max_cdr_typesize 10005ULL;
#define StringTest_max_key_cdr_typesize 0ULL;

StringTest::StringTest()
{
    // string m_message
    m_message ="";

}

StringTest::~StringTest()
{
}

StringTest::StringTest(
        const StringTest& x)
{
    m_message = x.m_message;
}

StringTest::StringTest(
        StringTest&& x) noexcept 
{
    m_message = std::move(x.m_message);
}

StringTest& StringTest::operator =(
        const StringTest& x)
{

    m_message = x.m_message;

    return *this;
}

StringTest& StringTest::operator =(
        StringTest&& x) noexcept
{

    m_message = std::move(x.m_message);

    return *this;
}

bool StringTest::operator ==(
        const StringTest& x) const
{

    return (m_message == x.m_message);
}

bool StringTest::operator !=(
        const StringTest& x) const
{
    return !(*this == x);
}

size_t StringTest::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StringTest_max_cdr_typesize;
}

size_t StringTest::getCdrSerializedSize(
        const StringTest& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.message().size() + 1;

    return current_alignment - initial_alignment;
}

void StringTest::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_message.c_str();

}

void StringTest::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        std::string aux;
        dcdr >> aux;
        m_message = aux.c_str();
    }}

/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void StringTest::message(
        const eprosima::fastrtps::fixed_string<10000>& _message)
{
    m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void StringTest::message(
        eprosima::fastrtps::fixed_string<10000>&& _message)
{
    m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const eprosima::fastrtps::fixed_string<10000>& StringTest::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
eprosima::fastrtps::fixed_string<10000>& StringTest::message()
{
    return m_message;
}


size_t StringTest::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StringTest_max_key_cdr_typesize;
}

bool StringTest::isKeyDefined()
{
    return false;
}

void StringTest::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

