/*!
 * @file new_features_4_2.cpp
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

#include "new_features_4_2.h"
#include "new_features_4_2TypeObject.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>



#define bitmodule_BM2_max_cdr_typesize 24ULL;
#define NewAliases_max_cdr_typesize 32ULL;

#define StructTest_max_cdr_typesize 80ULL;



#define bitmodule_BitsetBitmask_max_cdr_typesize 17ULL;


#define bitmodule_BM2_max_key_cdr_typesize 0ULL;
#define NewAliases_max_key_cdr_typesize 0ULL;

#define StructTest_max_key_cdr_typesize 0ULL;



#define bitmodule_BitsetBitmask_max_key_cdr_typesize 0ULL;

NewAliases::NewAliases()
{
    // int8 m_int8_
    m_int8_ = 0;
    // uint8 m_uint8_
    m_uint8_ = 0;
    // short m_int16_
    m_int16_ = 0;
    // unsigned short m_uint16_
    m_uint16_ = 0;
    // long m_int32_
    m_int32_ = 0;
    // unsigned long m_uint32_
    m_uint32_ = 0;
    // long long m_int64_
    m_int64_ = 0;
    // unsigned long long m_uint64_
    m_uint64_ = 555;
    // string m_local_string
    m_local_string ="";

    // Just to register all known types
    registernew_features_4_2Types();
}

NewAliases::~NewAliases()
{









}

NewAliases::NewAliases(
        const NewAliases& x)
{
    m_int8_ = x.m_int8_;
    m_uint8_ = x.m_uint8_;
    m_int16_ = x.m_int16_;
    m_uint16_ = x.m_uint16_;
    m_int32_ = x.m_int32_;
    m_uint32_ = x.m_uint32_;
    m_int64_ = x.m_int64_;
    m_uint64_ = x.m_uint64_;
    m_local_string = x.m_local_string;
}

NewAliases::NewAliases(
        NewAliases&& x) noexcept 
{
    m_int8_ = x.m_int8_;
    m_uint8_ = x.m_uint8_;
    m_int16_ = x.m_int16_;
    m_uint16_ = x.m_uint16_;
    m_int32_ = x.m_int32_;
    m_uint32_ = x.m_uint32_;
    m_int64_ = x.m_int64_;
    m_uint64_ = x.m_uint64_;
    m_local_string = std::move(x.m_local_string);
}

NewAliases& NewAliases::operator =(
        const NewAliases& x)
{

    m_int8_ = x.m_int8_;
    m_uint8_ = x.m_uint8_;
    m_int16_ = x.m_int16_;
    m_uint16_ = x.m_uint16_;
    m_int32_ = x.m_int32_;
    m_uint32_ = x.m_uint32_;
    m_int64_ = x.m_int64_;
    m_uint64_ = x.m_uint64_;
    m_local_string = x.m_local_string;

    return *this;
}

NewAliases& NewAliases::operator =(
        NewAliases&& x) noexcept
{

    m_int8_ = x.m_int8_;
    m_uint8_ = x.m_uint8_;
    m_int16_ = x.m_int16_;
    m_uint16_ = x.m_uint16_;
    m_int32_ = x.m_int32_;
    m_uint32_ = x.m_uint32_;
    m_int64_ = x.m_int64_;
    m_uint64_ = x.m_uint64_;
    m_local_string = std::move(x.m_local_string);

    return *this;
}

bool NewAliases::operator ==(
        const NewAliases& x) const
{

    return (m_int8_ == x.m_int8_ && m_uint8_ == x.m_uint8_ && m_int16_ == x.m_int16_ && m_uint16_ == x.m_uint16_ && m_int32_ == x.m_int32_ && m_uint32_ == x.m_uint32_ && m_int64_ == x.m_int64_ && m_uint64_ == x.m_uint64_ && m_local_string == x.m_local_string);
}

bool NewAliases::operator !=(
        const NewAliases& x) const
{
    return !(*this == x);
}

size_t NewAliases::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return NewAliases_max_cdr_typesize;
}

size_t NewAliases::getCdrSerializedSize(
        const NewAliases& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);




    return current_alignment - initial_alignment;
}

void NewAliases::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_int8_;
    scdr << m_uint8_;
    scdr << m_int16_;
    scdr << m_uint16_;
    scdr << m_int32_;
    scdr << m_uint32_;
    scdr << m_int64_;
    scdr << m_uint64_;

}

void NewAliases::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_int8_;
    dcdr >> m_uint8_;
    dcdr >> m_int16_;
    dcdr >> m_uint16_;
    dcdr >> m_int32_;
    dcdr >> m_uint32_;
    dcdr >> m_int64_;
    dcdr >> m_uint64_;

}

/*!
 * @brief This function sets a value in member int8_
 * @param _int8_ New value for member int8_
 */
void NewAliases::int8_(
        int8_t _int8_)
{
    m_int8_ = _int8_;
}

/*!
 * @brief This function returns the value of member int8_
 * @return Value of member int8_
 */
int8_t NewAliases::int8_() const
{
    return m_int8_;
}

/*!
 * @brief This function returns a reference to member int8_
 * @return Reference to member int8_
 */
int8_t& NewAliases::int8_()
{
    return m_int8_;
}

/*!
 * @brief This function sets a value in member uint8_
 * @param _uint8_ New value for member uint8_
 */
