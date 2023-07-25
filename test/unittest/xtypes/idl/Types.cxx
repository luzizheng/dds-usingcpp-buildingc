/*!
 * @file Types.cpp
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

#include "Types.h"
#include "TypesTypeObject.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define SimpleUnionStruct_max_cdr_typesize 16ULL;
#define SequenceSequenceBoundsStruct_max_cdr_typesize 124ULL;

#define MyAliasEnumStruct_max_cdr_typesize 4ULL;
#define ArrayBadStruct_max_cdr_typesize 2ULL;
#define MapBadKeyStruct_max_cdr_typesize 20ULL;
#define SimpleBadUnionStruct_max_cdr_typesize 16ULL;
#define MyEnumStruct_max_cdr_typesize 4ULL;

#define ArrayStructEqual_max_cdr_typesize 8ULL;
#define LargeWStringStruct_max_cdr_typesize 167704ULL;

#define WStringStruct_max_cdr_typesize 1024ULL;
#define SequenceStruct_max_cdr_typesize 12ULL;
#define SimpleTypeUnionStruct_max_cdr_typesize 16ULL;

#define ArrayDimensionsStruct_max_cdr_typesize 16ULL;
#define SequenceSequenceStruct_max_cdr_typesize 40ULL;
#define MapBoundsStruct_max_cdr_typesize 36ULL;
#define SequenceStructEqual_max_cdr_typesize 12ULL;
#define MapStructEqual_max_cdr_typesize 20ULL;
#define BasicStruct_max_cdr_typesize 268ULL;
#define SequenceBoundsStruct_max_cdr_typesize 20ULL;
#define MapMapStruct_max_cdr_typesize 52ULL;
#define BasicWideStruct_max_cdr_typesize 532ULL;

#define SimplBadDiscUnionStruct_max_cdr_typesize 16ULL;
#define MapStruct_max_cdr_typesize 20ULL;

#define MyBadEnumStruct_max_cdr_typesize 4ULL;
#define SequenceBadStruct_max_cdr_typesize 6ULL;
#define SimpleUnionNamesStruct_max_cdr_typesize 16ULL;
#define LargeStringStruct_max_cdr_typesize 41930ULL;
#define ArrayStruct_max_cdr_typesize 8ULL;
#define BadBasicWideStruct_max_cdr_typesize 532ULL;
#define ArraySizeStruct_max_cdr_typesize 20ULL;

#define MapBadElemStruct_max_cdr_typesize 32ULL;
#define SimpleUnionStructEqual_max_cdr_typesize 16ULL;
#define BasicBadStruct_max_cdr_typesize 268ULL;
#define BasicNamesStruct_max_cdr_typesize 268ULL;
#define StringStruct_max_cdr_typesize 260ULL;

#define MapMapBoundsStruct_max_cdr_typesize 100ULL;
#define SimpleUnionStruct_max_key_cdr_typesize 0ULL;
#define SequenceSequenceBoundsStruct_max_key_cdr_typesize 0ULL;

#define MyAliasEnumStruct_max_key_cdr_typesize 0ULL;
#define ArrayBadStruct_max_key_cdr_typesize 0ULL;
#define MapBadKeyStruct_max_key_cdr_typesize 0ULL;
#define SimpleBadUnionStruct_max_key_cdr_typesize 0ULL;
#define MyEnumStruct_max_key_cdr_typesize 0ULL;

#define ArrayStructEqual_max_key_cdr_typesize 0ULL;
#define LargeWStringStruct_max_key_cdr_typesize 0ULL;

#define WStringStruct_max_key_cdr_typesize 0ULL;
#define SequenceStruct_max_key_cdr_typesize 0ULL;
#define SimpleTypeUnionStruct_max_key_cdr_typesize 0ULL;

#define ArrayDimensionsStruct_max_key_cdr_typesize 0ULL;
#define SequenceSequenceStruct_max_key_cdr_typesize 0ULL;
#define MapBoundsStruct_max_key_cdr_typesize 0ULL;
#define SequenceStructEqual_max_key_cdr_typesize 0ULL;
#define MapStructEqual_max_key_cdr_typesize 0ULL;
#define BasicStruct_max_key_cdr_typesize 0ULL;
#define SequenceBoundsStruct_max_key_cdr_typesize 0ULL;
#define MapMapStruct_max_key_cdr_typesize 0ULL;
#define BasicWideStruct_max_key_cdr_typesize 0ULL;

#define SimplBadDiscUnionStruct_max_key_cdr_typesize 0ULL;
#define MapStruct_max_key_cdr_typesize 0ULL;

#define MyBadEnumStruct_max_key_cdr_typesize 0ULL;
#define SequenceBadStruct_max_key_cdr_typesize 0ULL;
#define SimpleUnionNamesStruct_max_key_cdr_typesize 0ULL;
#define LargeStringStruct_max_key_cdr_typesize 0ULL;
#define ArrayStruct_max_key_cdr_typesize 0ULL;
#define BadBasicWideStruct_max_key_cdr_typesize 0ULL;
#define ArraySizeStruct_max_key_cdr_typesize 0ULL;

#define MapBadElemStruct_max_key_cdr_typesize 0ULL;
#define SimpleUnionStructEqual_max_key_cdr_typesize 0ULL;
#define BasicBadStruct_max_key_cdr_typesize 0ULL;
#define BasicNamesStruct_max_key_cdr_typesize 0ULL;
#define StringStruct_max_key_cdr_typesize 0ULL;

#define MapMapBoundsStruct_max_key_cdr_typesize 0ULL;



MyEnumStruct::MyEnumStruct()
{
    // MyEnum m_my_enum
    m_my_enum = ::A;

    // Just to register all known types
    registerTypesTypes();
}

MyEnumStruct::~MyEnumStruct()
{
}

MyEnumStruct::MyEnumStruct(
        const MyEnumStruct& x)
{
    m_my_enum = x.m_my_enum;
}

MyEnumStruct::MyEnumStruct(
        MyEnumStruct&& x) noexcept 
{
    m_my_enum = x.m_my_enum;
}

MyEnumStruct& MyEnumStruct::operator =(
        const MyEnumStruct& x)
{

    m_my_enum = x.m_my_enum;

    return *this;
}

MyEnumStruct& MyEnumStruct::operator =(
        MyEnumStruct&& x) noexcept
{

    m_my_enum = x.m_my_enum;

    return *this;
}

bool MyEnumStruct::operator ==(
        const MyEnumStruct& x) const
{

    return (m_my_enum == x.m_my_enum);
}

bool MyEnumStruct::operator !=(
        const MyEnumStruct& x) const
{
    return !(*this == x);
}

size_t MyEnumStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MyEnumStruct_max_cdr_typesize;
}

size_t MyEnumStruct::getCdrSerializedSize(
        const MyEnumStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void MyEnumStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << (uint32_t)m_my_enum;

}

void MyEnumStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_my_enum = (MyEnum)enum_value;
    }

}

/*!
 * @brief This function sets a value in member my_enum
 * @param _my_enum New value for member my_enum
 */
void MyEnumStruct::my_enum(
        MyEnum _my_enum)
{
    m_my_enum = _my_enum;
}

/*!
 * @brief This function returns the value of member my_enum
 * @return Value of member my_enum
 */
MyEnum MyEnumStruct::my_enum() const
{
    return m_my_enum;
}

/*!
 * @brief This function returns a reference to member my_enum
 * @return Reference to member my_enum
 */
MyEnum& MyEnumStruct::my_enum()
{
    return m_my_enum;
}



size_t MyEnumStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MyEnumStruct_max_key_cdr_typesize;
}

bool MyEnumStruct::isKeyDefined()
{
    return false;
}

void MyEnumStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


MyBadEnumStruct::MyBadEnumStruct()
{
    // MyBadEnum m_my_enum
    m_my_enum = ::A1;

    // Just to register all known types
    registerTypesTypes();
}

MyBadEnumStruct::~MyBadEnumStruct()
{
}

MyBadEnumStruct::MyBadEnumStruct(
        const MyBadEnumStruct& x)
{
    m_my_enum = x.m_my_enum;
}

MyBadEnumStruct::MyBadEnumStruct(
        MyBadEnumStruct&& x) noexcept 
{
    m_my_enum = x.m_my_enum;
}

MyBadEnumStruct& MyBadEnumStruct::operator =(
        const MyBadEnumStruct& x)
{

    m_my_enum = x.m_my_enum;

    return *this;
}

MyBadEnumStruct& MyBadEnumStruct::operator =(
        MyBadEnumStruct&& x) noexcept
{

    m_my_enum = x.m_my_enum;

    return *this;
}

bool MyBadEnumStruct::operator ==(
        const MyBadEnumStruct& x) const
{

    return (m_my_enum == x.m_my_enum);
}

bool MyBadEnumStruct::operator !=(
        const MyBadEnumStruct& x) const
{
    return !(*this == x);
}

size_t MyBadEnumStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MyBadEnumStruct_max_cdr_typesize;
}

size_t MyBadEnumStruct::getCdrSerializedSize(
        const MyBadEnumStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void MyBadEnumStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << (uint32_t)m_my_enum;

}

void MyBadEnumStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_my_enum = (MyBadEnum)enum_value;
    }

}

/*!
 * @brief This function sets a value in member my_enum
 * @param _my_enum New value for member my_enum
 */
void MyBadEnumStruct::my_enum(
        MyBadEnum _my_enum)
{
    m_my_enum = _my_enum;
}

/*!
 * @brief This function returns the value of member my_enum
 * @return Value of member my_enum
 */
MyBadEnum MyBadEnumStruct::my_enum() const
{
    return m_my_enum;
}

/*!
 * @brief This function returns a reference to member my_enum
 * @return Reference to member my_enum
 */
MyBadEnum& MyBadEnumStruct::my_enum()
{
    return m_my_enum;
}



size_t MyBadEnumStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MyBadEnumStruct_max_key_cdr_typesize;
}

bool MyBadEnumStruct::isKeyDefined()
{
    return false;
}

void MyBadEnumStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



MyAliasEnumStruct::MyAliasEnumStruct()
{
    // MyAliasEnum m_my_enum
    m_my_enum = ::A;

    // Just to register all known types
    registerTypesTypes();
}

MyAliasEnumStruct::~MyAliasEnumStruct()
{
}

MyAliasEnumStruct::MyAliasEnumStruct(
        const MyAliasEnumStruct& x)
{
    m_my_enum = x.m_my_enum;
}

MyAliasEnumStruct::MyAliasEnumStruct(
        MyAliasEnumStruct&& x) noexcept 
{
    m_my_enum = x.m_my_enum;
}

MyAliasEnumStruct& MyAliasEnumStruct::operator =(
        const MyAliasEnumStruct& x)
{

    m_my_enum = x.m_my_enum;

    return *this;
}

MyAliasEnumStruct& MyAliasEnumStruct::operator =(
        MyAliasEnumStruct&& x) noexcept
{

    m_my_enum = x.m_my_enum;

    return *this;
}

bool MyAliasEnumStruct::operator ==(
        const MyAliasEnumStruct& x) const
{

    return (m_my_enum == x.m_my_enum);
}

bool MyAliasEnumStruct::operator !=(
        const MyAliasEnumStruct& x) const
{
    return !(*this == x);
}

size_t MyAliasEnumStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MyAliasEnumStruct_max_cdr_typesize;
}

size_t MyAliasEnumStruct::getCdrSerializedSize(
        const MyAliasEnumStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void MyAliasEnumStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << (uint32_t)m_my_enum;

}

void MyAliasEnumStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_my_enum = (MyAliasEnum)enum_value;
    }

}

/*!
 * @brief This function sets a value in member my_enum
 * @param _my_enum New value for member my_enum
 */
void MyAliasEnumStruct::my_enum(
        MyAliasEnum _my_enum)
{
    m_my_enum = _my_enum;
}

/*!
 * @brief This function returns the value of member my_enum
 * @return Value of member my_enum
 */
MyAliasEnum MyAliasEnumStruct::my_enum() const
{
    return m_my_enum;
}

/*!
 * @brief This function returns a reference to member my_enum
 * @return Reference to member my_enum
 */
MyAliasEnum& MyAliasEnumStruct::my_enum()
{
    return m_my_enum;
}



size_t MyAliasEnumStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MyAliasEnumStruct_max_key_cdr_typesize;
}

bool MyAliasEnumStruct::isKeyDefined()
{
    return false;
}

void MyAliasEnumStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


BasicStruct::BasicStruct()
{
    // boolean m_my_bool
    m_my_bool = false;
    // long m_my_int32
    m_my_int32 = 0;
    // string m_my_string
    m_my_string ="";

    // Just to register all known types
    registerTypesTypes();
}

BasicStruct::~BasicStruct()
{



}

BasicStruct::BasicStruct(
        const BasicStruct& x)
{
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = x.m_my_string;
}

BasicStruct::BasicStruct(
        BasicStruct&& x) noexcept 
{
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = std::move(x.m_my_string);
}

BasicStruct& BasicStruct::operator =(
        const BasicStruct& x)
{

    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = x.m_my_string;

    return *this;
}

BasicStruct& BasicStruct::operator =(
        BasicStruct&& x) noexcept
{

    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = std::move(x.m_my_string);

    return *this;
}

bool BasicStruct::operator ==(
        const BasicStruct& x) const
{

    return (m_my_bool == x.m_my_bool && m_my_int32 == x.m_my_int32 && m_my_string == x.m_my_string);
}

bool BasicStruct::operator !=(
        const BasicStruct& x) const
{
    return !(*this == x);
}

size_t BasicStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BasicStruct_max_cdr_typesize;
}

size_t BasicStruct::getCdrSerializedSize(
        const BasicStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_string().size() + 1;


    return current_alignment - initial_alignment;
}

void BasicStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_bool;
    scdr << m_my_int32;
    scdr << m_my_string.c_str();

}

void BasicStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_bool;
    dcdr >> m_my_int32;
    dcdr >> m_my_string;
}

/*!
 * @brief This function sets a value in member my_bool
 * @param _my_bool New value for member my_bool
 */
void BasicStruct::my_bool(
        bool _my_bool)
{
    m_my_bool = _my_bool;
}

/*!
 * @brief This function returns the value of member my_bool
 * @return Value of member my_bool
 */
bool BasicStruct::my_bool() const
{
    return m_my_bool;
}

/*!
 * @brief This function returns a reference to member my_bool
 * @return Reference to member my_bool
 */
bool& BasicStruct::my_bool()
{
    return m_my_bool;
}

/*!
 * @brief This function sets a value in member my_int32
 * @param _my_int32 New value for member my_int32
 */
void BasicStruct::my_int32(
        int32_t _my_int32)
{
    m_my_int32 = _my_int32;
}

/*!
 * @brief This function returns the value of member my_int32
 * @return Value of member my_int32
 */
int32_t BasicStruct::my_int32() const
{
    return m_my_int32;
}

/*!
 * @brief This function returns a reference to member my_int32
 * @return Reference to member my_int32
 */
int32_t& BasicStruct::my_int32()
{
    return m_my_int32;
}

/*!
 * @brief This function copies the value in member my_string
 * @param _my_string New value to be copied in member my_string
 */
void BasicStruct::my_string(
        const std::string& _my_string)
{
    m_my_string = _my_string;
}

/*!
 * @brief This function moves the value in member my_string
 * @param _my_string New value to be moved in member my_string
 */
