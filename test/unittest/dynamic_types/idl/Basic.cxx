/*!
 * @file Basic.cpp
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

#include "Basic.h"
#include "BasicTypeObject.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define ArraytStruct_max_cdr_typesize 32ULL;
#define SimpleUnionStruct_max_cdr_typesize 16ULL;

#define WCharUnionStruct_max_cdr_typesize 16ULL;
#define OctetStruct_max_cdr_typesize 1ULL;
#define LongStruct_max_cdr_typesize 4ULL;
#define EnumStruct_max_cdr_typesize 4ULL;
#define BitsetStruct_max_cdr_typesize 8ULL;


#define DoubleStruct_max_cdr_typesize 8ULL;
#define LargeWStringStruct_max_cdr_typesize 167704ULL;
#define WCharStruct_max_cdr_typesize 4ULL;

#define WStringStruct_max_cdr_typesize 1024ULL;
#define SequenceStruct_max_cdr_typesize 12ULL;

#define ULongStruct_max_cdr_typesize 4ULL;
#define SequenceSequenceStruct_max_cdr_typesize 40ULL;
#define FloatStruct_max_cdr_typesize 4ULL;
#define LongDoubleStruct_max_cdr_typesize 16ULL;
#define StructStructStruct_max_cdr_typesize 24ULL;
#define UnionUnionUnionStruct_max_cdr_typesize 16ULL;
#define BoolStruct_max_cdr_typesize 1ULL;
#define MapMapStruct_max_cdr_typesize 52ULL;
#define AliasAliasStruct_max_cdr_typesize 4ULL;
#define ArrayArrayStruct_max_cdr_typesize 64ULL;
#define ShortStruct_max_cdr_typesize 2ULL;
#define MapStruct_max_cdr_typesize 20ULL;
#define UShortStruct_max_cdr_typesize 2ULL;


#define ULongLongStruct_max_cdr_typesize 8ULL;
#define AliasStruct_max_cdr_typesize 4ULL;
#define LargeStringStruct_max_cdr_typesize 41930ULL;
#define CharStruct_max_cdr_typesize 1ULL;
#define LongLongStruct_max_cdr_typesize 8ULL;
#define StringStruct_max_cdr_typesize 260ULL;
#define StructStruct_max_cdr_typesize 16ULL;

#define ArraytStruct_max_key_cdr_typesize 0ULL;
#define SimpleUnionStruct_max_key_cdr_typesize 0ULL;

#define WCharUnionStruct_max_key_cdr_typesize 0ULL;
#define OctetStruct_max_key_cdr_typesize 0ULL;
#define LongStruct_max_key_cdr_typesize 0ULL;
#define EnumStruct_max_key_cdr_typesize 0ULL;
#define BitsetStruct_max_key_cdr_typesize 0ULL;


#define DoubleStruct_max_key_cdr_typesize 0ULL;
#define LargeWStringStruct_max_key_cdr_typesize 0ULL;
#define WCharStruct_max_key_cdr_typesize 0ULL;

#define WStringStruct_max_key_cdr_typesize 0ULL;
#define SequenceStruct_max_key_cdr_typesize 0ULL;

#define ULongStruct_max_key_cdr_typesize 0ULL;
#define SequenceSequenceStruct_max_key_cdr_typesize 0ULL;
#define FloatStruct_max_key_cdr_typesize 0ULL;
#define LongDoubleStruct_max_key_cdr_typesize 0ULL;
#define StructStructStruct_max_key_cdr_typesize 0ULL;
#define UnionUnionUnionStruct_max_key_cdr_typesize 0ULL;
#define BoolStruct_max_key_cdr_typesize 0ULL;
#define MapMapStruct_max_key_cdr_typesize 0ULL;
#define AliasAliasStruct_max_key_cdr_typesize 0ULL;
#define ArrayArrayStruct_max_key_cdr_typesize 0ULL;
#define ShortStruct_max_key_cdr_typesize 0ULL;
#define MapStruct_max_key_cdr_typesize 0ULL;
#define UShortStruct_max_key_cdr_typesize 0ULL;


#define ULongLongStruct_max_key_cdr_typesize 0ULL;
#define AliasStruct_max_key_cdr_typesize 0ULL;
#define LargeStringStruct_max_key_cdr_typesize 0ULL;
#define CharStruct_max_key_cdr_typesize 0ULL;
#define LongLongStruct_max_key_cdr_typesize 0ULL;
#define StringStruct_max_key_cdr_typesize 0ULL;
#define StructStruct_max_key_cdr_typesize 0ULL;





EnumStruct::EnumStruct()
{
    // MyEnum m_my_enum
    m_my_enum = ::A;

    // Just to register all known types
    registerBasicTypes();
}

EnumStruct::~EnumStruct()
{
}

EnumStruct::EnumStruct(
        const EnumStruct& x)
{
    m_my_enum = x.m_my_enum;
}

EnumStruct::EnumStruct(
        EnumStruct&& x) noexcept 
{
    m_my_enum = x.m_my_enum;
}

EnumStruct& EnumStruct::operator =(
        const EnumStruct& x)
{

    m_my_enum = x.m_my_enum;

    return *this;
}

EnumStruct& EnumStruct::operator =(
        EnumStruct&& x) noexcept
{

    m_my_enum = x.m_my_enum;

    return *this;
}

bool EnumStruct::operator ==(
        const EnumStruct& x) const
{

    return (m_my_enum == x.m_my_enum);
}

bool EnumStruct::operator !=(
        const EnumStruct& x) const
{
    return !(*this == x);
}

size_t EnumStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return EnumStruct_max_cdr_typesize;
}

size_t EnumStruct::getCdrSerializedSize(
        const EnumStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void EnumStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << (uint32_t)m_my_enum;

}

void EnumStruct::deserialize(
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
void EnumStruct::my_enum(
        MyEnum _my_enum)
{
    m_my_enum = _my_enum;
}

/*!
 * @brief This function returns the value of member my_enum
 * @return Value of member my_enum
 */
MyEnum EnumStruct::my_enum() const
{
    return m_my_enum;
}

/*!
 * @brief This function returns a reference to member my_enum
 * @return Reference to member my_enum
 */
MyEnum& EnumStruct::my_enum()
{
    return m_my_enum;
}



size_t EnumStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return EnumStruct_max_key_cdr_typesize;
}

bool EnumStruct::isKeyDefined()
{
    return false;
}

void EnumStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


AliasStruct::AliasStruct()
{
    // MyAliasEnum m_my_alias
    m_my_alias = ::A;

    // Just to register all known types
    registerBasicTypes();
}

AliasStruct::~AliasStruct()
{
}

AliasStruct::AliasStruct(
        const AliasStruct& x)
{
    m_my_alias = x.m_my_alias;
}

AliasStruct::AliasStruct(
        AliasStruct&& x) noexcept 
{
    m_my_alias = x.m_my_alias;
}

AliasStruct& AliasStruct::operator =(
        const AliasStruct& x)
{

    m_my_alias = x.m_my_alias;

    return *this;
}

AliasStruct& AliasStruct::operator =(
        AliasStruct&& x) noexcept
{

    m_my_alias = x.m_my_alias;

    return *this;
}

bool AliasStruct::operator ==(
        const AliasStruct& x) const
{

    return (m_my_alias == x.m_my_alias);
}

bool AliasStruct::operator !=(
        const AliasStruct& x) const
{
    return !(*this == x);
}

size_t AliasStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return AliasStruct_max_cdr_typesize;
}

size_t AliasStruct::getCdrSerializedSize(
        const AliasStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void AliasStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << (uint32_t)m_my_alias;

}

void AliasStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_my_alias = (MyAliasEnum)enum_value;
    }

}