void NewAliases::uint8_(
        uint8_t _uint8_)
{
    m_uint8_ = _uint8_;
}

/*!
 * @brief This function returns the value of member uint8_
 * @return Value of member uint8_
 */
uint8_t NewAliases::uint8_() const
{
    return m_uint8_;
}

/*!
 * @brief This function returns a reference to member uint8_
 * @return Reference to member uint8_
 */
uint8_t& NewAliases::uint8_()
{
    return m_uint8_;
}

/*!
 * @brief This function sets a value in member int16_
 * @param _int16_ New value for member int16_
 */
void NewAliases::int16_(
        int16_t _int16_)
{
    m_int16_ = _int16_;
}

/*!
 * @brief This function returns the value of member int16_
 * @return Value of member int16_
 */
int16_t NewAliases::int16_() const
{
    return m_int16_;
}

/*!
 * @brief This function returns a reference to member int16_
 * @return Reference to member int16_
 */
int16_t& NewAliases::int16_()
{
    return m_int16_;
}

/*!
 * @brief This function sets a value in member uint16_
 * @param _uint16_ New value for member uint16_
 */
void NewAliases::uint16_(
        uint16_t _uint16_)
{
    m_uint16_ = _uint16_;
}

/*!
 * @brief This function returns the value of member uint16_
 * @return Value of member uint16_
 */
uint16_t NewAliases::uint16_() const
{
    return m_uint16_;
}

/*!
 * @brief This function returns a reference to member uint16_
 * @return Reference to member uint16_
 */
uint16_t& NewAliases::uint16_()
{
    return m_uint16_;
}

/*!
 * @brief This function sets a value in member int32_
 * @param _int32_ New value for member int32_
 */
void NewAliases::int32_(
        int32_t _int32_)
{
    m_int32_ = _int32_;
}

/*!
 * @brief This function returns the value of member int32_
 * @return Value of member int32_
 */
int32_t NewAliases::int32_() const
{
    return m_int32_;
}

/*!
 * @brief This function returns a reference to member int32_
 * @return Reference to member int32_
 */
int32_t& NewAliases::int32_()
{
    return m_int32_;
}

/*!
 * @brief This function sets a value in member uint32_
 * @param _uint32_ New value for member uint32_
 */
void NewAliases::uint32_(
        uint32_t _uint32_)
{
    m_uint32_ = _uint32_;
}

/*!
 * @brief This function returns the value of member uint32_
 * @return Value of member uint32_
 */
uint32_t NewAliases::uint32_() const
{
    return m_uint32_;
}

/*!
 * @brief This function returns a reference to member uint32_
 * @return Reference to member uint32_
 */
uint32_t& NewAliases::uint32_()
{
    return m_uint32_;
}

/*!
 * @brief This function sets a value in member int64_
 * @param _int64_ New value for member int64_
 */
void NewAliases::int64_(
        int64_t _int64_)
{
    m_int64_ = _int64_;
}

/*!
 * @brief This function returns the value of member int64_
 * @return Value of member int64_
 */
int64_t NewAliases::int64_() const
{
    return m_int64_;
}

/*!
 * @brief This function returns a reference to member int64_
 * @return Reference to member int64_
 */
int64_t& NewAliases::int64_()
{
    return m_int64_;
}

/*!
 * @brief This function sets a value in member uint64_
 * @param _uint64_ New value for member uint64_
 */
void NewAliases::uint64_(
        uint64_t _uint64_)
{
    m_uint64_ = _uint64_;
}

/*!
 * @brief This function returns the value of member uint64_
 * @return Value of member uint64_
 */
uint64_t NewAliases::uint64_() const
{
    return m_uint64_;
}

/*!
 * @brief This function returns a reference to member uint64_
 * @return Reference to member uint64_
 */
uint64_t& NewAliases::uint64_()
{
    return m_uint64_;
}

/*!
 * @brief This function copies the value in member local_string
 * @param _local_string New value to be copied in member local_string
 */
void NewAliases::local_string(
        const std::string& _local_string)
{
    m_local_string = _local_string;
}

/*!
 * @brief This function moves the value in member local_string
 * @param _local_string New value to be moved in member local_string
 */
void NewAliases::local_string(
        std::string&& _local_string)
{
    m_local_string = std::move(_local_string);
}

/*!
 * @brief This function returns a constant reference to member local_string
 * @return Constant reference to member local_string
 */
const std::string& NewAliases::local_string() const
{
    return m_local_string;
}

/*!
 * @brief This function returns a reference to member local_string
 * @return Reference to member local_string
 */
std::string& NewAliases::local_string()
{
    return m_local_string;
}


size_t NewAliases::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return NewAliases_max_key_cdr_typesize;
}

bool NewAliases::isKeyDefined()
{
    return false;
}

void NewAliases::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


WCharUnion::WCharUnion()
{
    m__d = 'a';
    // long m_case_zero
    m_case_zero = 0;
    // long m_case_one
    m_case_one = 0;
}

WCharUnion::~WCharUnion()
{
}

WCharUnion::WCharUnion(
        const WCharUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 'a':
        m_case_zero = x.m_case_zero;
        break;
        case 'b':
        m_case_one = x.m_case_one;
        break;
        default:
        break;
    }
}

WCharUnion::WCharUnion(
        WCharUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 'a':
        m_case_zero = x.m_case_zero;
        break;
        case 'b':
        m_case_one = x.m_case_one;
        break;
        default:
        break;
    }
}