void BasicStruct::my_string(
        std::string&& _my_string)
{
    m_my_string = std::move(_my_string);
}

/*!
 * @brief This function returns a constant reference to member my_string
 * @return Constant reference to member my_string
 */
const std::string& BasicStruct::my_string() const
{
    return m_my_string;
}

/*!
 * @brief This function returns a reference to member my_string
 * @return Reference to member my_string
 */
std::string& BasicStruct::my_string()
{
    return m_my_string;
}


size_t BasicStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BasicStruct_max_key_cdr_typesize;
}

bool BasicStruct::isKeyDefined()
{
    return false;
}

void BasicStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


BasicNamesStruct::BasicNamesStruct()
{
    // boolean m_my_bool_name
    m_my_bool_name = false;
    // long m_my_int32_name
    m_my_int32_name = 0;
    // string m_my_string_name
    m_my_string_name ="";

    // Just to register all known types
    registerTypesTypes();
}

BasicNamesStruct::~BasicNamesStruct()
{



}

BasicNamesStruct::BasicNamesStruct(
        const BasicNamesStruct& x)
{
    m_my_bool_name = x.m_my_bool_name;
    m_my_int32_name = x.m_my_int32_name;
    m_my_string_name = x.m_my_string_name;
}

BasicNamesStruct::BasicNamesStruct(
        BasicNamesStruct&& x) noexcept 
{
    m_my_bool_name = x.m_my_bool_name;
    m_my_int32_name = x.m_my_int32_name;
    m_my_string_name = std::move(x.m_my_string_name);
}

BasicNamesStruct& BasicNamesStruct::operator =(
        const BasicNamesStruct& x)
{

    m_my_bool_name = x.m_my_bool_name;
    m_my_int32_name = x.m_my_int32_name;
    m_my_string_name = x.m_my_string_name;

    return *this;
}

BasicNamesStruct& BasicNamesStruct::operator =(
        BasicNamesStruct&& x) noexcept
{

    m_my_bool_name = x.m_my_bool_name;
    m_my_int32_name = x.m_my_int32_name;
    m_my_string_name = std::move(x.m_my_string_name);

    return *this;
}

bool BasicNamesStruct::operator ==(
        const BasicNamesStruct& x) const
{

    return (m_my_bool_name == x.m_my_bool_name && m_my_int32_name == x.m_my_int32_name && m_my_string_name == x.m_my_string_name);
}

bool BasicNamesStruct::operator !=(
        const BasicNamesStruct& x) const
{
    return !(*this == x);
}

size_t BasicNamesStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BasicNamesStruct_max_cdr_typesize;
}

size_t BasicNamesStruct::getCdrSerializedSize(
        const BasicNamesStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_string_name().size() + 1;


    return current_alignment - initial_alignment;
}

void BasicNamesStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_bool_name;
    scdr << m_my_int32_name;
    scdr << m_my_string_name.c_str();

}

void BasicNamesStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_bool_name;
    dcdr >> m_my_int32_name;
    dcdr >> m_my_string_name;
}

/*!
 * @brief This function sets a value in member my_bool_name
 * @param _my_bool_name New value for member my_bool_name
 */
void BasicNamesStruct::my_bool_name(
        bool _my_bool_name)
{
    m_my_bool_name = _my_bool_name;
}

/*!
 * @brief This function returns the value of member my_bool_name
 * @return Value of member my_bool_name
 */
bool BasicNamesStruct::my_bool_name() const
{
    return m_my_bool_name;
}

/*!
 * @brief This function returns a reference to member my_bool_name
 * @return Reference to member my_bool_name
 */
bool& BasicNamesStruct::my_bool_name()
{
    return m_my_bool_name;
}

/*!
 * @brief This function sets a value in member my_int32_name
 * @param _my_int32_name New value for member my_int32_name
 */
void BasicNamesStruct::my_int32_name(
        int32_t _my_int32_name)
{
    m_my_int32_name = _my_int32_name;
}

/*!
 * @brief This function returns the value of member my_int32_name
 * @return Value of member my_int32_name
 */
int32_t BasicNamesStruct::my_int32_name() const
{
    return m_my_int32_name;
}

/*!
 * @brief This function returns a reference to member my_int32_name
 * @return Reference to member my_int32_name
 */
int32_t& BasicNamesStruct::my_int32_name()
{
    return m_my_int32_name;
}

/*!
 * @brief This function copies the value in member my_string_name
 * @param _my_string_name New value to be copied in member my_string_name
 */
void BasicNamesStruct::my_string_name(
        const std::string& _my_string_name)
{
    m_my_string_name = _my_string_name;
}

/*!
 * @brief This function moves the value in member my_string_name
 * @param _my_string_name New value to be moved in member my_string_name
 */
void BasicNamesStruct::my_string_name(
        std::string&& _my_string_name)
{
    m_my_string_name = std::move(_my_string_name);
}

/*!
 * @brief This function returns a constant reference to member my_string_name
 * @return Constant reference to member my_string_name
 */
const std::string& BasicNamesStruct::my_string_name() const
{
    return m_my_string_name;
}

/*!
 * @brief This function returns a reference to member my_string_name
 * @return Reference to member my_string_name
 */
std::string& BasicNamesStruct::my_string_name()
{
    return m_my_string_name;
}


size_t BasicNamesStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BasicNamesStruct_max_key_cdr_typesize;
}

bool BasicNamesStruct::isKeyDefined()
{
    return false;
}

void BasicNamesStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


BasicBadStruct::BasicBadStruct()
{
    // octet m_my_bool
    m_my_bool = 0;
    // long m_my_int32
    m_my_int32 = 0;
    // string m_my_string
    m_my_string ="";

    // Just to register all known types
    registerTypesTypes();
}

BasicBadStruct::~BasicBadStruct()
{



}

BasicBadStruct::BasicBadStruct(
        const BasicBadStruct& x)
{
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = x.m_my_string;
}

BasicBadStruct::BasicBadStruct(
        BasicBadStruct&& x) noexcept 
{
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = std::move(x.m_my_string);
}

BasicBadStruct& BasicBadStruct::operator =(
        const BasicBadStruct& x)
{

    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = x.m_my_string;

    return *this;
}

BasicBadStruct& BasicBadStruct::operator =(
        BasicBadStruct&& x) noexcept
{

    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = std::move(x.m_my_string);

    return *this;
}

bool BasicBadStruct::operator ==(
        const BasicBadStruct& x) const
{

    return (m_my_bool == x.m_my_bool && m_my_int32 == x.m_my_int32 && m_my_string == x.m_my_string);
}

bool BasicBadStruct::operator !=(
        const BasicBadStruct& x) const
{
    return !(*this == x);
}

size_t BasicBadStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BasicBadStruct_max_cdr_typesize;
}

size_t BasicBadStruct::getCdrSerializedSize(
        const BasicBadStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_string().size() + 1;


    return current_alignment - initial_alignment;
}

void BasicBadStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_bool;
    scdr << m_my_int32;
    scdr << m_my_string.c_str();

}

void BasicBadStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_bool;
    dcdr >> m_my_int32;
    dcdr >> m_my_string;
}

/*!
 * @brief This function sets a value in member my_bool
 * @param _my_bool New value for member my_bool
 */
void BasicBadStruct::my_bool(
        uint8_t _my_bool)
{
    m_my_bool = _my_bool;
}

/*!
 * @brief This function returns the value of member my_bool
 * @return Value of member my_bool
 */
uint8_t BasicBadStruct::my_bool() const
{
    return m_my_bool;
}

/*!
 * @brief This function returns a reference to member my_bool
 * @return Reference to member my_bool
 */
uint8_t& BasicBadStruct::my_bool()
{
    return m_my_bool;
}

/*!
 * @brief This function sets a value in member my_int32
 * @param _my_int32 New value for member my_int32
 */
void BasicBadStruct::my_int32(
        int32_t _my_int32)
{
    m_my_int32 = _my_int32;
}

/*!
 * @brief This function returns the value of member my_int32
 * @return Value of member my_int32
 */
int32_t BasicBadStruct::my_int32() const
{
    return m_my_int32;
}

/*!
 * @brief This function returns a reference to member my_int32
 * @return Reference to member my_int32
 */
int32_t& BasicBadStruct::my_int32()
{
    return m_my_int32;
}

/*!
 * @brief This function copies the value in member my_string
 * @param _my_string New value to be copied in member my_string
 */
void BasicBadStruct::my_string(
        const std::string& _my_string)
{
    m_my_string = _my_string;
}

/*!
 * @brief This function moves the value in member my_string
 * @param _my_string New value to be moved in member my_string
 */
void BasicBadStruct::my_string(
        std::string&& _my_string)
{
    m_my_string = std::move(_my_string);
}

/*!
 * @brief This function returns a constant reference to member my_string
 * @return Constant reference to member my_string
 */
const std::string& BasicBadStruct::my_string() const
{
    return m_my_string;
}

/*!
 * @brief This function returns a reference to member my_string
 * @return Reference to member my_string
 */
std::string& BasicBadStruct::my_string()
{
    return m_my_string;
}


size_t BasicBadStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BasicBadStruct_max_key_cdr_typesize;
}

bool BasicBadStruct::isKeyDefined()
{
    return false;
}

void BasicBadStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


BasicWideStruct::BasicWideStruct()
{
    // boolean m_my_bool
    m_my_bool = false;
    // long m_my_int32
    m_my_int32 = 0;
    // string m_my_string
    m_my_string ="";
    // long m_new_int32
    m_new_int32 = 0;
    // string m_new_string
    m_new_string ="";

    // Just to register all known types
    registerTypesTypes();
}

BasicWideStruct::~BasicWideStruct()
{





}

BasicWideStruct::BasicWideStruct(
        const BasicWideStruct& x)
{
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = x.m_my_string;
    m_new_int32 = x.m_new_int32;
    m_new_string = x.m_new_string;
}

BasicWideStruct::BasicWideStruct(
        BasicWideStruct&& x) noexcept 
{
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = std::move(x.m_my_string);
    m_new_int32 = x.m_new_int32;
    m_new_string = std::move(x.m_new_string);
}

BasicWideStruct& BasicWideStruct::operator =(
        const BasicWideStruct& x)
{

    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = x.m_my_string;
    m_new_int32 = x.m_new_int32;
    m_new_string = x.m_new_string;

    return *this;
}

BasicWideStruct& BasicWideStruct::operator =(
        BasicWideStruct&& x) noexcept
{

    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = std::move(x.m_my_string);
    m_new_int32 = x.m_new_int32;
    m_new_string = std::move(x.m_new_string);

    return *this;
}

bool BasicWideStruct::operator ==(
        const BasicWideStruct& x) const
{

    return (m_my_bool == x.m_my_bool && m_my_int32 == x.m_my_int32 && m_my_string == x.m_my_string && m_new_int32 == x.m_new_int32 && m_new_string == x.m_new_string);
}

bool BasicWideStruct::operator !=(
        const BasicWideStruct& x) const
{
    return !(*this == x);
}

size_t BasicWideStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BasicWideStruct_max_cdr_typesize;
}

size_t BasicWideStruct::getCdrSerializedSize(
        const BasicWideStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_string().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.new_string().size() + 1;


    return current_alignment - initial_alignment;
}

void BasicWideStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_bool;
    scdr << m_my_int32;
    scdr << m_my_string.c_str();
    scdr << m_new_int32;
    scdr << m_new_string.c_str();

}

void BasicWideStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_bool;
    dcdr >> m_my_int32;
    dcdr >> m_my_string;
    dcdr >> m_new_int32;
    dcdr >> m_new_string;
}

/*!
 * @brief This function sets a value in member my_bool
 * @param _my_bool New value for member my_bool
 */
void BasicWideStruct::my_bool(
        bool _my_bool)
{
    m_my_bool = _my_bool;
}

/*!
 * @brief This function returns the value of member my_bool
 * @return Value of member my_bool
 */
bool BasicWideStruct::my_bool() const
{
    return m_my_bool;
}

/*!
 * @brief This function returns a reference to member my_bool
 * @return Reference to member my_bool
 */
bool& BasicWideStruct::my_bool()
{
    return m_my_bool;
}

/*!
 * @brief This function sets a value in member my_int32
 * @param _my_int32 New value for member my_int32
 */
void BasicWideStruct::my_int32(
        int32_t _my_int32)
{
    m_my_int32 = _my_int32;
}

/*!
 * @brief This function returns the value of member my_int32
 * @return Value of member my_int32
 */
int32_t BasicWideStruct::my_int32() const
{
    return m_my_int32;
}

/*!
 * @brief This function returns a reference to member my_int32
 * @return Reference to member my_int32
 */
int32_t& BasicWideStruct::my_int32()
{
    return m_my_int32;
}

/*!
 * @brief This function copies the value in member my_string
 * @param _my_string New value to be copied in member my_string
 */
void BasicWideStruct::my_string(
        const std::string& _my_string)
{
    m_my_string = _my_string;
}

/*!
 * @brief This function moves the value in member my_string
 * @param _my_string New value to be moved in member my_string
 */
void BasicWideStruct::my_string(
        std::string&& _my_string)
{
    m_my_string = std::move(_my_string);
}

/*!
 * @brief This function returns a constant reference to member my_string
 * @return Constant reference to member my_string
 */
const std::string& BasicWideStruct::my_string() const
{
    return m_my_string;
}

/*!
 * @brief This function returns a reference to member my_string
 * @return Reference to member my_string
 */
std::string& BasicWideStruct::my_string()
{
    return m_my_string;
}
/*!
 * @brief This function sets a value in member new_int32
 * @param _new_int32 New value for member new_int32
 */
void BasicWideStruct::new_int32(
        int32_t _new_int32)
{
    m_new_int32 = _new_int32;
}

/*!
 * @brief This function returns the value of member new_int32
 * @return Value of member new_int32
 */
int32_t BasicWideStruct::new_int32() const
{
    return m_new_int32;
}

/*!
 * @brief This function returns a reference to member new_int32
 * @return Reference to member new_int32
 */
int32_t& BasicWideStruct::new_int32()
{
    return m_new_int32;
}

/*!
 * @brief This function copies the value in member new_string
 * @param _new_string New value to be copied in member new_string
 */
void BasicWideStruct::new_string(
        const std::string& _new_string)
{
    m_new_string = _new_string;
}

/*!
 * @brief This function moves the value in member new_string
 * @param _new_string New value to be moved in member new_string
 */
void BasicWideStruct::new_string(
        std::string&& _new_string)
{
    m_new_string = std::move(_new_string);
}

/*!
 * @brief This function returns a constant reference to member new_string
 * @return Constant reference to member new_string
 */
const std::string& BasicWideStruct::new_string() const
{
    return m_new_string;
}

/*!
 * @brief This function returns a reference to member new_string
 * @return Reference to member new_string
 */
std::string& BasicWideStruct::new_string()
{
    return m_new_string;
}


size_t BasicWideStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BasicWideStruct_max_key_cdr_typesize;
}

bool BasicWideStruct::isKeyDefined()
{
    return false;
}

void BasicWideStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


BadBasicWideStruct::BadBasicWideStruct()
{
    // long m_new_int32
    m_new_int32 = 0;
    // string m_new_string
    m_new_string ="";
    // boolean m_my_bool
    m_my_bool = false;
    // long m_my_int32
    m_my_int32 = 0;
    // string m_my_string
    m_my_string ="";

    // Just to register all known types
    registerTypesTypes();
}

