/*!
 * @file TestRegression3361.cpp
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

#include "TestRegression3361.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define TestRegression3361_max_cdr_typesize 260ULL;

#define TestRegression3361_max_key_cdr_typesize 0ULL;


TestRegression3361::TestRegression3361()
{
    // TestModule::MACHINEID m_uuid
    m_uuid ="";

}

TestRegression3361::~TestRegression3361()
{
}

TestRegression3361::TestRegression3361(
        const TestRegression3361& x)
{
    m_uuid = x.m_uuid;
}

TestRegression3361::TestRegression3361(
        TestRegression3361&& x) noexcept 
{
    m_uuid = std::move(x.m_uuid);
}

TestRegression3361& TestRegression3361::operator =(
        const TestRegression3361& x)
{

    m_uuid = x.m_uuid;

    return *this;
}

TestRegression3361& TestRegression3361::operator =(
        TestRegression3361&& x) noexcept
{

    m_uuid = std::move(x.m_uuid);

    return *this;
}

bool TestRegression3361::operator ==(
        const TestRegression3361& x) const
{

    return (m_uuid == x.m_uuid);
}

bool TestRegression3361::operator !=(
        const TestRegression3361& x) const
{
    return !(*this == x);
}

size_t TestRegression3361::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return TestRegression3361_max_cdr_typesize;
}

size_t TestRegression3361::getCdrSerializedSize(
        const TestRegression3361& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.uuid().size() + 1;

    return current_alignment - initial_alignment;
}

void TestRegression3361::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_uuid.c_str();

}

void TestRegression3361::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_uuid;}

/*!
 * @brief This function copies the value in member uuid
 * @param _uuid New value to be copied in member uuid
 */
void TestRegression3361::uuid(
        const TestModule::MACHINEID& _uuid)
{
    m_uuid = _uuid;
}

/*!
 * @brief This function moves the value in member uuid
 * @param _uuid New value to be moved in member uuid
 */
void TestRegression3361::uuid(
        TestModule::MACHINEID&& _uuid)
{
    m_uuid = std::move(_uuid);
}

/*!
 * @brief This function returns a constant reference to member uuid
 * @return Constant reference to member uuid
 */
const TestModule::MACHINEID& TestRegression3361::uuid() const
{
    return m_uuid;
}

/*!
 * @brief This function returns a reference to member uuid
 * @return Reference to member uuid
 */
TestModule::MACHINEID& TestRegression3361::uuid()
{
    return m_uuid;
}


size_t TestRegression3361::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return TestRegression3361_max_key_cdr_typesize;
}

bool TestRegression3361::isKeyDefined()
{
    return false;
}

void TestRegression3361::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

