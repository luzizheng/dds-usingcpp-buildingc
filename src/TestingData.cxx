/*!
 * @file TestingData.cpp
 * 此源文件包含 IDL 文件中描述类型的定义。
 *
 * 此文件由gen工具生成生成。
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace
{
    char dummy;
} // namespace
#endif // _WIN32

#include "TestingData.h"
#include "fastcdr/Cdr.h"

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

TestingData::TestingData()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@612679d6
    m_timestamp = 0.0;
    // m_message com.echarprosima.idl.parser.typecode.StringTypeCode@11758f2a
    m_message = "";
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@e720b71
    m_index = 0;
    // m_payload com.eprosima.idl.parser.typecode.SequenceTypeCode@1b26f7b2
}

TestingData::~TestingData()
{
}

TestingData::TestingData(
    const TestingData &x)
{
    m_timestamp = x.m_timestamp;
    m_message = x.m_message;
    m_index = x.m_index;
    m_payload = x.m_payload;
}

TestingData::TestingData(
    TestingData &&x)
{
    m_timestamp = x.m_timestamp;
    m_message = std::move(x.m_message);
    m_index = x.m_index;
    m_payload = std::move(x.m_payload);
}

TestingData &TestingData::operator=(
    const TestingData &x)
{

    m_timestamp = x.m_timestamp;
    m_message = x.m_message;
    m_index = x.m_index;
    m_payload = x.m_payload;

    return *this;
}

TestingData &TestingData::operator=(
    TestingData &&x)
{

    m_timestamp = x.m_timestamp;
    m_message = std::move(x.m_message);
    m_index = x.m_index;
    m_payload = std::move(x.m_payload);

    return *this;
}

bool TestingData::operator==(
    const TestingData &x) const
{

    return (m_timestamp == x.m_timestamp && m_message == x.m_message && m_index == x.m_index && m_payload == x.m_payload);
}

bool TestingData::operator!=(
    const TestingData &x) const
{
    return !(*this == x);
}

size_t TestingData::getMaxCdrSerializedSize(
    size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (100 * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    return current_alignment - initial_alignment;
}

size_t TestingData::getCdrSerializedSize(
    const TestingData &data,
    size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.message().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.payload().size() > 0)
    {
        current_alignment += (data.payload().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }
    return current_alignment - initial_alignment;
}

void TestingData::serialize(
    eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_message.c_str();
    scdr << m_index;
    scdr << m_payload;
}

void TestingData::deserialize(
    eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_message;
    dcdr >> m_index;
    dcdr >> m_payload;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void TestingData::timestamp(
    double _timestamp)
{
    m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
double TestingData::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
double &TestingData::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void TestingData::message(
    const std::string &_message)
{
    m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void TestingData::message(
    std::string &&_message)
{
    m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const std::string &TestingData::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
std::string &TestingData::message()
{
    return m_message;
}
/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void TestingData::index(
    uint32_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint32_t TestingData::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint32_t &TestingData::index()
{
    return m_index;
}

/*!
 * @brief This function copies the value in member payload
 * @param _payload New value to be copied in member payload
 */
void TestingData::payload(
    const std::vector<char> &_payload)
{
    m_payload = _payload;
}

/*!
 * @brief This function moves the value in member payload
 * @param _payload New value to be moved in member payload
 */
void TestingData::payload(
    std::vector<char> &&_payload)
{
    m_payload = std::move(_payload);
}

/*!
 * @brief This function returns a constant reference to member payload
 * @return Constant reference to member payload
 */
const std::vector<char> &TestingData::payload() const
{
    return m_payload;
}

/*!
 * @brief This function returns a reference to member payload
 * @return Reference to member payload
 */
std::vector<char> &TestingData::payload()
{
    return m_payload;
}

size_t TestingData::getKeyMaxCdrSerializedSize(
    size_t current_alignment)
{
    size_t current_align = current_alignment;

    return current_align;
}

bool TestingData::isKeyDefined()
{
    return false;
}

void TestingData::serializeKey(
    eprosima::fastcdr::Cdr &scdr) const
{
    (void)scdr;
}