BadBasicWideStruct::~BadBasicWideStruct()
{





}

BadBasicWideStruct::BadBasicWideStruct(
        const BadBasicWideStruct& x)
{
    m_new_int32 = x.m_new_int32;
    m_new_string = x.m_new_string;
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = x.m_my_string;
}

BadBasicWideStruct::BadBasicWideStruct(
        BadBasicWideStruct&& x) noexcept 
{
    m_new_int32 = x.m_new_int32;
    m_new_string = std::move(x.m_new_string);
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = std::move(x.m_my_string);
}

BadBasicWideStruct& BadBasicWideStruct::operator =(
        const BadBasicWideStruct& x)
{

    m_new_int32 = x.m_new_int32;
    m_new_string = x.m_new_string;
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = x.m_my_string;

    return *this;
}

BadBasicWideStruct& BadBasicWideStruct::operator =(
        BadBasicWideStruct&& x) noexcept
{

    m_new_int32 = x.m_new_int32;
    m_new_string = std::move(x.m_new_string);
    m_my_bool = x.m_my_bool;
    m_my_int32 = x.m_my_int32;
    m_my_string = std::move(x.m_my_string);

    return *this;
}

bool BadBasicWideStruct::operator ==(
        const BadBasicWideStruct& x) const
{

    return (m_new_int32 == x.m_new_int32 && m_new_string == x.m_new_string && m_my_bool == x.m_my_bool && m_my_int32 == x.m_my_int32 && m_my_string == x.m_my_string);
}

bool BadBasicWideStruct::operator !=(
        const BadBasicWideStruct& x) const
{
    return !(*this == x);
}

size_t BadBasicWideStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BadBasicWideStruct_max_cdr_typesize;
}

size_t BadBasicWideStruct::getCdrSerializedSize(
        const BadBasicWideStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.new_string().size() + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_string().size() + 1;


    return current_alignment - initial_alignment;
}

void BadBasicWideStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_new_int32;
    scdr << m_new_string.c_str();
    scdr << m_my_bool;
    scdr << m_my_int32;
    scdr << m_my_string.c_str();

}

void BadBasicWideStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_new_int32;
    dcdr >> m_new_string;
    dcdr >> m_my_bool;
    dcdr >> m_my_int32;
    dcdr >> m_my_string;
}

/*!
 * @brief This function sets a value in member new_int32
 * @param _new_int32 New value for member new_int32
 */
void BadBasicWideStruct::new_int32(
        int32_t _new_int32)
{
    m_new_int32 = _new_int32;
}

/*!
 * @brief This function returns the value of member new_int32
 * @return Value of member new_int32
 */
int32_t BadBasicWideStruct::new_int32() const
{
    return m_new_int32;
}

/*!
 * @brief This function returns a reference to member new_int32
 * @return Reference to member new_int32
 */
int32_t& BadBasicWideStruct::new_int32()
{
    return m_new_int32;
}

/*!
 * @brief This function copies the value in member new_string
 * @param _new_string New value to be copied in member new_string
 */
void BadBasicWideStruct::new_string(
        const std::string& _new_string)
{
    m_new_string = _new_string;
}

/*!
 * @brief This function moves the value in member new_string
 * @param _new_string New value to be moved in member new_string
 */
void BadBasicWideStruct::new_string(
        std::string&& _new_string)
{
    m_new_string = std::move(_new_string);
}

/*!
 * @brief This function returns a constant reference to member new_string
 * @return Constant reference to member new_string
 */
const std::string& BadBasicWideStruct::new_string() const
{
    return m_new_string;
}

/*!
 * @brief This function returns a reference to member new_string
 * @return Reference to member new_string
 */
std::string& BadBasicWideStruct::new_string()
{
    return m_new_string;
}
/*!
 * @brief This function sets a value in member my_bool
 * @param _my_bool New value for member my_bool
 */
void BadBasicWideStruct::my_bool(
        bool _my_bool)
{
    m_my_bool = _my_bool;
}

/*!
 * @brief This function returns the value of member my_bool
 * @return Value of member my_bool
 */
bool BadBasicWideStruct::my_bool() const
{
    return m_my_bool;
}

/*!
 * @brief This function returns a reference to member my_bool
 * @return Reference to member my_bool
 */
bool& BadBasicWideStruct::my_bool()
{
    return m_my_bool;
}

/*!
 * @brief This function sets a value in member my_int32
 * @param _my_int32 New value for member my_int32
 */
void BadBasicWideStruct::my_int32(
        int32_t _my_int32)
{
    m_my_int32 = _my_int32;
}

/*!
 * @brief This function returns the value of member my_int32
 * @return Value of member my_int32
 */
int32_t BadBasicWideStruct::my_int32() const
{
    return m_my_int32;
}

/*!
 * @brief This function returns a reference to member my_int32
 * @return Reference to member my_int32
 */
int32_t& BadBasicWideStruct::my_int32()
{
    return m_my_int32;
}

/*!
 * @brief This function copies the value in member my_string
 * @param _my_string New value to be copied in member my_string
 */
void BadBasicWideStruct::my_string(
        const std::string& _my_string)
{
    m_my_string = _my_string;
}

/*!
 * @brief This function moves the value in member my_string
 * @param _my_string New value to be moved in member my_string
 */
void BadBasicWideStruct::my_string(
        std::string&& _my_string)
{
    m_my_string = std::move(_my_string);
}

/*!
 * @brief This function returns a constant reference to member my_string
 * @return Constant reference to member my_string
 */
const std::string& BadBasicWideStruct::my_string() const
{
    return m_my_string;
}

/*!
 * @brief This function returns a reference to member my_string
 * @return Reference to member my_string
 */
std::string& BadBasicWideStruct::my_string()
{
    return m_my_string;
}


size_t BadBasicWideStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BadBasicWideStruct_max_key_cdr_typesize;
}

bool BadBasicWideStruct::isKeyDefined()
{
    return false;
}

void BadBasicWideStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


StringStruct::StringStruct()
{
    // string m_my_string
    m_my_string ="";

    // Just to register all known types
    registerTypesTypes();
}

StringStruct::~StringStruct()
{
}

StringStruct::StringStruct(
        const StringStruct& x)
{
    m_my_string = x.m_my_string;
}

StringStruct::StringStruct(
        StringStruct&& x) noexcept 
{
    m_my_string = std::move(x.m_my_string);
}

StringStruct& StringStruct::operator =(
        const StringStruct& x)
{

    m_my_string = x.m_my_string;

    return *this;
}

StringStruct& StringStruct::operator =(
        StringStruct&& x) noexcept
{

    m_my_string = std::move(x.m_my_string);

    return *this;
}

bool StringStruct::operator ==(
        const StringStruct& x) const
{

    return (m_my_string == x.m_my_string);
}

bool StringStruct::operator !=(
        const StringStruct& x) const
{
    return !(*this == x);
}

size_t StringStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StringStruct_max_cdr_typesize;
}

size_t StringStruct::getCdrSerializedSize(
        const StringStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_string().size() + 1;

    return current_alignment - initial_alignment;
}

void StringStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_string.c_str();

}

void StringStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_string;}

/*!
 * @brief This function copies the value in member my_string
 * @param _my_string New value to be copied in member my_string
 */
void StringStruct::my_string(
        const std::string& _my_string)
{
    m_my_string = _my_string;
}

/*!
 * @brief This function moves the value in member my_string
 * @param _my_string New value to be moved in member my_string
 */
void StringStruct::my_string(
        std::string&& _my_string)
{
    m_my_string = std::move(_my_string);
}

/*!
 * @brief This function returns a constant reference to member my_string
 * @return Constant reference to member my_string
 */
const std::string& StringStruct::my_string() const
{
    return m_my_string;
}

/*!
 * @brief This function returns a reference to member my_string
 * @return Reference to member my_string
 */
std::string& StringStruct::my_string()
{
    return m_my_string;
}


size_t StringStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StringStruct_max_key_cdr_typesize;
}

bool StringStruct::isKeyDefined()
{
    return false;
}

void StringStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


LargeStringStruct::LargeStringStruct()
{
    // string m_my_large_string
    m_my_large_string ="";

    // Just to register all known types
    registerTypesTypes();
}

LargeStringStruct::~LargeStringStruct()
{
}

LargeStringStruct::LargeStringStruct(
        const LargeStringStruct& x)
{
    m_my_large_string = x.m_my_large_string;
}

LargeStringStruct::LargeStringStruct(
        LargeStringStruct&& x) noexcept 
{
    m_my_large_string = std::move(x.m_my_large_string);
}

LargeStringStruct& LargeStringStruct::operator =(
        const LargeStringStruct& x)
{

    m_my_large_string = x.m_my_large_string;

    return *this;
}

LargeStringStruct& LargeStringStruct::operator =(
        LargeStringStruct&& x) noexcept
{

    m_my_large_string = std::move(x.m_my_large_string);

    return *this;
}

bool LargeStringStruct::operator ==(
        const LargeStringStruct& x) const
{

    return (m_my_large_string == x.m_my_large_string);
}

bool LargeStringStruct::operator !=(
        const LargeStringStruct& x) const
{
    return !(*this == x);
}

size_t LargeStringStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LargeStringStruct_max_cdr_typesize;
}

size_t LargeStringStruct::getCdrSerializedSize(
        const LargeStringStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_large_string().size() + 1;

    return current_alignment - initial_alignment;
}

void LargeStringStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_large_string.c_str();

}

void LargeStringStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        std::string aux;
        dcdr >> aux;
        m_my_large_string = aux.c_str();
    }}

/*!
 * @brief This function copies the value in member my_large_string
 * @param _my_large_string New value to be copied in member my_large_string
 */
void LargeStringStruct::my_large_string(
        const eprosima::fastrtps::fixed_string<41925>& _my_large_string)
{
    m_my_large_string = _my_large_string;
}

/*!
 * @brief This function moves the value in member my_large_string
 * @param _my_large_string New value to be moved in member my_large_string
 */
void LargeStringStruct::my_large_string(
        eprosima::fastrtps::fixed_string<41925>&& _my_large_string)
{
    m_my_large_string = std::move(_my_large_string);
}

/*!
 * @brief This function returns a constant reference to member my_large_string
 * @return Constant reference to member my_large_string
 */
const eprosima::fastrtps::fixed_string<41925>& LargeStringStruct::my_large_string() const
{
    return m_my_large_string;
}

/*!
 * @brief This function returns a reference to member my_large_string
 * @return Reference to member my_large_string
 */
eprosima::fastrtps::fixed_string<41925>& LargeStringStruct::my_large_string()
{
    return m_my_large_string;
}


size_t LargeStringStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LargeStringStruct_max_key_cdr_typesize;
}

bool LargeStringStruct::isKeyDefined()
{
    return false;
}

void LargeStringStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


WStringStruct::WStringStruct()
{
    // wstring m_my_wstring


    // Just to register all known types
    registerTypesTypes();
}

WStringStruct::~WStringStruct()
{
}

WStringStruct::WStringStruct(
        const WStringStruct& x)
{
    m_my_wstring = x.m_my_wstring;
}

WStringStruct::WStringStruct(
        WStringStruct&& x) noexcept 
{
    m_my_wstring = std::move(x.m_my_wstring);
}

WStringStruct& WStringStruct::operator =(
        const WStringStruct& x)
{

    m_my_wstring = x.m_my_wstring;

    return *this;
}

WStringStruct& WStringStruct::operator =(
        WStringStruct&& x) noexcept
{

    m_my_wstring = std::move(x.m_my_wstring);

    return *this;
}

bool WStringStruct::operator ==(
        const WStringStruct& x) const
{

    return (m_my_wstring == x.m_my_wstring);
}

bool WStringStruct::operator !=(
        const WStringStruct& x) const
{
    return !(*this == x);
}

size_t WStringStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return WStringStruct_max_cdr_typesize;
}

size_t WStringStruct::getCdrSerializedSize(
        const WStringStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + (data.my_wstring().size()) * 4; // 32 bits

    return current_alignment - initial_alignment;
}

void WStringStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_wstring;

}

void WStringStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_wstring;
}

/*!
 * @brief This function copies the value in member my_wstring
 * @param _my_wstring New value to be copied in member my_wstring
 */
void WStringStruct::my_wstring(
        const std::wstring& _my_wstring)
{
    m_my_wstring = _my_wstring;
}

/*!
 * @brief This function moves the value in member my_wstring
 * @param _my_wstring New value to be moved in member my_wstring
 */
void WStringStruct::my_wstring(
        std::wstring&& _my_wstring)
{
    m_my_wstring = std::move(_my_wstring);
}

/*!
 * @brief This function returns a constant reference to member my_wstring
 * @return Constant reference to member my_wstring
 */
const std::wstring& WStringStruct::my_wstring() const
{
    return m_my_wstring;
}

/*!
 * @brief This function returns a reference to member my_wstring
 * @return Reference to member my_wstring
 */
std::wstring& WStringStruct::my_wstring()
{
    return m_my_wstring;
}


size_t WStringStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return WStringStruct_max_key_cdr_typesize;
}

bool WStringStruct::isKeyDefined()
{
    return false;
}

void WStringStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


LargeWStringStruct::LargeWStringStruct()
{
    // wstring m_my_large_wstring


    // Just to register all known types
    registerTypesTypes();
}

LargeWStringStruct::~LargeWStringStruct()
{
}

LargeWStringStruct::LargeWStringStruct(
        const LargeWStringStruct& x)
{
    m_my_large_wstring = x.m_my_large_wstring;
}

LargeWStringStruct::LargeWStringStruct(
        LargeWStringStruct&& x) noexcept 
{
    m_my_large_wstring = std::move(x.m_my_large_wstring);
}

LargeWStringStruct& LargeWStringStruct::operator =(
        const LargeWStringStruct& x)
{

    m_my_large_wstring = x.m_my_large_wstring;

    return *this;
}

LargeWStringStruct& LargeWStringStruct::operator =(
        LargeWStringStruct&& x) noexcept
{

    m_my_large_wstring = std::move(x.m_my_large_wstring);

    return *this;
}

bool LargeWStringStruct::operator ==(
        const LargeWStringStruct& x) const
{

    return (m_my_large_wstring == x.m_my_large_wstring);
}

bool LargeWStringStruct::operator !=(
        const LargeWStringStruct& x) const
{
    return !(*this == x);
}

size_t LargeWStringStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LargeWStringStruct_max_cdr_typesize;
}

size_t LargeWStringStruct::getCdrSerializedSize(
        const LargeWStringStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + (data.my_large_wstring().size()) * 4; // 32 bits

    return current_alignment - initial_alignment;
}

void LargeWStringStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_large_wstring;

}

void LargeWStringStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_large_wstring;
}

/*!
 * @brief This function copies the value in member my_large_wstring
 * @param _my_large_wstring New value to be copied in member my_large_wstring
 */
void LargeWStringStruct::my_large_wstring(
        const std::wstring& _my_large_wstring)
{
    m_my_large_wstring = _my_large_wstring;
}

/*!
 * @brief This function moves the value in member my_large_wstring
 * @param _my_large_wstring New value to be moved in member my_large_wstring
 */
void LargeWStringStruct::my_large_wstring(
        std::wstring&& _my_large_wstring)
{
    m_my_large_wstring = std::move(_my_large_wstring);
}