WCharUnion& WCharUnion::operator =(
        const WCharUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 'a':
        m_case_zero = x.m_case_zero;
        break;
        case 'b':
        m_case_one = x.m_case_one;
        break;
        default:
        break;
    }

    return *this;
}

WCharUnion& WCharUnion::operator =(
        WCharUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 'a':
        m_case_zero = x.m_case_zero;
        break;
        case 'b':
        m_case_one = x.m_case_one;
        break;
        default:
        break;
    }

    return *this;
}

bool WCharUnion::operator ==(
        const WCharUnion& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case 'a':
            return (m_case_zero == x.m_case_zero);
            break;
        case 'b':
            return (m_case_one == x.m_case_one);
            break;
        default:
        break;
    }
    return false;
}

bool WCharUnion::operator !=(
        const WCharUnion& x) const
{
    return !(*this == x);
}

void WCharUnion::_d(
        wchar_t __d)
{
    bool b = false;

    switch(m__d)
    {
        case 'a':
        switch(__d)
        {
            case 'a':
            b = true;
            break;
            default:
            break;
        }
        break;
        case 'b':
        switch(__d)
        {
            case 'b':
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

wchar_t WCharUnion::_d() const
{
    return m__d;
}

wchar_t& WCharUnion::_d()
{
    return m__d;
}

void WCharUnion::case_zero(
        int32_t _case_zero)
{
    m_case_zero = _case_zero;
    m__d = 'a';
}

int32_t WCharUnion::case_zero() const
{
    bool b = false;

    switch(m__d)
    {
        case 'a':
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_zero;
}

int32_t& WCharUnion::case_zero()
{
    bool b = false;

    switch(m__d)
    {
        case 'a':
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_zero;
}
void WCharUnion::case_one(
        int32_t _case_one)
{
    m_case_one = _case_one;
    m__d = 'b';
}

int32_t WCharUnion::case_one() const
{
    bool b = false;

    switch(m__d)
    {
        case 'b':
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_one;
}

int32_t& WCharUnion::case_one()
{
    bool b = false;

    switch(m__d)
    {
        case 'b':
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_one;
}

// TODO(Ricardo) Review
size_t WCharUnion::getCdrSerializedSize(
        const WCharUnion& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
        case 'a':
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        case 'b':
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void WCharUnion::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case 'a':
        scdr << m_case_zero;

        break;
        case 'b':
        scdr << m_case_one;

        break;
        default:
        break;
    }
}

void WCharUnion::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case 'a':
        dcdr >> m_case_zero;
        break;
        case 'b':
        dcdr >> m_case_one;
        break;
        default:
        break;
    }
}


OctetUnion::OctetUnion()
{
    m__d = 5;
    // long m_case_five
    m_case_five = 0;
    // long m_case_seven
    m_case_seven = 0;
}

OctetUnion::~OctetUnion()
{
}

OctetUnion::OctetUnion(
        const OctetUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 5:
        m_case_five = x.m_case_five;
        break;
        case 7:
        m_case_seven = x.m_case_seven;
        break;
        default:
        break;
    }
}

OctetUnion::OctetUnion(
        OctetUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 5:
        m_case_five = x.m_case_five;
        break;
        case 7:
        m_case_seven = x.m_case_seven;
        break;
        default:
        break;
    }
}

OctetUnion& OctetUnion::operator =(
        const OctetUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 5:
        m_case_five = x.m_case_five;
        break;
        case 7:
        m_case_seven = x.m_case_seven;
        break;
        default:
        break;
    }

    return *this;
}

OctetUnion& OctetUnion::operator =(
        OctetUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 5:
        m_case_five = x.m_case_five;
        break;
        case 7:
        m_case_seven = x.m_case_seven;
        break;
        default:
        break;
    }

    return *this;
}

bool OctetUnion::operator ==(
        const OctetUnion& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case 5:
            return (m_case_five == x.m_case_five);
            break;
        case 7:
            return (m_case_seven == x.m_case_seven);
            break;
        default:
        break;
    }
    return false;
}

bool OctetUnion::operator !=(
        const OctetUnion& x) const
{
    return !(*this == x);
}

