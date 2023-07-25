/*!
 * @file Test.cpp
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

#include "Test.h"
#include "TestTypeObject.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define KeyedStruct_max_cdr_typesize 1364ULL;



#define BasicStruct_max_cdr_typesize 1356ULL;

#define ComplexStruct_max_cdr_typesize 69399660ULL;


#define CompleteStruct_max_cdr_typesize 69399924ULL;





#define KeyedStruct_max_key_cdr_typesize 1ULL;



#define BasicStruct_max_key_cdr_typesize 0ULL;

#define ComplexStruct_max_key_cdr_typesize 0ULL;


#define CompleteStruct_max_key_cdr_typesize 0ULL;










BasicStruct::BasicStruct()
{
    // boolean m_my_bool
    m_my_bool = false;
    // octet m_my_octet
    m_my_octet = 0;
    // short m_my_int16
    m_my_int16 = 0;
    // long m_my_int32
    m_my_int32 = 0;
    // long long m_my_int64
    m_my_int64 = 0;
    // unsigned short m_my_uint16
    m_my_uint16 = 0;
    // unsigned long m_my_uint32
    m_my_uint32 = 0;
    // unsigned long long m_my_uint64
    m_my_uint64 = 0;
    // float m_my_float32
    m_my_float32 = 0.0;
    // double m_my_float64
    m_my_float64 = 0.0;
    // long double m_my_float128
    m_my_float128 = 0.0;
    // char m_my_char
    m_my_char = 0;
    // wchar m_my_wchar
    m_my_wchar = 0;
    // string m_my_string
    m_my_string ="";
    // wstring m_my_wstring


    // Just to register all known types
    registerTestTypes();
}

BasicStruct::~BasicStruct()
{















}

BasicStruct::BasicStruct(
        const BasicStruct& x)
{
    m_my_bool = x.m_my_bool;
    m_my_octet = x.m_my_octet;
    m_my_int16 = x.m_my_int16;
    m_my_int32 = x.m_my_int32;
    m_my_int64 = x.m_my_int64;
    m_my_uint16 = x.m_my_uint16;
    m_my_uint32 = x.m_my_uint32;
    m_my_uint64 = x.m_my_uint64;
    m_my_float32 = x.m_my_float32;
    m_my_float64 = x.m_my_float64;
    m_my_float128 = x.m_my_float128;
    m_my_char = x.m_my_char;
    m_my_wchar = x.m_my_wchar;
    m_my_string = x.m_my_string;
    m_my_wstring = x.m_my_wstring;
}

BasicStruct::BasicStruct(
        BasicStruct&& x) noexcept 
{
    m_my_bool = x.m_my_bool;
    m_my_octet = x.m_my_octet;
    m_my_int16 = x.m_my_int16;
    m_my_int32 = x.m_my_int32;
    m_my_int64 = x.m_my_int64;
    m_my_uint16 = x.m_my_uint16;
    m_my_uint32 = x.m_my_uint32;
    m_my_uint64 = x.m_my_uint64;
    m_my_float32 = x.m_my_float32;
    m_my_float64 = x.m_my_float64;
    m_my_float128 = x.m_my_float128;
    m_my_char = x.m_my_char;
    m_my_wchar = x.m_my_wchar;
    m_my_string = std::move(x.m_my_string);
    m_my_wstring = std::move(x.m_my_wstring);
}

BasicStruct& BasicStruct::operator =(
        const BasicStruct& x)
{

    m_my_bool = x.m_my_bool;
    m_my_octet = x.m_my_octet;
    m_my_int16 = x.m_my_int16;
    m_my_int32 = x.m_my_int32;
    m_my_int64 = x.m_my_int64;
    m_my_uint16 = x.m_my_uint16;
    m_my_uint32 = x.m_my_uint32;
    m_my_uint64 = x.m_my_uint64;
    m_my_float32 = x.m_my_float32;
    m_my_float64 = x.m_my_float64;
    m_my_float128 = x.m_my_float128;
    m_my_char = x.m_my_char;
    m_my_wchar = x.m_my_wchar;
    m_my_string = x.m_my_string;
    m_my_wstring = x.m_my_wstring;

    return *this;
}

BasicStruct& BasicStruct::operator =(
        BasicStruct&& x) noexcept
{

    m_my_bool = x.m_my_bool;
    m_my_octet = x.m_my_octet;
    m_my_int16 = x.m_my_int16;
    m_my_int32 = x.m_my_int32;
    m_my_int64 = x.m_my_int64;
    m_my_uint16 = x.m_my_uint16;
    m_my_uint32 = x.m_my_uint32;
    m_my_uint64 = x.m_my_uint64;
    m_my_float32 = x.m_my_float32;
    m_my_float64 = x.m_my_float64;
    m_my_float128 = x.m_my_float128;
    m_my_char = x.m_my_char;
    m_my_wchar = x.m_my_wchar;
    m_my_string = std::move(x.m_my_string);
    m_my_wstring = std::move(x.m_my_wstring);

    return *this;
}

bool BasicStruct::operator ==(
        const BasicStruct& x) const
{

    return (m_my_bool == x.m_my_bool && m_my_octet == x.m_my_octet && m_my_int16 == x.m_my_int16 && m_my_int32 == x.m_my_int32 && m_my_int64 == x.m_my_int64 && m_my_uint16 == x.m_my_uint16 && m_my_uint32 == x.m_my_uint32 && m_my_uint64 == x.m_my_uint64 && m_my_float32 == x.m_my_float32 && m_my_float64 == x.m_my_float64 && m_my_float128 == x.m_my_float128 && m_my_char == x.m_my_char && m_my_wchar == x.m_my_wchar && m_my_string == x.m_my_string && m_my_wstring == x.m_my_wstring);
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


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 16 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8); // 128 bits, but aligned as 64

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_string().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + (data.my_wstring().size()) * 4; // 32 bits


    return current_alignment - initial_alignment;
}

void BasicStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_bool;
    scdr << m_my_octet;
    scdr << m_my_int16;
    scdr << m_my_int32;
    scdr << m_my_int64;
    scdr << m_my_uint16;
    scdr << m_my_uint32;
    scdr << m_my_uint64;
    scdr << m_my_float32;
    scdr << m_my_float64;
    scdr << m_my_float128;
    scdr << m_my_char;
    scdr << m_my_wchar;
    scdr << m_my_string.c_str();
    scdr << m_my_wstring;

}

void BasicStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_bool;
    dcdr >> m_my_octet;
    dcdr >> m_my_int16;
    dcdr >> m_my_int32;
    dcdr >> m_my_int64;
    dcdr >> m_my_uint16;
    dcdr >> m_my_uint32;
    dcdr >> m_my_uint64;
    dcdr >> m_my_float32;
    dcdr >> m_my_float64;
    dcdr >> m_my_float128;
    dcdr >> m_my_char;
    dcdr >> m_my_wchar;
    dcdr >> m_my_string;
    dcdr >> m_my_wstring;
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
 * @brief This function sets a value in member my_octet
 * @param _my_octet New value for member my_octet
 */
void BasicStruct::my_octet(
        uint8_t _my_octet)
{
    m_my_octet = _my_octet;
}

/*!
 * @brief This function returns the value of member my_octet
 * @return Value of member my_octet
 */
uint8_t BasicStruct::my_octet() const
{
    return m_my_octet;
}

/*!
 * @brief This function returns a reference to member my_octet
 * @return Reference to member my_octet
 */
uint8_t& BasicStruct::my_octet()
{
    return m_my_octet;
}

/*!
 * @brief This function sets a value in member my_int16
 * @param _my_int16 New value for member my_int16
 */
void BasicStruct::my_int16(
        int16_t _my_int16)
{
    m_my_int16 = _my_int16;
}

/*!
 * @brief This function returns the value of member my_int16
 * @return Value of member my_int16
 */
int16_t BasicStruct::my_int16() const
{
    return m_my_int16;
}

/*!
 * @brief This function returns a reference to member my_int16
 * @return Reference to member my_int16
 */