/*!
 * @brief This function returns a constant reference to member my_large_wstring
 * @return Constant reference to member my_large_wstring
 */
const std::wstring& LargeWStringStruct::my_large_wstring() const
{
    return m_my_large_wstring;
}

/*!
 * @brief This function returns a reference to member my_large_wstring
 * @return Reference to member my_large_wstring
 */
std::wstring& LargeWStringStruct::my_large_wstring()
{
    return m_my_large_wstring;
}


size_t LargeWStringStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LargeWStringStruct_max_key_cdr_typesize;
}

bool LargeWStringStruct::isKeyDefined()
{
    return false;
}

void LargeWStringStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


ArrayStruct::ArrayStruct()
{
    // long m_my_array
    memset(&m_my_array, 0, (2) * 4);

    // Just to register all known types
    registerTypesTypes();
}

ArrayStruct::~ArrayStruct()
{
}

ArrayStruct::ArrayStruct(
        const ArrayStruct& x)
{
    m_my_array = x.m_my_array;
}

ArrayStruct::ArrayStruct(
        ArrayStruct&& x) noexcept 
{
    m_my_array = std::move(x.m_my_array);
}

ArrayStruct& ArrayStruct::operator =(
        const ArrayStruct& x)
{

    m_my_array = x.m_my_array;

    return *this;
}

ArrayStruct& ArrayStruct::operator =(
        ArrayStruct&& x) noexcept
{

    m_my_array = std::move(x.m_my_array);

    return *this;
}

bool ArrayStruct::operator ==(
        const ArrayStruct& x) const
{

    return (m_my_array == x.m_my_array);
}

bool ArrayStruct::operator !=(
        const ArrayStruct& x) const
{
    return !(*this == x);
}

size_t ArrayStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayStruct_max_cdr_typesize;
}

size_t ArrayStruct::getCdrSerializedSize(
        const ArrayStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((2) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void ArrayStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_array;


}

void ArrayStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_array;

}

/*!
 * @brief This function copies the value in member my_array
 * @param _my_array New value to be copied in member my_array
 */
void ArrayStruct::my_array(
        const std::array<int32_t, 2>& _my_array)
{
    m_my_array = _my_array;
}

/*!
 * @brief This function moves the value in member my_array
 * @param _my_array New value to be moved in member my_array
 */
void ArrayStruct::my_array(
        std::array<int32_t, 2>&& _my_array)
{
    m_my_array = std::move(_my_array);
}

/*!
 * @brief This function returns a constant reference to member my_array
 * @return Constant reference to member my_array
 */
const std::array<int32_t, 2>& ArrayStruct::my_array() const
{
    return m_my_array;
}

/*!
 * @brief This function returns a reference to member my_array
 * @return Reference to member my_array
 */
std::array<int32_t, 2>& ArrayStruct::my_array()
{
    return m_my_array;
}


size_t ArrayStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayStruct_max_key_cdr_typesize;
}

bool ArrayStruct::isKeyDefined()
{
    return false;
}

void ArrayStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


ArrayStructEqual::ArrayStructEqual()
{
    // long m_my_array_equal
    memset(&m_my_array_equal, 0, (2) * 4);

    // Just to register all known types
    registerTypesTypes();
}

ArrayStructEqual::~ArrayStructEqual()
{
}

ArrayStructEqual::ArrayStructEqual(
        const ArrayStructEqual& x)
{
    m_my_array_equal = x.m_my_array_equal;
}

ArrayStructEqual::ArrayStructEqual(
        ArrayStructEqual&& x) noexcept 
{
    m_my_array_equal = std::move(x.m_my_array_equal);
}

ArrayStructEqual& ArrayStructEqual::operator =(
        const ArrayStructEqual& x)
{

    m_my_array_equal = x.m_my_array_equal;

    return *this;
}

ArrayStructEqual& ArrayStructEqual::operator =(
        ArrayStructEqual&& x) noexcept
{

    m_my_array_equal = std::move(x.m_my_array_equal);

    return *this;
}

bool ArrayStructEqual::operator ==(
        const ArrayStructEqual& x) const
{

    return (m_my_array_equal == x.m_my_array_equal);
}

bool ArrayStructEqual::operator !=(
        const ArrayStructEqual& x) const
{
    return !(*this == x);
}

size_t ArrayStructEqual::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayStructEqual_max_cdr_typesize;
}

size_t ArrayStructEqual::getCdrSerializedSize(
        const ArrayStructEqual& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((2) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void ArrayStructEqual::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_array_equal;


}

void ArrayStructEqual::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_array_equal;

}

/*!
 * @brief This function copies the value in member my_array_equal
 * @param _my_array_equal New value to be copied in member my_array_equal
 */
void ArrayStructEqual::my_array_equal(
        const std::array<int32_t, 2>& _my_array_equal)
{
    m_my_array_equal = _my_array_equal;
}

/*!
 * @brief This function moves the value in member my_array_equal
 * @param _my_array_equal New value to be moved in member my_array_equal
 */
void ArrayStructEqual::my_array_equal(
        std::array<int32_t, 2>&& _my_array_equal)
{
    m_my_array_equal = std::move(_my_array_equal);
}

/*!
 * @brief This function returns a constant reference to member my_array_equal
 * @return Constant reference to member my_array_equal
 */
const std::array<int32_t, 2>& ArrayStructEqual::my_array_equal() const
{
    return m_my_array_equal;
}

/*!
 * @brief This function returns a reference to member my_array_equal
 * @return Reference to member my_array_equal
 */
std::array<int32_t, 2>& ArrayStructEqual::my_array_equal()
{
    return m_my_array_equal;
}


size_t ArrayStructEqual::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayStructEqual_max_key_cdr_typesize;
}

bool ArrayStructEqual::isKeyDefined()
{
    return false;
}

void ArrayStructEqual::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


ArrayBadStruct::ArrayBadStruct()
{
    // octet m_my_array
    memset(&m_my_array, 0, (2) * 1);

    // Just to register all known types
    registerTypesTypes();
}

ArrayBadStruct::~ArrayBadStruct()
{
}

ArrayBadStruct::ArrayBadStruct(
        const ArrayBadStruct& x)
{
    m_my_array = x.m_my_array;
}

ArrayBadStruct::ArrayBadStruct(
        ArrayBadStruct&& x) noexcept 
{
    m_my_array = std::move(x.m_my_array);
}

ArrayBadStruct& ArrayBadStruct::operator =(
        const ArrayBadStruct& x)
{

    m_my_array = x.m_my_array;

    return *this;
}

ArrayBadStruct& ArrayBadStruct::operator =(
        ArrayBadStruct&& x) noexcept
{

    m_my_array = std::move(x.m_my_array);

    return *this;
}

bool ArrayBadStruct::operator ==(
        const ArrayBadStruct& x) const
{

    return (m_my_array == x.m_my_array);
}

bool ArrayBadStruct::operator !=(
        const ArrayBadStruct& x) const
{
    return !(*this == x);
}

size_t ArrayBadStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayBadStruct_max_cdr_typesize;
}

size_t ArrayBadStruct::getCdrSerializedSize(
        const ArrayBadStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((2) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    return current_alignment - initial_alignment;
}

void ArrayBadStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_array;


}

void ArrayBadStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_array;

}

/*!
 * @brief This function copies the value in member my_array
 * @param _my_array New value to be copied in member my_array
 */
void ArrayBadStruct::my_array(
        const std::array<uint8_t, 2>& _my_array)
{
    m_my_array = _my_array;
}

/*!
 * @brief This function moves the value in member my_array
 * @param _my_array New value to be moved in member my_array
 */
void ArrayBadStruct::my_array(
        std::array<uint8_t, 2>&& _my_array)
{
    m_my_array = std::move(_my_array);
}

/*!
 * @brief This function returns a constant reference to member my_array
 * @return Constant reference to member my_array
 */
const std::array<uint8_t, 2>& ArrayBadStruct::my_array() const
{
    return m_my_array;
}

/*!
 * @brief This function returns a reference to member my_array
 * @return Reference to member my_array
 */
std::array<uint8_t, 2>& ArrayBadStruct::my_array()
{
    return m_my_array;
}


size_t ArrayBadStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayBadStruct_max_key_cdr_typesize;
}

bool ArrayBadStruct::isKeyDefined()
{
    return false;
}

void ArrayBadStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


ArrayDimensionsStruct::ArrayDimensionsStruct()
{
    // long m_my_array
    memset(&m_my_array, 0, (2 * 2) * 4);

    // Just to register all known types
    registerTypesTypes();
}

ArrayDimensionsStruct::~ArrayDimensionsStruct()
{
}

ArrayDimensionsStruct::ArrayDimensionsStruct(
        const ArrayDimensionsStruct& x)
{
    m_my_array = x.m_my_array;
}

ArrayDimensionsStruct::ArrayDimensionsStruct(
        ArrayDimensionsStruct&& x) noexcept 
{
    m_my_array = std::move(x.m_my_array);
}

ArrayDimensionsStruct& ArrayDimensionsStruct::operator =(
        const ArrayDimensionsStruct& x)
{

    m_my_array = x.m_my_array;

    return *this;
}

ArrayDimensionsStruct& ArrayDimensionsStruct::operator =(
        ArrayDimensionsStruct&& x) noexcept
{

    m_my_array = std::move(x.m_my_array);

    return *this;
}

bool ArrayDimensionsStruct::operator ==(
        const ArrayDimensionsStruct& x) const
{

    return (m_my_array == x.m_my_array);
}

bool ArrayDimensionsStruct::operator !=(
        const ArrayDimensionsStruct& x) const
{
    return !(*this == x);
}

size_t ArrayDimensionsStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayDimensionsStruct_max_cdr_typesize;
}

size_t ArrayDimensionsStruct::getCdrSerializedSize(
        const ArrayDimensionsStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((2 * 2) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void ArrayDimensionsStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_array;


}

void ArrayDimensionsStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_array;

}

/*!
 * @brief This function copies the value in member my_array
 * @param _my_array New value to be copied in member my_array
 */
void ArrayDimensionsStruct::my_array(
        const std::array<std::array<int32_t, 2>, 2>& _my_array)
{
    m_my_array = _my_array;
}

/*!
 * @brief This function moves the value in member my_array
 * @param _my_array New value to be moved in member my_array
 */
void ArrayDimensionsStruct::my_array(
        std::array<std::array<int32_t, 2>, 2>&& _my_array)
{
    m_my_array = std::move(_my_array);
}

/*!
 * @brief This function returns a constant reference to member my_array
 * @return Constant reference to member my_array
 */
const std::array<std::array<int32_t, 2>, 2>& ArrayDimensionsStruct::my_array() const
{
    return m_my_array;
}

/*!
 * @brief This function returns a reference to member my_array
 * @return Reference to member my_array
 */
std::array<std::array<int32_t, 2>, 2>& ArrayDimensionsStruct::my_array()
{
    return m_my_array;
}


size_t ArrayDimensionsStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayDimensionsStruct_max_key_cdr_typesize;
}

bool ArrayDimensionsStruct::isKeyDefined()
{
    return false;
}

void ArrayDimensionsStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


ArraySizeStruct::ArraySizeStruct()
{
    // long m_my_array
    memset(&m_my_array, 0, (5) * 4);

    // Just to register all known types
    registerTypesTypes();
}

ArraySizeStruct::~ArraySizeStruct()
{
}

ArraySizeStruct::ArraySizeStruct(
        const ArraySizeStruct& x)
{
    m_my_array = x.m_my_array;
}

ArraySizeStruct::ArraySizeStruct(
        ArraySizeStruct&& x) noexcept 
{
    m_my_array = std::move(x.m_my_array);
}

ArraySizeStruct& ArraySizeStruct::operator =(
        const ArraySizeStruct& x)
{

    m_my_array = x.m_my_array;

    return *this;
}

ArraySizeStruct& ArraySizeStruct::operator =(
        ArraySizeStruct&& x) noexcept
{

    m_my_array = std::move(x.m_my_array);

    return *this;
}

bool ArraySizeStruct::operator ==(
        const ArraySizeStruct& x) const
{

    return (m_my_array == x.m_my_array);
}

bool ArraySizeStruct::operator !=(
        const ArraySizeStruct& x) const
{
    return !(*this == x);
}

size_t ArraySizeStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArraySizeStruct_max_cdr_typesize;
}

size_t ArraySizeStruct::getCdrSerializedSize(
        const ArraySizeStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((5) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void ArraySizeStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_array;


}

void ArraySizeStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_array;

}

/*!
 * @brief This function copies the value in member my_array
 * @param _my_array New value to be copied in member my_array
 */
void ArraySizeStruct::my_array(
        const std::array<int32_t, 5>& _my_array)
{
    m_my_array = _my_array;
}

/*!
 * @brief This function moves the value in member my_array
 * @param _my_array New value to be moved in member my_array
 */
void ArraySizeStruct::my_array(
        std::array<int32_t, 5>&& _my_array)
{
    m_my_array = std::move(_my_array);
}

/*!
 * @brief This function returns a constant reference to member my_array
 * @return Constant reference to member my_array
 */
const std::array<int32_t, 5>& ArraySizeStruct::my_array() const
{
    return m_my_array;
}

/*!
 * @brief This function returns a reference to member my_array
 * @return Reference to member my_array
 */
std::array<int32_t, 5>& ArraySizeStruct::my_array()
{
    return m_my_array;
}


size_t ArraySizeStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArraySizeStruct_max_key_cdr_typesize;
}

bool ArraySizeStruct::isKeyDefined()
{
    return false;
}

void ArraySizeStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SequenceStruct::SequenceStruct()
{
    // sequence<long, 2> m_my_sequence


    // Just to register all known types
    registerTypesTypes();
}

SequenceStruct::~SequenceStruct()
{
}

SequenceStruct::SequenceStruct(
        const SequenceStruct& x)
{
    m_my_sequence = x.m_my_sequence;
}

SequenceStruct::SequenceStruct(
        SequenceStruct&& x) noexcept 
{
    m_my_sequence = std::move(x.m_my_sequence);
}

SequenceStruct& SequenceStruct::operator =(
        const SequenceStruct& x)
{

    m_my_sequence = x.m_my_sequence;

    return *this;
}

SequenceStruct& SequenceStruct::operator =(
        SequenceStruct&& x) noexcept
{

    m_my_sequence = std::move(x.m_my_sequence);

    return *this;
}

bool SequenceStruct::operator ==(
        const SequenceStruct& x) const
{

    return (m_my_sequence == x.m_my_sequence);
}

bool SequenceStruct::operator !=(
        const SequenceStruct& x) const
{
    return !(*this == x);
}

size_t SequenceStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceStruct_max_cdr_typesize;
}

size_t SequenceStruct::getCdrSerializedSize(
        const SequenceStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.my_sequence().size() > 0)
    {
        current_alignment += (data.my_sequence().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    return current_alignment - initial_alignment;
}

void SequenceStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_sequence;
}

void SequenceStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_sequence;}

/*!
 * @brief This function copies the value in member my_sequence
 * @param _my_sequence New value to be copied in member my_sequence
 */
void SequenceStruct::my_sequence(
        const std::vector<int32_t>& _my_sequence)
{
    m_my_sequence = _my_sequence;
}

/*!
 * @brief This function moves the value in member my_sequence
 * @param _my_sequence New value to be moved in member my_sequence
 */