/*!
 * @brief This function sets a value in member my_alias
 * @param _my_alias New value for member my_alias
 */
void AliasStruct::my_alias(
        MyAliasEnum _my_alias)
{
    m_my_alias = _my_alias;
}

/*!
 * @brief This function returns the value of member my_alias
 * @return Value of member my_alias
 */
MyAliasEnum AliasStruct::my_alias() const
{
    return m_my_alias;
}

/*!
 * @brief This function returns a reference to member my_alias
 * @return Reference to member my_alias
 */
MyAliasEnum& AliasStruct::my_alias()
{
    return m_my_alias;
}



size_t AliasStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return AliasStruct_max_key_cdr_typesize;
}

bool AliasStruct::isKeyDefined()
{
    return false;
}

void AliasStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


AliasAliasStruct::AliasAliasStruct()
{
    // MyAliasAliasEnum m_my_alias_alias
    m_my_alias_alias = ::A;

    // Just to register all known types
    registerBasicTypes();
}

AliasAliasStruct::~AliasAliasStruct()
{
}

AliasAliasStruct::AliasAliasStruct(
        const AliasAliasStruct& x)
{
    m_my_alias_alias = x.m_my_alias_alias;
}

AliasAliasStruct::AliasAliasStruct(
        AliasAliasStruct&& x) noexcept 
{
    m_my_alias_alias = x.m_my_alias_alias;
}

AliasAliasStruct& AliasAliasStruct::operator =(
        const AliasAliasStruct& x)
{

    m_my_alias_alias = x.m_my_alias_alias;

    return *this;
}

AliasAliasStruct& AliasAliasStruct::operator =(
        AliasAliasStruct&& x) noexcept
{

    m_my_alias_alias = x.m_my_alias_alias;

    return *this;
}

bool AliasAliasStruct::operator ==(
        const AliasAliasStruct& x) const
{

    return (m_my_alias_alias == x.m_my_alias_alias);
}

bool AliasAliasStruct::operator !=(
        const AliasAliasStruct& x) const
{
    return !(*this == x);
}

size_t AliasAliasStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return AliasAliasStruct_max_cdr_typesize;
}

size_t AliasAliasStruct::getCdrSerializedSize(
        const AliasAliasStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void AliasAliasStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << (uint32_t)m_my_alias_alias;

}

void AliasAliasStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_my_alias_alias = (MyAliasAliasEnum)enum_value;
    }

}

/*!
 * @brief This function sets a value in member my_alias_alias
 * @param _my_alias_alias New value for member my_alias_alias
 */
void AliasAliasStruct::my_alias_alias(
        MyAliasAliasEnum _my_alias_alias)
{
    m_my_alias_alias = _my_alias_alias;
}

/*!
 * @brief This function returns the value of member my_alias_alias
 * @return Value of member my_alias_alias
 */
MyAliasAliasEnum AliasAliasStruct::my_alias_alias() const
{
    return m_my_alias_alias;
}

/*!
 * @brief This function returns a reference to member my_alias_alias
 * @return Reference to member my_alias_alias
 */
MyAliasAliasEnum& AliasAliasStruct::my_alias_alias()
{
    return m_my_alias_alias;
}



size_t AliasAliasStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return AliasAliasStruct_max_key_cdr_typesize;
}

bool AliasAliasStruct::isKeyDefined()
{
    return false;
}

void AliasAliasStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


BoolStruct::BoolStruct()
{
    // boolean m_my_bool
    m_my_bool = false;

    // Just to register all known types
    registerBasicTypes();
}

BoolStruct::~BoolStruct()
{
}

BoolStruct::BoolStruct(
        const BoolStruct& x)
{
    m_my_bool = x.m_my_bool;
}

BoolStruct::BoolStruct(
        BoolStruct&& x) noexcept 
{
    m_my_bool = x.m_my_bool;
}

BoolStruct& BoolStruct::operator =(
        const BoolStruct& x)
{

    m_my_bool = x.m_my_bool;

    return *this;
}

BoolStruct& BoolStruct::operator =(
        BoolStruct&& x) noexcept
{

    m_my_bool = x.m_my_bool;

    return *this;
}

bool BoolStruct::operator ==(
        const BoolStruct& x) const
{

    return (m_my_bool == x.m_my_bool);
}

bool BoolStruct::operator !=(
        const BoolStruct& x) const
{
    return !(*this == x);
}

size_t BoolStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BoolStruct_max_cdr_typesize;
}

size_t BoolStruct::getCdrSerializedSize(
        const BoolStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void BoolStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_bool;

}

void BoolStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_bool;
}

/*!
 * @brief This function sets a value in member my_bool
 * @param _my_bool New value for member my_bool
 */
void BoolStruct::my_bool(
        bool _my_bool)
{
    m_my_bool = _my_bool;
}

/*!
 * @brief This function returns the value of member my_bool
 * @return Value of member my_bool
 */
bool BoolStruct::my_bool() const
{
    return m_my_bool;
}

/*!
 * @brief This function returns a reference to member my_bool
 * @return Reference to member my_bool
 */
bool& BoolStruct::my_bool()
{
    return m_my_bool;
}



size_t BoolStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BoolStruct_max_key_cdr_typesize;
}

bool BoolStruct::isKeyDefined()
{
    return false;
}

void BoolStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


OctetStruct::OctetStruct()
{
    // octet m_my_octet
    m_my_octet = 0;

    // Just to register all known types
    registerBasicTypes();
}

OctetStruct::~OctetStruct()
{
}

OctetStruct::OctetStruct(
        const OctetStruct& x)
{
    m_my_octet = x.m_my_octet;
}

OctetStruct::OctetStruct(
        OctetStruct&& x) noexcept 
{
    m_my_octet = x.m_my_octet;
}

OctetStruct& OctetStruct::operator =(
        const OctetStruct& x)
{

    m_my_octet = x.m_my_octet;

    return *this;
}

OctetStruct& OctetStruct::operator =(
        OctetStruct&& x) noexcept
{

    m_my_octet = x.m_my_octet;

    return *this;
}

bool OctetStruct::operator ==(
        const OctetStruct& x) const
{

    return (m_my_octet == x.m_my_octet);
}

bool OctetStruct::operator !=(
        const OctetStruct& x) const
{
    return !(*this == x);
}

size_t OctetStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return OctetStruct_max_cdr_typesize;
}

size_t OctetStruct::getCdrSerializedSize(
        const OctetStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void OctetStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_octet;

}

void OctetStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_octet;
}

/*!
 * @brief This function sets a value in member my_octet
 * @param _my_octet New value for member my_octet
 */
void OctetStruct::my_octet(
        uint8_t _my_octet)
{
    m_my_octet = _my_octet;
}

/*!
 * @brief This function returns the value of member my_octet
 * @return Value of member my_octet
 */
uint8_t OctetStruct::my_octet() const
{
    return m_my_octet;
}

/*!
 * @brief This function returns a reference to member my_octet
 * @return Reference to member my_octet
 */
uint8_t& OctetStruct::my_octet()
{
    return m_my_octet;
}



size_t OctetStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return OctetStruct_max_key_cdr_typesize;
}

bool OctetStruct::isKeyDefined()
{
    return false;
}

void OctetStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


ShortStruct::ShortStruct()
{
    // short m_my_int16
    m_my_int16 = 0;

    // Just to register all known types
    registerBasicTypes();
}

ShortStruct::~ShortStruct()
{
}

ShortStruct::ShortStruct(
        const ShortStruct& x)
{
    m_my_int16 = x.m_my_int16;
}

ShortStruct::ShortStruct(
        ShortStruct&& x) noexcept 
{
    m_my_int16 = x.m_my_int16;
}

