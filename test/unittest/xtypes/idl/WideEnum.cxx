/*!
 * @file WideEnum.cpp
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

#include "WideEnum.h"
#include "WideEnumTypeObject.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define MyEnumWideStruct_max_cdr_typesize 4ULL;

#define SimpleWideUnionStruct_max_cdr_typesize 16ULL;

#define MyEnumWideStruct_max_key_cdr_typesize 0ULL;

#define SimpleWideUnionStruct_max_key_cdr_typesize 0ULL;



MyEnumWideStruct::MyEnumWideStruct()
{
    // MyEnumWide m_my_enum_wide
    m_my_enum_wide = ::A;

    // Just to register all known types
    registerWideEnumTypes();
}

MyEnumWideStruct::~MyEnumWideStruct()
{
}

MyEnumWideStruct::MyEnumWideStruct(
        const MyEnumWideStruct& x)
{
    m_my_enum_wide = x.m_my_enum_wide;
}

MyEnumWideStruct::MyEnumWideStruct(
        MyEnumWideStruct&& x) noexcept 
{
    m_my_enum_wide = x.m_my_enum_wide;
}

MyEnumWideStruct& MyEnumWideStruct::operator =(
        const MyEnumWideStruct& x)
{

    m_my_enum_wide = x.m_my_enum_wide;

    return *this;
}

MyEnumWideStruct& MyEnumWideStruct::operator =(
        MyEnumWideStruct&& x) noexcept
{

    m_my_enum_wide = x.m_my_enum_wide;

    return *this;
}

bool MyEnumWideStruct::operator ==(
        const MyEnumWideStruct& x) const
{

    return (m_my_enum_wide == x.m_my_enum_wide);
}

bool MyEnumWideStruct::operator !=(
        const MyEnumWideStruct& x) const
{
    return !(*this == x);
}

size_t MyEnumWideStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MyEnumWideStruct_max_cdr_typesize;
}

size_t MyEnumWideStruct::getCdrSerializedSize(
        const MyEnumWideStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void MyEnumWideStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << (uint32_t)m_my_enum_wide;

}

void MyEnumWideStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_my_enum_wide = (MyEnumWide)enum_value;
    }

}

/*!
 * @brief This function sets a value in member my_enum_wide
 * @param _my_enum_wide New value for member my_enum_wide
 */
void MyEnumWideStruct::my_enum_wide(
        MyEnumWide _my_enum_wide)
{
    m_my_enum_wide = _my_enum_wide;
}

/*!
 * @brief This function returns the value of member my_enum_wide
 * @return Value of member my_enum_wide
 */
MyEnumWide MyEnumWideStruct::my_enum_wide() const
{
    return m_my_enum_wide;
}

/*!
 * @brief This function returns a reference to member my_enum_wide
 * @return Reference to member my_enum_wide
 */
MyEnumWide& MyEnumWideStruct::my_enum_wide()
{
    return m_my_enum_wide;
}



size_t MyEnumWideStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MyEnumWideStruct_max_key_cdr_typesize;
}

bool MyEnumWideStruct::isKeyDefined()
{
    return false;
}

void MyEnumWideStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SimpleWideUnion::SimpleWideUnion()
{
    m__d = A;
    // long m_first
    m_first = 0;
    // long long m_second
    m_second = 0;
    // octet m_third
    m_third = 0;
}

SimpleWideUnion::~SimpleWideUnion()
{
}

SimpleWideUnion::SimpleWideUnion(
        const SimpleWideUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = x.m_second;
        break;
        case D:
        m_third = x.m_third;
        break;
        default:
        break;
    }
}

SimpleWideUnion::SimpleWideUnion(
        SimpleWideUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = x.m_second;
        break;
        case D:
        m_third = x.m_third;
        break;
        default:
        break;
    }
}

SimpleWideUnion& SimpleWideUnion::operator =(
        const SimpleWideUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = x.m_second;
        break;
        case D:
        m_third = x.m_third;
        break;
        default:
        break;
    }

    return *this;
}

SimpleWideUnion& SimpleWideUnion::operator =(
        SimpleWideUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = x.m_second;
        break;
        case D:
        m_third = x.m_third;
        break;
        default:
        break;
    }

    return *this;
}

bool SimpleWideUnion::operator ==(
        const SimpleWideUnion& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case A:
            return (m_first == x.m_first);
            break;
        case B:
            return (m_second == x.m_second);
            break;
        case D:
            return (m_third == x.m_third);
            break;
        default:
        break;
    }
    return false;
}

bool SimpleWideUnion::operator !=(
        const SimpleWideUnion& x) const
{
    return !(*this == x);
}