void SequenceStruct::my_sequence(
        std::vector<int32_t>&& _my_sequence)
{
    m_my_sequence = std::move(_my_sequence);
}

/*!
 * @brief This function returns a constant reference to member my_sequence
 * @return Constant reference to member my_sequence
 */
const std::vector<int32_t>& SequenceStruct::my_sequence() const
{
    return m_my_sequence;
}

/*!
 * @brief This function returns a reference to member my_sequence
 * @return Reference to member my_sequence
 */
std::vector<int32_t>& SequenceStruct::my_sequence()
{
    return m_my_sequence;
}


size_t SequenceStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceStruct_max_key_cdr_typesize;
}

bool SequenceStruct::isKeyDefined()
{
    return false;
}

void SequenceStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SequenceStructEqual::SequenceStructEqual()
{
    // sequence<long, 2> m_my_sequence_equal


    // Just to register all known types
    registerTypesTypes();
}

SequenceStructEqual::~SequenceStructEqual()
{
}

SequenceStructEqual::SequenceStructEqual(
        const SequenceStructEqual& x)
{
    m_my_sequence_equal = x.m_my_sequence_equal;
}

SequenceStructEqual::SequenceStructEqual(
        SequenceStructEqual&& x) noexcept 
{
    m_my_sequence_equal = std::move(x.m_my_sequence_equal);
}

SequenceStructEqual& SequenceStructEqual::operator =(
        const SequenceStructEqual& x)
{

    m_my_sequence_equal = x.m_my_sequence_equal;

    return *this;
}

SequenceStructEqual& SequenceStructEqual::operator =(
        SequenceStructEqual&& x) noexcept
{

    m_my_sequence_equal = std::move(x.m_my_sequence_equal);

    return *this;
}

bool SequenceStructEqual::operator ==(
        const SequenceStructEqual& x) const
{

    return (m_my_sequence_equal == x.m_my_sequence_equal);
}

bool SequenceStructEqual::operator !=(
        const SequenceStructEqual& x) const
{
    return !(*this == x);
}

size_t SequenceStructEqual::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceStructEqual_max_cdr_typesize;
}

size_t SequenceStructEqual::getCdrSerializedSize(
        const SequenceStructEqual& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.my_sequence_equal().size() > 0)
    {
        current_alignment += (data.my_sequence_equal().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    return current_alignment - initial_alignment;
}

void SequenceStructEqual::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_sequence_equal;
}

void SequenceStructEqual::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_sequence_equal;}

/*!
 * @brief This function copies the value in member my_sequence_equal
 * @param _my_sequence_equal New value to be copied in member my_sequence_equal
 */
void SequenceStructEqual::my_sequence_equal(
        const std::vector<int32_t>& _my_sequence_equal)
{
    m_my_sequence_equal = _my_sequence_equal;
}

/*!
 * @brief This function moves the value in member my_sequence_equal
 * @param _my_sequence_equal New value to be moved in member my_sequence_equal
 */
void SequenceStructEqual::my_sequence_equal(
        std::vector<int32_t>&& _my_sequence_equal)
{
    m_my_sequence_equal = std::move(_my_sequence_equal);
}

/*!
 * @brief This function returns a constant reference to member my_sequence_equal
 * @return Constant reference to member my_sequence_equal
 */
const std::vector<int32_t>& SequenceStructEqual::my_sequence_equal() const
{
    return m_my_sequence_equal;
}

/*!
 * @brief This function returns a reference to member my_sequence_equal
 * @return Reference to member my_sequence_equal
 */
std::vector<int32_t>& SequenceStructEqual::my_sequence_equal()
{
    return m_my_sequence_equal;
}


size_t SequenceStructEqual::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceStructEqual_max_key_cdr_typesize;
}

bool SequenceStructEqual::isKeyDefined()
{
    return false;
}

void SequenceStructEqual::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SequenceBadStruct::SequenceBadStruct()
{
    // sequence<octet, 2> m_my_sequence


    // Just to register all known types
    registerTypesTypes();
}

SequenceBadStruct::~SequenceBadStruct()
{
}

SequenceBadStruct::SequenceBadStruct(
        const SequenceBadStruct& x)
{
    m_my_sequence = x.m_my_sequence;
}

SequenceBadStruct::SequenceBadStruct(
        SequenceBadStruct&& x) noexcept 
{
    m_my_sequence = std::move(x.m_my_sequence);
}

SequenceBadStruct& SequenceBadStruct::operator =(
        const SequenceBadStruct& x)
{

    m_my_sequence = x.m_my_sequence;

    return *this;
}

SequenceBadStruct& SequenceBadStruct::operator =(
        SequenceBadStruct&& x) noexcept
{

    m_my_sequence = std::move(x.m_my_sequence);

    return *this;
}

bool SequenceBadStruct::operator ==(
        const SequenceBadStruct& x) const
{

    return (m_my_sequence == x.m_my_sequence);
}

bool SequenceBadStruct::operator !=(
        const SequenceBadStruct& x) const
{
    return !(*this == x);
}

size_t SequenceBadStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceBadStruct_max_cdr_typesize;
}

size_t SequenceBadStruct::getCdrSerializedSize(
        const SequenceBadStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.my_sequence().size() > 0)
    {
        current_alignment += (data.my_sequence().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    return current_alignment - initial_alignment;
}

void SequenceBadStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_sequence;
}

void SequenceBadStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_sequence;}

/*!
 * @brief This function copies the value in member my_sequence
 * @param _my_sequence New value to be copied in member my_sequence
 */
void SequenceBadStruct::my_sequence(
        const std::vector<uint8_t>& _my_sequence)
{
    m_my_sequence = _my_sequence;
}

/*!
 * @brief This function moves the value in member my_sequence
 * @param _my_sequence New value to be moved in member my_sequence
 */
void SequenceBadStruct::my_sequence(
        std::vector<uint8_t>&& _my_sequence)
{
    m_my_sequence = std::move(_my_sequence);
}

/*!
 * @brief This function returns a constant reference to member my_sequence
 * @return Constant reference to member my_sequence
 */
const std::vector<uint8_t>& SequenceBadStruct::my_sequence() const
{
    return m_my_sequence;
}

/*!
 * @brief This function returns a reference to member my_sequence
 * @return Reference to member my_sequence
 */
std::vector<uint8_t>& SequenceBadStruct::my_sequence()
{
    return m_my_sequence;
}


size_t SequenceBadStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceBadStruct_max_key_cdr_typesize;
}

bool SequenceBadStruct::isKeyDefined()
{
    return false;
}

void SequenceBadStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SequenceBoundsStruct::SequenceBoundsStruct()
{
    // sequence<long, 4> m_my_sequence


    // Just to register all known types
    registerTypesTypes();
}

SequenceBoundsStruct::~SequenceBoundsStruct()
{
}

SequenceBoundsStruct::SequenceBoundsStruct(
        const SequenceBoundsStruct& x)
{
    m_my_sequence = x.m_my_sequence;
}

SequenceBoundsStruct::SequenceBoundsStruct(
        SequenceBoundsStruct&& x) noexcept 
{
    m_my_sequence = std::move(x.m_my_sequence);
}

SequenceBoundsStruct& SequenceBoundsStruct::operator =(
        const SequenceBoundsStruct& x)
{

    m_my_sequence = x.m_my_sequence;

    return *this;
}

SequenceBoundsStruct& SequenceBoundsStruct::operator =(
        SequenceBoundsStruct&& x) noexcept
{

    m_my_sequence = std::move(x.m_my_sequence);

    return *this;
}

bool SequenceBoundsStruct::operator ==(
        const SequenceBoundsStruct& x) const
{

    return (m_my_sequence == x.m_my_sequence);
}

bool SequenceBoundsStruct::operator !=(
        const SequenceBoundsStruct& x) const
{
    return !(*this == x);
}

size_t SequenceBoundsStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceBoundsStruct_max_cdr_typesize;
}

size_t SequenceBoundsStruct::getCdrSerializedSize(
        const SequenceBoundsStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.my_sequence().size() > 0)
    {
        current_alignment += (data.my_sequence().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    return current_alignment - initial_alignment;
}

void SequenceBoundsStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_sequence;
}

void SequenceBoundsStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_sequence;}

/*!
 * @brief This function copies the value in member my_sequence
 * @param _my_sequence New value to be copied in member my_sequence
 */
void SequenceBoundsStruct::my_sequence(
        const std::vector<int32_t>& _my_sequence)
{
    m_my_sequence = _my_sequence;
}

/*!
 * @brief This function moves the value in member my_sequence
 * @param _my_sequence New value to be moved in member my_sequence
 */
void SequenceBoundsStruct::my_sequence(
        std::vector<int32_t>&& _my_sequence)
{
    m_my_sequence = std::move(_my_sequence);
}

/*!
 * @brief This function returns a constant reference to member my_sequence
 * @return Constant reference to member my_sequence
 */
const std::vector<int32_t>& SequenceBoundsStruct::my_sequence() const
{
    return m_my_sequence;
}

/*!
 * @brief This function returns a reference to member my_sequence
 * @return Reference to member my_sequence
 */
std::vector<int32_t>& SequenceBoundsStruct::my_sequence()
{
    return m_my_sequence;
}


size_t SequenceBoundsStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceBoundsStruct_max_key_cdr_typesize;
}

bool SequenceBoundsStruct::isKeyDefined()
{
    return false;
}

void SequenceBoundsStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SequenceSequenceStruct::SequenceSequenceStruct()
{
    // sequence<sequence<long, 2>, 3> m_my_sequence_sequence


    // Just to register all known types
    registerTypesTypes();
}

SequenceSequenceStruct::~SequenceSequenceStruct()
{
}

SequenceSequenceStruct::SequenceSequenceStruct(
        const SequenceSequenceStruct& x)
{
    m_my_sequence_sequence = x.m_my_sequence_sequence;
}

SequenceSequenceStruct::SequenceSequenceStruct(
        SequenceSequenceStruct&& x) noexcept 
{
    m_my_sequence_sequence = std::move(x.m_my_sequence_sequence);
}

SequenceSequenceStruct& SequenceSequenceStruct::operator =(
        const SequenceSequenceStruct& x)
{

    m_my_sequence_sequence = x.m_my_sequence_sequence;

    return *this;
}

SequenceSequenceStruct& SequenceSequenceStruct::operator =(
        SequenceSequenceStruct&& x) noexcept
{

    m_my_sequence_sequence = std::move(x.m_my_sequence_sequence);

    return *this;
}

bool SequenceSequenceStruct::operator ==(
        const SequenceSequenceStruct& x) const
{

    return (m_my_sequence_sequence == x.m_my_sequence_sequence);
}

bool SequenceSequenceStruct::operator !=(
        const SequenceSequenceStruct& x) const
{
    return !(*this == x);
}

size_t SequenceSequenceStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceSequenceStruct_max_cdr_typesize;
}

size_t SequenceSequenceStruct::getCdrSerializedSize(
        const SequenceSequenceStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.my_sequence_sequence().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        if (data.my_sequence_sequence().at(a).size() > 0)
        {
            current_alignment += (data.my_sequence_sequence().at(a).size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
        }


    }

    return current_alignment - initial_alignment;
}

void SequenceSequenceStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_sequence_sequence;
}

void SequenceSequenceStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_sequence_sequence;}

/*!
 * @brief This function copies the value in member my_sequence_sequence
 * @param _my_sequence_sequence New value to be copied in member my_sequence_sequence
 */
void SequenceSequenceStruct::my_sequence_sequence(
        const std::vector<std::vector<int32_t>>& _my_sequence_sequence)
{
    m_my_sequence_sequence = _my_sequence_sequence;
}

/*!
 * @brief This function moves the value in member my_sequence_sequence
 * @param _my_sequence_sequence New value to be moved in member my_sequence_sequence
 */
void SequenceSequenceStruct::my_sequence_sequence(
        std::vector<std::vector<int32_t>>&& _my_sequence_sequence)
{
    m_my_sequence_sequence = std::move(_my_sequence_sequence);
}

/*!
 * @brief This function returns a constant reference to member my_sequence_sequence
 * @return Constant reference to member my_sequence_sequence
 */
const std::vector<std::vector<int32_t>>& SequenceSequenceStruct::my_sequence_sequence() const
{
    return m_my_sequence_sequence;
}

/*!
 * @brief This function returns a reference to member my_sequence_sequence
 * @return Reference to member my_sequence_sequence
 */
std::vector<std::vector<int32_t>>& SequenceSequenceStruct::my_sequence_sequence()
{
    return m_my_sequence_sequence;
}


size_t SequenceSequenceStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceSequenceStruct_max_key_cdr_typesize;
}

bool SequenceSequenceStruct::isKeyDefined()
{
    return false;
}

void SequenceSequenceStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SequenceSequenceBoundsStruct::SequenceSequenceBoundsStruct()
{
    // sequence<sequence<long, 5>, 5> m_my_sequence_sequence


    // Just to register all known types
    registerTypesTypes();
}

SequenceSequenceBoundsStruct::~SequenceSequenceBoundsStruct()
{
}

SequenceSequenceBoundsStruct::SequenceSequenceBoundsStruct(
        const SequenceSequenceBoundsStruct& x)
{
    m_my_sequence_sequence = x.m_my_sequence_sequence;
}

SequenceSequenceBoundsStruct::SequenceSequenceBoundsStruct(
        SequenceSequenceBoundsStruct&& x) noexcept 
{
    m_my_sequence_sequence = std::move(x.m_my_sequence_sequence);
}

SequenceSequenceBoundsStruct& SequenceSequenceBoundsStruct::operator =(
        const SequenceSequenceBoundsStruct& x)
{

    m_my_sequence_sequence = x.m_my_sequence_sequence;

    return *this;
}

SequenceSequenceBoundsStruct& SequenceSequenceBoundsStruct::operator =(
        SequenceSequenceBoundsStruct&& x) noexcept
{

    m_my_sequence_sequence = std::move(x.m_my_sequence_sequence);

    return *this;
}

bool SequenceSequenceBoundsStruct::operator ==(
        const SequenceSequenceBoundsStruct& x) const
{

    return (m_my_sequence_sequence == x.m_my_sequence_sequence);
}

bool SequenceSequenceBoundsStruct::operator !=(
        const SequenceSequenceBoundsStruct& x) const
{
    return !(*this == x);
}

size_t SequenceSequenceBoundsStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceSequenceBoundsStruct_max_cdr_typesize;
}

size_t SequenceSequenceBoundsStruct::getCdrSerializedSize(
        const SequenceSequenceBoundsStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.my_sequence_sequence().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        if (data.my_sequence_sequence().at(a).size() > 0)
        {
            current_alignment += (data.my_sequence_sequence().at(a).size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
        }


    }

    return current_alignment - initial_alignment;
}

void SequenceSequenceBoundsStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_sequence_sequence;
}

void SequenceSequenceBoundsStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_sequence_sequence;}

/*!
 * @brief This function copies the value in member my_sequence_sequence
 * @param _my_sequence_sequence New value to be copied in member my_sequence_sequence
 */
void SequenceSequenceBoundsStruct::my_sequence_sequence(
        const std::vector<std::vector<int32_t>>& _my_sequence_sequence)
{
    m_my_sequence_sequence = _my_sequence_sequence;
}