ShortStruct& ShortStruct::operator =(
        const ShortStruct& x)
{

    m_my_int16 = x.m_my_int16;

    return *this;
}

ShortStruct& ShortStruct::operator =(
        ShortStruct&& x) noexcept
{

    m_my_int16 = x.m_my_int16;

    return *this;
}

bool ShortStruct::operator ==(
        const ShortStruct& x) const
{

    return (m_my_int16 == x.m_my_int16);
}

bool ShortStruct::operator !=(
        const ShortStruct& x) const
{
    return !(*this == x);
}

size_t ShortStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ShortStruct_max_cdr_typesize;
}

size_t ShortStruct::getCdrSerializedSize(
        const ShortStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    return current_alignment - initial_alignment;
}

void ShortStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_int16;

}

void ShortStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_int16;
}

/*!
 * @brief This function sets a value in member my_int16
 * @param _my_int16 New value for member my_int16
 */
void ShortStruct::my_int16(
        int16_t _my_int16)
{
    m_my_int16 = _my_int16;
}

/*!
 * @brief This function returns the value of member my_int16
 * @return Value of member my_int16
 */
int16_t ShortStruct::my_int16() const
{
    return m_my_int16;
}

/*!
 * @brief This function returns a reference to member my_int16
 * @return Reference to member my_int16
 */
int16_t& ShortStruct::my_int16()
{
    return m_my_int16;
}



size_t ShortStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ShortStruct_max_key_cdr_typesize;
}

bool ShortStruct::isKeyDefined()
{
    return false;
}

void ShortStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


LongStruct::LongStruct()
{
    // long m_my_int32
    m_my_int32 = 0;

    // Just to register all known types
    registerBasicTypes();
}

LongStruct::~LongStruct()
{
}

LongStruct::LongStruct(
        const LongStruct& x)
{
    m_my_int32 = x.m_my_int32;
}

LongStruct::LongStruct(
        LongStruct&& x) noexcept 
{
    m_my_int32 = x.m_my_int32;
}

LongStruct& LongStruct::operator =(
        const LongStruct& x)
{

    m_my_int32 = x.m_my_int32;

    return *this;
}

LongStruct& LongStruct::operator =(
        LongStruct&& x) noexcept
{

    m_my_int32 = x.m_my_int32;

    return *this;
}

bool LongStruct::operator ==(
        const LongStruct& x) const
{

    return (m_my_int32 == x.m_my_int32);
}

bool LongStruct::operator !=(
        const LongStruct& x) const
{
    return !(*this == x);
}

size_t LongStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LongStruct_max_cdr_typesize;
}

size_t LongStruct::getCdrSerializedSize(
        const LongStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void LongStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_int32;

}

void LongStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_int32;
}

/*!
 * @brief This function sets a value in member my_int32
 * @param _my_int32 New value for member my_int32
 */
void LongStruct::my_int32(
        int32_t _my_int32)
{
    m_my_int32 = _my_int32;
}

/*!
 * @brief This function returns the value of member my_int32
 * @return Value of member my_int32
 */
int32_t LongStruct::my_int32() const
{
    return m_my_int32;
}

/*!
 * @brief This function returns a reference to member my_int32
 * @return Reference to member my_int32
 */
int32_t& LongStruct::my_int32()
{
    return m_my_int32;
}



size_t LongStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LongStruct_max_key_cdr_typesize;
}

bool LongStruct::isKeyDefined()
{
    return false;
}

void LongStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


LongLongStruct::LongLongStruct()
{
    // long long m_my_int64
    m_my_int64 = 0;

    // Just to register all known types
    registerBasicTypes();
}

LongLongStruct::~LongLongStruct()
{
}

LongLongStruct::LongLongStruct(
        const LongLongStruct& x)
{
    m_my_int64 = x.m_my_int64;
}

LongLongStruct::LongLongStruct(
        LongLongStruct&& x) noexcept 
{
    m_my_int64 = x.m_my_int64;
}

LongLongStruct& LongLongStruct::operator =(
        const LongLongStruct& x)
{

    m_my_int64 = x.m_my_int64;

    return *this;
}

LongLongStruct& LongLongStruct::operator =(
        LongLongStruct&& x) noexcept
{

    m_my_int64 = x.m_my_int64;

    return *this;
}

bool LongLongStruct::operator ==(
        const LongLongStruct& x) const
{

    return (m_my_int64 == x.m_my_int64);
}

bool LongLongStruct::operator !=(
        const LongLongStruct& x) const
{
    return !(*this == x);
}

size_t LongLongStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LongLongStruct_max_cdr_typesize;
}

size_t LongLongStruct::getCdrSerializedSize(
        const LongLongStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void LongLongStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_int64;

}

void LongLongStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_int64;
}

/*!
 * @brief This function sets a value in member my_int64
 * @param _my_int64 New value for member my_int64
 */
void LongLongStruct::my_int64(
        int64_t _my_int64)
{
    m_my_int64 = _my_int64;
}

/*!
 * @brief This function returns the value of member my_int64
 * @return Value of member my_int64
 */
int64_t LongLongStruct::my_int64() const
{
    return m_my_int64;
}

/*!
 * @brief This function returns a reference to member my_int64
 * @return Reference to member my_int64
 */
int64_t& LongLongStruct::my_int64()
{
    return m_my_int64;
}



size_t LongLongStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LongLongStruct_max_key_cdr_typesize;
}

bool LongLongStruct::isKeyDefined()
{
    return false;
}

void LongLongStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


UShortStruct::UShortStruct()
{
    // unsigned short m_my_uint16
    m_my_uint16 = 0;

    // Just to register all known types
    registerBasicTypes();
}

UShortStruct::~UShortStruct()
{
}

UShortStruct::UShortStruct(
        const UShortStruct& x)
{
    m_my_uint16 = x.m_my_uint16;
}

UShortStruct::UShortStruct(
        UShortStruct&& x) noexcept 
{
    m_my_uint16 = x.m_my_uint16;
}

UShortStruct& UShortStruct::operator =(
        const UShortStruct& x)
{

    m_my_uint16 = x.m_my_uint16;

    return *this;
}

UShortStruct& UShortStruct::operator =(
        UShortStruct&& x) noexcept
{

    m_my_uint16 = x.m_my_uint16;

    return *this;
}

bool UShortStruct::operator ==(
        const UShortStruct& x) const
{

    return (m_my_uint16 == x.m_my_uint16);
}

bool UShortStruct::operator !=(
        const UShortStruct& x) const
{
    return !(*this == x);
}

size_t UShortStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return UShortStruct_max_cdr_typesize;
}

size_t UShortStruct::getCdrSerializedSize(
        const UShortStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    return current_alignment - initial_alignment;
}

void UShortStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_uint16;

}

void UShortStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_uint16;
}

/*!
 * @brief This function sets a value in member my_uint16
 * @param _my_uint16 New value for member my_uint16
 */
void UShortStruct::my_uint16(
        uint16_t _my_uint16)
{
    m_my_uint16 = _my_uint16;
}

/*!
 * @brief This function returns the value of member my_uint16
 * @return Value of member my_uint16
 */
uint16_t UShortStruct::my_uint16() const
{
    return m_my_uint16;
}

/*!
 * @brief This function returns a reference to member my_uint16
 * @return Reference to member my_uint16
 */
uint16_t& UShortStruct::my_uint16()
{
    return m_my_uint16;
}



size_t UShortStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return UShortStruct_max_key_cdr_typesize;
}

bool UShortStruct::isKeyDefined()
{
    return false;
}

void UShortStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


ULongStruct::ULongStruct()
{
    // unsigned long m_my_uint32
    m_my_uint32 = 0;

    // Just to register all known types
    registerBasicTypes();
}