int16_t& BasicStruct::my_int16()
{
    return m_my_int16;
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
 * @brief This function sets a value in member my_int64
 * @param _my_int64 New value for member my_int64
 */
void BasicStruct::my_int64(
        int64_t _my_int64)
{
    m_my_int64 = _my_int64;
}

/*!
 * @brief This function returns the value of member my_int64
 * @return Value of member my_int64
 */
int64_t BasicStruct::my_int64() const
{
    return m_my_int64;
}

/*!
 * @brief This function returns a reference to member my_int64
 * @return Reference to member my_int64
 */
int64_t& BasicStruct::my_int64()
{
    return m_my_int64;
}

/*!
 * @brief This function sets a value in member my_uint16
 * @param _my_uint16 New value for member my_uint16
 */
void BasicStruct::my_uint16(
        uint16_t _my_uint16)
{
    m_my_uint16 = _my_uint16;
}

/*!
 * @brief This function returns the value of member my_uint16
 * @return Value of member my_uint16
 */
uint16_t BasicStruct::my_uint16() const
{
    return m_my_uint16;
}

/*!
 * @brief This function returns a reference to member my_uint16
 * @return Reference to member my_uint16
 */
uint16_t& BasicStruct::my_uint16()
{
    return m_my_uint16;
}

/*!
 * @brief This function sets a value in member my_uint32
 * @param _my_uint32 New value for member my_uint32
 */
void BasicStruct::my_uint32(
        uint32_t _my_uint32)
{
    m_my_uint32 = _my_uint32;
}

/*!
 * @brief This function returns the value of member my_uint32
 * @return Value of member my_uint32
 */
uint32_t BasicStruct::my_uint32() const
{
    return m_my_uint32;
}

/*!
 * @brief This function returns a reference to member my_uint32
 * @return Reference to member my_uint32
 */
uint32_t& BasicStruct::my_uint32()
{
    return m_my_uint32;
}

/*!
 * @brief This function sets a value in member my_uint64
 * @param _my_uint64 New value for member my_uint64
 */
void BasicStruct::my_uint64(
        uint64_t _my_uint64)
{
    m_my_uint64 = _my_uint64;
}

/*!
 * @brief This function returns the value of member my_uint64
 * @return Value of member my_uint64
 */
uint64_t BasicStruct::my_uint64() const
{
    return m_my_uint64;
}

/*!
 * @brief This function returns a reference to member my_uint64
 * @return Reference to member my_uint64
 */
uint64_t& BasicStruct::my_uint64()
{
    return m_my_uint64;
}

/*!
 * @brief This function sets a value in member my_float32
 * @param _my_float32 New value for member my_float32
 */
void BasicStruct::my_float32(
        float _my_float32)
{
    m_my_float32 = _my_float32;
}

/*!
 * @brief This function returns the value of member my_float32
 * @return Value of member my_float32
 */
float BasicStruct::my_float32() const
{
    return m_my_float32;
}

/*!
 * @brief This function returns a reference to member my_float32
 * @return Reference to member my_float32
 */
float& BasicStruct::my_float32()
{
    return m_my_float32;
}

/*!
 * @brief This function sets a value in member my_float64
 * @param _my_float64 New value for member my_float64
 */
void BasicStruct::my_float64(
        double _my_float64)
{
    m_my_float64 = _my_float64;
}

/*!
 * @brief This function returns the value of member my_float64
 * @return Value of member my_float64
 */
double BasicStruct::my_float64() const
{
    return m_my_float64;
}

/*!
 * @brief This function returns a reference to member my_float64
 * @return Reference to member my_float64
 */
double& BasicStruct::my_float64()
{
    return m_my_float64;
}

/*!
 * @brief This function sets a value in member my_float128
 * @param _my_float128 New value for member my_float128
 */
void BasicStruct::my_float128(
        long double _my_float128)
{
    m_my_float128 = _my_float128;
}

/*!
 * @brief This function returns the value of member my_float128
 * @return Value of member my_float128
 */
long double BasicStruct::my_float128() const
{
    return m_my_float128;
}

/*!
 * @brief This function returns a reference to member my_float128
 * @return Reference to member my_float128
 */
long double& BasicStruct::my_float128()
{
    return m_my_float128;
}

/*!
 * @brief This function sets a value in member my_char
 * @param _my_char New value for member my_char
 */
void BasicStruct::my_char(
        char _my_char)
{
    m_my_char = _my_char;
}

/*!
 * @brief This function returns the value of member my_char
 * @return Value of member my_char
 */
char BasicStruct::my_char() const
{
    return m_my_char;
}

/*!
 * @brief This function returns a reference to member my_char
 * @return Reference to member my_char
 */
char& BasicStruct::my_char()
{
    return m_my_char;
}

/*!
 * @brief This function sets a value in member my_wchar
 * @param _my_wchar New value for member my_wchar
 */
void BasicStruct::my_wchar(
        wchar_t _my_wchar)
{
    m_my_wchar = _my_wchar;
}

/*!
 * @brief This function returns the value of member my_wchar
 * @return Value of member my_wchar
 */
wchar_t BasicStruct::my_wchar() const
{
    return m_my_wchar;
}

/*!
 * @brief This function returns a reference to member my_wchar
 * @return Reference to member my_wchar
 */
wchar_t& BasicStruct::my_wchar()
{
    return m_my_wchar;
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
/*!
 * @brief This function copies the value in member my_wstring
 * @param _my_wstring New value to be copied in member my_wstring
 */
void BasicStruct::my_wstring(
        const std::wstring& _my_wstring)
{
    m_my_wstring = _my_wstring;
}

/*!
 * @brief This function moves the value in member my_wstring
 * @param _my_wstring New value to be moved in member my_wstring
 */
void BasicStruct::my_wstring(
        std::wstring&& _my_wstring)
{
    m_my_wstring = std::move(_my_wstring);
}

/*!
 * @brief This function returns a constant reference to member my_wstring
 * @return Constant reference to member my_wstring
 */
const std::wstring& BasicStruct::my_wstring() const
{
    return m_my_wstring;
}

/*!
 * @brief This function returns a reference to member my_wstring
 * @return Reference to member my_wstring
 */
std::wstring& BasicStruct::my_wstring()
{
    return m_my_wstring;
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







ComplexStruct::ComplexStruct()
{
    // octet m_my_octet
    m_my_octet = 0;
    // BasicStruct m_my_basic_struct

    // MyAliasEnum m_my_alias_enum
    m_my_alias_enum = ::A;
    // MyEnum m_my_enum
    m_my_enum = ::A;
    // sequence<octet, 55> m_my_sequence_octet

    // sequence<BasicStruct> m_my_sequence_struct

    // char m_my_array_octet
    memset(&m_my_array_octet, 0, (500 * 5 * 4) * 1);
    // MyOctetArray500 m_my_octet_array_500
    memset(&m_my_octet_array_500, 0, (500) * 1);
    // BasicStruct m_my_array_struct

    // map<octet, short> m_my_map_octet_short

    // map<long, BasicStruct> m_my_map_long_struct

    // map<long, sequence<sequence<octet>>> m_my_map_long_seq_octet

    // map<long, MyOctetArray500> m_my_map_long_octet_array_500

    // map<long, map<octet, BSAlias5>> m_my_map_long_lol_type

    // string m_my_small_string_8
    m_my_small_string_8 ="";
    // wstring m_my_small_string_16

    // string m_my_large_string_8
    m_my_large_string_8 ="";
    // wstring m_my_large_string_16

    // string m_my_array_string

    // MA3 m_multi_alias_array_42
    memset(&m_multi_alias_array_42, 0, (42) * 4);
    // MyMiniArray m_my_array_arrays

    // MySequenceLong m_my_sequences_array


    // Just to register all known types
    registerTestTypes();
}

ComplexStruct::~ComplexStruct()
{






















}

ComplexStruct::ComplexStruct(
        const ComplexStruct& x)
{
    m_my_octet = x.m_my_octet;
    m_my_basic_struct = x.m_my_basic_struct;
    m_my_alias_enum = x.m_my_alias_enum;
    m_my_enum = x.m_my_enum;
    m_my_sequence_octet = x.m_my_sequence_octet;
    m_my_sequence_struct = x.m_my_sequence_struct;
    m_my_array_octet = x.m_my_array_octet;
    m_my_octet_array_500 = x.m_my_octet_array_500;
    m_my_array_struct = x.m_my_array_struct;
    m_my_map_octet_short = x.m_my_map_octet_short;
    m_my_map_long_struct = x.m_my_map_long_struct;
    m_my_map_long_seq_octet = x.m_my_map_long_seq_octet;
    m_my_map_long_octet_array_500 = x.m_my_map_long_octet_array_500;
    m_my_map_long_lol_type = x.m_my_map_long_lol_type;
    m_my_small_string_8 = x.m_my_small_string_8;
    m_my_small_string_16 = x.m_my_small_string_16;
    m_my_large_string_8 = x.m_my_large_string_8;
    m_my_large_string_16 = x.m_my_large_string_16;
    m_my_array_string = x.m_my_array_string;
    m_multi_alias_array_42 = x.m_multi_alias_array_42;
    m_my_array_arrays = x.m_my_array_arrays;
    m_my_sequences_array = x.m_my_sequences_array;
}

ComplexStruct::ComplexStruct(
        ComplexStruct&& x) noexcept 
{
    m_my_octet = x.m_my_octet;
    m_my_basic_struct = std::move(x.m_my_basic_struct);
    m_my_alias_enum = x.m_my_alias_enum;
    m_my_enum = x.m_my_enum;
    m_my_sequence_octet = std::move(x.m_my_sequence_octet);
    m_my_sequence_struct = std::move(x.m_my_sequence_struct);
    m_my_array_octet = std::move(x.m_my_array_octet);
    m_my_octet_array_500 = std::move(x.m_my_octet_array_500);
    m_my_array_struct = std::move(x.m_my_array_struct);
    m_my_map_octet_short = std::move(x.m_my_map_octet_short);
    m_my_map_long_struct = std::move(x.m_my_map_long_struct);
    m_my_map_long_seq_octet = std::move(x.m_my_map_long_seq_octet);
    m_my_map_long_octet_array_500 = std::move(x.m_my_map_long_octet_array_500);
    m_my_map_long_lol_type = std::move(x.m_my_map_long_lol_type);
    m_my_small_string_8 = std::move(x.m_my_small_string_8);
    m_my_small_string_16 = std::move(x.m_my_small_string_16);
    m_my_large_string_8 = std::move(x.m_my_large_string_8);
    m_my_large_string_16 = std::move(x.m_my_large_string_16);
    m_my_array_string = std::move(x.m_my_array_string);
    m_multi_alias_array_42 = std::move(x.m_multi_alias_array_42);
    m_my_array_arrays = std::move(x.m_my_array_arrays);
    m_my_sequences_array = std::move(x.m_my_sequences_array);
}

ComplexStruct& ComplexStruct::operator =(
        const ComplexStruct& x)
{

    m_my_octet = x.m_my_octet;
    m_my_basic_struct = x.m_my_basic_struct;
    m_my_alias_enum = x.m_my_alias_enum;
    m_my_enum = x.m_my_enum;
    m_my_sequence_octet = x.m_my_sequence_octet;
    m_my_sequence_struct = x.m_my_sequence_struct;
    m_my_array_octet = x.m_my_array_octet;
    m_my_octet_array_500 = x.m_my_octet_array_500;
    m_my_array_struct = x.m_my_array_struct;
    m_my_map_octet_short = x.m_my_map_octet_short;
    m_my_map_long_struct = x.m_my_map_long_struct;
    m_my_map_long_seq_octet = x.m_my_map_long_seq_octet;
    m_my_map_long_octet_array_500 = x.m_my_map_long_octet_array_500;
    m_my_map_long_lol_type = x.m_my_map_long_lol_type;
    m_my_small_string_8 = x.m_my_small_string_8;
    m_my_small_string_16 = x.m_my_small_string_16;
    m_my_large_string_8 = x.m_my_large_string_8;
    m_my_large_string_16 = x.m_my_large_string_16;
    m_my_array_string = x.m_my_array_string;
    m_multi_alias_array_42 = x.m_multi_alias_array_42;
    m_my_array_arrays = x.m_my_array_arrays;
    m_my_sequences_array = x.m_my_sequences_array;

    return *this;
}

ComplexStruct& ComplexStruct::operator =(
        ComplexStruct&& x) noexcept
{

    m_my_octet = x.m_my_octet;
    m_my_basic_struct = std::move(x.m_my_basic_struct);
    m_my_alias_enum = x.m_my_alias_enum;
    m_my_enum = x.m_my_enum;
    m_my_sequence_octet = std::move(x.m_my_sequence_octet);
    m_my_sequence_struct = std::move(x.m_my_sequence_struct);
    m_my_array_octet = std::move(x.m_my_array_octet);
    m_my_octet_array_500 = std::move(x.m_my_octet_array_500);
    m_my_array_struct = std::move(x.m_my_array_struct);
    m_my_map_octet_short = std::move(x.m_my_map_octet_short);
    m_my_map_long_struct = std::move(x.m_my_map_long_struct);
    m_my_map_long_seq_octet = std::move(x.m_my_map_long_seq_octet);
    m_my_map_long_octet_array_500 = std::move(x.m_my_map_long_octet_array_500);
    m_my_map_long_lol_type = std::move(x.m_my_map_long_lol_type);
    m_my_small_string_8 = std::move(x.m_my_small_string_8);
    m_my_small_string_16 = std::move(x.m_my_small_string_16);
    m_my_large_string_8 = std::move(x.m_my_large_string_8);
    m_my_large_string_16 = std::move(x.m_my_large_string_16);
    m_my_array_string = std::move(x.m_my_array_string);
    m_multi_alias_array_42 = std::move(x.m_multi_alias_array_42);
    m_my_array_arrays = std::move(x.m_my_array_arrays);
    m_my_sequences_array = std::move(x.m_my_sequences_array);

    return *this;
}

bool ComplexStruct::operator ==(
        const ComplexStruct& x) const
{

    return (m_my_octet == x.m_my_octet && m_my_basic_struct == x.m_my_basic_struct && m_my_alias_enum == x.m_my_alias_enum && m_my_enum == x.m_my_enum && m_my_sequence_octet == x.m_my_sequence_octet && m_my_sequence_struct == x.m_my_sequence_struct && m_my_array_octet == x.m_my_array_octet && m_my_octet_array_500 == x.m_my_octet_array_500 && m_my_array_struct == x.m_my_array_struct && m_my_map_octet_short == x.m_my_map_octet_short && m_my_map_long_struct == x.m_my_map_long_struct && m_my_map_long_seq_octet == x.m_my_map_long_seq_octet && m_my_map_long_octet_array_500 == x.m_my_map_long_octet_array_500 && m_my_map_long_lol_type == x.m_my_map_long_lol_type && m_my_small_string_8 == x.m_my_small_string_8 && m_my_small_string_16 == x.m_my_small_string_16 && m_my_large_string_8 == x.m_my_large_string_8 && m_my_large_string_16 == x.m_my_large_string_16 && m_my_array_string == x.m_my_array_string && m_multi_alias_array_42 == x.m_multi_alias_array_42 && m_my_array_arrays == x.m_my_array_arrays && m_my_sequences_array == x.m_my_sequences_array);
}

bool ComplexStruct::operator !=(
        const ComplexStruct& x) const
{
    return !(*this == x);
}

size_t ComplexStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ComplexStruct_max_cdr_typesize;
}

size_t ComplexStruct::getCdrSerializedSize(
        const ComplexStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += BasicStruct::getCdrSerializedSize(data.my_basic_struct(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.my_sequence_octet().size() > 0)
    {
        current_alignment += (data.my_sequence_octet().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.my_sequence_struct().size(); ++a)
    {
        current_alignment += BasicStruct::getCdrSerializedSize(data.my_sequence_struct().at(a), current_alignment);}

    current_alignment += ((500 * 5 * 4) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += ((500) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    for(size_t a = 0; a < data.my_array_struct().size(); ++a)
    {
            current_alignment += BasicStruct::getCdrSerializedSize(data.my_array_struct().at(a), current_alignment);
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map_octet_short())
    {
        (void)a;

            current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

            current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);

    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map_long_struct())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += BasicStruct::getCdrSerializedSize(a.second, current_alignment);
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map_long_seq_octet())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


            for(size_t b = 0; b < a.second.size(); ++b)
            {
                current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

                if (a.second.at(b).size() > 0)
                {
                    current_alignment += (a.second.at(b).size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
                }


            }
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map_long_octet_array_500())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += ((500) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    for(auto a : data.my_map_long_lol_type())
    {
        (void)a;

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            for(auto b : a.second)
            {
                (void)b;

                    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


                    for(size_t c = 0; c < b.second.size(); ++c)
                    {
                            current_alignment += BasicStruct::getCdrSerializedSize(b.second.at(c), current_alignment);
                    }}
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_small_string_8().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + (data.my_small_string_16().size()) * 4; // 32 bits

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_large_string_8().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + (data.my_large_string_16().size()) * 4; // 32 bits


    for(size_t a = 0; a < data.my_array_string().size(); ++a)
    {

        for(size_t b = 0; b < data.my_array_string().at(a).size(); ++b)
        {
                current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.my_array_string().at(a).at(b).size() + 1;

        }
    }
    current_alignment += ((42) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.my_array_arrays().size(); ++a)
    {
            current_alignment += ((2) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    for(size_t a = 0; a < data.my_sequences_array().size(); ++a)
    {
            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

            if (data.my_sequences_array().at(a).size() > 0)
            {
                current_alignment += (data.my_sequences_array().at(a).size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
            }


    }

    return current_alignment - initial_alignment;
}

void ComplexStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_octet;
    scdr << m_my_basic_struct;
    scdr << (uint32_t)m_my_alias_enum;
    scdr << (uint32_t)m_my_enum;
    scdr << m_my_sequence_octet;
    scdr << m_my_sequence_struct;
    scdr << m_my_array_octet;

    scdr << m_my_octet_array_500;

    scdr << m_my_array_struct;

    scdr << m_my_map_octet_short;
    scdr << m_my_map_long_struct;
    scdr << m_my_map_long_seq_octet;
    scdr << m_my_map_long_octet_array_500;
    scdr << m_my_map_long_lol_type;
    scdr << m_my_small_string_8.c_str();
    scdr << m_my_small_string_16;
    scdr << m_my_large_string_8.c_str();
    scdr << m_my_large_string_16;
    for (uint32_t d = 0; d < m_my_array_string.size(); ++d)
    {
        for (const auto& str : m_my_array_string[d])
        {
            scdr << str.c_str();
        }

    }


    scdr.serializeArray(reinterpret_cast<const uint32_t*>(m_multi_alias_array_42.data()), m_multi_alias_array_42.size());


    scdr << m_my_array_arrays;

    scdr << m_my_sequences_array;


}

void ComplexStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_octet;
    dcdr >> m_my_basic_struct;
    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_my_alias_enum = (MyAliasEnum)enum_value;
    }

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_my_enum = (MyEnum)enum_value;
    }

    dcdr >> m_my_sequence_octet;
    dcdr >> m_my_sequence_struct;
    dcdr >> m_my_array_octet;

    dcdr >> m_my_octet_array_500;

    dcdr >> m_my_array_struct;

    dcdr >> m_my_map_octet_short;
    dcdr >> m_my_map_long_struct;
    dcdr >> m_my_map_long_seq_octet;
    dcdr >> m_my_map_long_octet_array_500;
    dcdr >> m_my_map_long_lol_type;
    {
        std::string aux;
        dcdr >> aux;
        m_my_small_string_8 = aux.c_str();
    }
    dcdr >> m_my_small_string_16;
    {
        std::string aux;
        dcdr >> aux;
        m_my_large_string_8 = aux.c_str();
    }
    dcdr >> m_my_large_string_16;
    for (uint32_t f = 0; f < m_my_array_string.size(); ++f)
    {
        for (auto& str : m_my_array_string[f])
        {
            {
                std::string aux_str;
                dcdr >> aux_str;
                str = aux_str.c_str();
            }
        }

    }


    dcdr.deserializeArray(reinterpret_cast<uint32_t*>(m_multi_alias_array_42.data()), m_multi_alias_array_42.size());


    dcdr >> m_my_array_arrays;

    dcdr >> m_my_sequences_array;

}

/*!
 * @brief This function sets a value in member my_octet
 * @param _my_octet New value for member my_octet
 */
void ComplexStruct::my_octet(
        uint8_t _my_octet)
{
    m_my_octet = _my_octet;
}

/*!
 * @brief This function returns the value of member my_octet
 * @return Value of member my_octet
 */
uint8_t ComplexStruct::my_octet() const
{
    return m_my_octet;
}

/*!
 * @brief This function returns a reference to member my_octet
 * @return Reference to member my_octet
 */
uint8_t& ComplexStruct::my_octet()
{
    return m_my_octet;
}

/*!
 * @brief This function copies the value in member my_basic_struct
 * @param _my_basic_struct New value to be copied in member my_basic_struct
 */
void ComplexStruct::my_basic_struct(
        const BasicStruct& _my_basic_struct)
{
    m_my_basic_struct = _my_basic_struct;
}

/*!
 * @brief This function moves the value in member my_basic_struct
 * @param _my_basic_struct New value to be moved in member my_basic_struct
 */
void ComplexStruct::my_basic_struct(
        BasicStruct&& _my_basic_struct)
{
    m_my_basic_struct = std::move(_my_basic_struct);
}

/*!
 * @brief This function returns a constant reference to member my_basic_struct
 * @return Constant reference to member my_basic_struct
 */
const BasicStruct& ComplexStruct::my_basic_struct() const
{
    return m_my_basic_struct;
}

/*!
 * @brief This function returns a reference to member my_basic_struct
 * @return Reference to member my_basic_struct
 */
BasicStruct& ComplexStruct::my_basic_struct()
{
    return m_my_basic_struct;
}
/*!
 * @brief This function sets a value in member my_alias_enum
 * @param _my_alias_enum New value for member my_alias_enum
 */
void ComplexStruct::my_alias_enum(
        MyAliasEnum _my_alias_enum)
{
    m_my_alias_enum = _my_alias_enum;
}

/*!
 * @brief This function returns the value of member my_alias_enum
 * @return Value of member my_alias_enum
 */
MyAliasEnum ComplexStruct::my_alias_enum() const
{
    return m_my_alias_enum;
}

/*!
 * @brief This function returns a reference to member my_alias_enum
 * @return Reference to member my_alias_enum
 */
MyAliasEnum& ComplexStruct::my_alias_enum()
{
    return m_my_alias_enum;
}

/*!
 * @brief This function sets a value in member my_enum
 * @param _my_enum New value for member my_enum
 */
void ComplexStruct::my_enum(
        MyEnum _my_enum)
{
    m_my_enum = _my_enum;
}

/*!
 * @brief This function returns the value of member my_enum
 * @return Value of member my_enum
 */
MyEnum ComplexStruct::my_enum() const
{
    return m_my_enum;
}

/*!
 * @brief This function returns a reference to member my_enum
 * @return Reference to member my_enum
 */
MyEnum& ComplexStruct::my_enum()
{
    return m_my_enum;
}

/*!
 * @brief This function copies the value in member my_sequence_octet
 * @param _my_sequence_octet New value to be copied in member my_sequence_octet
 */
void ComplexStruct::my_sequence_octet(
        const std::vector<uint8_t>& _my_sequence_octet)
{
    m_my_sequence_octet = _my_sequence_octet;
}

/*!
 * @brief This function moves the value in member my_sequence_octet
 * @param _my_sequence_octet New value to be moved in member my_sequence_octet
 */
void ComplexStruct::my_sequence_octet(
        std::vector<uint8_t>&& _my_sequence_octet)
{
    m_my_sequence_octet = std::move(_my_sequence_octet);
}

/*!
 * @brief This function returns a constant reference to member my_sequence_octet
 * @return Constant reference to member my_sequence_octet
 */
const std::vector<uint8_t>& ComplexStruct::my_sequence_octet() const
{
    return m_my_sequence_octet;
}

/*!
 * @brief This function returns a reference to member my_sequence_octet
 * @return Reference to member my_sequence_octet
 */
std::vector<uint8_t>& ComplexStruct::my_sequence_octet()
{
    return m_my_sequence_octet;
}
/*!
 * @brief This function copies the value in member my_sequence_struct
 * @param _my_sequence_struct New value to be copied in member my_sequence_struct
 */
void ComplexStruct::my_sequence_struct(
        const std::vector<BasicStruct>& _my_sequence_struct)
{
    m_my_sequence_struct = _my_sequence_struct;
}

/*!
 * @brief This function moves the value in member my_sequence_struct
 * @param _my_sequence_struct New value to be moved in member my_sequence_struct
 */
void ComplexStruct::my_sequence_struct(
        std::vector<BasicStruct>&& _my_sequence_struct)
{
    m_my_sequence_struct = std::move(_my_sequence_struct);
}

/*!
 * @brief This function returns a constant reference to member my_sequence_struct
 * @return Constant reference to member my_sequence_struct
 */
const std::vector<BasicStruct>& ComplexStruct::my_sequence_struct() const
{
    return m_my_sequence_struct;
}

/*!
 * @brief This function returns a reference to member my_sequence_struct
 * @return Reference to member my_sequence_struct
 */
std::vector<BasicStruct>& ComplexStruct::my_sequence_struct()
{
    return m_my_sequence_struct;
}
/*!
 * @brief This function copies the value in member my_array_octet
 * @param _my_array_octet New value to be copied in member my_array_octet
 */
void ComplexStruct::my_array_octet(
        const std::array<std::array<std::array<char, 4>, 5>, 500>& _my_array_octet)
{
    m_my_array_octet = _my_array_octet;
}

/*!
 * @brief This function moves the value in member my_array_octet
 * @param _my_array_octet New value to be moved in member my_array_octet
 */
void ComplexStruct::my_array_octet(
        std::array<std::array<std::array<char, 4>, 5>, 500>&& _my_array_octet)
{
    m_my_array_octet = std::move(_my_array_octet);
}

/*!
 * @brief This function returns a constant reference to member my_array_octet
 * @return Constant reference to member my_array_octet
 */
const std::array<std::array<std::array<char, 4>, 5>, 500>& ComplexStruct::my_array_octet() const
{
    return m_my_array_octet;
}

/*!
 * @brief This function returns a reference to member my_array_octet
 * @return Reference to member my_array_octet
 */
std::array<std::array<std::array<char, 4>, 5>, 500>& ComplexStruct::my_array_octet()
{
    return m_my_array_octet;
}
/*!
 * @brief This function copies the value in member my_octet_array_500
 * @param _my_octet_array_500 New value to be copied in member my_octet_array_500
 */
void ComplexStruct::my_octet_array_500(
        const MyOctetArray500& _my_octet_array_500)
{
    m_my_octet_array_500 = _my_octet_array_500;
}

/*!
 * @brief This function moves the value in member my_octet_array_500
 * @param _my_octet_array_500 New value to be moved in member my_octet_array_500
 */
void ComplexStruct::my_octet_array_500(
        MyOctetArray500&& _my_octet_array_500)
{
    m_my_octet_array_500 = std::move(_my_octet_array_500);
}

/*!
 * @brief This function returns a constant reference to member my_octet_array_500
 * @return Constant reference to member my_octet_array_500
 */
const MyOctetArray500& ComplexStruct::my_octet_array_500() const
{
    return m_my_octet_array_500;
}

/*!
 * @brief This function returns a reference to member my_octet_array_500
 * @return Reference to member my_octet_array_500
 */
MyOctetArray500& ComplexStruct::my_octet_array_500()
{
    return m_my_octet_array_500;
}
/*!
 * @brief This function copies the value in member my_array_struct
 * @param _my_array_struct New value to be copied in member my_array_struct
 */
void ComplexStruct::my_array_struct(
        const std::array<BasicStruct, 5>& _my_array_struct)
{
    m_my_array_struct = _my_array_struct;
}

/*!
 * @brief This function moves the value in member my_array_struct
 * @param _my_array_struct New value to be moved in member my_array_struct
 */
void ComplexStruct::my_array_struct(
        std::array<BasicStruct, 5>&& _my_array_struct)
{
    m_my_array_struct = std::move(_my_array_struct);
}

/*!
 * @brief This function returns a constant reference to member my_array_struct
 * @return Constant reference to member my_array_struct
 */
const std::array<BasicStruct, 5>& ComplexStruct::my_array_struct() const
{
    return m_my_array_struct;
}

/*!
 * @brief This function returns a reference to member my_array_struct
 * @return Reference to member my_array_struct
 */
std::array<BasicStruct, 5>& ComplexStruct::my_array_struct()
{
    return m_my_array_struct;
}
/*!
 * @brief This function copies the value in member my_map_octet_short
 * @param _my_map_octet_short New value to be copied in member my_map_octet_short
 */
void ComplexStruct::my_map_octet_short(
        const std::map<uint8_t, int16_t>& _my_map_octet_short)
{
    m_my_map_octet_short = _my_map_octet_short;
}

/*!
 * @brief This function moves the value in member my_map_octet_short
 * @param _my_map_octet_short New value to be moved in member my_map_octet_short
 */
void ComplexStruct::my_map_octet_short(
        std::map<uint8_t, int16_t>&& _my_map_octet_short)
{
    m_my_map_octet_short = std::move(_my_map_octet_short);
}

/*!
 * @brief This function returns a constant reference to member my_map_octet_short
 * @return Constant reference to member my_map_octet_short
 */
const std::map<uint8_t, int16_t>& ComplexStruct::my_map_octet_short() const
{
    return m_my_map_octet_short;
}

/*!
 * @brief This function returns a reference to member my_map_octet_short
 * @return Reference to member my_map_octet_short
 */
std::map<uint8_t, int16_t>& ComplexStruct::my_map_octet_short()
{
    return m_my_map_octet_short;
}
/*!
 * @brief This function copies the value in member my_map_long_struct
 * @param _my_map_long_struct New value to be copied in member my_map_long_struct
 */
void ComplexStruct::my_map_long_struct(
        const std::map<int32_t, BasicStruct>& _my_map_long_struct)
{
    m_my_map_long_struct = _my_map_long_struct;
}

/*!
 * @brief This function moves the value in member my_map_long_struct
 * @param _my_map_long_struct New value to be moved in member my_map_long_struct
 */
void ComplexStruct::my_map_long_struct(
        std::map<int32_t, BasicStruct>&& _my_map_long_struct)
{
    m_my_map_long_struct = std::move(_my_map_long_struct);
}

/*!
 * @brief This function returns a constant reference to member my_map_long_struct
 * @return Constant reference to member my_map_long_struct
 */
const std::map<int32_t, BasicStruct>& ComplexStruct::my_map_long_struct() const
{
    return m_my_map_long_struct;
}

/*!
 * @brief This function returns a reference to member my_map_long_struct
 * @return Reference to member my_map_long_struct
 */
std::map<int32_t, BasicStruct>& ComplexStruct::my_map_long_struct()
{
    return m_my_map_long_struct;
}
/*!
 * @brief This function copies the value in member my_map_long_seq_octet
 * @param _my_map_long_seq_octet New value to be copied in member my_map_long_seq_octet
 */
void ComplexStruct::my_map_long_seq_octet(
        const std::map<int32_t, std::vector<std::vector<uint8_t>>>& _my_map_long_seq_octet)
{
    m_my_map_long_seq_octet = _my_map_long_seq_octet;
}

/*!
 * @brief This function moves the value in member my_map_long_seq_octet
 * @param _my_map_long_seq_octet New value to be moved in member my_map_long_seq_octet
 */
void ComplexStruct::my_map_long_seq_octet(
        std::map<int32_t, std::vector<std::vector<uint8_t>>>&& _my_map_long_seq_octet)
{
    m_my_map_long_seq_octet = std::move(_my_map_long_seq_octet);
}

/*!
 * @brief This function returns a constant reference to member my_map_long_seq_octet
 * @return Constant reference to member my_map_long_seq_octet
 */
const std::map<int32_t, std::vector<std::vector<uint8_t>>>& ComplexStruct::my_map_long_seq_octet() const
{
    return m_my_map_long_seq_octet;
}

/*!
 * @brief This function returns a reference to member my_map_long_seq_octet
 * @return Reference to member my_map_long_seq_octet
 */
std::map<int32_t, std::vector<std::vector<uint8_t>>>& ComplexStruct::my_map_long_seq_octet()
{
    return m_my_map_long_seq_octet;
}
/*!
 * @brief This function copies the value in member my_map_long_octet_array_500
 * @param _my_map_long_octet_array_500 New value to be copied in member my_map_long_octet_array_500
 */
void ComplexStruct::my_map_long_octet_array_500(
        const std::map<int32_t, MyOctetArray500>& _my_map_long_octet_array_500)
{
    m_my_map_long_octet_array_500 = _my_map_long_octet_array_500;
}

/*!
 * @brief This function moves the value in member my_map_long_octet_array_500
 * @param _my_map_long_octet_array_500 New value to be moved in member my_map_long_octet_array_500
 */
void ComplexStruct::my_map_long_octet_array_500(
        std::map<int32_t, MyOctetArray500>&& _my_map_long_octet_array_500)
{
    m_my_map_long_octet_array_500 = std::move(_my_map_long_octet_array_500);
}

/*!
 * @brief This function returns a constant reference to member my_map_long_octet_array_500
 * @return Constant reference to member my_map_long_octet_array_500
 */
const std::map<int32_t, MyOctetArray500>& ComplexStruct::my_map_long_octet_array_500() const
{
    return m_my_map_long_octet_array_500;
}

/*!
 * @brief This function returns a reference to member my_map_long_octet_array_500
 * @return Reference to member my_map_long_octet_array_500
 */
std::map<int32_t, MyOctetArray500>& ComplexStruct::my_map_long_octet_array_500()
{
    return m_my_map_long_octet_array_500;
}
/*!
 * @brief This function copies the value in member my_map_long_lol_type
 * @param _my_map_long_lol_type New value to be copied in member my_map_long_lol_type
 */
void ComplexStruct::my_map_long_lol_type(
        const std::map<int32_t, std::map<uint8_t, BSAlias5>>& _my_map_long_lol_type)
{
    m_my_map_long_lol_type = _my_map_long_lol_type;
}

/*!
 * @brief This function moves the value in member my_map_long_lol_type
 * @param _my_map_long_lol_type New value to be moved in member my_map_long_lol_type
 */
void ComplexStruct::my_map_long_lol_type(
        std::map<int32_t, std::map<uint8_t, BSAlias5>>&& _my_map_long_lol_type)
{
    m_my_map_long_lol_type = std::move(_my_map_long_lol_type);
}

/*!
 * @brief This function returns a constant reference to member my_map_long_lol_type
 * @return Constant reference to member my_map_long_lol_type
 */
const std::map<int32_t, std::map<uint8_t, BSAlias5>>& ComplexStruct::my_map_long_lol_type() const
{
    return m_my_map_long_lol_type;
}

/*!
 * @brief This function returns a reference to member my_map_long_lol_type
 * @return Reference to member my_map_long_lol_type
 */
std::map<int32_t, std::map<uint8_t, BSAlias5>>& ComplexStruct::my_map_long_lol_type()
{
    return m_my_map_long_lol_type;
}
/*!
 * @brief This function copies the value in member my_small_string_8
 * @param _my_small_string_8 New value to be copied in member my_small_string_8
 */
void ComplexStruct::my_small_string_8(
        const eprosima::fastrtps::fixed_string<128>& _my_small_string_8)
{
    m_my_small_string_8 = _my_small_string_8;
}

/*!
 * @brief This function moves the value in member my_small_string_8
 * @param _my_small_string_8 New value to be moved in member my_small_string_8
 */
void ComplexStruct::my_small_string_8(
        eprosima::fastrtps::fixed_string<128>&& _my_small_string_8)
{
    m_my_small_string_8 = std::move(_my_small_string_8);
}

/*!
 * @brief This function returns a constant reference to member my_small_string_8
 * @return Constant reference to member my_small_string_8
 */
const eprosima::fastrtps::fixed_string<128>& ComplexStruct::my_small_string_8() const
{
    return m_my_small_string_8;
}

/*!
 * @brief This function returns a reference to member my_small_string_8
 * @return Reference to member my_small_string_8
 */
eprosima::fastrtps::fixed_string<128>& ComplexStruct::my_small_string_8()
{
    return m_my_small_string_8;
}
/*!
 * @brief This function copies the value in member my_small_string_16
 * @param _my_small_string_16 New value to be copied in member my_small_string_16
 */
void ComplexStruct::my_small_string_16(
        const std::wstring& _my_small_string_16)
{
    m_my_small_string_16 = _my_small_string_16;
}

/*!
 * @brief This function moves the value in member my_small_string_16
 * @param _my_small_string_16 New value to be moved in member my_small_string_16
 */
void ComplexStruct::my_small_string_16(
        std::wstring&& _my_small_string_16)
{
    m_my_small_string_16 = std::move(_my_small_string_16);
}

/*!
 * @brief This function returns a constant reference to member my_small_string_16
 * @return Constant reference to member my_small_string_16
 */
const std::wstring& ComplexStruct::my_small_string_16() const
{
    return m_my_small_string_16;
}

/*!
 * @brief This function returns a reference to member my_small_string_16
 * @return Reference to member my_small_string_16
 */
std::wstring& ComplexStruct::my_small_string_16()
{
    return m_my_small_string_16;
}
/*!
 * @brief This function copies the value in member my_large_string_8
 * @param _my_large_string_8 New value to be copied in member my_large_string_8
 */
void ComplexStruct::my_large_string_8(
        const eprosima::fastrtps::fixed_string<500>& _my_large_string_8)
{
    m_my_large_string_8 = _my_large_string_8;
}

/*!
 * @brief This function moves the value in member my_large_string_8
 * @param _my_large_string_8 New value to be moved in member my_large_string_8
 */
void ComplexStruct::my_large_string_8(
        eprosima::fastrtps::fixed_string<500>&& _my_large_string_8)
{
    m_my_large_string_8 = std::move(_my_large_string_8);
}

/*!
 * @brief This function returns a constant reference to member my_large_string_8
 * @return Constant reference to member my_large_string_8
 */
const eprosima::fastrtps::fixed_string<500>& ComplexStruct::my_large_string_8() const
{
    return m_my_large_string_8;
}

/*!
 * @brief This function returns a reference to member my_large_string_8
 * @return Reference to member my_large_string_8
 */
eprosima::fastrtps::fixed_string<500>& ComplexStruct::my_large_string_8()
{
    return m_my_large_string_8;
}
/*!
 * @brief This function copies the value in member my_large_string_16
 * @param _my_large_string_16 New value to be copied in member my_large_string_16
 */
void ComplexStruct::my_large_string_16(
        const std::wstring& _my_large_string_16)
{
    m_my_large_string_16 = _my_large_string_16;
}

/*!
 * @brief This function moves the value in member my_large_string_16
 * @param _my_large_string_16 New value to be moved in member my_large_string_16
 */
void ComplexStruct::my_large_string_16(
        std::wstring&& _my_large_string_16)
{
    m_my_large_string_16 = std::move(_my_large_string_16);
}

/*!
 * @brief This function returns a constant reference to member my_large_string_16
 * @return Constant reference to member my_large_string_16
 */
const std::wstring& ComplexStruct::my_large_string_16() const
{
    return m_my_large_string_16;
}

/*!
 * @brief This function returns a reference to member my_large_string_16
 * @return Reference to member my_large_string_16
 */
std::wstring& ComplexStruct::my_large_string_16()
{
    return m_my_large_string_16;
}
/*!
 * @brief This function copies the value in member my_array_string
 * @param _my_array_string New value to be copied in member my_array_string
 */
void ComplexStruct::my_array_string(
        const std::array<std::array<eprosima::fastrtps::fixed_string<75>, 5>, 5>& _my_array_string)
{
    m_my_array_string = _my_array_string;
}

/*!
 * @brief This function moves the value in member my_array_string
 * @param _my_array_string New value to be moved in member my_array_string
 */
void ComplexStruct::my_array_string(
        std::array<std::array<eprosima::fastrtps::fixed_string<75>, 5>, 5>&& _my_array_string)
{
    m_my_array_string = std::move(_my_array_string);
}

/*!
 * @brief This function returns a constant reference to member my_array_string
 * @return Constant reference to member my_array_string
 */
const std::array<std::array<eprosima::fastrtps::fixed_string<75>, 5>, 5>& ComplexStruct::my_array_string() const
{
    return m_my_array_string;
}

/*!
 * @brief This function returns a reference to member my_array_string
 * @return Reference to member my_array_string
 */
std::array<std::array<eprosima::fastrtps::fixed_string<75>, 5>, 5>& ComplexStruct::my_array_string()
{
    return m_my_array_string;
}
/*!
 * @brief This function copies the value in member multi_alias_array_42
 * @param _multi_alias_array_42 New value to be copied in member multi_alias_array_42
 */
void ComplexStruct::multi_alias_array_42(
        const MA3& _multi_alias_array_42)
{
    m_multi_alias_array_42 = _multi_alias_array_42;
}

/*!
 * @brief This function moves the value in member multi_alias_array_42
 * @param _multi_alias_array_42 New value to be moved in member multi_alias_array_42
 */
void ComplexStruct::multi_alias_array_42(
        MA3&& _multi_alias_array_42)
{
    m_multi_alias_array_42 = std::move(_multi_alias_array_42);
}

/*!
 * @brief This function returns a constant reference to member multi_alias_array_42
 * @return Constant reference to member multi_alias_array_42
 */
const MA3& ComplexStruct::multi_alias_array_42() const
{
    return m_multi_alias_array_42;
}

/*!
 * @brief This function returns a reference to member multi_alias_array_42
 * @return Reference to member multi_alias_array_42
 */
MA3& ComplexStruct::multi_alias_array_42()
{
    return m_multi_alias_array_42;
}
/*!
 * @brief This function copies the value in member my_array_arrays
 * @param _my_array_arrays New value to be copied in member my_array_arrays
 */
void ComplexStruct::my_array_arrays(
        const std::array<MyMiniArray, 5>& _my_array_arrays)
{
    m_my_array_arrays = _my_array_arrays;
}

/*!
 * @brief This function moves the value in member my_array_arrays
 * @param _my_array_arrays New value to be moved in member my_array_arrays
 */
void ComplexStruct::my_array_arrays(
        std::array<MyMiniArray, 5>&& _my_array_arrays)
{
    m_my_array_arrays = std::move(_my_array_arrays);
}

/*!
 * @brief This function returns a constant reference to member my_array_arrays
 * @return Constant reference to member my_array_arrays
 */
const std::array<MyMiniArray, 5>& ComplexStruct::my_array_arrays() const
{
    return m_my_array_arrays;
}

/*!
 * @brief This function returns a reference to member my_array_arrays
 * @return Reference to member my_array_arrays
 */
std::array<MyMiniArray, 5>& ComplexStruct::my_array_arrays()
{
    return m_my_array_arrays;
}
/*!
 * @brief This function copies the value in member my_sequences_array
 * @param _my_sequences_array New value to be copied in member my_sequences_array
 */
void ComplexStruct::my_sequences_array(
        const std::array<MySequenceLong, 23>& _my_sequences_array)
{
    m_my_sequences_array = _my_sequences_array;
}

/*!
 * @brief This function moves the value in member my_sequences_array
 * @param _my_sequences_array New value to be moved in member my_sequences_array
 */
void ComplexStruct::my_sequences_array(
        std::array<MySequenceLong, 23>&& _my_sequences_array)
{
    m_my_sequences_array = std::move(_my_sequences_array);
}

/*!
 * @brief This function returns a constant reference to member my_sequences_array
 * @return Constant reference to member my_sequences_array
 */
const std::array<MySequenceLong, 23>& ComplexStruct::my_sequences_array() const
{
    return m_my_sequences_array;
}

/*!
 * @brief This function returns a reference to member my_sequences_array
 * @return Reference to member my_sequences_array
 */
std::array<MySequenceLong, 23>& ComplexStruct::my_sequences_array()
{
    return m_my_sequences_array;
}


size_t ComplexStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ComplexStruct_max_key_cdr_typesize;
}

bool ComplexStruct::isKeyDefined()
{
    return false;
}

void ComplexStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


MyUnion::MyUnion()
{
    m__d = ::A;
    // BasicStruct m_basic

    // ComplexStruct m_complex

}

MyUnion::~MyUnion()
{
}

MyUnion::MyUnion(
        const MyUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case ::A:
        m_basic = x.m_basic;
        break;
        case ::B:
        case ::C:
        m_complex = x.m_complex;
        break;
        default:
        break;
    }
}

MyUnion::MyUnion(
        MyUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case ::A:
        m_basic = std::move(x.m_basic);
        break;
        case ::B:
        case ::C:
        m_complex = std::move(x.m_complex);
        break;
        default:
        break;
    }
}

MyUnion& MyUnion::operator =(
        const MyUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case ::A:
        m_basic = x.m_basic;
        break;
        case ::B:
        case ::C:
        m_complex = x.m_complex;
        break;
        default:
        break;
    }

    return *this;
}

MyUnion& MyUnion::operator =(
        MyUnion&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case ::A:
        m_basic = std::move(x.m_basic);
        break;
        case ::B:
        case ::C:
        m_complex = std::move(x.m_complex);
        break;
        default:
        break;
    }

    return *this;
}