void OctetUnion::_d(
        uint8_t __d)
{
    bool b = false;

    switch(m__d)
    {
        case 5:
        switch(__d)
        {
            case 5:
            b = true;
            break;
            default:
            break;
        }
        break;
        case 7:
        switch(__d)
        {
            case 7:
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

uint8_t OctetUnion::_d() const
{
    return m__d;
}

uint8_t& OctetUnion::_d()
{
    return m__d;
}

void OctetUnion::case_five(
        int32_t _case_five)
{
    m_case_five = _case_five;
    m__d = 5;
}

int32_t OctetUnion::case_five() const
{
    bool b = false;

    switch(m__d)
    {
        case 5:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_five;
}

int32_t& OctetUnion::case_five()
{
    bool b = false;

    switch(m__d)
    {
        case 5:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_five;
}
void OctetUnion::case_seven(
        int32_t _case_seven)
{
    m_case_seven = _case_seven;
    m__d = 7;
}

int32_t OctetUnion::case_seven() const
{
    bool b = false;

    switch(m__d)
    {
        case 7:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_seven;
}

int32_t& OctetUnion::case_seven()
{
    bool b = false;

    switch(m__d)
    {
        case 7:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_seven;
}

// TODO(Ricardo) Review
size_t OctetUnion::getCdrSerializedSize(
        const OctetUnion& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    switch(data.m__d)
    {
        case 5:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        case 7:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void OctetUnion::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case 5:
        scdr << m_case_five;

        break;
        case 7:
        scdr << m_case_seven;

        break;
        default:
        break;
    }
}

void OctetUnion::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case 5:
        dcdr >> m_case_five;
        break;
        case 7:
        dcdr >> m_case_seven;
        break;
        default:
        break;
    }
}


Int8Union::Int8Union()
{
    m__d = 3;
    // long m_case_three
    m_case_three = 0;
    // long m_case_six
    m_case_six = 0;
}

Int8Union::~Int8Union()
{
}

Int8Union::Int8Union(
        const Int8Union& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 3:
        m_case_three = x.m_case_three;
        break;
        case 6:
        m_case_six = x.m_case_six;
        break;
        default:
        break;
    }
}

Int8Union::Int8Union(
        Int8Union&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 3:
        m_case_three = x.m_case_three;
        break;
        case 6:
        m_case_six = x.m_case_six;
        break;
        default:
        break;
    }
}

Int8Union& Int8Union::operator =(
        const Int8Union& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 3:
        m_case_three = x.m_case_three;
        break;
        case 6:
        m_case_six = x.m_case_six;
        break;
        default:
        break;
    }

    return *this;
}

Int8Union& Int8Union::operator =(
        Int8Union&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 3:
        m_case_three = x.m_case_three;
        break;
        case 6:
        m_case_six = x.m_case_six;
        break;
        default:
        break;
    }

    return *this;
}

bool Int8Union::operator ==(
        const Int8Union& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case 3:
            return (m_case_three == x.m_case_three);
            break;
        case 6:
            return (m_case_six == x.m_case_six);
            break;
        default:
        break;
    }
    return false;
}

bool Int8Union::operator !=(
        const Int8Union& x) const
{
    return !(*this == x);
}

void Int8Union::_d(
        int8_t __d)
{
    bool b = false;

    switch(m__d)
    {
        case 3:
        switch(__d)
        {
            case 3:
            b = true;
            break;
            default:
            break;
        }
        break;
        case 6:
        switch(__d)
        {
            case 6:
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

int8_t Int8Union::_d() const
{
    return m__d;
}

int8_t& Int8Union::_d()
{
    return m__d;
}

void Int8Union::case_three(
        int32_t _case_three)
{
    m_case_three = _case_three;
    m__d = 3;
}

int32_t Int8Union::case_three() const
{
    bool b = false;

    switch(m__d)
    {
        case 3:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_three;
}

int32_t& Int8Union::case_three()
{
    bool b = false;

    switch(m__d)
    {
        case 3:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_three;
}
void Int8Union::case_six(
        int32_t _case_six)
{
    m_case_six = _case_six;
    m__d = 6;
}

int32_t Int8Union::case_six() const
{
    bool b = false;

    switch(m__d)
    {
        case 6:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_six;
}

int32_t& Int8Union::case_six()
{
    bool b = false;

    switch(m__d)
    {
        case 6:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_case_six;
}

// TODO(Ricardo) Review
size_t Int8Union::getCdrSerializedSize(
        const Int8Union& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    switch(data.m__d)
    {
        case 3:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        case 6:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void Int8Union::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case 3:
        scdr << m_case_three;

        break;
        case 6:
        scdr << m_case_six;

        break;
        default:
        break;
    }
}

void Int8Union::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case 3:
        dcdr >> m_case_three;
        break;
        case 6:
        dcdr >> m_case_six;
        break;
        default:
        break;
    }
}


bitmodule::ParentBitset::ParentBitset()
{
    // Just to register all known types
    registernew_features_4_2Types();
}

bitmodule::ParentBitset::~ParentBitset()
{
}

bitmodule::ParentBitset::ParentBitset(
        const ParentBitset& x)
{
    m_bitset = x.m_bitset;
}

bitmodule::ParentBitset::ParentBitset(
        ParentBitset&& x) noexcept 
{
    m_bitset = x.m_bitset;
}

bitmodule::ParentBitset& bitmodule::ParentBitset::operator =(
        const ParentBitset& x)
{

    m_bitset = x.m_bitset;

    return *this;
}

bitmodule::ParentBitset& bitmodule::ParentBitset::operator =(
        ParentBitset&& x) noexcept
{

    m_bitset = x.m_bitset;

    return *this;
}

bool bitmodule::ParentBitset::operator ==(
        const ParentBitset& x) const
{

    return m_bitset == x.m_bitset;
}

bool bitmodule::ParentBitset::operator !=(
        const ParentBitset& x) const
{
    return !(*this == x);
}

size_t bitmodule::ParentBitset::getCdrSerializedSize(
        const bitmodule::ParentBitset& ,
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void bitmodule::ParentBitset::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << static_cast<uint32_t>(parent_bitfield());
}

void bitmodule::ParentBitset::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    uint32_t aux_parent_bitfield;
    dcdr >> aux_parent_bitfield;
    parent_bitfield(aux_parent_bitfield);
}


void bitmodule::ParentBitset::parent_bitfield(
        uint32_t _parent_bitfield)
{
    int base = 0;
    int size = 17;
    for (int i = base; i < base + size; ++i)
    {
        m_bitset.set(i, !!(_parent_bitfield & 0x01));
        _parent_bitfield = _parent_bitfield >> 1;
    }
}

uint32_t bitmodule::ParentBitset::parent_bitfield() const
{
    int base = 0;
    int size = 17;
    std::bitset<17> aux;
    for (int i = 0; i < size; ++i)
    {
        aux.set(i, m_bitset.test(i + base));
    }
    return static_cast<uint32_t>(aux.to_ullong());
}

bitmodule::MyBitset::MyBitset()    : bitmodule::ParentBitset() 
{
    // Just to register all known types
    registernew_features_4_2Types();
}

bitmodule::MyBitset::~MyBitset()
{
}

bitmodule::MyBitset::MyBitset(
        const MyBitset& x)    : bitmodule::ParentBitset(x) 
{
    m_bitset = x.m_bitset;
}

bitmodule::MyBitset::MyBitset(
        MyBitset&& x) noexcept     : bitmodule::ParentBitset(std::move(x)) 
{
    m_bitset = x.m_bitset;
}

bitmodule::MyBitset& bitmodule::MyBitset::operator =(
        const MyBitset& x)
{
    bitmodule::ParentBitset::operator =(x); 

    m_bitset = x.m_bitset;

    return *this;
}

bitmodule::MyBitset& bitmodule::MyBitset::operator =(
        MyBitset&& x) noexcept
{
    bitmodule::ParentBitset::operator =(std::move(x)); 

    m_bitset = x.m_bitset;

    return *this;
}

bool bitmodule::MyBitset::operator ==(
        const MyBitset& x) const
{
     if (bitmodule::ParentBitset::operator !=(x)) return false; 

    return m_bitset == x.m_bitset;
}

bool bitmodule::MyBitset::operator !=(
        const MyBitset& x) const
{
    return !(*this == x);
}

size_t bitmodule::MyBitset::getCdrSerializedSize(
        const bitmodule::MyBitset& data,
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += bitmodule::ParentBitset::getCdrSerializedSize(data, current_alignment); 

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);

    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);

    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);

    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    return current_alignment - initial_alignment;
}

void bitmodule::MyBitset::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    bitmodule::ParentBitset::serialize(scdr); 

    scdr << static_cast<char>(a());
    scdr << static_cast<bool>(b());

    scdr << static_cast<uint16_t>(c());
    scdr << static_cast<int16_t>(d());
    scdr << static_cast<int16_t>(e());
    scdr << static_cast<int16_t>(f());
}