ULongStruct::~ULongStruct()
{
}

ULongStruct::ULongStruct(
        const ULongStruct& x)
{
    m_my_uint32 = x.m_my_uint32;
}

ULongStruct::ULongStruct(
        ULongStruct&& x) noexcept 
{
    m_my_uint32 = x.m_my_uint32;
}

ULongStruct& ULongStruct::operator =(
        const ULongStruct& x)
{

    m_my_uint32 = x.m_my_uint32;

    return *this;
}

ULongStruct& ULongStruct::operator =(
        ULongStruct&& x) noexcept
{

    m_my_uint32 = x.m_my_uint32;

    return *this;
}

bool ULongStruct::operator ==(
        const ULongStruct& x) const
{

    return (m_my_uint32 == x.m_my_uint32);
}

bool ULongStruct::operator !=(
        const ULongStruct& x) const
{
    return !(*this == x);
}

size_t ULongStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ULongStruct_max_cdr_typesize;
}

size_t ULongStruct::getCdrSerializedSize(
        const ULongStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void ULongStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_uint32;

}

void ULongStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_uint32;
}

/*!
 * @brief This function sets a value in member my_uint32
 * @param _my_uint32 New value for member my_uint32
 */
void ULongStruct::my_uint32(
        uint32_t _my_uint32)
{
    m_my_uint32 = _my_uint32;
}

/*!
 * @brief This function returns the value of member my_uint32
 * @return Value of member my_uint32
 */
uint32_t ULongStruct::my_uint32() const
{
    return m_my_uint32;
}

/*!
 * @brief This function returns a reference to member my_uint32
 * @return Reference to member my_uint32
 */
uint32_t& ULongStruct::my_uint32()
{
    return m_my_uint32;
}



size_t ULongStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ULongStruct_max_key_cdr_typesize;
}

bool ULongStruct::isKeyDefined()
{
    return false;
}

void ULongStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


ULongLongStruct::ULongLongStruct()
{
    // unsigned long long m_my_uint64
    m_my_uint64 = 0;

    // Just to register all known types
    registerBasicTypes();
}

ULongLongStruct::~ULongLongStruct()
{
}

ULongLongStruct::ULongLongStruct(
        const ULongLongStruct& x)
{
    m_my_uint64 = x.m_my_uint64;
}

ULongLongStruct::ULongLongStruct(
        ULongLongStruct&& x) noexcept 
{
    m_my_uint64 = x.m_my_uint64;
}

ULongLongStruct& ULongLongStruct::operator =(
        const ULongLongStruct& x)
{

    m_my_uint64 = x.m_my_uint64;

    return *this;
}

ULongLongStruct& ULongLongStruct::operator =(
        ULongLongStruct&& x) noexcept
{

    m_my_uint64 = x.m_my_uint64;

    return *this;
}

bool ULongLongStruct::operator ==(
        const ULongLongStruct& x) const
{

    return (m_my_uint64 == x.m_my_uint64);
}

bool ULongLongStruct::operator !=(
        const ULongLongStruct& x) const
{
    return !(*this == x);
}

size_t ULongLongStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ULongLongStruct_max_cdr_typesize;
}

size_t ULongLongStruct::getCdrSerializedSize(
        const ULongLongStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void ULongLongStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_uint64;

}

void ULongLongStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_uint64;
}

/*!
 * @brief This function sets a value in member my_uint64
 * @param _my_uint64 New value for member my_uint64
 */
void ULongLongStruct::my_uint64(
        uint64_t _my_uint64)
{
    m_my_uint64 = _my_uint64;
}

/*!
 * @brief This function returns the value of member my_uint64
 * @return Value of member my_uint64
 */
uint64_t ULongLongStruct::my_uint64() const
{
    return m_my_uint64;
}

/*!
 * @brief This function returns a reference to member my_uint64
 * @return Reference to member my_uint64
 */
uint64_t& ULongLongStruct::my_uint64()
{
    return m_my_uint64;
}



size_t ULongLongStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ULongLongStruct_max_key_cdr_typesize;
}

bool ULongLongStruct::isKeyDefined()
{
    return false;
}

void ULongLongStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


FloatStruct::FloatStruct()
{
    // float m_my_float32
    m_my_float32 = 0.0;

    // Just to register all known types
    registerBasicTypes();
}

FloatStruct::~FloatStruct()
{
}

FloatStruct::FloatStruct(
        const FloatStruct& x)
{
    m_my_float32 = x.m_my_float32;
}

FloatStruct::FloatStruct(
        FloatStruct&& x) noexcept 
{
    m_my_float32 = x.m_my_float32;
}

FloatStruct& FloatStruct::operator =(
        const FloatStruct& x)
{

    m_my_float32 = x.m_my_float32;

    return *this;
}

FloatStruct& FloatStruct::operator =(
        FloatStruct&& x) noexcept
{

    m_my_float32 = x.m_my_float32;

    return *this;
}

bool FloatStruct::operator ==(
        const FloatStruct& x) const
{

    return (m_my_float32 == x.m_my_float32);
}

bool FloatStruct::operator !=(
        const FloatStruct& x) const
{
    return !(*this == x);
}

size_t FloatStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return FloatStruct_max_cdr_typesize;
}

size_t FloatStruct::getCdrSerializedSize(
        const FloatStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void FloatStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_float32;

}

void FloatStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_float32;
}

/*!
 * @brief This function sets a value in member my_float32
 * @param _my_float32 New value for member my_float32
 */
void FloatStruct::my_float32(
        float _my_float32)
{
    m_my_float32 = _my_float32;
}

/*!
 * @brief This function returns the value of member my_float32
 * @return Value of member my_float32
 */
float FloatStruct::my_float32() const
{
    return m_my_float32;
}

/*!
 * @brief This function returns a reference to member my_float32
 * @return Reference to member my_float32
 */
float& FloatStruct::my_float32()
{
    return m_my_float32;
}



size_t FloatStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return FloatStruct_max_key_cdr_typesize;
}

bool FloatStruct::isKeyDefined()
{
    return false;
}

void FloatStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


DoubleStruct::DoubleStruct()
{
    // double m_my_float64
    m_my_float64 = 0.0;

    // Just to register all known types
    registerBasicTypes();
}

DoubleStruct::~DoubleStruct()
{
}

DoubleStruct::DoubleStruct(
        const DoubleStruct& x)
{
    m_my_float64 = x.m_my_float64;
}

DoubleStruct::DoubleStruct(
        DoubleStruct&& x) noexcept 
{
    m_my_float64 = x.m_my_float64;
}

DoubleStruct& DoubleStruct::operator =(
        const DoubleStruct& x)
{

    m_my_float64 = x.m_my_float64;

    return *this;
}

DoubleStruct& DoubleStruct::operator =(
        DoubleStruct&& x) noexcept
{

    m_my_float64 = x.m_my_float64;

    return *this;
}

bool DoubleStruct::operator ==(
        const DoubleStruct& x) const
{

    return (m_my_float64 == x.m_my_float64);
}

bool DoubleStruct::operator !=(
        const DoubleStruct& x) const
{
    return !(*this == x);
}

size_t DoubleStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return DoubleStruct_max_cdr_typesize;
}

size_t DoubleStruct::getCdrSerializedSize(
        const DoubleStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void DoubleStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_float64;

}

void DoubleStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_float64;
}

/*!
 * @brief This function sets a value in member my_float64
 * @param _my_float64 New value for member my_float64
 */
void DoubleStruct::my_float64(
        double _my_float64)
{
    m_my_float64 = _my_float64;
}

/*!
 * @brief This function returns the value of member my_float64
 * @return Value of member my_float64
 */