bool MyUnion::operator ==(
        const MyUnion& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case ::A:
            return (m_basic == x.m_basic);
            break;
        case ::B:
        case ::C:
            return (m_complex == x.m_complex);
            break;
        default:
        break;
    }
    return false;
}

bool MyUnion::operator !=(
        const MyUnion& x) const
{
    return !(*this == x);
}

void MyUnion::_d(
        MyEnum __d)
{
    bool b = false;

    switch(m__d)
    {
        case ::A:
        switch(__d)
        {
            case ::A:
            b = true;
            break;
            default:
            break;
        }
        break;
        case ::B:
        case ::C:
        switch(__d)
        {
            case ::B:
            case ::C:
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

MyEnum MyUnion::_d() const
{
    return m__d;
}

MyEnum& MyUnion::_d()
{
    return m__d;
}

void MyUnion::basic(
        const BasicStruct& _basic)
{
    m_basic = _basic;
    m__d = ::A;
}

void MyUnion::basic(
        BasicStruct&& _basic)
{
    m_basic = std::move(_basic);
    m__d = ::A;
}

const BasicStruct& MyUnion::basic() const
{
    bool b = false;

    switch(m__d)
    {
        case ::A:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_basic;
}

BasicStruct& MyUnion::basic()
{
    bool b = false;

    switch(m__d)
    {
        case ::A:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_basic;
}
void MyUnion::complex(
        const ComplexStruct& _complex)
{
    m_complex = _complex;
    m__d = ::B;
}

void MyUnion::complex(
        ComplexStruct&& _complex)
{
    m_complex = std::move(_complex);
    m__d = ::B;
}

const ComplexStruct& MyUnion::complex() const
{
    bool b = false;

    switch(m__d)
    {
        case ::B:
        case ::C:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_complex;
}

ComplexStruct& MyUnion::complex()
{
    bool b = false;

    switch(m__d)
    {
        case ::B:
        case ::C:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_complex;
}

// TODO(Ricardo) Review
size_t MyUnion::getCdrSerializedSize(
        const MyUnion& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
        case ::A:
        current_alignment += BasicStruct::getCdrSerializedSize(data.basic(), current_alignment);
        break;
        case ::B:
        case ::C:
        current_alignment += ComplexStruct::getCdrSerializedSize(data.complex(), current_alignment);
        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void MyUnion::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << (uint32_t)m__d;

    switch(m__d)
    {
        case ::A:
        scdr << m_basic;

        break;
        case ::B:
        case ::C:
        scdr << m_complex;

        break;
        default:
        break;
    }
}

void MyUnion::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m__d = (MyEnum)enum_value;
    }


    switch(m__d)
    {
        case ::A:
        dcdr >> m_basic;
        break;
        case ::B:
        case ::C:
        dcdr >> m_complex;
        break;
        default:
        break;
    }
}


MyUnion2::MyUnion2()
{
    m__d = A;
    // long m_uno
    m_uno = 0;
    // string m_imString
    m_imString ="";
    // long m_tres
    m_tres = 0;
}

MyUnion2::~MyUnion2()
{
}

MyUnion2::MyUnion2(
        const MyUnion2& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_uno = x.m_uno;
        break;
        case B:
        m_imString = x.m_imString;
        break;
        case C:
        m_tres = x.m_tres;
        break;
        default:
        break;
    }
}

MyUnion2::MyUnion2(
        MyUnion2&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_uno = x.m_uno;
        break;
        case B:
        m_imString = std::move(x.m_imString);
        break;
        case C:
        m_tres = x.m_tres;
        break;
        default:
        break;
    }
}

MyUnion2& MyUnion2::operator =(
        const MyUnion2& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_uno = x.m_uno;
        break;
        case B:
        m_imString = x.m_imString;
        break;
        case C:
        m_tres = x.m_tres;
        break;
        default:
        break;
    }

    return *this;
}

MyUnion2& MyUnion2::operator =(
        MyUnion2&& x) noexcept
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_uno = x.m_uno;
        break;
        case B:
        m_imString = std::move(x.m_imString);
        break;
        case C:
        m_tres = x.m_tres;
        break;
        default:
        break;
    }

    return *this;
}