/*!
 * @brief This function moves the value in member my_sequence_sequence
 * @param _my_sequence_sequence New value to be moved in member my_sequence_sequence
 */
void SequenceSequenceBoundsStruct::my_sequence_sequence(
        std::vector<std::vector<int32_t>>&& _my_sequence_sequence)
{
    m_my_sequence_sequence = std::move(_my_sequence_sequence);
}

/*!
 * @brief This function returns a constant reference to member my_sequence_sequence
 * @return Constant reference to member my_sequence_sequence
 */
const std::vector<std::vector<int32_t>>& SequenceSequenceBoundsStruct::my_sequence_sequence() const
{
    return m_my_sequence_sequence;
}

/*!
 * @brief This function returns a reference to member my_sequence_sequence
 * @return Reference to member my_sequence_sequence
 */
std::vector<std::vector<int32_t>>& SequenceSequenceBoundsStruct::my_sequence_sequence()
{
    return m_my_sequence_sequence;
}


size_t SequenceSequenceBoundsStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SequenceSequenceBoundsStruct_max_key_cdr_typesize;
}

bool SequenceSequenceBoundsStruct::isKeyDefined()
{
    return false;
}

void SequenceSequenceBoundsStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


MapStruct::MapStruct()
{
    // map<long, long> m_my_map


    // Just to register all known types
    registerTypesTypes();
}

MapStruct::~MapStruct()
{
}

MapStruct::MapStruct(
        const MapStruct& x)
{
    m_my_map = x.m_my_map;
}

MapStruct::MapStruct(
        MapStruct&& x) noexcept 
{
    m_my_map = std::move(x.m_my_map);
}

MapStruct& MapStruct::operator =(
        const MapStruct& x)
{

    m_my_map = x.m_my_map;

    return *this;
}

MapStruct& MapStruct::operator =(
        MapStruct&& x) noexcept
{

    m_my_map = std::move(x.m_my_map);

    return *this;
}

bool MapStruct::operator ==(
        const MapStruct& x) const
{

    return (m_my_map == x.m_my_map);
}

bool MapStruct::operator !=(
        const MapStruct& x) const
{
    return !(*this == x);
}

size_t MapStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapStruct_max_cdr_typesize;
}

size_t MapStruct::getCdrSerializedSize(
        const MapStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    }

    return current_alignment - initial_alignment;
}

void MapStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_map;
}

void MapStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_map;}

/*!
 * @brief This function copies the value in member my_map
 * @param _my_map New value to be copied in member my_map
 */
void MapStruct::my_map(
        const std::map<int32_t, int32_t>& _my_map)
{
    m_my_map = _my_map;
}

/*!
 * @brief This function moves the value in member my_map
 * @param _my_map New value to be moved in member my_map
 */
void MapStruct::my_map(
        std::map<int32_t, int32_t>&& _my_map)
{
    m_my_map = std::move(_my_map);
}

/*!
 * @brief This function returns a constant reference to member my_map
 * @return Constant reference to member my_map
 */
const std::map<int32_t, int32_t>& MapStruct::my_map() const
{
    return m_my_map;
}

/*!
 * @brief This function returns a reference to member my_map
 * @return Reference to member my_map
 */
std::map<int32_t, int32_t>& MapStruct::my_map()
{
    return m_my_map;
}


size_t MapStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapStruct_max_key_cdr_typesize;
}

bool MapStruct::isKeyDefined()
{
    return false;
}

void MapStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


MapStructEqual::MapStructEqual()
{
    // map<long, long> m_my_map_equal


    // Just to register all known types
    registerTypesTypes();
}

MapStructEqual::~MapStructEqual()
{
}

MapStructEqual::MapStructEqual(
        const MapStructEqual& x)
{
    m_my_map_equal = x.m_my_map_equal;
}

MapStructEqual::MapStructEqual(
        MapStructEqual&& x) noexcept 
{
    m_my_map_equal = std::move(x.m_my_map_equal);
}

MapStructEqual& MapStructEqual::operator =(
        const MapStructEqual& x)
{

    m_my_map_equal = x.m_my_map_equal;

    return *this;
}

MapStructEqual& MapStructEqual::operator =(
        MapStructEqual&& x) noexcept
{

    m_my_map_equal = std::move(x.m_my_map_equal);

    return *this;
}

bool MapStructEqual::operator ==(
        const MapStructEqual& x) const
{

    return (m_my_map_equal == x.m_my_map_equal);
}

bool MapStructEqual::operator !=(
        const MapStructEqual& x) const
{
    return !(*this == x);
}

size_t MapStructEqual::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapStructEqual_max_cdr_typesize;
}

size_t MapStructEqual::getCdrSerializedSize(
        const MapStructEqual& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map_equal())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    }

    return current_alignment - initial_alignment;
}

void MapStructEqual::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_map_equal;
}

void MapStructEqual::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_map_equal;}

/*!
 * @brief This function copies the value in member my_map_equal
 * @param _my_map_equal New value to be copied in member my_map_equal
 */
void MapStructEqual::my_map_equal(
        const std::map<int32_t, int32_t>& _my_map_equal)
{
    m_my_map_equal = _my_map_equal;
}

/*!
 * @brief This function moves the value in member my_map_equal
 * @param _my_map_equal New value to be moved in member my_map_equal
 */
void MapStructEqual::my_map_equal(
        std::map<int32_t, int32_t>&& _my_map_equal)
{
    m_my_map_equal = std::move(_my_map_equal);
}

/*!
 * @brief This function returns a constant reference to member my_map_equal
 * @return Constant reference to member my_map_equal
 */
const std::map<int32_t, int32_t>& MapStructEqual::my_map_equal() const
{
    return m_my_map_equal;
}

/*!
 * @brief This function returns a reference to member my_map_equal
 * @return Reference to member my_map_equal
 */
std::map<int32_t, int32_t>& MapStructEqual::my_map_equal()
{
    return m_my_map_equal;
}


size_t MapStructEqual::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapStructEqual_max_key_cdr_typesize;
}

bool MapStructEqual::isKeyDefined()
{
    return false;
}

void MapStructEqual::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


MapBadKeyStruct::MapBadKeyStruct()
{
    // map<octet, long> m_my_map


    // Just to register all known types
    registerTypesTypes();
}

MapBadKeyStruct::~MapBadKeyStruct()
{
}

MapBadKeyStruct::MapBadKeyStruct(
        const MapBadKeyStruct& x)
{
    m_my_map = x.m_my_map;
}

MapBadKeyStruct::MapBadKeyStruct(
        MapBadKeyStruct&& x) noexcept 
{
    m_my_map = std::move(x.m_my_map);
}

MapBadKeyStruct& MapBadKeyStruct::operator =(
        const MapBadKeyStruct& x)
{

    m_my_map = x.m_my_map;

    return *this;
}

MapBadKeyStruct& MapBadKeyStruct::operator =(
        MapBadKeyStruct&& x) noexcept
{

    m_my_map = std::move(x.m_my_map);

    return *this;
}

bool MapBadKeyStruct::operator ==(
        const MapBadKeyStruct& x) const
{

    return (m_my_map == x.m_my_map);
}

bool MapBadKeyStruct::operator !=(
        const MapBadKeyStruct& x) const
{
    return !(*this == x);
}

size_t MapBadKeyStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapBadKeyStruct_max_cdr_typesize;
}

size_t MapBadKeyStruct::getCdrSerializedSize(
        const MapBadKeyStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map())
    {
        (void)a;

            current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    }

    return current_alignment - initial_alignment;
}

void MapBadKeyStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_map;
}

void MapBadKeyStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_map;}

/*!
 * @brief This function copies the value in member my_map
 * @param _my_map New value to be copied in member my_map
 */
void MapBadKeyStruct::my_map(
        const std::map<uint8_t, int32_t>& _my_map)
{
    m_my_map = _my_map;
}

/*!
 * @brief This function moves the value in member my_map
 * @param _my_map New value to be moved in member my_map
 */
void MapBadKeyStruct::my_map(
        std::map<uint8_t, int32_t>&& _my_map)
{
    m_my_map = std::move(_my_map);
}

/*!
 * @brief This function returns a constant reference to member my_map
 * @return Constant reference to member my_map
 */
const std::map<uint8_t, int32_t>& MapBadKeyStruct::my_map() const
{
    return m_my_map;
}

/*!
 * @brief This function returns a reference to member my_map
 * @return Reference to member my_map
 */
std::map<uint8_t, int32_t>& MapBadKeyStruct::my_map()
{
    return m_my_map;
}


size_t MapBadKeyStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapBadKeyStruct_max_key_cdr_typesize;
}

bool MapBadKeyStruct::isKeyDefined()
{
    return false;
}

void MapBadKeyStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


MapBadElemStruct::MapBadElemStruct()
{
    // map<long, long long> m_my_map


    // Just to register all known types
    registerTypesTypes();
}

MapBadElemStruct::~MapBadElemStruct()
{
}

MapBadElemStruct::MapBadElemStruct(
        const MapBadElemStruct& x)
{
    m_my_map = x.m_my_map;
}

MapBadElemStruct::MapBadElemStruct(
        MapBadElemStruct&& x) noexcept 
{
    m_my_map = std::move(x.m_my_map);
}

MapBadElemStruct& MapBadElemStruct::operator =(
        const MapBadElemStruct& x)
{

    m_my_map = x.m_my_map;

    return *this;
}

MapBadElemStruct& MapBadElemStruct::operator =(
        MapBadElemStruct&& x) noexcept
{

    m_my_map = std::move(x.m_my_map);

    return *this;
}

bool MapBadElemStruct::operator ==(
        const MapBadElemStruct& x) const
{

    return (m_my_map == x.m_my_map);
}

bool MapBadElemStruct::operator !=(
        const MapBadElemStruct& x) const
{
    return !(*this == x);
}

size_t MapBadElemStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapBadElemStruct_max_cdr_typesize;
}

size_t MapBadElemStruct::getCdrSerializedSize(
        const MapBadElemStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    }

    return current_alignment - initial_alignment;
}

void MapBadElemStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_map;
}

void MapBadElemStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_map;}

/*!
 * @brief This function copies the value in member my_map
 * @param _my_map New value to be copied in member my_map
 */
void MapBadElemStruct::my_map(
        const std::map<int32_t, int64_t>& _my_map)
{
    m_my_map = _my_map;
}

/*!
 * @brief This function moves the value in member my_map
 * @param _my_map New value to be moved in member my_map
 */
void MapBadElemStruct::my_map(
        std::map<int32_t, int64_t>&& _my_map)
{
    m_my_map = std::move(_my_map);
}

/*!
 * @brief This function returns a constant reference to member my_map
 * @return Constant reference to member my_map
 */
const std::map<int32_t, int64_t>& MapBadElemStruct::my_map() const
{
    return m_my_map;
}

/*!
 * @brief This function returns a reference to member my_map
 * @return Reference to member my_map
 */
std::map<int32_t, int64_t>& MapBadElemStruct::my_map()
{
    return m_my_map;
}


size_t MapBadElemStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapBadElemStruct_max_key_cdr_typesize;
}

bool MapBadElemStruct::isKeyDefined()
{
    return false;
}

void MapBadElemStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


MapBoundsStruct::MapBoundsStruct()
{
    // map<long, long> m_my_map


    // Just to register all known types
    registerTypesTypes();
}

MapBoundsStruct::~MapBoundsStruct()
{
}

MapBoundsStruct::MapBoundsStruct(
        const MapBoundsStruct& x)
{
    m_my_map = x.m_my_map;
}

MapBoundsStruct::MapBoundsStruct(
        MapBoundsStruct&& x) noexcept 
{
    m_my_map = std::move(x.m_my_map);
}

MapBoundsStruct& MapBoundsStruct::operator =(
        const MapBoundsStruct& x)
{

    m_my_map = x.m_my_map;

    return *this;
}

MapBoundsStruct& MapBoundsStruct::operator =(
        MapBoundsStruct&& x) noexcept
{

    m_my_map = std::move(x.m_my_map);

    return *this;
}

bool MapBoundsStruct::operator ==(
        const MapBoundsStruct& x) const
{

    return (m_my_map == x.m_my_map);
}

bool MapBoundsStruct::operator !=(
        const MapBoundsStruct& x) const
{
    return !(*this == x);
}

size_t MapBoundsStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapBoundsStruct_max_cdr_typesize;
}

size_t MapBoundsStruct::getCdrSerializedSize(
        const MapBoundsStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    }

    return current_alignment - initial_alignment;
}

void MapBoundsStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_map;
}

void MapBoundsStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_map;}

/*!
 * @brief This function copies the value in member my_map
 * @param _my_map New value to be copied in member my_map
 */
void MapBoundsStruct::my_map(
        const std::map<int32_t, int32_t>& _my_map)
{
    m_my_map = _my_map;
}

/*!
 * @brief This function moves the value in member my_map
 * @param _my_map New value to be moved in member my_map
 */
void MapBoundsStruct::my_map(
        std::map<int32_t, int32_t>&& _my_map)
{
    m_my_map = std::move(_my_map);
}

/*!
 * @brief This function returns a constant reference to member my_map
 * @return Constant reference to member my_map
 */
const std::map<int32_t, int32_t>& MapBoundsStruct::my_map() const
{
    return m_my_map;
}

/*!
 * @brief This function returns a reference to member my_map
 * @return Reference to member my_map
 */
std::map<int32_t, int32_t>& MapBoundsStruct::my_map()
{
    return m_my_map;
}


size_t MapBoundsStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapBoundsStruct_max_key_cdr_typesize;
}

bool MapBoundsStruct::isKeyDefined()
{
    return false;
}

void MapBoundsStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


MapMapStruct::MapMapStruct()
{
    // map<long, map<long, long>> m_my_map_map


    // Just to register all known types
    registerTypesTypes();
}

MapMapStruct::~MapMapStruct()
{
}

MapMapStruct::MapMapStruct(
        const MapMapStruct& x)
{
    m_my_map_map = x.m_my_map_map;
}

MapMapStruct::MapMapStruct(
        MapMapStruct&& x) noexcept 
{
    m_my_map_map = std::move(x.m_my_map_map);
}

MapMapStruct& MapMapStruct::operator =(
        const MapMapStruct& x)
{

    m_my_map_map = x.m_my_map_map;

    return *this;
}

MapMapStruct& MapMapStruct::operator =(
        MapMapStruct&& x) noexcept
{

    m_my_map_map = std::move(x.m_my_map_map);

    return *this;
}

bool MapMapStruct::operator ==(
        const MapMapStruct& x) const
{

    return (m_my_map_map == x.m_my_map_map);
}

bool MapMapStruct::operator !=(
        const MapMapStruct& x) const
{
    return !(*this == x);
}

size_t MapMapStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapMapStruct_max_cdr_typesize;
}

size_t MapMapStruct::getCdrSerializedSize(
        const MapMapStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map_map())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            for(auto b : a.second)
            {
                (void)b;

                    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

                    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            }
    }

    return current_alignment - initial_alignment;
}

void MapMapStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_map_map;
}

void MapMapStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_map_map;}

/*!
 * @brief This function copies the value in member my_map_map
 * @param _my_map_map New value to be copied in member my_map_map
 */
void MapMapStruct::my_map_map(
        const std::map<int32_t, std::map<int32_t, int32_t>>& _my_map_map)
{
    m_my_map_map = _my_map_map;
}