double DoubleStruct::my_float64() const
{
    return m_my_float64;
}

/*!
 * @brief This function returns a reference to member my_float64
 * @return Reference to member my_float64
 */
double& DoubleStruct::my_float64()
{
    return m_my_float64;
}



size_t DoubleStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return DoubleStruct_max_key_cdr_typesize;
}

bool DoubleStruct::isKeyDefined()
{
    return false;
}

void DoubleStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


LongDoubleStruct::LongDoubleStruct()
{
    // long double m_my_float128
    m_my_float128 = 0.0;

    // Just to register all known types
    registerBasicTypes();
}

LongDoubleStruct::~LongDoubleStruct()
{
}

LongDoubleStruct::LongDoubleStruct(
        const LongDoubleStruct& x)
{
    m_my_float128 = x.m_my_float128;
}

LongDoubleStruct::LongDoubleStruct(
        LongDoubleStruct&& x) noexcept 
{
    m_my_float128 = x.m_my_float128;
}

LongDoubleStruct& LongDoubleStruct::operator =(
        const LongDoubleStruct& x)
{

    m_my_float128 = x.m_my_float128;

    return *this;
}

LongDoubleStruct& LongDoubleStruct::operator =(
        LongDoubleStruct&& x) noexcept
{

    m_my_float128 = x.m_my_float128;

    return *this;
}

bool LongDoubleStruct::operator ==(
        const LongDoubleStruct& x) const
{

    return (m_my_float128 == x.m_my_float128);
}

bool LongDoubleStruct::operator !=(
        const LongDoubleStruct& x) const
{
    return !(*this == x);
}

size_t LongDoubleStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LongDoubleStruct_max_cdr_typesize;
}

size_t LongDoubleStruct::getCdrSerializedSize(
        const LongDoubleStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 16 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8); // 128 bits, but aligned as 64


    return current_alignment - initial_alignment;
}

void LongDoubleStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_float128;

}

void LongDoubleStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_float128;
}

/*!
 * @brief This function sets a value in member my_float128
 * @param _my_float128 New value for member my_float128
 */
void LongDoubleStruct::my_float128(
        long double _my_float128)
{
    m_my_float128 = _my_float128;
}

/*!
 * @brief This function returns the value of member my_float128
 * @return Value of member my_float128
 */
long double LongDoubleStruct::my_float128() const
{
    return m_my_float128;
}

/*!
 * @brief This function returns a reference to member my_float128
 * @return Reference to member my_float128
 */
long double& LongDoubleStruct::my_float128()
{
    return m_my_float128;
}



size_t LongDoubleStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return LongDoubleStruct_max_key_cdr_typesize;
}

bool LongDoubleStruct::isKeyDefined()
{
    return false;
}

void LongDoubleStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


CharStruct::CharStruct()
{
    // char m_my_char
    m_my_char = 0;

    // Just to register all known types
    registerBasicTypes();
}

CharStruct::~CharStruct()
{
}

CharStruct::CharStruct(
        const CharStruct& x)
{
    m_my_char = x.m_my_char;
}

CharStruct::CharStruct(
        CharStruct&& x) noexcept 
{
    m_my_char = x.m_my_char;
}

CharStruct& CharStruct::operator =(
        const CharStruct& x)
{

    m_my_char = x.m_my_char;

    return *this;
}

CharStruct& CharStruct::operator =(
        CharStruct&& x) noexcept
{

    m_my_char = x.m_my_char;

    return *this;
}

bool CharStruct::operator ==(
        const CharStruct& x) const
{

    return (m_my_char == x.m_my_char);
}

bool CharStruct::operator !=(
        const CharStruct& x) const
{
    return !(*this == x);
}

size_t CharStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return CharStruct_max_cdr_typesize;
}

size_t CharStruct::getCdrSerializedSize(
        const CharStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void CharStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_char;

}

void CharStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_char;
}

/*!
 * @brief This function sets a value in member my_char
 * @param _my_char New value for member my_char
 */
void CharStruct::my_char(
        char _my_char)
{
    m_my_char = _my_char;
}

/*!
 * @brief This function returns the value of member my_char
 * @return Value of member my_char
 */
char CharStruct::my_char() const
{
    return m_my_char;
}

/*!
 * @brief This function returns a reference to member my_char
 * @return Reference to member my_char
 */
char& CharStruct::my_char()
{
    return m_my_char;
}



size_t CharStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return CharStruct_max_key_cdr_typesize;
}

bool CharStruct::isKeyDefined()
{
    return false;
}

void CharStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


WCharStruct::WCharStruct()
{
    // wchar m_my_wchar
    m_my_wchar = 0;

    // Just to register all known types
    registerBasicTypes();
}

WCharStruct::~WCharStruct()
{
}

WCharStruct::WCharStruct(
        const WCharStruct& x)
{
    m_my_wchar = x.m_my_wchar;
}

WCharStruct::WCharStruct(
        WCharStruct&& x) noexcept 
{
    m_my_wchar = x.m_my_wchar;
}

WCharStruct& WCharStruct::operator =(
        const WCharStruct& x)
{

    m_my_wchar = x.m_my_wchar;

    return *this;
}

WCharStruct& WCharStruct::operator =(
        WCharStruct&& x) noexcept
{

    m_my_wchar = x.m_my_wchar;

    return *this;
}

bool WCharStruct::operator ==(
        const WCharStruct& x) const
{

    return (m_my_wchar == x.m_my_wchar);
}

bool WCharStruct::operator !=(
        const WCharStruct& x) const
{
    return !(*this == x);
}

size_t WCharStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return WCharStruct_max_cdr_typesize;
}

size_t WCharStruct::getCdrSerializedSize(
        const WCharStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void WCharStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_wchar;

}

void WCharStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_wchar;
}

/*!
 * @brief This function sets a value in member my_wchar
 * @param _my_wchar New value for member my_wchar
 */
void WCharStruct::my_wchar(
        wchar_t _my_wchar)
{
    m_my_wchar = _my_wchar;
}

/*!
 * @brief This function returns the value of member my_wchar
 * @return Value of member my_wchar
 */
wchar_t WCharStruct::my_wchar() const
{
    return m_my_wchar;
}

/*!
 * @brief This function returns a reference to member my_wchar
 * @return Reference to member my_wchar
 */
wchar_t& WCharStruct::my_wchar()
{
    return m_my_wchar;
}



size_t WCharStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return WCharStruct_max_key_cdr_typesize;
}

bool WCharStruct::isKeyDefined()
{
    return false;
}

void WCharStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