void bitmodule::MyBitset::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    bitmodule::ParentBitset::deserialize(dcdr); 

    char aux_a;
    dcdr >> aux_a;
    a(aux_a);
    bool aux_b;
    dcdr >> aux_b;
    b(aux_b);

    uint16_t aux_c;
    dcdr >> aux_c;
    c(aux_c);
    int16_t aux_d;
    dcdr >> aux_d;
    d(aux_d);
    int16_t aux_e;
    dcdr >> aux_e;
    e(aux_e);
    int16_t aux_f;
    dcdr >> aux_f;
    f(aux_f);
}


void bitmodule::MyBitset::a(
        char _a)
{
    int base = 0;
    int size = 3;
    for (int i = base; i < base + size; ++i)
    {
        m_bitset.set(i, !!(_a & 0x01));
        _a = _a >> 1;
    }
}

char bitmodule::MyBitset::a() const
{
    int base = 0;
    int size = 3;
    std::bitset<3> aux;
    for (int i = 0; i < size; ++i)
    {
        aux.set(i, m_bitset.test(i + base));
    }
    return static_cast<char>(aux.to_ullong());
}
void bitmodule::MyBitset::b(
        bool _b)
{
    int base = 3;
    m_bitset.set(base, _b);
}

bool bitmodule::MyBitset::b() const
{
    int base = 3;
    return m_bitset.test(base);
}

void bitmodule::MyBitset::c(
        uint16_t _c)
{
    int base = 8;
    int size = 10;
    for (int i = base; i < base + size; ++i)
    {
        m_bitset.set(i, !!(_c & 0x01));
        _c = _c >> 1;
    }
}

uint16_t bitmodule::MyBitset::c() const
{
    int base = 8;
    int size = 10;
    std::bitset<10> aux;
    for (int i = 0; i < size; ++i)
    {
        aux.set(i, m_bitset.test(i + base));
    }
    return static_cast<uint16_t>(aux.to_ullong());
}
void bitmodule::MyBitset::d(
        int16_t _d)
{
    int base = 18;
    int size = 12;
    for (int i = base; i < base + size; ++i)
    {
        m_bitset.set(i, !!(_d & 0x01));
        _d = _d >> 1;
    }
}

int16_t bitmodule::MyBitset::d() const
{
    int base = 18;
    int size = 12;
    std::bitset<12> aux;
    for (int i = 0; i < size; ++i)
    {
        aux.set(i, m_bitset.test(i + base));
    }
    return static_cast<int16_t>(aux.to_ullong());
}
void bitmodule::MyBitset::e(
        int16_t _e)
{
    int base = 30;
    int size = 12;
    for (int i = base; i < base + size; ++i)
    {
        m_bitset.set(i, !!(_e & 0x01));
        _e = _e >> 1;
    }
}