bool MyUnion2::operator ==(
        const MyUnion2& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case A:
            return (m_uno == x.m_uno);
            break;
        case B:
            return (m_imString == x.m_imString);
            break;
        case C:
            return (m_tres == x.m_tres);
            break;
        default:
        break;
    }
    return false;
}

bool MyUnion2::operator !=(
        const MyUnion2& x) const
{
    return !(*this == x);
}

void MyUnion2::_d(
        uint8_t __d)
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

uint8_t MyUnion2::_d() const
{
    return m__d;
}

uint8_t& MyUnion2::_d()
{
    return m__d;
}

void MyUnion2::uno(
        int32_t _uno)
{
    m_uno = _uno;
    m__d = A;
}

int32_t MyUnion2::uno() const
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

    return m_uno;
}

int32_t& MyUnion2::uno()
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

    return m_uno;
}
void MyUnion2::imString(
        const std::string& _imString)
{
    m_imString = _imString;
    m__d = B;
}

void MyUnion2::imString(
        std::string&& _imString)
{
    m_imString = std::move(_imString);
    m__d = B;
}

const std::string& MyUnion2::imString() const
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

    return m_imString;
}

std::string& MyUnion2::imString()
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

    return m_imString;
}
void MyUnion2::tres(
        int32_t _tres)
{
    m_tres = _tres;
    m__d = C;
}