StringStruct::StringStruct()
{
    // string m_my_string
    m_my_string ="";

    // Just to register all known types
    registerBasicTypes();
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


WStringStruct::WStringStruct()
{
    // wstring m_my_wstring


    // Just to register all known types
    registerBasicTypes();
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


LargeStringStruct::LargeStringStruct()
{
    // string m_my_large_string
    m_my_large_string ="";

    // Just to register all known types
    registerBasicTypes();
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


LargeWStringStruct::LargeWStringStruct()
{
    // wstring m_my_large_wstring


    // Just to register all known types
    registerBasicTypes();
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


ArraytStruct::ArraytStruct()
{
    // long m_my_array
    memset(&m_my_array, 0, (2 * 2 * 2) * 4);

    // Just to register all known types
    registerBasicTypes();
}

ArraytStruct::~ArraytStruct()
{
}

ArraytStruct::ArraytStruct(
        const ArraytStruct& x)
{
    m_my_array = x.m_my_array;
}

ArraytStruct::ArraytStruct(
        ArraytStruct&& x) noexcept 
{
    m_my_array = std::move(x.m_my_array);
}

ArraytStruct& ArraytStruct::operator =(
        const ArraytStruct& x)
{

    m_my_array = x.m_my_array;

    return *this;
}

ArraytStruct& ArraytStruct::operator =(
        ArraytStruct&& x) noexcept
{

    m_my_array = std::move(x.m_my_array);

    return *this;
}

bool ArraytStruct::operator ==(
        const ArraytStruct& x) const
{

    return (m_my_array == x.m_my_array);
}

bool ArraytStruct::operator !=(
        const ArraytStruct& x) const
{
    return !(*this == x);
}

size_t ArraytStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArraytStruct_max_cdr_typesize;
}

size_t ArraytStruct::getCdrSerializedSize(
        const ArraytStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((2 * 2 * 2) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void ArraytStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_array;


}

void ArraytStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_array;

}

/*!
 * @brief This function copies the value in member my_array
 * @param _my_array New value to be copied in member my_array
 */
void ArraytStruct::my_array(
        const std::array<std::array<std::array<int32_t, 2>, 2>, 2>& _my_array)
{
    m_my_array = _my_array;
}

/*!
 * @brief This function moves the value in member my_array
 * @param _my_array New value to be moved in member my_array
 */
void ArraytStruct::my_array(
        std::array<std::array<std::array<int32_t, 2>, 2>, 2>&& _my_array)
{
    m_my_array = std::move(_my_array);
}

/*!
 * @brief This function returns a constant reference to member my_array
 * @return Constant reference to member my_array
 */
const std::array<std::array<std::array<int32_t, 2>, 2>, 2>& ArraytStruct::my_array() const
{
    return m_my_array;
}

/*!
 * @brief This function returns a reference to member my_array
 * @return Reference to member my_array
 */
std::array<std::array<std::array<int32_t, 2>, 2>, 2>& ArraytStruct::my_array()
{
    return m_my_array;
}


size_t ArraytStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArraytStruct_max_key_cdr_typesize;
}

bool ArraytStruct::isKeyDefined()
{
    return false;
}

void ArraytStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



ArrayArrayStruct::ArrayArrayStruct()
{
    // MyArray m_my_array_array


    // Just to register all known types
    registerBasicTypes();
}

ArrayArrayStruct::~ArrayArrayStruct()
{
}

ArrayArrayStruct::ArrayArrayStruct(
        const ArrayArrayStruct& x)
{
    m_my_array_array = x.m_my_array_array;
}

ArrayArrayStruct::ArrayArrayStruct(
        ArrayArrayStruct&& x) noexcept 
{
    m_my_array_array = std::move(x.m_my_array_array);
}

ArrayArrayStruct& ArrayArrayStruct::operator =(
        const ArrayArrayStruct& x)
{

    m_my_array_array = x.m_my_array_array;

    return *this;
}

ArrayArrayStruct& ArrayArrayStruct::operator =(
        ArrayArrayStruct&& x) noexcept
{

    m_my_array_array = std::move(x.m_my_array_array);

    return *this;
}

bool ArrayArrayStruct::operator ==(
        const ArrayArrayStruct& x) const
{

    return (m_my_array_array == x.m_my_array_array);
}

bool ArrayArrayStruct::operator !=(
        const ArrayArrayStruct& x) const
{
    return !(*this == x);
}

size_t ArrayArrayStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayArrayStruct_max_cdr_typesize;
}

size_t ArrayArrayStruct::getCdrSerializedSize(
        const ArrayArrayStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;



    for(size_t a = 0; a < data.my_array_array().size(); ++a)
    {

        for(size_t b = 0; b < data.my_array_array().at(a).size(); ++b)
        {
                current_alignment += ((2 * 2) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
        }
    }
    return current_alignment - initial_alignment;
}

void ArrayArrayStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_array_array;


}

void ArrayArrayStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_array_array;

}

/*!
 * @brief This function copies the value in member my_array_array
 * @param _my_array_array New value to be copied in member my_array_array
 */
void ArrayArrayStruct::my_array_array(
        const std::array<std::array<MyArray, 2>, 2>& _my_array_array)
{
    m_my_array_array = _my_array_array;
}

/*!
 * @brief This function moves the value in member my_array_array
 * @param _my_array_array New value to be moved in member my_array_array
 */
void ArrayArrayStruct::my_array_array(
        std::array<std::array<MyArray, 2>, 2>&& _my_array_array)
{
    m_my_array_array = std::move(_my_array_array);
}

/*!
 * @brief This function returns a constant reference to member my_array_array
 * @return Constant reference to member my_array_array
 */
const std::array<std::array<MyArray, 2>, 2>& ArrayArrayStruct::my_array_array() const
{
    return m_my_array_array;
}

/*!
 * @brief This function returns a reference to member my_array_array
 * @return Reference to member my_array_array
 */
std::array<std::array<MyArray, 2>, 2>& ArrayArrayStruct::my_array_array()
{
    return m_my_array_array;
}


size_t ArrayArrayStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ArrayArrayStruct_max_key_cdr_typesize;
}

bool ArrayArrayStruct::isKeyDefined()
{
    return false;
}

void ArrayArrayStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


SequenceStruct::SequenceStruct()
{
    // sequence<long, 2> m_my_sequence


    // Just to register all known types
    registerBasicTypes();
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


SequenceSequenceStruct::SequenceSequenceStruct()
{
    // sequence<sequence<long, 2>, 3> m_my_sequence_sequence


    // Just to register all known types
    registerBasicTypes();
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


MapStruct::MapStruct()
{
    // map<long, long> m_my_map


    // Just to register all known types
    registerBasicTypes();
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


MapMapStruct::MapMapStruct()
{
    // map<long, map<long, long>> m_my_map_map


    // Just to register all known types
    registerBasicTypes();
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


MyBitset::MyBitset()
{
    // Just to register all known types
    registerBasicTypes();
}

MyBitset::~MyBitset()
{
}

MyBitset::MyBitset(
        const MyBitset& x)
{
    m_bitset = x.m_bitset;
}

MyBitset::MyBitset(
        MyBitset&& x) noexcept 
{
    m_bitset = x.m_bitset;
}

MyBitset& MyBitset::operator =(
        const MyBitset& x)
{

    m_bitset = x.m_bitset;

    return *this;
}

MyBitset& MyBitset::operator =(
        MyBitset&& x) noexcept
{

    m_bitset = x.m_bitset;

    return *this;
}

bool MyBitset::operator ==(
        const MyBitset& x) const
{

    return m_bitset == x.m_bitset;
}

bool MyBitset::operator !=(
        const MyBitset& x) const
{
    return !(*this == x);
}

size_t MyBitset::getCdrSerializedSize(
        const MyBitset& ,
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void MyBitset::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << static_cast<char>(a());

    scdr << static_cast<uint32_t>(b());
}

void MyBitset::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    char aux_a;
    dcdr >> aux_a;
    a(aux_a);

    uint32_t aux_b;
    dcdr >> aux_b;
    b(aux_b);
}


void MyBitset::a(
        char _a)
{
    int base = 0;
    int size = 2;
    for (int i = base; i < base + size; ++i)
    {
        m_bitset.set(i, !!(_a & 0x01));
        _a = _a >> 1;
    }
}

char MyBitset::a() const
{
    int base = 0;
    int size = 2;
    std::bitset<2> aux;
    for (int i = 0; i < size; ++i)
    {
        aux.set(i, m_bitset.test(i + base));
    }
    return static_cast<char>(aux.to_ullong());
}

void MyBitset::b(
        uint32_t _b)
{
    int base = 10;
    int size = 20;
    for (int i = base; i < base + size; ++i)
    {
        m_bitset.set(i, !!(_b & 0x01));
        _b = _b >> 1;
    }
}

uint32_t MyBitset::b() const
{
    int base = 10;
    int size = 20;
    std::bitset<20> aux;
    for (int i = 0; i < size; ++i)
    {
        aux.set(i, m_bitset.test(i + base));
    }
    return static_cast<uint32_t>(aux.to_ullong());
}

BitsetStruct::BitsetStruct()
{
    // MyBitset m_a


    // Just to register all known types
    registerBasicTypes();
}

BitsetStruct::~BitsetStruct()
{
}

BitsetStruct::BitsetStruct(
        const BitsetStruct& x)
{
    m_a = x.m_a;
}

BitsetStruct::BitsetStruct(
        BitsetStruct&& x) noexcept 
{
    m_a = std::move(x.m_a);
}

BitsetStruct& BitsetStruct::operator =(
        const BitsetStruct& x)
{

    m_a = x.m_a;

    return *this;
}

BitsetStruct& BitsetStruct::operator =(
        BitsetStruct&& x) noexcept
{

    m_a = std::move(x.m_a);

    return *this;
}

bool BitsetStruct::operator ==(
        const BitsetStruct& x) const
{

    return (m_a == x.m_a);
}

bool BitsetStruct::operator !=(
        const BitsetStruct& x) const
{
    return !(*this == x);
}

size_t BitsetStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BitsetStruct_max_cdr_typesize;
}

size_t BitsetStruct::getCdrSerializedSize(
        const BitsetStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += MyBitset::getCdrSerializedSize(data.a(), current_alignment);

    return current_alignment - initial_alignment;
}

void BitsetStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_a;

}

void BitsetStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_a;
}