int16_t bitmodule::MyBitset::e() const
{
    int base = 30;
    int size = 12;
    std::bitset<12> aux;
    for (int i = 0; i < size; ++i)
    {
        aux.set(i, m_bitset.test(i + base));
    }
    return static_cast<int16_t>(aux.to_ullong());
}
void bitmodule::MyBitset::f(
        int16_t _f)
{
    int base = 42;
    int size = 12;
    for (int i = base; i < base + size; ++i)
    {
        m_bitset.set(i, !!(_f & 0x01));
        _f = _f >> 1;
    }
}

int16_t bitmodule::MyBitset::f() const
{
    int base = 42;
    int size = 12;
    std::bitset<12> aux;
    for (int i = 0; i < size; ++i)
    {
        aux.set(i, m_bitset.test(i + base));
    }
    return static_cast<int16_t>(aux.to_ullong());
}


bitmodule::BitsetBitmask::BitsetBitmask()
{
    // bitmodule::MyBitset m_mybitset

    // bitmodule::MyBitMask m_mybitmask
    m_mybitmask = static_cast<bitmodule::MyBitMask>(0);

    // Just to register all known types
    registernew_features_4_2Types();
}

bitmodule::BitsetBitmask::~BitsetBitmask()
{


}

bitmodule::BitsetBitmask::BitsetBitmask(
        const BitsetBitmask& x)
{
    m_mybitset = x.m_mybitset;
    m_mybitmask = x.m_mybitmask;
}

bitmodule::BitsetBitmask::BitsetBitmask(
        BitsetBitmask&& x) noexcept 
{
    m_mybitset = std::move(x.m_mybitset);
    m_mybitmask = x.m_mybitmask;
}

bitmodule::BitsetBitmask& bitmodule::BitsetBitmask::operator =(
        const BitsetBitmask& x)
{

    m_mybitset = x.m_mybitset;
    m_mybitmask = x.m_mybitmask;

    return *this;
}

bitmodule::BitsetBitmask& bitmodule::BitsetBitmask::operator =(
        BitsetBitmask&& x) noexcept
{

    m_mybitset = std::move(x.m_mybitset);
    m_mybitmask = x.m_mybitmask;

    return *this;
}

bool bitmodule::BitsetBitmask::operator ==(
        const BitsetBitmask& x) const
{

    return (m_mybitset == x.m_mybitset && m_mybitmask == x.m_mybitmask);
}

bool bitmodule::BitsetBitmask::operator !=(
        const BitsetBitmask& x) const
{
    return !(*this == x);
}

size_t bitmodule::BitsetBitmask::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return bitmodule_BitsetBitmask_max_cdr_typesize;
}

size_t bitmodule::BitsetBitmask::getCdrSerializedSize(
        const bitmodule::BitsetBitmask& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += bitmodule::MyBitset::getCdrSerializedSize(data.mybitset(), current_alignment);
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void bitmodule::BitsetBitmask::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_mybitset;
    scdr << (uint8_t)m_mybitmask;

}

void bitmodule::BitsetBitmask::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_mybitset;
    {
        uint8_t bitmask_value = 0;
        dcdr >> bitmask_value;
        m_mybitmask = (bitmodule::MyBitMask)bitmask_value;
    }


}

/*!
 * @brief This function copies the value in member mybitset
 * @param _mybitset New value to be copied in member mybitset
 */
void bitmodule::BitsetBitmask::mybitset(
        const bitmodule::MyBitset& _mybitset)
{
    m_mybitset = _mybitset;
}

/*!
 * @brief This function moves the value in member mybitset
 * @param _mybitset New value to be moved in member mybitset
 */
void bitmodule::BitsetBitmask::mybitset(
        bitmodule::MyBitset&& _mybitset)
{
    m_mybitset = std::move(_mybitset);
}

/*!
 * @brief This function returns a constant reference to member mybitset
 * @return Constant reference to member mybitset
 */
const bitmodule::MyBitset& bitmodule::BitsetBitmask::mybitset() const
{
    return m_mybitset;
}

/*!
 * @brief This function returns a reference to member mybitset
 * @return Reference to member mybitset
 */
bitmodule::MyBitset& bitmodule::BitsetBitmask::mybitset()
{
    return m_mybitset;
}
/*!
 * @brief This function sets a value in member mybitmask
 * @param _mybitmask New value for member mybitmask
 */
void bitmodule::BitsetBitmask::mybitmask(
        bitmodule::MyBitMask _mybitmask)
{
    m_mybitmask = _mybitmask;
}

/*!
 * @brief This function returns the value of member mybitmask
 * @return Value of member mybitmask
 */
bitmodule::MyBitMask bitmodule::BitsetBitmask::mybitmask() const
{
    return m_mybitmask;
}

/*!
 * @brief This function returns a reference to member mybitmask
 * @return Reference to member mybitmask
 */
bitmodule::MyBitMask& bitmodule::BitsetBitmask::mybitmask()
{
    return m_mybitmask;
}



size_t bitmodule::BitsetBitmask::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return bitmodule_BitsetBitmask_max_key_cdr_typesize;
}

bool bitmodule::BitsetBitmask::isKeyDefined()
{
    return false;
}

void bitmodule::BitsetBitmask::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