/*!
 * @brief This function moves the value in member my_map_map
 * @param _my_map_map New value to be moved in member my_map_map
 */
void MapMapStruct::my_map_map(
        std::map<int32_t, std::map<int32_t, int32_t>>&& _my_map_map)
{
    m_my_map_map = std::move(_my_map_map);
}

/*!
 * @brief This function returns a constant reference to member my_map_map
 * @return Constant reference to member my_map_map
 */
const std::map<int32_t, std::map<int32_t, int32_t>>& MapMapStruct::my_map_map() const
{
    return m_my_map_map;
}

/*!
 * @brief This function returns a reference to member my_map_map
 * @return Reference to member my_map_map
 */
std::map<int32_t, std::map<int32_t, int32_t>>& MapMapStruct::my_map_map()
{
    return m_my_map_map;
}


size_t MapMapStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapMapStruct_max_key_cdr_typesize;
}

bool MapMapStruct::isKeyDefined()
{
    return false;
}

void MapMapStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


MapMapBoundsStruct::MapMapBoundsStruct()
{
    // map<long, map<long, long>> m_my_map_map


    // Just to register all known types
    registerTypesTypes();
}

MapMapBoundsStruct::~MapMapBoundsStruct()
{
}

MapMapBoundsStruct::MapMapBoundsStruct(
        const MapMapBoundsStruct& x)
{
    m_my_map_map = x.m_my_map_map;
}

MapMapBoundsStruct::MapMapBoundsStruct(
        MapMapBoundsStruct&& x) noexcept 
{
    m_my_map_map = std::move(x.m_my_map_map);
}

MapMapBoundsStruct& MapMapBoundsStruct::operator =(
        const MapMapBoundsStruct& x)
{

    m_my_map_map = x.m_my_map_map;

    return *this;
}

MapMapBoundsStruct& MapMapBoundsStruct::operator =(
        MapMapBoundsStruct&& x) noexcept
{

    m_my_map_map = std::move(x.m_my_map_map);

    return *this;
}

bool MapMapBoundsStruct::operator ==(
        const MapMapBoundsStruct& x) const
{

    return (m_my_map_map == x.m_my_map_map);
}

bool MapMapBoundsStruct::operator !=(
        const MapMapBoundsStruct& x) const
{
    return !(*this == x);
}

size_t MapMapBoundsStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapMapBoundsStruct_max_cdr_typesize;
}

size_t MapMapBoundsStruct::getCdrSerializedSize(
        const MapMapBoundsStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map_map())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            for(auto b : a.second)
            {
                (void)b;

                    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

                    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            }
    }

    return current_alignment - initial_alignment;
}

void MapMapBoundsStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_map_map;
}

void MapMapBoundsStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_map_map;}

/*!
 * @brief This function copies the value in member my_map_map
 * @param _my_map_map New value to be copied in member my_map_map
 */
void MapMapBoundsStruct::my_map_map(
        const std::map<int32_t, std::map<int32_t, int32_t>>& _my_map_map)
{
    m_my_map_map = _my_map_map;
}

/*!
 * @brief This function moves the value in member my_map_map
 * @param _my_map_map New value to be moved in member my_map_map
 */
void MapMapBoundsStruct::my_map_map(
        std::map<int32_t, std::map<int32_t, int32_t>>&& _my_map_map)
{
    m_my_map_map = std::move(_my_map_map);
}

/*!
 * @brief This function returns a constant reference to member my_map_map
 * @return Constant reference to member my_map_map
 */
const std::map<int32_t, std::map<int32_t, int32_t>>& MapMapBoundsStruct::my_map_map() const
{
    return m_my_map_map;
}

/*!
 * @brief This function returns a reference to member my_map_map
 * @return Reference to member my_map_map
 */
std::map<int32_t, std::map<int32_t, int32_t>>& MapMapBoundsStruct::my_map_map()
{
    return m_my_map_map;
}


size_t MapMapBoundsStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MapMapBoundsStruct_max_key_cdr_typesize;
}

bool MapMapBoundsStruct::isKeyDefined()
{
    return false;
}

void MapMapBoundsStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SimpleUnion::SimpleUnion()
{
    m__d = A;
    // long m_first
    m_first = 0;
    // long long m_second
    m_second = 0;
}

SimpleUnion::~SimpleUnion()
{
}

SimpleUnion::SimpleUnion(
        const SimpleUnion& x)
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
        default:
        break;
    }
}

SimpleUnion::SimpleUnion(
        SimpleUnion&& x) noexcept
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
        default:
        break;
    }
}

SimpleUnion& SimpleUnion::operator =(
        const SimpleUnion& x)
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
        default:
        break;
    }

    return *this;
}

SimpleUnion& SimpleUnion::operator =(
        SimpleUnion&& x) noexcept
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
        default:
        break;
    }

    return *this;
}

bool SimpleUnion::operator ==(
        const SimpleUnion& x) const
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
        default:
        break;
    }
    return false;
}

bool SimpleUnion::operator !=(
        const SimpleUnion& x) const
{
    return !(*this == x);
}

void SimpleUnion::_d(
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
    }

    if(!b)
    {
        throw BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

int32_t SimpleUnion::_d() const
{
    return m__d;
}

int32_t& SimpleUnion::_d()
{
    return m__d;
}

void SimpleUnion::first(
        int32_t _first)
{
    m_first = _first;
    m__d = A;
}

int32_t SimpleUnion::first() const
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

int32_t& SimpleUnion::first()
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
void SimpleUnion::second(
        int64_t _second)
{
    m_second = _second;
    m__d = B;
}

int64_t SimpleUnion::second() const
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

int64_t& SimpleUnion::second()
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

// TODO(Ricardo) Review
size_t SimpleUnion::getCdrSerializedSize(
        const SimpleUnion& data,
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
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void SimpleUnion::serialize(
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
        default:
        break;
    }
}

void SimpleUnion::deserialize(
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
        default:
        break;
    }
}


SimpleUnionNames::SimpleUnionNames()
{
    m__d = A;
    // long m_first_case
    m_first_case = 0;
    // long long m_second_case
    m_second_case = 0;
}

SimpleUnionNames::~SimpleUnionNames()
{
}

SimpleUnionNames::SimpleUnionNames(
        const SimpleUnionNames& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first_case = x.m_first_case;
        break;
        case B:
        m_second_case = x.m_second_case;
        break;
        default:
        break;
    }
}

SimpleUnionNames::SimpleUnionNames(
        SimpleUnionNames&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first_case = x.m_first_case;
        break;
        case B:
        m_second_case = x.m_second_case;
        break;
        default:
        break;
    }
}

SimpleUnionNames& SimpleUnionNames::operator =(
        const SimpleUnionNames& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first_case = x.m_first_case;
        break;
        case B:
        m_second_case = x.m_second_case;
        break;
        default:
        break;
    }

    return *this;
}

SimpleUnionNames& SimpleUnionNames::operator =(
        SimpleUnionNames&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first_case = x.m_first_case;
        break;
        case B:
        m_second_case = x.m_second_case;
        break;
        default:
        break;
    }

    return *this;
}

bool SimpleUnionNames::operator ==(
        const SimpleUnionNames& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case A:
            return (m_first_case == x.m_first_case);
            break;
        case B:
            return (m_second_case == x.m_second_case);
            break;
        default:
        break;
    }
    return false;
}

bool SimpleUnionNames::operator !=(
        const SimpleUnionNames& x) const
{
    return !(*this == x);
}

void SimpleUnionNames::_d(
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
    }

    if(!b)
    {
        throw BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

int32_t SimpleUnionNames::_d() const
{
    return m__d;
}

int32_t& SimpleUnionNames::_d()
{
    return m__d;
}

void SimpleUnionNames::first_case(
        int32_t _first_case)
{
    m_first_case = _first_case;
    m__d = A;
}

int32_t SimpleUnionNames::first_case() const
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

    return m_first_case;
}

int32_t& SimpleUnionNames::first_case()
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

    return m_first_case;
}
void SimpleUnionNames::second_case(
        int64_t _second_case)
{
    m_second_case = _second_case;
    m__d = B;
}

int64_t SimpleUnionNames::second_case() const
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

    return m_second_case;
}

int64_t& SimpleUnionNames::second_case()
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

    return m_second_case;
}

// TODO(Ricardo) Review
size_t SimpleUnionNames::getCdrSerializedSize(
        const SimpleUnionNames& data,
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
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void SimpleUnionNames::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case A:
        scdr << m_first_case;

        break;
        case B:
        scdr << m_second_case;

        break;
        default:
        break;
    }
}

void SimpleUnionNames::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case A:
        dcdr >> m_first_case;
        break;
        case B:
        dcdr >> m_second_case;
        break;
        default:
        break;
    }
}


SimpleTypeUnion::SimpleTypeUnion()
{
    m__d = A;
    // octet m_first
    m_first = 0;
    // long long m_second
    m_second = 0;
}

SimpleTypeUnion::~SimpleTypeUnion()
{
}

SimpleTypeUnion::SimpleTypeUnion(
        const SimpleTypeUnion& x)
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
        default:
        break;
    }
}

SimpleTypeUnion::SimpleTypeUnion(
        SimpleTypeUnion&& x) noexcept
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
        default:
        break;
    }
}

SimpleTypeUnion& SimpleTypeUnion::operator =(
        const SimpleTypeUnion& x)
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
        default:
        break;
    }

    return *this;
}

SimpleTypeUnion& SimpleTypeUnion::operator =(
        SimpleTypeUnion&& x) noexcept
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
        default:
        break;
    }

    return *this;
}

bool SimpleTypeUnion::operator ==(
        const SimpleTypeUnion& x) const
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
        default:
        break;
    }
    return false;
}

bool SimpleTypeUnion::operator !=(
        const SimpleTypeUnion& x) const
{
    return !(*this == x);
}

void SimpleTypeUnion::_d(
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
    }

    if(!b)
    {
        throw BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

int32_t SimpleTypeUnion::_d() const
{
    return m__d;
}

int32_t& SimpleTypeUnion::_d()
{
    return m__d;
}

void SimpleTypeUnion::first(
        uint8_t _first)
{
    m_first = _first;
    m__d = A;
}

uint8_t SimpleTypeUnion::first() const
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

uint8_t& SimpleTypeUnion::first()
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
void SimpleTypeUnion::second(
        int64_t _second)
{
    m_second = _second;
    m__d = B;
}

int64_t SimpleTypeUnion::second() const
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

int64_t& SimpleTypeUnion::second()
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

// TODO(Ricardo) Review
size_t SimpleTypeUnion::getCdrSerializedSize(
        const SimpleTypeUnion& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
        case A:
        current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

        break;
        case B:
        current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void SimpleTypeUnion::serialize(
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
        default:
        break;
    }
}

void SimpleTypeUnion::deserialize(
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
        default:
        break;
    }
}


SimpleBadUnion::SimpleBadUnion()
{
    m__d = A;
    // long m_first
    m_first = 0;
    // long long m_second
    m_second = 0;
}

SimpleBadUnion::~SimpleBadUnion()
{
}

SimpleBadUnion::SimpleBadUnion(
        const SimpleBadUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case C:
        m_second = x.m_second;
        break;
        default:
        break;
    }
}

SimpleBadUnion::SimpleBadUnion(
        SimpleBadUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case C:
        m_second = x.m_second;
        break;
        default:
        break;
    }
}

SimpleBadUnion& SimpleBadUnion::operator =(
        const SimpleBadUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case C:
        m_second = x.m_second;
        break;
        default:
        break;
    }

    return *this;
}

SimpleBadUnion& SimpleBadUnion::operator =(
        SimpleBadUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case C:
        m_second = x.m_second;
        break;
        default:
        break;
    }

    return *this;
}

bool SimpleBadUnion::operator ==(
        const SimpleBadUnion& x) const
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
        case C:
            return (m_second == x.m_second);
            break;
        default:
        break;
    }
    return false;
}

bool SimpleBadUnion::operator !=(
        const SimpleBadUnion& x) const
{
    return !(*this == x);
}

void SimpleBadUnion::_d(
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
        case C:
        switch(__d)
        {
            case C:
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

int32_t SimpleBadUnion::_d() const
{
    return m__d;
}

int32_t& SimpleBadUnion::_d()
{
    return m__d;
}

void SimpleBadUnion::first(
        int32_t _first)
{
    m_first = _first;
    m__d = A;
}

int32_t SimpleBadUnion::first() const
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

int32_t& SimpleBadUnion::first()
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
void SimpleBadUnion::second(
        int64_t _second)
{
    m_second = _second;
    m__d = C;
}

int64_t SimpleBadUnion::second() const
{
    bool b = false;

    switch(m__d)
    {
        case C:
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

int64_t& SimpleBadUnion::second()
{
    bool b = false;

    switch(m__d)
    {
        case C:
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

// TODO(Ricardo) Review
size_t SimpleBadUnion::getCdrSerializedSize(
        const SimpleBadUnion& data,
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
        case C:
        current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void SimpleBadUnion::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case A:
        scdr << m_first;

        break;
        case C:
        scdr << m_second;

        break;
        default:
        break;
    }
}

void SimpleBadUnion::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case A:
        dcdr >> m_first;
        break;
        case C:
        dcdr >> m_second;
        break;
        default:
        break;
    }
}


SimpleBadDiscUnion::SimpleBadDiscUnion()
{
    m__d = 0;
    // long m_first
    m_first = 0;
    // long long m_second
    m_second = 0;
}

SimpleBadDiscUnion::~SimpleBadDiscUnion()
{
}

SimpleBadDiscUnion::SimpleBadDiscUnion(
        const SimpleBadDiscUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 0:
        m_first = x.m_first;
        break;
        case 1:
        m_second = x.m_second;
        break;
        default:
        break;
    }
}

SimpleBadDiscUnion::SimpleBadDiscUnion(
        SimpleBadDiscUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 0:
        m_first = x.m_first;
        break;
        case 1:
        m_second = x.m_second;
        break;
        default:
        break;
    }
}

SimpleBadDiscUnion& SimpleBadDiscUnion::operator =(
        const SimpleBadDiscUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 0:
        m_first = x.m_first;
        break;
        case 1:
        m_second = x.m_second;
        break;
        default:
        break;
    }

    return *this;
}

SimpleBadDiscUnion& SimpleBadDiscUnion::operator =(
        SimpleBadDiscUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case 0:
        m_first = x.m_first;
        break;
        case 1:
        m_second = x.m_second;
        break;
        default:
        break;
    }

    return *this;
}

bool SimpleBadDiscUnion::operator ==(
        const SimpleBadDiscUnion& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case 0:
            return (m_first == x.m_first);
            break;
        case 1:
            return (m_second == x.m_second);
            break;
        default:
        break;
    }
    return false;
}

bool SimpleBadDiscUnion::operator !=(
        const SimpleBadDiscUnion& x) const
{
    return !(*this == x);
}