/*!
 * @brief This function copies the value in member a
 * @param _a New value to be copied in member a
 */
void BitsetStruct::a(
        const MyBitset& _a)
{
    m_a = _a;
}

/*!
 * @brief This function moves the value in member a
 * @param _a New value to be moved in member a
 */
void BitsetStruct::a(
        MyBitset&& _a)
{
    m_a = std::move(_a);
}

/*!
 * @brief This function returns a constant reference to member a
 * @return Constant reference to member a
 */
const MyBitset& BitsetStruct::a() const
{
    return m_a;
}

/*!
 * @brief This function returns a reference to member a
 * @return Reference to member a
 */
MyBitset& BitsetStruct::a()
{
    return m_a;
}


size_t BitsetStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BitsetStruct_max_key_cdr_typesize;
}

bool BitsetStruct::isKeyDefined()
{
    return false;
}

void BitsetStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


StructStruct::StructStruct()
{
    // long m_a
    m_a = 0;
    // long long m_b
    m_b = 0;

    // Just to register all known types
    registerBasicTypes();
}

StructStruct::~StructStruct()
{


}

StructStruct::StructStruct(
        const StructStruct& x)
{
    m_a = x.m_a;
    m_b = x.m_b;
}

StructStruct::StructStruct(
        StructStruct&& x) noexcept 
{
    m_a = x.m_a;
    m_b = x.m_b;
}

StructStruct& StructStruct::operator =(
        const StructStruct& x)
{

    m_a = x.m_a;
    m_b = x.m_b;

    return *this;
}

StructStruct& StructStruct::operator =(
        StructStruct&& x) noexcept
{

    m_a = x.m_a;
    m_b = x.m_b;

    return *this;
}

bool StructStruct::operator ==(
        const StructStruct& x) const
{

    return (m_a == x.m_a && m_b == x.m_b);
}

bool StructStruct::operator !=(
        const StructStruct& x) const
{
    return !(*this == x);
}

size_t StructStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StructStruct_max_cdr_typesize;
}

size_t StructStruct::getCdrSerializedSize(
        const StructStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void StructStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_a;
    scdr << m_b;

}

void StructStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_a;
    dcdr >> m_b;
}

/*!
 * @brief This function sets a value in member a
 * @param _a New value for member a
 */
void StructStruct::a(
        int32_t _a)
{
    m_a = _a;
}

/*!
 * @brief This function returns the value of member a
 * @return Value of member a
 */
int32_t StructStruct::a() const
{
    return m_a;
}

/*!
 * @brief This function returns a reference to member a
 * @return Reference to member a
 */
int32_t& StructStruct::a()
{
    return m_a;
}

/*!
 * @brief This function sets a value in member b
 * @param _b New value for member b
 */
void StructStruct::b(
        int64_t _b)
{
    m_b = _b;
}

/*!
 * @brief This function returns the value of member b
 * @return Value of member b
 */
int64_t StructStruct::b() const
{
    return m_b;
}

/*!
 * @brief This function returns a reference to member b
 * @return Reference to member b
 */
int64_t& StructStruct::b()
{
    return m_b;
}



size_t StructStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StructStruct_max_key_cdr_typesize;
}

bool StructStruct::isKeyDefined()
{
    return false;
}

void StructStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


StructStructStruct::StructStructStruct()
{
    // StructStruct m_child_struct

    // long long m_child_int64
    m_child_int64 = 0;

    // Just to register all known types
    registerBasicTypes();
}

StructStructStruct::~StructStructStruct()
{


}

StructStructStruct::StructStructStruct(
        const StructStructStruct& x)
{
    m_child_struct = x.m_child_struct;
    m_child_int64 = x.m_child_int64;
}

StructStructStruct::StructStructStruct(
        StructStructStruct&& x) noexcept 
{
    m_child_struct = std::move(x.m_child_struct);
    m_child_int64 = x.m_child_int64;
}

StructStructStruct& StructStructStruct::operator =(
        const StructStructStruct& x)
{

    m_child_struct = x.m_child_struct;
    m_child_int64 = x.m_child_int64;

    return *this;
}

StructStructStruct& StructStructStruct::operator =(
        StructStructStruct&& x) noexcept
{

    m_child_struct = std::move(x.m_child_struct);
    m_child_int64 = x.m_child_int64;

    return *this;
}

bool StructStructStruct::operator ==(
        const StructStructStruct& x) const
{

    return (m_child_struct == x.m_child_struct && m_child_int64 == x.m_child_int64);
}

bool StructStructStruct::operator !=(
        const StructStructStruct& x) const
{
    return !(*this == x);
}

size_t StructStructStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StructStructStruct_max_cdr_typesize;
}

size_t StructStructStruct::getCdrSerializedSize(
        const StructStructStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += StructStruct::getCdrSerializedSize(data.child_struct(), current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void StructStructStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_child_struct;
    scdr << m_child_int64;

}

void StructStructStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_child_struct;
    dcdr >> m_child_int64;
}

/*!
 * @brief This function copies the value in member child_struct
 * @param _child_struct New value to be copied in member child_struct
 */
void StructStructStruct::child_struct(
        const StructStruct& _child_struct)
{
    m_child_struct = _child_struct;
}

/*!
 * @brief This function moves the value in member child_struct
 * @param _child_struct New value to be moved in member child_struct
 */
void StructStructStruct::child_struct(
        StructStruct&& _child_struct)
{
    m_child_struct = std::move(_child_struct);
}

/*!
 * @brief This function returns a constant reference to member child_struct
 * @return Constant reference to member child_struct
 */
const StructStruct& StructStructStruct::child_struct() const
{
    return m_child_struct;
}

/*!
 * @brief This function returns a reference to member child_struct
 * @return Reference to member child_struct
 */
StructStruct& StructStructStruct::child_struct()
{
    return m_child_struct;
}
/*!
 * @brief This function sets a value in member child_int64
 * @param _child_int64 New value for member child_int64
 */
void StructStructStruct::child_int64(
        int64_t _child_int64)
{
    m_child_int64 = _child_int64;
}

/*!
 * @brief This function returns the value of member child_int64
 * @return Value of member child_int64
 */