bitmodule::BM2::BM2()    : bitmodule::BitsetBitmask() 
{
    // bitmodule::MyBitMask m_two
    m_two = static_cast<bitmodule::MyBitMask>(0);
    // long m_mylong
    m_mylong = 0;

    // Just to register all known types
    registernew_features_4_2Types();
}

bitmodule::BM2::~BM2()
{


}

bitmodule::BM2::BM2(
        const BM2& x)    : bitmodule::BitsetBitmask(x) 
{
    m_two = x.m_two;
    m_mylong = x.m_mylong;
}

bitmodule::BM2::BM2(
        BM2&& x) noexcept     : bitmodule::BitsetBitmask(std::move(x)) 
{
    m_two = x.m_two;
    m_mylong = x.m_mylong;
}

bitmodule::BM2& bitmodule::BM2::operator =(
        const BM2& x)
{
    bitmodule::BitsetBitmask::operator =(x); 

    m_two = x.m_two;
    m_mylong = x.m_mylong;

    return *this;
}

bitmodule::BM2& bitmodule::BM2::operator =(
        BM2&& x) noexcept
{
    bitmodule::BitsetBitmask::operator =(std::move(x)); 

    m_two = x.m_two;
    m_mylong = x.m_mylong;

    return *this;
}

bool bitmodule::BM2::operator ==(
        const BM2& x) const
{
     if (bitmodule::BitsetBitmask::operator !=(x)) return false; 

    return (m_two == x.m_two && m_mylong == x.m_mylong);
}

bool bitmodule::BM2::operator !=(
        const BM2& x) const
{
    return !(*this == x);
}

size_t bitmodule::BM2::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return bitmodule_BM2_max_cdr_typesize;
}

size_t bitmodule::BM2::getCdrSerializedSize(
        const bitmodule::BM2& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += bitmodule::BitsetBitmask::getCdrSerializedSize(data, current_alignment); 

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void bitmodule::BM2::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    bitmodule::BitsetBitmask::serialize(scdr); 

    scdr << (uint8_t)m_two;
    scdr << m_mylong;

}

void bitmodule::BM2::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    bitmodule::BitsetBitmask::deserialize(dcdr); 

    {
        uint8_t bitmask_value = 0;
        dcdr >> bitmask_value;
        m_two = (bitmodule::MyBitMask)bitmask_value;
    }


    dcdr >> m_mylong;
}

/*!
 * @brief This function sets a value in member two
 * @param _two New value for member two
 */
void bitmodule::BM2::two(
        bitmodule::MyBitMask _two)
{
    m_two = _two;
}

/*!
 * @brief This function returns the value of member two
 * @return Value of member two
 */
bitmodule::MyBitMask bitmodule::BM2::two() const
{
    return m_two;
}

/*!
 * @brief This function returns a reference to member two
 * @return Reference to member two
 */
bitmodule::MyBitMask& bitmodule::BM2::two()
{
    return m_two;
}

/*!
 * @brief This function sets a value in member mylong
 * @param _mylong New value for member mylong
 */
void bitmodule::BM2::mylong(
        int32_t _mylong)
{
    m_mylong = _mylong;
}

/*!
 * @brief This function returns the value of member mylong
 * @return Value of member mylong
 */
int32_t bitmodule::BM2::mylong() const
{
    return m_mylong;
}

/*!
 * @brief This function returns a reference to member mylong
 * @return Reference to member mylong
 */
int32_t& bitmodule::BM2::mylong()
{
    return m_mylong;
}



size_t bitmodule::BM2::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return bitmodule_BM2_max_key_cdr_typesize;
}

bool bitmodule::BM2::isKeyDefined()
{
    if (bitmodule::BitsetBitmask::isKeyDefined())
        return true;
     return false;
}

void bitmodule::BM2::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
 bitmodule::BitsetBitmask::serializeKey(scdr);  
}



StructTest::StructTest()    : NewAliases() 
{
    // WCharUnion m_charUnion

    // OctetUnion m_octetUnion

    // Int8Union m_int8Union

    // bitmodule::BM2 m_myStructBits


    // Just to register all known types
    registernew_features_4_2Types();
}

StructTest::~StructTest()
{




}

StructTest::StructTest(
        const StructTest& x)    : NewAliases(x) 
{
    m_charUnion = x.m_charUnion;
    m_octetUnion = x.m_octetUnion;
    m_int8Union = x.m_int8Union;
    m_myStructBits = x.m_myStructBits;
}

StructTest::StructTest(
        StructTest&& x) noexcept     : NewAliases(std::move(x)) 
{
    m_charUnion = std::move(x.m_charUnion);
    m_octetUnion = std::move(x.m_octetUnion);
    m_int8Union = std::move(x.m_int8Union);
    m_myStructBits = std::move(x.m_myStructBits);
}

StructTest& StructTest::operator =(
        const StructTest& x)
{
    NewAliases::operator =(x); 

    m_charUnion = x.m_charUnion;
    m_octetUnion = x.m_octetUnion;
    m_int8Union = x.m_int8Union;
    m_myStructBits = x.m_myStructBits;

    return *this;
}

StructTest& StructTest::operator =(
        StructTest&& x) noexcept
{
    NewAliases::operator =(std::move(x)); 

    m_charUnion = std::move(x.m_charUnion);
    m_octetUnion = std::move(x.m_octetUnion);
    m_int8Union = std::move(x.m_int8Union);
    m_myStructBits = std::move(x.m_myStructBits);

    return *this;
}