int32_t MyUnion2::tres() const
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

    return m_tres;
}

int32_t& MyUnion2::tres()
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

    return m_tres;
}

// TODO(Ricardo) Review
size_t MyUnion2::getCdrSerializedSize(
        const MyUnion2& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    switch(data.m__d)
    {
        case A:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        case B:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.imString().size() + 1;
        break;
        case C:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void MyUnion2::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case A:
        scdr << m_uno;

        break;
        case B:
        scdr << m_imString.c_str();

        break;
        case C:
        scdr << m_tres;

        break;
        default:
        break;
    }
}

void MyUnion2::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case A:
        dcdr >> m_uno;
        break;
        case B:
        dcdr >> m_imString;break;
        case C:
        dcdr >> m_tres;
        break;
        default:
        break;
    }
}


CompleteStruct::CompleteStruct()
{
    // MyUnion m_my_union

    // MyUnion2 m_my_union_2


    // Just to register all known types
    registerTestTypes();
}

CompleteStruct::~CompleteStruct()
{


}

CompleteStruct::CompleteStruct(
        const CompleteStruct& x)
{
    m_my_union = x.m_my_union;
    m_my_union_2 = x.m_my_union_2;
}

CompleteStruct::CompleteStruct(
        CompleteStruct&& x) noexcept 
{
    m_my_union = std::move(x.m_my_union);
    m_my_union_2 = std::move(x.m_my_union_2);
}