void SimpleBadDiscUnion::_d(
        uint8_t __d)
{
    bool b = false;

    switch(m__d)
    {
        case 0:
        switch(__d)
        {
            case 0:
            b = true;
            break;
            default:
            break;
        }
        break;
        case 1:
        switch(__d)
        {
            case 1:
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

uint8_t SimpleBadDiscUnion::_d() const
{
    return m__d;
}

uint8_t& SimpleBadDiscUnion::_d()
{
    return m__d;
}

void SimpleBadDiscUnion::first(
        int32_t _first)
{
    m_first = _first;
    m__d = 0;
}

int32_t SimpleBadDiscUnion::first() const
{
    bool b = false;

    switch(m__d)
    {
        case 0:
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

int32_t& SimpleBadDiscUnion::first()
{
    bool b = false;

    switch(m__d)
    {
        case 0:
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
void SimpleBadDiscUnion::second(
        int64_t _second)
{
    m_second = _second;
    m__d = 1;
}

int64_t SimpleBadDiscUnion::second() const
{
    bool b = false;

    switch(m__d)
    {
        case 1:
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

int64_t& SimpleBadDiscUnion::second()
{
    bool b = false;

    switch(m__d)
    {
        case 1:
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

// TODO(Ricardo) Review
size_t SimpleBadDiscUnion::getCdrSerializedSize(
        const SimpleBadDiscUnion& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    switch(data.m__d)
    {
        case 0:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        case 1:
        current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void SimpleBadDiscUnion::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case 0:
        scdr << m_first;

        break;
        case 1:
        scdr << m_second;

        break;
        default:
        break;
    }
}

void SimpleBadDiscUnion::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case 0:
        dcdr >> m_first;
        break;
        case 1:
        dcdr >> m_second;
        break;
        default:
        break;
    }
}


SimpleUnionStruct::SimpleUnionStruct()
{
    // SimpleUnion m_my_union


    // Just to register all known types
    registerTypesTypes();
}

SimpleUnionStruct::~SimpleUnionStruct()
{
}

SimpleUnionStruct::SimpleUnionStruct(
        const SimpleUnionStruct& x)
{
    m_my_union = x.m_my_union;
}

SimpleUnionStruct::SimpleUnionStruct(
        SimpleUnionStruct&& x) noexcept 
{
    m_my_union = std::move(x.m_my_union);
}

SimpleUnionStruct& SimpleUnionStruct::operator =(
        const SimpleUnionStruct& x)
{

    m_my_union = x.m_my_union;

    return *this;
}

SimpleUnionStruct& SimpleUnionStruct::operator =(
        SimpleUnionStruct&& x) noexcept
{

    m_my_union = std::move(x.m_my_union);

    return *this;
}

bool SimpleUnionStruct::operator ==(
        const SimpleUnionStruct& x) const
{

    return (m_my_union == x.m_my_union);
}

bool SimpleUnionStruct::operator !=(
        const SimpleUnionStruct& x) const
{
    return !(*this == x);
}

size_t SimpleUnionStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleUnionStruct_max_cdr_typesize;
}

size_t SimpleUnionStruct::getCdrSerializedSize(
        const SimpleUnionStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += SimpleUnion::getCdrSerializedSize(data.my_union(), current_alignment);

    return current_alignment - initial_alignment;
}

void SimpleUnionStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;

}

void SimpleUnionStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void SimpleUnionStruct::my_union(
        const SimpleUnion& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void SimpleUnionStruct::my_union(
        SimpleUnion&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const SimpleUnion& SimpleUnionStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
SimpleUnion& SimpleUnionStruct::my_union()
{
    return m_my_union;
}


size_t SimpleUnionStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleUnionStruct_max_key_cdr_typesize;
}

bool SimpleUnionStruct::isKeyDefined()
{
    return false;
}

void SimpleUnionStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SimpleUnionStructEqual::SimpleUnionStructEqual()
{
    // SimpleUnion m_my_union_equal


    // Just to register all known types
    registerTypesTypes();
}

SimpleUnionStructEqual::~SimpleUnionStructEqual()
{
}

SimpleUnionStructEqual::SimpleUnionStructEqual(
        const SimpleUnionStructEqual& x)
{
    m_my_union_equal = x.m_my_union_equal;
}

SimpleUnionStructEqual::SimpleUnionStructEqual(
        SimpleUnionStructEqual&& x) noexcept 
{
    m_my_union_equal = std::move(x.m_my_union_equal);
}

SimpleUnionStructEqual& SimpleUnionStructEqual::operator =(
        const SimpleUnionStructEqual& x)
{

    m_my_union_equal = x.m_my_union_equal;

    return *this;
}

SimpleUnionStructEqual& SimpleUnionStructEqual::operator =(
        SimpleUnionStructEqual&& x) noexcept
{

    m_my_union_equal = std::move(x.m_my_union_equal);

    return *this;
}

bool SimpleUnionStructEqual::operator ==(
        const SimpleUnionStructEqual& x) const
{

    return (m_my_union_equal == x.m_my_union_equal);
}

bool SimpleUnionStructEqual::operator !=(
        const SimpleUnionStructEqual& x) const
{
    return !(*this == x);
}

size_t SimpleUnionStructEqual::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleUnionStructEqual_max_cdr_typesize;
}

size_t SimpleUnionStructEqual::getCdrSerializedSize(
        const SimpleUnionStructEqual& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += SimpleUnion::getCdrSerializedSize(data.my_union_equal(), current_alignment);

    return current_alignment - initial_alignment;
}

void SimpleUnionStructEqual::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union_equal;

}

void SimpleUnionStructEqual::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union_equal;
}

/*!
 * @brief This function copies the value in member my_union_equal
 * @param _my_union_equal New value to be copied in member my_union_equal
 */
void SimpleUnionStructEqual::my_union_equal(
        const SimpleUnion& _my_union_equal)
{
    m_my_union_equal = _my_union_equal;
}

/*!
 * @brief This function moves the value in member my_union_equal
 * @param _my_union_equal New value to be moved in member my_union_equal
 */
void SimpleUnionStructEqual::my_union_equal(
        SimpleUnion&& _my_union_equal)
{
    m_my_union_equal = std::move(_my_union_equal);
}

/*!
 * @brief This function returns a constant reference to member my_union_equal
 * @return Constant reference to member my_union_equal
 */
const SimpleUnion& SimpleUnionStructEqual::my_union_equal() const
{
    return m_my_union_equal;
}

/*!
 * @brief This function returns a reference to member my_union_equal
 * @return Reference to member my_union_equal
 */
SimpleUnion& SimpleUnionStructEqual::my_union_equal()
{
    return m_my_union_equal;
}


size_t SimpleUnionStructEqual::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleUnionStructEqual_max_key_cdr_typesize;
}

bool SimpleUnionStructEqual::isKeyDefined()
{
    return false;
}

void SimpleUnionStructEqual::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SimpleUnionNamesStruct::SimpleUnionNamesStruct()
{
    // SimpleUnionNames m_my_union


    // Just to register all known types
    registerTypesTypes();
}

SimpleUnionNamesStruct::~SimpleUnionNamesStruct()
{
}

SimpleUnionNamesStruct::SimpleUnionNamesStruct(
        const SimpleUnionNamesStruct& x)
{
    m_my_union = x.m_my_union;
}

SimpleUnionNamesStruct::SimpleUnionNamesStruct(
        SimpleUnionNamesStruct&& x) noexcept 
{
    m_my_union = std::move(x.m_my_union);
}

SimpleUnionNamesStruct& SimpleUnionNamesStruct::operator =(
        const SimpleUnionNamesStruct& x)
{

    m_my_union = x.m_my_union;

    return *this;
}

SimpleUnionNamesStruct& SimpleUnionNamesStruct::operator =(
        SimpleUnionNamesStruct&& x) noexcept
{

    m_my_union = std::move(x.m_my_union);

    return *this;
}

bool SimpleUnionNamesStruct::operator ==(
        const SimpleUnionNamesStruct& x) const
{

    return (m_my_union == x.m_my_union);
}

bool SimpleUnionNamesStruct::operator !=(
        const SimpleUnionNamesStruct& x) const
{
    return !(*this == x);
}

size_t SimpleUnionNamesStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleUnionNamesStruct_max_cdr_typesize;
}

size_t SimpleUnionNamesStruct::getCdrSerializedSize(
        const SimpleUnionNamesStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += SimpleUnionNames::getCdrSerializedSize(data.my_union(), current_alignment);

    return current_alignment - initial_alignment;
}

void SimpleUnionNamesStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;

}

void SimpleUnionNamesStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void SimpleUnionNamesStruct::my_union(
        const SimpleUnionNames& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void SimpleUnionNamesStruct::my_union(
        SimpleUnionNames&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const SimpleUnionNames& SimpleUnionNamesStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
SimpleUnionNames& SimpleUnionNamesStruct::my_union()
{
    return m_my_union;
}


size_t SimpleUnionNamesStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleUnionNamesStruct_max_key_cdr_typesize;
}

bool SimpleUnionNamesStruct::isKeyDefined()
{
    return false;
}

void SimpleUnionNamesStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SimpleTypeUnionStruct::SimpleTypeUnionStruct()
{
    // SimpleTypeUnion m_my_union


    // Just to register all known types
    registerTypesTypes();
}

SimpleTypeUnionStruct::~SimpleTypeUnionStruct()
{
}

SimpleTypeUnionStruct::SimpleTypeUnionStruct(
        const SimpleTypeUnionStruct& x)
{
    m_my_union = x.m_my_union;
}

SimpleTypeUnionStruct::SimpleTypeUnionStruct(
        SimpleTypeUnionStruct&& x) noexcept 
{
    m_my_union = std::move(x.m_my_union);
}

SimpleTypeUnionStruct& SimpleTypeUnionStruct::operator =(
        const SimpleTypeUnionStruct& x)
{

    m_my_union = x.m_my_union;

    return *this;
}

SimpleTypeUnionStruct& SimpleTypeUnionStruct::operator =(
        SimpleTypeUnionStruct&& x) noexcept
{

    m_my_union = std::move(x.m_my_union);

    return *this;
}

bool SimpleTypeUnionStruct::operator ==(
        const SimpleTypeUnionStruct& x) const
{

    return (m_my_union == x.m_my_union);
}

bool SimpleTypeUnionStruct::operator !=(
        const SimpleTypeUnionStruct& x) const
{
    return !(*this == x);
}

size_t SimpleTypeUnionStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleTypeUnionStruct_max_cdr_typesize;
}

size_t SimpleTypeUnionStruct::getCdrSerializedSize(
        const SimpleTypeUnionStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += SimpleTypeUnion::getCdrSerializedSize(data.my_union(), current_alignment);

    return current_alignment - initial_alignment;
}

void SimpleTypeUnionStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;

}

void SimpleTypeUnionStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void SimpleTypeUnionStruct::my_union(
        const SimpleTypeUnion& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void SimpleTypeUnionStruct::my_union(
        SimpleTypeUnion&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const SimpleTypeUnion& SimpleTypeUnionStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
SimpleTypeUnion& SimpleTypeUnionStruct::my_union()
{
    return m_my_union;
}


size_t SimpleTypeUnionStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleTypeUnionStruct_max_key_cdr_typesize;
}

bool SimpleTypeUnionStruct::isKeyDefined()
{
    return false;
}

void SimpleTypeUnionStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SimpleBadUnionStruct::SimpleBadUnionStruct()
{
    // SimpleBadUnion m_my_union


    // Just to register all known types
    registerTypesTypes();
}

SimpleBadUnionStruct::~SimpleBadUnionStruct()
{
}

SimpleBadUnionStruct::SimpleBadUnionStruct(
        const SimpleBadUnionStruct& x)
{
    m_my_union = x.m_my_union;
}

SimpleBadUnionStruct::SimpleBadUnionStruct(
        SimpleBadUnionStruct&& x) noexcept 
{
    m_my_union = std::move(x.m_my_union);
}

SimpleBadUnionStruct& SimpleBadUnionStruct::operator =(
        const SimpleBadUnionStruct& x)
{

    m_my_union = x.m_my_union;

    return *this;
}

SimpleBadUnionStruct& SimpleBadUnionStruct::operator =(
        SimpleBadUnionStruct&& x) noexcept
{

    m_my_union = std::move(x.m_my_union);

    return *this;
}

bool SimpleBadUnionStruct::operator ==(
        const SimpleBadUnionStruct& x) const
{

    return (m_my_union == x.m_my_union);
}

bool SimpleBadUnionStruct::operator !=(
        const SimpleBadUnionStruct& x) const
{
    return !(*this == x);
}

size_t SimpleBadUnionStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleBadUnionStruct_max_cdr_typesize;
}

size_t SimpleBadUnionStruct::getCdrSerializedSize(
        const SimpleBadUnionStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += SimpleBadUnion::getCdrSerializedSize(data.my_union(), current_alignment);

    return current_alignment - initial_alignment;
}

void SimpleBadUnionStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;

}

void SimpleBadUnionStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void SimpleBadUnionStruct::my_union(
        const SimpleBadUnion& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void SimpleBadUnionStruct::my_union(
        SimpleBadUnion&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const SimpleBadUnion& SimpleBadUnionStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
SimpleBadUnion& SimpleBadUnionStruct::my_union()
{
    return m_my_union;
}


size_t SimpleBadUnionStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimpleBadUnionStruct_max_key_cdr_typesize;
}

bool SimpleBadUnionStruct::isKeyDefined()
{
    return false;
}

void SimpleBadUnionStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SimplBadDiscUnionStruct::SimplBadDiscUnionStruct()
{
    // SimpleBadDiscUnion m_my_union


    // Just to register all known types
    registerTypesTypes();
}

SimplBadDiscUnionStruct::~SimplBadDiscUnionStruct()
{
}

SimplBadDiscUnionStruct::SimplBadDiscUnionStruct(
        const SimplBadDiscUnionStruct& x)
{
    m_my_union = x.m_my_union;
}

SimplBadDiscUnionStruct::SimplBadDiscUnionStruct(
        SimplBadDiscUnionStruct&& x) noexcept 
{
    m_my_union = std::move(x.m_my_union);
}

SimplBadDiscUnionStruct& SimplBadDiscUnionStruct::operator =(
        const SimplBadDiscUnionStruct& x)
{

    m_my_union = x.m_my_union;

    return *this;
}

SimplBadDiscUnionStruct& SimplBadDiscUnionStruct::operator =(
        SimplBadDiscUnionStruct&& x) noexcept
{

    m_my_union = std::move(x.m_my_union);

    return *this;
}

bool SimplBadDiscUnionStruct::operator ==(
        const SimplBadDiscUnionStruct& x) const
{

    return (m_my_union == x.m_my_union);
}

bool SimplBadDiscUnionStruct::operator !=(
        const SimplBadDiscUnionStruct& x) const
{
    return !(*this == x);
}

size_t SimplBadDiscUnionStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimplBadDiscUnionStruct_max_cdr_typesize;
}

size_t SimplBadDiscUnionStruct::getCdrSerializedSize(
        const SimplBadDiscUnionStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += SimpleBadDiscUnion::getCdrSerializedSize(data.my_union(), current_alignment);

    return current_alignment - initial_alignment;
}

void SimplBadDiscUnionStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;

}

void SimplBadDiscUnionStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void SimplBadDiscUnionStruct::my_union(
        const SimpleBadDiscUnion& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void SimplBadDiscUnionStruct::my_union(
        SimpleBadDiscUnion&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const SimpleBadDiscUnion& SimplBadDiscUnionStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
SimpleBadDiscUnion& SimplBadDiscUnionStruct::my_union()
{
    return m_my_union;
}


size_t SimplBadDiscUnionStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return SimplBadDiscUnionStruct_max_key_cdr_typesize;
}

bool SimplBadDiscUnionStruct::isKeyDefined()
{
    return false;
}

void SimplBadDiscUnionStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