int64_t StructStructStruct::child_int64() const
{
    return m_child_int64;
}

/*!
 * @brief This function returns a reference to member child_int64
 * @return Reference to member child_int64
 */
int64_t& StructStructStruct::child_int64()
{
    return m_child_int64;
}



size_t StructStructStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StructStructStruct_max_key_cdr_typesize;
}

bool StructStructStruct::isKeyDefined()
{
    return false;
}

void StructStructStruct::serializeKey(
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


UnionUnion::UnionUnion()
{
    m__d = A;
    // long m_first
    m_first = 0;
    // SimpleUnion m_second

}

UnionUnion::~UnionUnion()
{
}

UnionUnion::UnionUnion(
        const UnionUnion& x)
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

UnionUnion::UnionUnion(
        UnionUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = std::move(x.m_second);
        break;
        default:
        break;
    }
}

UnionUnion& UnionUnion::operator =(
        const UnionUnion& x)
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

UnionUnion& UnionUnion::operator =(
        UnionUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = std::move(x.m_second);
        break;
        default:
        break;
    }

    return *this;
}

bool UnionUnion::operator ==(
        const UnionUnion& x) const
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

bool UnionUnion::operator !=(
        const UnionUnion& x) const
{
    return !(*this == x);
}

void UnionUnion::_d(
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

int32_t UnionUnion::_d() const
{
    return m__d;
}

int32_t& UnionUnion::_d()
{
    return m__d;
}

void UnionUnion::first(
        int32_t _first)
{
    m_first = _first;
    m__d = A;
}

int32_t UnionUnion::first() const
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

int32_t& UnionUnion::first()
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
void UnionUnion::second(
        const SimpleUnion& _second)
{
    m_second = _second;
    m__d = B;
}

void UnionUnion::second(
        SimpleUnion&& _second)
{
    m_second = std::move(_second);
    m__d = B;
}

const SimpleUnion& UnionUnion::second() const
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

SimpleUnion& UnionUnion::second()
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
size_t UnionUnion::getCdrSerializedSize(
        const UnionUnion& data,
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
        current_alignment += SimpleUnion::getCdrSerializedSize(data.second(), current_alignment);
        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void UnionUnion::serialize(
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

void UnionUnion::deserialize(
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


WCharUnion::WCharUnion()
{
    m__d = A;
    // long m_first
    m_first = 0;
    // long long m_second
    m_second = 0;
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

WCharUnion::WCharUnion(
        WCharUnion&& x) noexcept
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

WCharUnion& WCharUnion::operator =(
        const WCharUnion& x)
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

WCharUnion& WCharUnion::operator =(
        WCharUnion&& x) noexcept
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

bool WCharUnion::operator ==(
        const WCharUnion& x) const
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

wchar_t WCharUnion::_d() const
{
    return m__d;
}

wchar_t& WCharUnion::_d()
{
    return m__d;
}

void WCharUnion::first(
        int32_t _first)
{
    m_first = _first;
    m__d = A;
}

int32_t WCharUnion::first() const
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

int32_t& WCharUnion::first()
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
void WCharUnion::second(
        int64_t _second)
{
    m_second = _second;
    m__d = B;
}

int64_t WCharUnion::second() const
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

int64_t& WCharUnion::second()
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
size_t WCharUnion::getCdrSerializedSize(
        const WCharUnion& data,
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

void WCharUnion::serialize(
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

void WCharUnion::deserialize(
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


SimpleUnionStruct::SimpleUnionStruct()
{
    // SimpleUnion m_my_union


    // Just to register all known types
    registerBasicTypes();
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


UnionUnionUnionStruct::UnionUnionUnionStruct()
{
    // UnionUnion m_my_union


    // Just to register all known types
    registerBasicTypes();
}

UnionUnionUnionStruct::~UnionUnionUnionStruct()
{
}

UnionUnionUnionStruct::UnionUnionUnionStruct(
        const UnionUnionUnionStruct& x)
{
    m_my_union = x.m_my_union;
}

UnionUnionUnionStruct::UnionUnionUnionStruct(
        UnionUnionUnionStruct&& x) noexcept 
{
    m_my_union = std::move(x.m_my_union);
}

UnionUnionUnionStruct& UnionUnionUnionStruct::operator =(
        const UnionUnionUnionStruct& x)
{

    m_my_union = x.m_my_union;

    return *this;
}

UnionUnionUnionStruct& UnionUnionUnionStruct::operator =(
        UnionUnionUnionStruct&& x) noexcept
{

    m_my_union = std::move(x.m_my_union);

    return *this;
}

bool UnionUnionUnionStruct::operator ==(
        const UnionUnionUnionStruct& x) const
{

    return (m_my_union == x.m_my_union);
}

bool UnionUnionUnionStruct::operator !=(
        const UnionUnionUnionStruct& x) const
{
    return !(*this == x);
}

size_t UnionUnionUnionStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return UnionUnionUnionStruct_max_cdr_typesize;
}

size_t UnionUnionUnionStruct::getCdrSerializedSize(
        const UnionUnionUnionStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += UnionUnion::getCdrSerializedSize(data.my_union(), current_alignment);

    return current_alignment - initial_alignment;
}

void UnionUnionUnionStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;

}

void UnionUnionUnionStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void UnionUnionUnionStruct::my_union(
        const UnionUnion& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void UnionUnionUnionStruct::my_union(
        UnionUnion&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const UnionUnion& UnionUnionUnionStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
UnionUnion& UnionUnionUnionStruct::my_union()
{
    return m_my_union;
}


size_t UnionUnionUnionStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return UnionUnionUnionStruct_max_key_cdr_typesize;
}

bool UnionUnionUnionStruct::isKeyDefined()
{
    return false;
}

void UnionUnionUnionStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


WCharUnionStruct::WCharUnionStruct()
{
    // WCharUnion m_my_union


    // Just to register all known types
    registerBasicTypes();
}

WCharUnionStruct::~WCharUnionStruct()
{
}

WCharUnionStruct::WCharUnionStruct(
        const WCharUnionStruct& x)
{
    m_my_union = x.m_my_union;
}

WCharUnionStruct::WCharUnionStruct(
        WCharUnionStruct&& x) noexcept 
{
    m_my_union = std::move(x.m_my_union);
}

WCharUnionStruct& WCharUnionStruct::operator =(
        const WCharUnionStruct& x)
{

    m_my_union = x.m_my_union;

    return *this;
}

WCharUnionStruct& WCharUnionStruct::operator =(
        WCharUnionStruct&& x) noexcept
{

    m_my_union = std::move(x.m_my_union);

    return *this;
}

bool WCharUnionStruct::operator ==(
        const WCharUnionStruct& x) const
{

    return (m_my_union == x.m_my_union);
}

bool WCharUnionStruct::operator !=(
        const WCharUnionStruct& x) const
{
    return !(*this == x);
}

size_t WCharUnionStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return WCharUnionStruct_max_cdr_typesize;
}

size_t WCharUnionStruct::getCdrSerializedSize(
        const WCharUnionStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += WCharUnion::getCdrSerializedSize(data.my_union(), current_alignment);

    return current_alignment - initial_alignment;
}

void WCharUnionStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;

}

void WCharUnionStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void WCharUnionStruct::my_union(
        const WCharUnion& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void WCharUnionStruct::my_union(
        WCharUnion&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const WCharUnion& WCharUnionStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
WCharUnion& WCharUnionStruct::my_union()
{
    return m_my_union;
}


size_t WCharUnionStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return WCharUnionStruct_max_key_cdr_typesize;
}

bool WCharUnionStruct::isKeyDefined()
{
    return false;
}

void WCharUnionStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