CompleteStruct& CompleteStruct::operator =(
        const CompleteStruct& x)
{

    m_my_union = x.m_my_union;
    m_my_union_2 = x.m_my_union_2;

    return *this;
}

CompleteStruct& CompleteStruct::operator =(
        CompleteStruct&& x) noexcept
{

    m_my_union = std::move(x.m_my_union);
    m_my_union_2 = std::move(x.m_my_union_2);

    return *this;
}

bool CompleteStruct::operator ==(
        const CompleteStruct& x) const
{

    return (m_my_union == x.m_my_union && m_my_union_2 == x.m_my_union_2);
}

bool CompleteStruct::operator !=(
        const CompleteStruct& x) const
{
    return !(*this == x);
}

size_t CompleteStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return CompleteStruct_max_cdr_typesize;
}

size_t CompleteStruct::getCdrSerializedSize(
        const CompleteStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += MyUnion::getCdrSerializedSize(data.my_union(), current_alignment);
    current_alignment += MyUnion2::getCdrSerializedSize(data.my_union_2(), current_alignment);

    return current_alignment - initial_alignment;
}

void CompleteStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;
    scdr << m_my_union_2;

}

void CompleteStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
    dcdr >> m_my_union_2;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void CompleteStruct::my_union(
        const MyUnion& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void CompleteStruct::my_union(
        MyUnion&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const MyUnion& CompleteStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
MyUnion& CompleteStruct::my_union()
{
    return m_my_union;
}
/*!
 * @brief This function copies the value in member my_union_2
 * @param _my_union_2 New value to be copied in member my_union_2
 */
void CompleteStruct::my_union_2(
        const MyUnion2& _my_union_2)
{
    m_my_union_2 = _my_union_2;
}

/*!
 * @brief This function moves the value in member my_union_2
 * @param _my_union_2 New value to be moved in member my_union_2
 */
void CompleteStruct::my_union_2(
        MyUnion2&& _my_union_2)
{
    m_my_union_2 = std::move(_my_union_2);
}

/*!
 * @brief This function returns a constant reference to member my_union_2
 * @return Constant reference to member my_union_2
 */
const MyUnion2& CompleteStruct::my_union_2() const
{
    return m_my_union_2;
}

/*!
 * @brief This function returns a reference to member my_union_2
 * @return Reference to member my_union_2
 */
MyUnion2& CompleteStruct::my_union_2()
{
    return m_my_union_2;
}


size_t CompleteStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return CompleteStruct_max_key_cdr_typesize;
}

bool CompleteStruct::isKeyDefined()
{
    return false;
}

void CompleteStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


KeyedStruct::KeyedStruct()
{
    // octet m_key
    m_key = 0;
    // BasicStruct m_basic


    // Just to register all known types
    registerTestTypes();
}

KeyedStruct::~KeyedStruct()
{


}

KeyedStruct::KeyedStruct(
        const KeyedStruct& x)
{
    m_key = x.m_key;
    m_basic = x.m_basic;
}

KeyedStruct::KeyedStruct(
        KeyedStruct&& x) noexcept 
{
    m_key = x.m_key;
    m_basic = std::move(x.m_basic);
}

KeyedStruct& KeyedStruct::operator =(
        const KeyedStruct& x)
{

    m_key = x.m_key;
    m_basic = x.m_basic;

    return *this;
}

KeyedStruct& KeyedStruct::operator =(
        KeyedStruct&& x) noexcept
{

    m_key = x.m_key;
    m_basic = std::move(x.m_basic);

    return *this;
}

bool KeyedStruct::operator ==(
        const KeyedStruct& x) const
{

    return (m_key == x.m_key && m_basic == x.m_basic);
}

bool KeyedStruct::operator !=(
        const KeyedStruct& x) const
{
    return !(*this == x);
}

size_t KeyedStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return KeyedStruct_max_cdr_typesize;
}