void SimpleWideUnion::_d(
        int32_t __d)
{
    bool b = false;

    switch(m__d)
    {
        case A:
        switch(__d)
        {
            case A:
            b = true;
            break;
            default:
            break;
        }
        break;
        case B:
        switch(__d)
        {
            case B:
            b = true;
            break;
            default:
            break;
        }
        break;
        case D:
        switch(__d)
        {
            case D:
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

int32_t SimpleWideUnion::_d() const
{
    return m__d;
}

int32_t& SimpleWideUnion::_d()
{
    return m__d;
}

void SimpleWideUnion::first(
        int32_t _first)
{
    m_first = _first;
    m__d = A;
}

int32_t SimpleWideUnion::first() const
{
    bool b = false;

    switch(m__d)
    {
        case A:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_first;
}

int32_t& SimpleWideUnion::first()
{
    bool b = false;

    switch(m__d)
    {
        case A:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_first;
}
void SimpleWideUnion::second(
        int64_t _second)
{
    m_second = _second;
    m__d = B;
}

int64_t SimpleWideUnion::second() const
{
    bool b = false;

    switch(m__d)
    {
        case B:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_second;
}

int64_t& SimpleWideUnion::second()
{
    bool b = false;

    switch(m__d)
    {
        case B:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_second;
}
void SimpleWideUnion::third(
        uint8_t _third)
{
    m_third = _third;
    m__d = D;
}

uint8_t SimpleWideUnion::third() const
{
    bool b = false;

    switch(m__d)
    {
        case D:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_third;
}

uint8_t& SimpleWideUnion::third()
{
    bool b = false;

    switch(m__d)
    {
        case D:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_third;
}

// TODO(Ricardo) Review
size_t SimpleWideUnion::getCdrSerializedSize(
        const SimpleWideUnion& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
        case A:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        case B:
        current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

        break;
        case D:
        current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void SimpleWideUnion::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case A:
        scdr << m_first;

        break;
        case B:
        scdr << m_second;

        break;
        case D:
        scdr << m_third;

        break;
        default:
        break;
    }
}

void SimpleWideUnion::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case A:
        dcdr >> m_first;
        break;
        case B:
        dcdr >> m_second;
        break;
        case D:
        dcdr >> m_third;
        break;
        default:
        break;
    }
}


SimpleWideUnionStruct::SimpleWideUnionStruct()
{
    // SimpleWideUnion m_my_union


    // Just to register all known types
    registerWideEnumTypes();
}

SimpleWideUnionStruct::~SimpleWideUnionStruct()
{
}

SimpleWideUnionStruct::SimpleWideUnionStruct(
        const SimpleWideUnionStruct& x)
{
    m_my_union = x.m_my_union;
}

SimpleWideUnionStruct::SimpleWideUnionStruct(
        SimpleWideUnionStruct&& x) noexcept 
{
    m_my_union = std::move(x.m_my_union);
}

SimpleWideUnionStruct& SimpleWideUnionStruct::operator =(
        const SimpleWideUnionStruct& x)
{

    m_my_union = x.m_my_union;

    return *this;
}

SimpleWideUnionStruct& SimpleWideUnionStruct::operator =(
        SimpleWideUnionStruct&& x) noexcept
{

    m_my_union = std::move(x.m_my_union);

    return *this;
}

bool SimpleWideUnionStruct::operator ==(
        const SimpleWideUnionStruct& x) const
{

    return (m_my_union == x.m_my_union);
}

bool SimpleWideUnionStruct::operator !=(
        const SimpleWideUnionStruct& x) const
{
    return !(*this == x);
}

size_t SimpleWideUnionStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleWideUnionStruct_max_cdr_typesize;
}

size_t SimpleWideUnionStruct::getCdrSerializedSize(
        const SimpleWideUnionStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += SimpleWideUnion::getCdrSerializedSize(data.my_union(), current_alignment);

    return current_alignment - initial_alignment;
}

void SimpleWideUnionStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;

}

void SimpleWideUnionStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void SimpleWideUnionStruct::my_union(
        const SimpleWideUnion& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void SimpleWideUnionStruct::my_union(
        SimpleWideUnion&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const SimpleWideUnion& SimpleWideUnionStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
SimpleWideUnion& SimpleWideUnionStruct::my_union()
{
    return m_my_union;
}


size_t SimpleWideUnionStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleWideUnionStruct_max_key_cdr_typesize;
}

bool SimpleWideUnionStruct::isKeyDefined()
{
    return false;
}

void SimpleWideUnionStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