bool StructTest::operator ==(
        const StructTest& x) const
{
     if (NewAliases::operator !=(x)) return false; 

    return (m_charUnion == x.m_charUnion && m_octetUnion == x.m_octetUnion && m_int8Union == x.m_int8Union && m_myStructBits == x.m_myStructBits);
}

bool StructTest::operator !=(
        const StructTest& x) const
{
    return !(*this == x);
}

size_t StructTest::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StructTest_max_cdr_typesize;
}

size_t StructTest::getCdrSerializedSize(
        const StructTest& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += NewAliases::getCdrSerializedSize(data, current_alignment); 

    current_alignment += WCharUnion::getCdrSerializedSize(data.charUnion(), current_alignment);
    current_alignment += OctetUnion::getCdrSerializedSize(data.octetUnion(), current_alignment);
    current_alignment += Int8Union::getCdrSerializedSize(data.int8Union(), current_alignment);
    current_alignment += bitmodule::BM2::getCdrSerializedSize(data.myStructBits(), current_alignment);

    return current_alignment - initial_alignment;
}

void StructTest::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    NewAliases::serialize(scdr); 

    scdr << m_charUnion;
    scdr << m_octetUnion;
    scdr << m_int8Union;
    scdr << m_myStructBits;

}

void StructTest::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    NewAliases::deserialize(dcdr); 

    dcdr >> m_charUnion;
    dcdr >> m_octetUnion;
    dcdr >> m_int8Union;
    dcdr >> m_myStructBits;
}

/*!
 * @brief This function copies the value in member charUnion
 * @param _charUnion New value to be copied in member charUnion
 */
void StructTest::charUnion(
        const WCharUnion& _charUnion)
{
    m_charUnion = _charUnion;
}

/*!
 * @brief This function moves the value in member charUnion
 * @param _charUnion New value to be moved in member charUnion
 */
void StructTest::charUnion(
        WCharUnion&& _charUnion)
{
    m_charUnion = std::move(_charUnion);
}

/*!
 * @brief This function returns a constant reference to member charUnion
 * @return Constant reference to member charUnion
 */
const WCharUnion& StructTest::charUnion() const
{
    return m_charUnion;
}

/*!
 * @brief This function returns a reference to member charUnion
 * @return Reference to member charUnion
 */
WCharUnion& StructTest::charUnion()
{
    return m_charUnion;
}
/*!
 * @brief This function copies the value in member octetUnion
 * @param _octetUnion New value to be copied in member octetUnion
 */
void StructTest::octetUnion(
        const OctetUnion& _octetUnion)
{
    m_octetUnion = _octetUnion;
}

/*!
 * @brief This function moves the value in member octetUnion
 * @param _octetUnion New value to be moved in member octetUnion
 */
void StructTest::octetUnion(
        OctetUnion&& _octetUnion)
{
    m_octetUnion = std::move(_octetUnion);
}

/*!
 * @brief This function returns a constant reference to member octetUnion
 * @return Constant reference to member octetUnion
 */
const OctetUnion& StructTest::octetUnion() const
{
    return m_octetUnion;
}

/*!
 * @brief This function returns a reference to member octetUnion
 * @return Reference to member octetUnion
 */
OctetUnion& StructTest::octetUnion()
{
    return m_octetUnion;
}
/*!
 * @brief This function copies the value in member int8Union
 * @param _int8Union New value to be copied in member int8Union
 */
void StructTest::int8Union(
        const Int8Union& _int8Union)
{
    m_int8Union = _int8Union;
}

/*!
 * @brief This function moves the value in member int8Union
 * @param _int8Union New value to be moved in member int8Union
 */
void StructTest::int8Union(
        Int8Union&& _int8Union)
{
    m_int8Union = std::move(_int8Union);
}

/*!
 * @brief This function returns a constant reference to member int8Union
 * @return Constant reference to member int8Union
 */
const Int8Union& StructTest::int8Union() const
{
    return m_int8Union;
}

/*!
 * @brief This function returns a reference to member int8Union
 * @return Reference to member int8Union
 */
Int8Union& StructTest::int8Union()
{
    return m_int8Union;
}
/*!
 * @brief This function copies the value in member myStructBits
 * @param _myStructBits New value to be copied in member myStructBits
 */
void StructTest::myStructBits(
        const bitmodule::BM2& _myStructBits)
{
    m_myStructBits = _myStructBits;
}

/*!
 * @brief This function moves the value in member myStructBits
 * @param _myStructBits New value to be moved in member myStructBits
 */
void StructTest::myStructBits(
        bitmodule::BM2&& _myStructBits)
{
    m_myStructBits = std::move(_myStructBits);
}

/*!
 * @brief This function returns a constant reference to member myStructBits
 * @return Constant reference to member myStructBits
 */
const bitmodule::BM2& StructTest::myStructBits() const
{
    return m_myStructBits;
}

/*!
 * @brief This function returns a reference to member myStructBits
 * @return Reference to member myStructBits
 */
bitmodule::BM2& StructTest::myStructBits()
{
    return m_myStructBits;
}


size_t StructTest::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StructTest_max_key_cdr_typesize;
}

bool StructTest::isKeyDefined()
{
    if (NewAliases::isKeyDefined())
        return true;
     return false;
}

void StructTest::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
 NewAliases::serializeKey(scdr);  
}