size_t KeyedStruct::getCdrSerializedSize(
        const KeyedStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += BasicStruct::getCdrSerializedSize(data.basic(), current_alignment);

    return current_alignment - initial_alignment;
}

void KeyedStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_key;
    scdr << m_basic;

}

void KeyedStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_key;
    dcdr >> m_basic;
}

/*!
 * @brief This function sets a value in member key
 * @param _key New value for member key
 */
void KeyedStruct::key(
        uint8_t _key)
{
    m_key = _key;
}

/*!
 * @brief This function returns the value of member key
 * @return Value of member key
 */
uint8_t KeyedStruct::key() const
{
    return m_key;
}

/*!
 * @brief This function returns a reference to member key
 * @return Reference to member key
 */
uint8_t& KeyedStruct::key()
{
    return m_key;
}

/*!
 * @brief This function copies the value in member basic
 * @param _basic New value to be copied in member basic
 */
void KeyedStruct::basic(
        const BasicStruct& _basic)
{
    m_basic = _basic;
}

/*!
 * @brief This function moves the value in member basic
 * @param _basic New value to be moved in member basic
 */
void KeyedStruct::basic(
        BasicStruct&& _basic)
{
    m_basic = std::move(_basic);
}

/*!
 * @brief This function returns a constant reference to member basic
 * @return Constant reference to member basic
 */
const BasicStruct& KeyedStruct::basic() const
{
    return m_basic;
}

/*!
 * @brief This function returns a reference to member basic
 * @return Reference to member basic
 */
BasicStruct& KeyedStruct::basic()
{
    return m_basic;
}


size_t KeyedStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return KeyedStruct_max_key_cdr_typesize;
}

bool KeyedStruct::isKeyDefined()
{
    return true;
}

void KeyedStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
   scdr << m_key;
   
  
}

