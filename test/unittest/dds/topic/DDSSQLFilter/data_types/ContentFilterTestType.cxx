/*!
 * @file ContentFilterTestType.cpp
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

#include "ContentFilterTestType.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define StructType_max_cdr_typesize 336ULL;
#define ContentFilterTestType_max_cdr_typesize 72456ULL;


#define StructType_max_key_cdr_typesize 0ULL;
#define ContentFilterTestType_max_key_cdr_typesize 0ULL;





StructType::StructType()
{
    // char m_char_field
    m_char_field = 0;
    // octet m_uint8_field
    m_uint8_field = 0;
    // short m_int16_field
    m_int16_field = 0;
    // unsigned short m_uint16_field
    m_uint16_field = 0;
    // long m_int32_field
    m_int32_field = 0;
    // unsigned long m_uint32_field
    m_uint32_field = 0;
    // long long m_int64_field
    m_int64_field = 0;
    // unsigned long long m_uint64_field
    m_uint64_field = 0;
    // float m_float_field
    m_float_field = 0.0;
    // double m_double_field
    m_double_field = 0.0;
    // long double m_long_double_field
    m_long_double_field = 0.0;
    // boolean m_bool_field
    m_bool_field = false;
    // string m_string_field
    m_string_field ="";
    // Color m_enum_field
    m_enum_field = ::RED;
    // Material m_enum2_field
    m_enum2_field = ::WOOD;

}

StructType::~StructType()
{















}

StructType::StructType(
        const StructType& x)
{
    m_char_field = x.m_char_field;
    m_uint8_field = x.m_uint8_field;
    m_int16_field = x.m_int16_field;
    m_uint16_field = x.m_uint16_field;
    m_int32_field = x.m_int32_field;
    m_uint32_field = x.m_uint32_field;
    m_int64_field = x.m_int64_field;
    m_uint64_field = x.m_uint64_field;
    m_float_field = x.m_float_field;
    m_double_field = x.m_double_field;
    m_long_double_field = x.m_long_double_field;
    m_bool_field = x.m_bool_field;
    m_string_field = x.m_string_field;
    m_enum_field = x.m_enum_field;
    m_enum2_field = x.m_enum2_field;
}

StructType::StructType(
        StructType&& x) noexcept 
{
    m_char_field = x.m_char_field;
    m_uint8_field = x.m_uint8_field;
    m_int16_field = x.m_int16_field;
    m_uint16_field = x.m_uint16_field;
    m_int32_field = x.m_int32_field;
    m_uint32_field = x.m_uint32_field;
    m_int64_field = x.m_int64_field;
    m_uint64_field = x.m_uint64_field;
    m_float_field = x.m_float_field;
    m_double_field = x.m_double_field;
    m_long_double_field = x.m_long_double_field;
    m_bool_field = x.m_bool_field;
    m_string_field = std::move(x.m_string_field);
    m_enum_field = x.m_enum_field;
    m_enum2_field = x.m_enum2_field;
}

StructType& StructType::operator =(
        const StructType& x)
{

    m_char_field = x.m_char_field;
    m_uint8_field = x.m_uint8_field;
    m_int16_field = x.m_int16_field;
    m_uint16_field = x.m_uint16_field;
    m_int32_field = x.m_int32_field;
    m_uint32_field = x.m_uint32_field;
    m_int64_field = x.m_int64_field;
    m_uint64_field = x.m_uint64_field;
    m_float_field = x.m_float_field;
    m_double_field = x.m_double_field;
    m_long_double_field = x.m_long_double_field;
    m_bool_field = x.m_bool_field;
    m_string_field = x.m_string_field;
    m_enum_field = x.m_enum_field;
    m_enum2_field = x.m_enum2_field;

    return *this;
}

StructType& StructType::operator =(
        StructType&& x) noexcept
{

    m_char_field = x.m_char_field;
    m_uint8_field = x.m_uint8_field;
    m_int16_field = x.m_int16_field;
    m_uint16_field = x.m_uint16_field;
    m_int32_field = x.m_int32_field;
    m_uint32_field = x.m_uint32_field;
    m_int64_field = x.m_int64_field;
    m_uint64_field = x.m_uint64_field;
    m_float_field = x.m_float_field;
    m_double_field = x.m_double_field;
    m_long_double_field = x.m_long_double_field;
    m_bool_field = x.m_bool_field;
    m_string_field = std::move(x.m_string_field);
    m_enum_field = x.m_enum_field;
    m_enum2_field = x.m_enum2_field;

    return *this;
}

bool StructType::operator ==(
        const StructType& x) const
{

    return (m_char_field == x.m_char_field && m_uint8_field == x.m_uint8_field && m_int16_field == x.m_int16_field && m_uint16_field == x.m_uint16_field && m_int32_field == x.m_int32_field && m_uint32_field == x.m_uint32_field && m_int64_field == x.m_int64_field && m_uint64_field == x.m_uint64_field && m_float_field == x.m_float_field && m_double_field == x.m_double_field && m_long_double_field == x.m_long_double_field && m_bool_field == x.m_bool_field && m_string_field == x.m_string_field && m_enum_field == x.m_enum_field && m_enum2_field == x.m_enum2_field);
}

bool StructType::operator !=(
        const StructType& x) const
{
    return !(*this == x);
}

size_t StructType::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StructType_max_cdr_typesize;
}

size_t StructType::getCdrSerializedSize(
        const StructType& data,
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


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 16 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8); // 128 bits, but aligned as 64

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.string_field().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void StructType::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_char_field;
    scdr << m_uint8_field;
    scdr << m_int16_field;
    scdr << m_uint16_field;
    scdr << m_int32_field;
    scdr << m_uint32_field;
    scdr << m_int64_field;
    scdr << m_uint64_field;
    scdr << m_float_field;
    scdr << m_double_field;
    scdr << m_long_double_field;
    scdr << m_bool_field;
    scdr << m_string_field.c_str();
    scdr << (uint32_t)m_enum_field;
    scdr << (uint32_t)m_enum2_field;

}

void StructType::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_char_field;
    dcdr >> m_uint8_field;
    dcdr >> m_int16_field;
    dcdr >> m_uint16_field;
    dcdr >> m_int32_field;
    dcdr >> m_uint32_field;
    dcdr >> m_int64_field;
    dcdr >> m_uint64_field;
    dcdr >> m_float_field;
    dcdr >> m_double_field;
    dcdr >> m_long_double_field;
    dcdr >> m_bool_field;
    dcdr >> m_string_field;
    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_enum_field = (Color)enum_value;
    }

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_enum2_field = (Material)enum_value;
    }

}

/*!
 * @brief This function sets a value in member char_field
 * @param _char_field New value for member char_field
 */
void StructType::char_field(
        char _char_field)
{
    m_char_field = _char_field;
}

/*!
 * @brief This function returns the value of member char_field
 * @return Value of member char_field
 */
char StructType::char_field() const
{
    return m_char_field;
}

/*!
 * @brief This function returns a reference to member char_field
 * @return Reference to member char_field
 */
char& StructType::char_field()
{
    return m_char_field;
}

/*!
 * @brief This function sets a value in member uint8_field
 * @param _uint8_field New value for member uint8_field
 */
void StructType::uint8_field(
        uint8_t _uint8_field)
{
    m_uint8_field = _uint8_field;
}

/*!
 * @brief This function returns the value of member uint8_field
 * @return Value of member uint8_field
 */
uint8_t StructType::uint8_field() const
{
    return m_uint8_field;
}

/*!
 * @brief This function returns a reference to member uint8_field
 * @return Reference to member uint8_field
 */
uint8_t& StructType::uint8_field()
{
    return m_uint8_field;
}

/*!
 * @brief This function sets a value in member int16_field
 * @param _int16_field New value for member int16_field
 */
void StructType::int16_field(
        int16_t _int16_field)
{
    m_int16_field = _int16_field;
}

/*!
 * @brief This function returns the value of member int16_field
 * @return Value of member int16_field
 */
int16_t StructType::int16_field() const
{
    return m_int16_field;
}

/*!
 * @brief This function returns a reference to member int16_field
 * @return Reference to member int16_field
 */
int16_t& StructType::int16_field()
{
    return m_int16_field;
}

/*!
 * @brief This function sets a value in member uint16_field
 * @param _uint16_field New value for member uint16_field
 */
void StructType::uint16_field(
        uint16_t _uint16_field)
{
    m_uint16_field = _uint16_field;
}

/*!
 * @brief This function returns the value of member uint16_field
 * @return Value of member uint16_field
 */
uint16_t StructType::uint16_field() const
{
    return m_uint16_field;
}

/*!
 * @brief This function returns a reference to member uint16_field
 * @return Reference to member uint16_field
 */
uint16_t& StructType::uint16_field()
{
    return m_uint16_field;
}

/*!
 * @brief This function sets a value in member int32_field
 * @param _int32_field New value for member int32_field
 */
void StructType::int32_field(
        int32_t _int32_field)
{
    m_int32_field = _int32_field;
}

/*!
 * @brief This function returns the value of member int32_field
 * @return Value of member int32_field
 */
int32_t StructType::int32_field() const
{
    return m_int32_field;
}

/*!
 * @brief This function returns a reference to member int32_field
 * @return Reference to member int32_field
 */
int32_t& StructType::int32_field()
{
    return m_int32_field;
}

/*!
 * @brief This function sets a value in member uint32_field
 * @param _uint32_field New value for member uint32_field
 */
void StructType::uint32_field(
        uint32_t _uint32_field)
{
    m_uint32_field = _uint32_field;
}

/*!
 * @brief This function returns the value of member uint32_field
 * @return Value of member uint32_field
 */
uint32_t StructType::uint32_field() const
{
    return m_uint32_field;
}

/*!
 * @brief This function returns a reference to member uint32_field
 * @return Reference to member uint32_field
 */
uint32_t& StructType::uint32_field()
{
    return m_uint32_field;
}

/*!
 * @brief This function sets a value in member int64_field
 * @param _int64_field New value for member int64_field
 */
void StructType::int64_field(
        int64_t _int64_field)
{
    m_int64_field = _int64_field;
}

/*!
 * @brief This function returns the value of member int64_field
 * @return Value of member int64_field
 */
int64_t StructType::int64_field() const
{
    return m_int64_field;
}

/*!
 * @brief This function returns a reference to member int64_field
 * @return Reference to member int64_field
 */
int64_t& StructType::int64_field()
{
    return m_int64_field;
}

/*!
 * @brief This function sets a value in member uint64_field
 * @param _uint64_field New value for member uint64_field
 */
void StructType::uint64_field(
        uint64_t _uint64_field)
{
    m_uint64_field = _uint64_field;
}

/*!
 * @brief This function returns the value of member uint64_field
 * @return Value of member uint64_field
 */
uint64_t StructType::uint64_field() const
{
    return m_uint64_field;
}

/*!
 * @brief This function returns a reference to member uint64_field
 * @return Reference to member uint64_field
 */
uint64_t& StructType::uint64_field()
{
    return m_uint64_field;
}

/*!
 * @brief This function sets a value in member float_field
 * @param _float_field New value for member float_field
 */
void StructType::float_field(
        float _float_field)
{
    m_float_field = _float_field;
}

/*!
 * @brief This function returns the value of member float_field
 * @return Value of member float_field
 */
float StructType::float_field() const
{
    return m_float_field;
}

/*!
 * @brief This function returns a reference to member float_field
 * @return Reference to member float_field
 */
float& StructType::float_field()
{
    return m_float_field;
}

/*!
 * @brief This function sets a value in member double_field
 * @param _double_field New value for member double_field
 */
void StructType::double_field(
        double _double_field)
{
    m_double_field = _double_field;
}

/*!
 * @brief This function returns the value of member double_field
 * @return Value of member double_field
 */
double StructType::double_field() const
{
    return m_double_field;
}

/*!
 * @brief This function returns a reference to member double_field
 * @return Reference to member double_field
 */
double& StructType::double_field()
{
    return m_double_field;
}

/*!
 * @brief This function sets a value in member long_double_field
 * @param _long_double_field New value for member long_double_field
 */
void StructType::long_double_field(
        long double _long_double_field)
{
    m_long_double_field = _long_double_field;
}

/*!
 * @brief This function returns the value of member long_double_field
 * @return Value of member long_double_field
 */
long double StructType::long_double_field() const
{
    return m_long_double_field;
}

/*!
 * @brief This function returns a reference to member long_double_field
 * @return Reference to member long_double_field
 */
long double& StructType::long_double_field()
{
    return m_long_double_field;
}

/*!
 * @brief This function sets a value in member bool_field
 * @param _bool_field New value for member bool_field
 */
void StructType::bool_field(
        bool _bool_field)
{
    m_bool_field = _bool_field;
}

/*!
 * @brief This function returns the value of member bool_field
 * @return Value of member bool_field
 */
bool StructType::bool_field() const
{
    return m_bool_field;
}

/*!
 * @brief This function returns a reference to member bool_field
 * @return Reference to member bool_field
 */
bool& StructType::bool_field()
{
    return m_bool_field;
}

/*!
 * @brief This function copies the value in member string_field
 * @param _string_field New value to be copied in member string_field
 */
void StructType::string_field(
        const std::string& _string_field)
{
    m_string_field = _string_field;
}

/*!
 * @brief This function moves the value in member string_field
 * @param _string_field New value to be moved in member string_field
 */
void StructType::string_field(
        std::string&& _string_field)
{
    m_string_field = std::move(_string_field);
}

/*!
 * @brief This function returns a constant reference to member string_field
 * @return Constant reference to member string_field
 */
const std::string& StructType::string_field() const
{
    return m_string_field;
}

/*!
 * @brief This function returns a reference to member string_field
 * @return Reference to member string_field
 */
std::string& StructType::string_field()
{
    return m_string_field;
}
/*!
 * @brief This function sets a value in member enum_field
 * @param _enum_field New value for member enum_field
 */
void StructType::enum_field(
        Color _enum_field)
{
    m_enum_field = _enum_field;
}

/*!
 * @brief This function returns the value of member enum_field
 * @return Value of member enum_field
 */
Color StructType::enum_field() const
{
    return m_enum_field;
}

/*!
 * @brief This function returns a reference to member enum_field
 * @return Reference to member enum_field
 */
Color& StructType::enum_field()
{
    return m_enum_field;
}

/*!
 * @brief This function sets a value in member enum2_field
 * @param _enum2_field New value for member enum2_field
 */
void StructType::enum2_field(
        Material _enum2_field)
{
    m_enum2_field = _enum2_field;
}

/*!
 * @brief This function returns the value of member enum2_field
 * @return Value of member enum2_field
 */
Material StructType::enum2_field() const
{
    return m_enum2_field;
}

/*!
 * @brief This function returns a reference to member enum2_field
 * @return Reference to member enum2_field
 */
Material& StructType::enum2_field()
{
    return m_enum2_field;
}



size_t StructType::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return StructType_max_key_cdr_typesize;
}

bool StructType::isKeyDefined()
{
    return false;
}

void StructType::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}




ContentFilterTestType::ContentFilterTestType()
{
    // char m_char_field
    m_char_field = 0;
    // octet m_uint8_field
    m_uint8_field = 0;
    // short m_int16_field
    m_int16_field = 0;
    // unsigned short m_uint16_field
    m_uint16_field = 0;
    // long m_int32_field
    m_int32_field = 0;
    // unsigned long m_uint32_field
    m_uint32_field = 0;
    // long long m_int64_field
    m_int64_field = 0;
    // unsigned long long m_uint64_field
    m_uint64_field = 0;
    // float m_float_field
    m_float_field = 0.0;
    // double m_double_field
    m_double_field = 0.0;
    // long double m_long_double_field
    m_long_double_field = 0.0;
    // boolean m_bool_field
    m_bool_field = false;
    // string m_string_field
    m_string_field ="";
    // Color m_enum_field
    m_enum_field = ::RED;
    // Material m_enum2_field
    m_enum2_field = ::WOOD;
    // StructType m_struct_field

    // char m_array_char_field
    memset(&m_array_char_field, 0, (3) * 1);
    // octet m_array_uint8_field
    memset(&m_array_uint8_field, 0, (3) * 1);
    // short m_array_int16_field
    memset(&m_array_int16_field, 0, (3) * 2);
    // unsigned short m_array_uint16_field
    memset(&m_array_uint16_field, 0, (3) * 2);
    // long m_array_int32_field
    memset(&m_array_int32_field, 0, (3) * 4);
    // unsigned long m_array_uint32_field
    memset(&m_array_uint32_field, 0, (3) * 4);
    // long long m_array_int64_field
    memset(&m_array_int64_field, 0, (3) * 8);
    // unsigned long long m_array_uint64_field
    memset(&m_array_uint64_field, 0, (3) * 8);
    // float m_array_float_field
    memset(&m_array_float_field, 0, (3) * 4);
    // double m_array_double_field
    memset(&m_array_double_field, 0, (3) * 8);
    // long double m_array_long_double_field
    memset(&m_array_long_double_field, 0, (3) * 16);
    // boolean m_array_bool_field
    memset(&m_array_bool_field, 0, (3) * 1);
    // string m_array_string_field

    // Color m_array_enum_field
    memset(&m_array_enum_field, 0, (3) * 4);
    // Material m_array_enum2_field
    memset(&m_array_enum2_field, 0, (3) * 4);
    // StructType m_array_struct_field

    // sequence<char, 5> m_bounded_sequence_char_field

    // sequence<octet, 5> m_bounded_sequence_uint8_field

    // sequence<short, 5> m_bounded_sequence_int16_field

    // sequence<unsigned short, 5> m_bounded_sequence_uint16_field

    // sequence<long, 5> m_bounded_sequence_int32_field

    // sequence<unsigned long, 5> m_bounded_sequence_uint32_field

    // sequence<long long, 5> m_bounded_sequence_int64_field

    // sequence<unsigned long long, 5> m_bounded_sequence_uint64_field

    // sequence<float, 5> m_bounded_sequence_float_field

    // sequence<double, 5> m_bounded_sequence_double_field

    // sequence<long double, 5> m_bounded_sequence_long_double_field

    // sequence<boolean, 5> m_bounded_sequence_bool_field

    // sequence<string, 5> m_bounded_sequence_string_field

    // sequence<Color, 5> m_bounded_sequence_enum_field

    // sequence<Material, 5> m_bounded_sequence_enum2_field

    // sequence<StructType, 5> m_bounded_sequence_struct_field

    // sequence<char> m_unbounded_sequence_char_field

    // sequence<octet> m_unbounded_sequence_uint8_field

    // sequence<short> m_unbounded_sequence_int16_field

    // sequence<unsigned short> m_unbounded_sequence_uint16_field

    // sequence<long> m_unbounded_sequence_int32_field

    // sequence<unsigned long> m_unbounded_sequence_uint32_field

    // sequence<long long> m_unbounded_sequence_int64_field

    // sequence<unsigned long long> m_unbounded_sequence_uint64_field

    // sequence<float> m_unbounded_sequence_float_field

    // sequence<double> m_unbounded_sequence_double_field

    // sequence<long double> m_unbounded_sequence_long_double_field

    // sequence<boolean> m_unbounded_sequence_bool_field

    // sequence<string> m_unbounded_sequence_string_field

    // sequence<Color> m_unbounded_sequence_enum_field

    // sequence<Material> m_unbounded_sequence_enum2_field

    // sequence<StructType> m_unbounded_sequence_struct_field


}

ContentFilterTestType::~ContentFilterTestType()
{
































































}

ContentFilterTestType::ContentFilterTestType(
        const ContentFilterTestType& x)
{
    m_char_field = x.m_char_field;
    m_uint8_field = x.m_uint8_field;
    m_int16_field = x.m_int16_field;
    m_uint16_field = x.m_uint16_field;
    m_int32_field = x.m_int32_field;
    m_uint32_field = x.m_uint32_field;
    m_int64_field = x.m_int64_field;
    m_uint64_field = x.m_uint64_field;
    m_float_field = x.m_float_field;
    m_double_field = x.m_double_field;
    m_long_double_field = x.m_long_double_field;
    m_bool_field = x.m_bool_field;
    m_string_field = x.m_string_field;
    m_enum_field = x.m_enum_field;
    m_enum2_field = x.m_enum2_field;
    m_struct_field = x.m_struct_field;
    m_array_char_field = x.m_array_char_field;
    m_array_uint8_field = x.m_array_uint8_field;
    m_array_int16_field = x.m_array_int16_field;
    m_array_uint16_field = x.m_array_uint16_field;
    m_array_int32_field = x.m_array_int32_field;
    m_array_uint32_field = x.m_array_uint32_field;
    m_array_int64_field = x.m_array_int64_field;
    m_array_uint64_field = x.m_array_uint64_field;
    m_array_float_field = x.m_array_float_field;
    m_array_double_field = x.m_array_double_field;
    m_array_long_double_field = x.m_array_long_double_field;
    m_array_bool_field = x.m_array_bool_field;
    m_array_string_field = x.m_array_string_field;
    m_array_enum_field = x.m_array_enum_field;
    m_array_enum2_field = x.m_array_enum2_field;
    m_array_struct_field = x.m_array_struct_field;
    m_bounded_sequence_char_field = x.m_bounded_sequence_char_field;
    m_bounded_sequence_uint8_field = x.m_bounded_sequence_uint8_field;
    m_bounded_sequence_int16_field = x.m_bounded_sequence_int16_field;
    m_bounded_sequence_uint16_field = x.m_bounded_sequence_uint16_field;
    m_bounded_sequence_int32_field = x.m_bounded_sequence_int32_field;
    m_bounded_sequence_uint32_field = x.m_bounded_sequence_uint32_field;
    m_bounded_sequence_int64_field = x.m_bounded_sequence_int64_field;
    m_bounded_sequence_uint64_field = x.m_bounded_sequence_uint64_field;
    m_bounded_sequence_float_field = x.m_bounded_sequence_float_field;
    m_bounded_sequence_double_field = x.m_bounded_sequence_double_field;
    m_bounded_sequence_long_double_field = x.m_bounded_sequence_long_double_field;
    m_bounded_sequence_bool_field = x.m_bounded_sequence_bool_field;
    m_bounded_sequence_string_field = x.m_bounded_sequence_string_field;
    m_bounded_sequence_enum_field = x.m_bounded_sequence_enum_field;
    m_bounded_sequence_enum2_field = x.m_bounded_sequence_enum2_field;
    m_bounded_sequence_struct_field = x.m_bounded_sequence_struct_field;
    m_unbounded_sequence_char_field = x.m_unbounded_sequence_char_field;
    m_unbounded_sequence_uint8_field = x.m_unbounded_sequence_uint8_field;
    m_unbounded_sequence_int16_field = x.m_unbounded_sequence_int16_field;
    m_unbounded_sequence_uint16_field = x.m_unbounded_sequence_uint16_field;
    m_unbounded_sequence_int32_field = x.m_unbounded_sequence_int32_field;
    m_unbounded_sequence_uint32_field = x.m_unbounded_sequence_uint32_field;
    m_unbounded_sequence_int64_field = x.m_unbounded_sequence_int64_field;
    m_unbounded_sequence_uint64_field = x.m_unbounded_sequence_uint64_field;
    m_unbounded_sequence_float_field = x.m_unbounded_sequence_float_field;
    m_unbounded_sequence_double_field = x.m_unbounded_sequence_double_field;
    m_unbounded_sequence_long_double_field = x.m_unbounded_sequence_long_double_field;
    m_unbounded_sequence_bool_field = x.m_unbounded_sequence_bool_field;
    m_unbounded_sequence_string_field = x.m_unbounded_sequence_string_field;
    m_unbounded_sequence_enum_field = x.m_unbounded_sequence_enum_field;
    m_unbounded_sequence_enum2_field = x.m_unbounded_sequence_enum2_field;
    m_unbounded_sequence_struct_field = x.m_unbounded_sequence_struct_field;
}

ContentFilterTestType::ContentFilterTestType(
        ContentFilterTestType&& x) noexcept 
{
    m_char_field = x.m_char_field;
    m_uint8_field = x.m_uint8_field;
    m_int16_field = x.m_int16_field;
    m_uint16_field = x.m_uint16_field;
    m_int32_field = x.m_int32_field;
    m_uint32_field = x.m_uint32_field;
    m_int64_field = x.m_int64_field;
    m_uint64_field = x.m_uint64_field;
    m_float_field = x.m_float_field;
    m_double_field = x.m_double_field;
    m_long_double_field = x.m_long_double_field;
    m_bool_field = x.m_bool_field;
    m_string_field = std::move(x.m_string_field);
    m_enum_field = x.m_enum_field;
    m_enum2_field = x.m_enum2_field;
    m_struct_field = std::move(x.m_struct_field);
    m_array_char_field = std::move(x.m_array_char_field);
    m_array_uint8_field = std::move(x.m_array_uint8_field);
    m_array_int16_field = std::move(x.m_array_int16_field);
    m_array_uint16_field = std::move(x.m_array_uint16_field);
    m_array_int32_field = std::move(x.m_array_int32_field);
    m_array_uint32_field = std::move(x.m_array_uint32_field);
    m_array_int64_field = std::move(x.m_array_int64_field);
    m_array_uint64_field = std::move(x.m_array_uint64_field);
    m_array_float_field = std::move(x.m_array_float_field);
    m_array_double_field = std::move(x.m_array_double_field);
    m_array_long_double_field = std::move(x.m_array_long_double_field);
    m_array_bool_field = std::move(x.m_array_bool_field);
    m_array_string_field = std::move(x.m_array_string_field);
    m_array_enum_field = std::move(x.m_array_enum_field);
    m_array_enum2_field = std::move(x.m_array_enum2_field);
    m_array_struct_field = std::move(x.m_array_struct_field);
    m_bounded_sequence_char_field = std::move(x.m_bounded_sequence_char_field);
    m_bounded_sequence_uint8_field = std::move(x.m_bounded_sequence_uint8_field);
    m_bounded_sequence_int16_field = std::move(x.m_bounded_sequence_int16_field);
    m_bounded_sequence_uint16_field = std::move(x.m_bounded_sequence_uint16_field);
    m_bounded_sequence_int32_field = std::move(x.m_bounded_sequence_int32_field);
    m_bounded_sequence_uint32_field = std::move(x.m_bounded_sequence_uint32_field);
    m_bounded_sequence_int64_field = std::move(x.m_bounded_sequence_int64_field);
    m_bounded_sequence_uint64_field = std::move(x.m_bounded_sequence_uint64_field);
    m_bounded_sequence_float_field = std::move(x.m_bounded_sequence_float_field);
    m_bounded_sequence_double_field = std::move(x.m_bounded_sequence_double_field);
    m_bounded_sequence_long_double_field = std::move(x.m_bounded_sequence_long_double_field);
    m_bounded_sequence_bool_field = std::move(x.m_bounded_sequence_bool_field);
    m_bounded_sequence_string_field = std::move(x.m_bounded_sequence_string_field);
    m_bounded_sequence_enum_field = std::move(x.m_bounded_sequence_enum_field);
    m_bounded_sequence_enum2_field = std::move(x.m_bounded_sequence_enum2_field);
    m_bounded_sequence_struct_field = std::move(x.m_bounded_sequence_struct_field);
    m_unbounded_sequence_char_field = std::move(x.m_unbounded_sequence_char_field);
    m_unbounded_sequence_uint8_field = std::move(x.m_unbounded_sequence_uint8_field);
    m_unbounded_sequence_int16_field = std::move(x.m_unbounded_sequence_int16_field);
    m_unbounded_sequence_uint16_field = std::move(x.m_unbounded_sequence_uint16_field);
    m_unbounded_sequence_int32_field = std::move(x.m_unbounded_sequence_int32_field);
    m_unbounded_sequence_uint32_field = std::move(x.m_unbounded_sequence_uint32_field);
    m_unbounded_sequence_int64_field = std::move(x.m_unbounded_sequence_int64_field);
    m_unbounded_sequence_uint64_field = std::move(x.m_unbounded_sequence_uint64_field);
    m_unbounded_sequence_float_field = std::move(x.m_unbounded_sequence_float_field);
    m_unbounded_sequence_double_field = std::move(x.m_unbounded_sequence_double_field);
    m_unbounded_sequence_long_double_field = std::move(x.m_unbounded_sequence_long_double_field);
    m_unbounded_sequence_bool_field = std::move(x.m_unbounded_sequence_bool_field);
    m_unbounded_sequence_string_field = std::move(x.m_unbounded_sequence_string_field);
    m_unbounded_sequence_enum_field = std::move(x.m_unbounded_sequence_enum_field);
    m_unbounded_sequence_enum2_field = std::move(x.m_unbounded_sequence_enum2_field);
    m_unbounded_sequence_struct_field = std::move(x.m_unbounded_sequence_struct_field);
}

ContentFilterTestType& ContentFilterTestType::operator =(
        const ContentFilterTestType& x)
{

    m_char_field = x.m_char_field;
    m_uint8_field = x.m_uint8_field;
    m_int16_field = x.m_int16_field;
    m_uint16_field = x.m_uint16_field;
    m_int32_field = x.m_int32_field;
    m_uint32_field = x.m_uint32_field;
    m_int64_field = x.m_int64_field;
    m_uint64_field = x.m_uint64_field;
    m_float_field = x.m_float_field;
    m_double_field = x.m_double_field;
    m_long_double_field = x.m_long_double_field;
    m_bool_field = x.m_bool_field;
    m_string_field = x.m_string_field;
    m_enum_field = x.m_enum_field;
    m_enum2_field = x.m_enum2_field;
    m_struct_field = x.m_struct_field;
    m_array_char_field = x.m_array_char_field;
    m_array_uint8_field = x.m_array_uint8_field;
    m_array_int16_field = x.m_array_int16_field;
    m_array_uint16_field = x.m_array_uint16_field;
    m_array_int32_field = x.m_array_int32_field;
    m_array_uint32_field = x.m_array_uint32_field;
    m_array_int64_field = x.m_array_int64_field;
    m_array_uint64_field = x.m_array_uint64_field;
    m_array_float_field = x.m_array_float_field;
    m_array_double_field = x.m_array_double_field;
    m_array_long_double_field = x.m_array_long_double_field;
    m_array_bool_field = x.m_array_bool_field;
    m_array_string_field = x.m_array_string_field;
    m_array_enum_field = x.m_array_enum_field;
    m_array_enum2_field = x.m_array_enum2_field;
    m_array_struct_field = x.m_array_struct_field;
    m_bounded_sequence_char_field = x.m_bounded_sequence_char_field;
    m_bounded_sequence_uint8_field = x.m_bounded_sequence_uint8_field;
    m_bounded_sequence_int16_field = x.m_bounded_sequence_int16_field;
    m_bounded_sequence_uint16_field = x.m_bounded_sequence_uint16_field;
    m_bounded_sequence_int32_field = x.m_bounded_sequence_int32_field;
    m_bounded_sequence_uint32_field = x.m_bounded_sequence_uint32_field;
    m_bounded_sequence_int64_field = x.m_bounded_sequence_int64_field;
    m_bounded_sequence_uint64_field = x.m_bounded_sequence_uint64_field;
    m_bounded_sequence_float_field = x.m_bounded_sequence_float_field;
    m_bounded_sequence_double_field = x.m_bounded_sequence_double_field;
    m_bounded_sequence_long_double_field = x.m_bounded_sequence_long_double_field;
    m_bounded_sequence_bool_field = x.m_bounded_sequence_bool_field;
    m_bounded_sequence_string_field = x.m_bounded_sequence_string_field;
    m_bounded_sequence_enum_field = x.m_bounded_sequence_enum_field;
    m_bounded_sequence_enum2_field = x.m_bounded_sequence_enum2_field;
    m_bounded_sequence_struct_field = x.m_bounded_sequence_struct_field;
    m_unbounded_sequence_char_field = x.m_unbounded_sequence_char_field;
    m_unbounded_sequence_uint8_field = x.m_unbounded_sequence_uint8_field;
    m_unbounded_sequence_int16_field = x.m_unbounded_sequence_int16_field;
    m_unbounded_sequence_uint16_field = x.m_unbounded_sequence_uint16_field;
    m_unbounded_sequence_int32_field = x.m_unbounded_sequence_int32_field;
    m_unbounded_sequence_uint32_field = x.m_unbounded_sequence_uint32_field;
    m_unbounded_sequence_int64_field = x.m_unbounded_sequence_int64_field;
    m_unbounded_sequence_uint64_field = x.m_unbounded_sequence_uint64_field;
    m_unbounded_sequence_float_field = x.m_unbounded_sequence_float_field;
    m_unbounded_sequence_double_field = x.m_unbounded_sequence_double_field;
    m_unbounded_sequence_long_double_field = x.m_unbounded_sequence_long_double_field;
    m_unbounded_sequence_bool_field = x.m_unbounded_sequence_bool_field;
    m_unbounded_sequence_string_field = x.m_unbounded_sequence_string_field;
    m_unbounded_sequence_enum_field = x.m_unbounded_sequence_enum_field;
    m_unbounded_sequence_enum2_field = x.m_unbounded_sequence_enum2_field;
    m_unbounded_sequence_struct_field = x.m_unbounded_sequence_struct_field;

    return *this;
}

ContentFilterTestType& ContentFilterTestType::operator =(
        ContentFilterTestType&& x) noexcept
{

    m_char_field = x.m_char_field;
    m_uint8_field = x.m_uint8_field;
    m_int16_field = x.m_int16_field;
    m_uint16_field = x.m_uint16_field;
    m_int32_field = x.m_int32_field;
    m_uint32_field = x.m_uint32_field;
    m_int64_field = x.m_int64_field;
    m_uint64_field = x.m_uint64_field;
    m_float_field = x.m_float_field;
    m_double_field = x.m_double_field;
    m_long_double_field = x.m_long_double_field;
    m_bool_field = x.m_bool_field;
    m_string_field = std::move(x.m_string_field);
    m_enum_field = x.m_enum_field;
    m_enum2_field = x.m_enum2_field;
    m_struct_field = std::move(x.m_struct_field);
    m_array_char_field = std::move(x.m_array_char_field);
    m_array_uint8_field = std::move(x.m_array_uint8_field);
    m_array_int16_field = std::move(x.m_array_int16_field);
    m_array_uint16_field = std::move(x.m_array_uint16_field);
    m_array_int32_field = std::move(x.m_array_int32_field);
    m_array_uint32_field = std::move(x.m_array_uint32_field);
    m_array_int64_field = std::move(x.m_array_int64_field);
    m_array_uint64_field = std::move(x.m_array_uint64_field);
    m_array_float_field = std::move(x.m_array_float_field);
    m_array_double_field = std::move(x.m_array_double_field);
    m_array_long_double_field = std::move(x.m_array_long_double_field);
    m_array_bool_field = std::move(x.m_array_bool_field);
    m_array_string_field = std::move(x.m_array_string_field);
    m_array_enum_field = std::move(x.m_array_enum_field);
    m_array_enum2_field = std::move(x.m_array_enum2_field);
    m_array_struct_field = std::move(x.m_array_struct_field);
    m_bounded_sequence_char_field = std::move(x.m_bounded_sequence_char_field);
    m_bounded_sequence_uint8_field = std::move(x.m_bounded_sequence_uint8_field);
    m_bounded_sequence_int16_field = std::move(x.m_bounded_sequence_int16_field);
    m_bounded_sequence_uint16_field = std::move(x.m_bounded_sequence_uint16_field);
    m_bounded_sequence_int32_field = std::move(x.m_bounded_sequence_int32_field);
    m_bounded_sequence_uint32_field = std::move(x.m_bounded_sequence_uint32_field);
    m_bounded_sequence_int64_field = std::move(x.m_bounded_sequence_int64_field);
    m_bounded_sequence_uint64_field = std::move(x.m_bounded_sequence_uint64_field);
    m_bounded_sequence_float_field = std::move(x.m_bounded_sequence_float_field);
    m_bounded_sequence_double_field = std::move(x.m_bounded_sequence_double_field);
    m_bounded_sequence_long_double_field = std::move(x.m_bounded_sequence_long_double_field);
    m_bounded_sequence_bool_field = std::move(x.m_bounded_sequence_bool_field);
    m_bounded_sequence_string_field = std::move(x.m_bounded_sequence_string_field);
    m_bounded_sequence_enum_field = std::move(x.m_bounded_sequence_enum_field);
    m_bounded_sequence_enum2_field = std::move(x.m_bounded_sequence_enum2_field);
    m_bounded_sequence_struct_field = std::move(x.m_bounded_sequence_struct_field);
    m_unbounded_sequence_char_field = std::move(x.m_unbounded_sequence_char_field);
    m_unbounded_sequence_uint8_field = std::move(x.m_unbounded_sequence_uint8_field);
    m_unbounded_sequence_int16_field = std::move(x.m_unbounded_sequence_int16_field);
    m_unbounded_sequence_uint16_field = std::move(x.m_unbounded_sequence_uint16_field);
    m_unbounded_sequence_int32_field = std::move(x.m_unbounded_sequence_int32_field);
    m_unbounded_sequence_uint32_field = std::move(x.m_unbounded_sequence_uint32_field);
    m_unbounded_sequence_int64_field = std::move(x.m_unbounded_sequence_int64_field);
    m_unbounded_sequence_uint64_field = std::move(x.m_unbounded_sequence_uint64_field);
    m_unbounded_sequence_float_field = std::move(x.m_unbounded_sequence_float_field);
    m_unbounded_sequence_double_field = std::move(x.m_unbounded_sequence_double_field);
    m_unbounded_sequence_long_double_field = std::move(x.m_unbounded_sequence_long_double_field);
    m_unbounded_sequence_bool_field = std::move(x.m_unbounded_sequence_bool_field);
    m_unbounded_sequence_string_field = std::move(x.m_unbounded_sequence_string_field);
    m_unbounded_sequence_enum_field = std::move(x.m_unbounded_sequence_enum_field);
    m_unbounded_sequence_enum2_field = std::move(x.m_unbounded_sequence_enum2_field);
    m_unbounded_sequence_struct_field = std::move(x.m_unbounded_sequence_struct_field);

    return *this;
}

bool ContentFilterTestType::operator ==(
        const ContentFilterTestType& x) const
{

    return (m_char_field == x.m_char_field && m_uint8_field == x.m_uint8_field && m_int16_field == x.m_int16_field && m_uint16_field == x.m_uint16_field && m_int32_field == x.m_int32_field && m_uint32_field == x.m_uint32_field && m_int64_field == x.m_int64_field && m_uint64_field == x.m_uint64_field && m_float_field == x.m_float_field && m_double_field == x.m_double_field && m_long_double_field == x.m_long_double_field && m_bool_field == x.m_bool_field && m_string_field == x.m_string_field && m_enum_field == x.m_enum_field && m_enum2_field == x.m_enum2_field && m_struct_field == x.m_struct_field && m_array_char_field == x.m_array_char_field && m_array_uint8_field == x.m_array_uint8_field && m_array_int16_field == x.m_array_int16_field && m_array_uint16_field == x.m_array_uint16_field && m_array_int32_field == x.m_array_int32_field && m_array_uint32_field == x.m_array_uint32_field && m_array_int64_field == x.m_array_int64_field && m_array_uint64_field == x.m_array_uint64_field && m_array_float_field == x.m_array_float_field && m_array_double_field == x.m_array_double_field && m_array_long_double_field == x.m_array_long_double_field && m_array_bool_field == x.m_array_bool_field && m_array_string_field == x.m_array_string_field && m_array_enum_field == x.m_array_enum_field && m_array_enum2_field == x.m_array_enum2_field && m_array_struct_field == x.m_array_struct_field && m_bounded_sequence_char_field == x.m_bounded_sequence_char_field && m_bounded_sequence_uint8_field == x.m_bounded_sequence_uint8_field && m_bounded_sequence_int16_field == x.m_bounded_sequence_int16_field && m_bounded_sequence_uint16_field == x.m_bounded_sequence_uint16_field && m_bounded_sequence_int32_field == x.m_bounded_sequence_int32_field && m_bounded_sequence_uint32_field == x.m_bounded_sequence_uint32_field && m_bounded_sequence_int64_field == x.m_bounded_sequence_int64_field && m_bounded_sequence_uint64_field == x.m_bounded_sequence_uint64_field && m_bounded_sequence_float_field == x.m_bounded_sequence_float_field && m_bounded_sequence_double_field == x.m_bounded_sequence_double_field && m_bounded_sequence_long_double_field == x.m_bounded_sequence_long_double_field && m_bounded_sequence_bool_field == x.m_bounded_sequence_bool_field && m_bounded_sequence_string_field == x.m_bounded_sequence_string_field && m_bounded_sequence_enum_field == x.m_bounded_sequence_enum_field && m_bounded_sequence_enum2_field == x.m_bounded_sequence_enum2_field && m_bounded_sequence_struct_field == x.m_bounded_sequence_struct_field && m_unbounded_sequence_char_field == x.m_unbounded_sequence_char_field && m_unbounded_sequence_uint8_field == x.m_unbounded_sequence_uint8_field && m_unbounded_sequence_int16_field == x.m_unbounded_sequence_int16_field && m_unbounded_sequence_uint16_field == x.m_unbounded_sequence_uint16_field && m_unbounded_sequence_int32_field == x.m_unbounded_sequence_int32_field && m_unbounded_sequence_uint32_field == x.m_unbounded_sequence_uint32_field && m_unbounded_sequence_int64_field == x.m_unbounded_sequence_int64_field && m_unbounded_sequence_uint64_field == x.m_unbounded_sequence_uint64_field && m_unbounded_sequence_float_field == x.m_unbounded_sequence_float_field && m_unbounded_sequence_double_field == x.m_unbounded_sequence_double_field && m_unbounded_sequence_long_double_field == x.m_unbounded_sequence_long_double_field && m_unbounded_sequence_bool_field == x.m_unbounded_sequence_bool_field && m_unbounded_sequence_string_field == x.m_unbounded_sequence_string_field && m_unbounded_sequence_enum_field == x.m_unbounded_sequence_enum_field && m_unbounded_sequence_enum2_field == x.m_unbounded_sequence_enum2_field && m_unbounded_sequence_struct_field == x.m_unbounded_sequence_struct_field);
}

bool ContentFilterTestType::operator !=(
        const ContentFilterTestType& x) const
{
    return !(*this == x);
}

size_t ContentFilterTestType::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ContentFilterTestType_max_cdr_typesize;
}

size_t ContentFilterTestType::getCdrSerializedSize(
        const ContentFilterTestType& data,
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


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 16 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8); // 128 bits, but aligned as 64

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.string_field().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += StructType::getCdrSerializedSize(data.struct_field(), current_alignment);
    current_alignment += ((3) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += ((3) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += ((3) * 2) + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);

    current_alignment += ((3) * 2) + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);

    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += ((3) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += ((3) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += ((3) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += ((3) * 16) + eprosima::fastcdr::Cdr::alignment(current_alignment, 16);

    current_alignment += ((3) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    for(size_t a = 0; a < data.array_string_field().size(); ++a)
    {
            current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.array_string_field().at(a).size() + 1;

    }
    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.array_struct_field().size(); ++a)
    {
            current_alignment += StructType::getCdrSerializedSize(data.array_struct_field().at(a), current_alignment);
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_char_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_char_field().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_uint8_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_uint8_field().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_int16_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_int16_field().size() * 2) + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_uint16_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_uint16_field().size() * 2) + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_int32_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_int32_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_uint32_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_uint32_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_int64_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_int64_field().size() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_uint64_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_uint64_field().size() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_float_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_float_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_double_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_double_field().size() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_long_double_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_long_double_field().size() * 16) + eprosima::fastcdr::Cdr::alignment(current_alignment, 16);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_bool_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_bool_field().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.bounded_sequence_string_field().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) +
            data.bounded_sequence_string_field().at(a).size() + 1;
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_enum_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_enum_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.bounded_sequence_enum2_field().size() > 0)
    {
        current_alignment += (data.bounded_sequence_enum2_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.bounded_sequence_struct_field().size(); ++a)
    {
        current_alignment += StructType::getCdrSerializedSize(data.bounded_sequence_struct_field().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_char_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_char_field().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_uint8_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_uint8_field().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_int16_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_int16_field().size() * 2) + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_uint16_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_uint16_field().size() * 2) + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_int32_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_int32_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_uint32_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_uint32_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_int64_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_int64_field().size() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_uint64_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_uint64_field().size() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_float_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_float_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_double_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_double_field().size() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_long_double_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_long_double_field().size() * 16) + eprosima::fastcdr::Cdr::alignment(current_alignment, 16);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_bool_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_bool_field().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.unbounded_sequence_string_field().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) +
            data.unbounded_sequence_string_field().at(a).size() + 1;
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_enum_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_enum_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unbounded_sequence_enum2_field().size() > 0)
    {
        current_alignment += (data.unbounded_sequence_enum2_field().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.unbounded_sequence_struct_field().size(); ++a)
    {
        current_alignment += StructType::getCdrSerializedSize(data.unbounded_sequence_struct_field().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void ContentFilterTestType::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_char_field;
    scdr << m_uint8_field;
    scdr << m_int16_field;
    scdr << m_uint16_field;
    scdr << m_int32_field;
    scdr << m_uint32_field;
    scdr << m_int64_field;
    scdr << m_uint64_field;
    scdr << m_float_field;
    scdr << m_double_field;
    scdr << m_long_double_field;
    scdr << m_bool_field;
    scdr << m_string_field.c_str();
    scdr << (uint32_t)m_enum_field;
    scdr << (uint32_t)m_enum2_field;
    scdr << m_struct_field;
    scdr << m_array_char_field;

    scdr << m_array_uint8_field;

    scdr << m_array_int16_field;

    scdr << m_array_uint16_field;

    scdr << m_array_int32_field;

    scdr << m_array_uint32_field;

    scdr << m_array_int64_field;

    scdr << m_array_uint64_field;

    scdr << m_array_float_field;

    scdr << m_array_double_field;

    scdr << m_array_long_double_field;

    scdr << m_array_bool_field;

    for (const auto& str : m_array_string_field)
    {
        scdr << str.c_str();
    }


    scdr.serializeArray(reinterpret_cast<const uint32_t*>(m_array_enum_field.data()), m_array_enum_field.size());


    scdr.serializeArray(reinterpret_cast<const uint32_t*>(m_array_enum2_field.data()), m_array_enum2_field.size());


    scdr << m_array_struct_field;

    scdr << m_bounded_sequence_char_field;
    scdr << m_bounded_sequence_uint8_field;
    scdr << m_bounded_sequence_int16_field;
    scdr << m_bounded_sequence_uint16_field;
    scdr << m_bounded_sequence_int32_field;
    scdr << m_bounded_sequence_uint32_field;
    scdr << m_bounded_sequence_int64_field;
    scdr << m_bounded_sequence_uint64_field;
    scdr << m_bounded_sequence_float_field;
    scdr << m_bounded_sequence_double_field;
    scdr << m_bounded_sequence_long_double_field;
    scdr << m_bounded_sequence_bool_field;
    scdr << m_bounded_sequence_string_field;
    scdr << static_cast<uint32_t>(m_bounded_sequence_enum_field.size());
    scdr.serializeArray(reinterpret_cast<const uint32_t*>(m_bounded_sequence_enum_field.data()), m_bounded_sequence_enum_field.size());

    scdr << static_cast<uint32_t>(m_bounded_sequence_enum2_field.size());
    scdr.serializeArray(reinterpret_cast<const uint32_t*>(m_bounded_sequence_enum2_field.data()), m_bounded_sequence_enum2_field.size());

    scdr << m_bounded_sequence_struct_field;
    scdr << m_unbounded_sequence_char_field;
    scdr << m_unbounded_sequence_uint8_field;
    scdr << m_unbounded_sequence_int16_field;
    scdr << m_unbounded_sequence_uint16_field;
    scdr << m_unbounded_sequence_int32_field;
    scdr << m_unbounded_sequence_uint32_field;
    scdr << m_unbounded_sequence_int64_field;
    scdr << m_unbounded_sequence_uint64_field;
    scdr << m_unbounded_sequence_float_field;
    scdr << m_unbounded_sequence_double_field;
    scdr << m_unbounded_sequence_long_double_field;
    scdr << m_unbounded_sequence_bool_field;
    scdr << m_unbounded_sequence_string_field;
    scdr << static_cast<uint32_t>(m_unbounded_sequence_enum_field.size());
    scdr.serializeArray(reinterpret_cast<const uint32_t*>(m_unbounded_sequence_enum_field.data()), m_unbounded_sequence_enum_field.size());

    scdr << static_cast<uint32_t>(m_unbounded_sequence_enum2_field.size());
    scdr.serializeArray(reinterpret_cast<const uint32_t*>(m_unbounded_sequence_enum2_field.data()), m_unbounded_sequence_enum2_field.size());

    scdr << m_unbounded_sequence_struct_field;

}

void ContentFilterTestType::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_char_field;
    dcdr >> m_uint8_field;
    dcdr >> m_int16_field;
    dcdr >> m_uint16_field;
    dcdr >> m_int32_field;
    dcdr >> m_uint32_field;
    dcdr >> m_int64_field;
    dcdr >> m_uint64_field;
    dcdr >> m_float_field;
    dcdr >> m_double_field;
    dcdr >> m_long_double_field;
    dcdr >> m_bool_field;
    dcdr >> m_string_field;
    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_enum_field = (Color)enum_value;
    }

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_enum2_field = (Material)enum_value;
    }

    dcdr >> m_struct_field;
    dcdr >> m_array_char_field;

    dcdr >> m_array_uint8_field;

    dcdr >> m_array_int16_field;

    dcdr >> m_array_uint16_field;

    dcdr >> m_array_int32_field;

    dcdr >> m_array_uint32_field;

    dcdr >> m_array_int64_field;

    dcdr >> m_array_uint64_field;

    dcdr >> m_array_float_field;

    dcdr >> m_array_double_field;

    dcdr >> m_array_long_double_field;

    dcdr >> m_array_bool_field;

    for (auto& str : m_array_string_field)
    {
        dcdr >> str;}


    dcdr.deserializeArray(reinterpret_cast<uint32_t*>(m_array_enum_field.data()), m_array_enum_field.size());


    dcdr.deserializeArray(reinterpret_cast<uint32_t*>(m_array_enum2_field.data()), m_array_enum2_field.size());


    dcdr >> m_array_struct_field;

    dcdr >> m_bounded_sequence_char_field;
    dcdr >> m_bounded_sequence_uint8_field;
    dcdr >> m_bounded_sequence_int16_field;
    dcdr >> m_bounded_sequence_uint16_field;
    dcdr >> m_bounded_sequence_int32_field;
    dcdr >> m_bounded_sequence_uint32_field;
    dcdr >> m_bounded_sequence_int64_field;
    dcdr >> m_bounded_sequence_uint64_field;
    dcdr >> m_bounded_sequence_float_field;
    dcdr >> m_bounded_sequence_double_field;
    dcdr >> m_bounded_sequence_long_double_field;
    dcdr >> m_bounded_sequence_bool_field;
    dcdr >> m_bounded_sequence_string_field;
    {
        uint32_t seq_length = 0;
        dcdr >> seq_length;
        m_bounded_sequence_enum_field.resize(seq_length);
        dcdr.deserializeArray(reinterpret_cast<uint32_t*>(m_bounded_sequence_enum_field.data()), seq_length);
    }

    {
        uint32_t seq_length = 0;
        dcdr >> seq_length;
        m_bounded_sequence_enum2_field.resize(seq_length);
        dcdr.deserializeArray(reinterpret_cast<uint32_t*>(m_bounded_sequence_enum2_field.data()), seq_length);
    }

    dcdr >> m_bounded_sequence_struct_field;
    dcdr >> m_unbounded_sequence_char_field;
    dcdr >> m_unbounded_sequence_uint8_field;
    dcdr >> m_unbounded_sequence_int16_field;
    dcdr >> m_unbounded_sequence_uint16_field;
    dcdr >> m_unbounded_sequence_int32_field;
    dcdr >> m_unbounded_sequence_uint32_field;
    dcdr >> m_unbounded_sequence_int64_field;
    dcdr >> m_unbounded_sequence_uint64_field;
    dcdr >> m_unbounded_sequence_float_field;
    dcdr >> m_unbounded_sequence_double_field;
    dcdr >> m_unbounded_sequence_long_double_field;
    dcdr >> m_unbounded_sequence_bool_field;
    dcdr >> m_unbounded_sequence_string_field;
    {
        uint32_t seq_length = 0;
        dcdr >> seq_length;
        m_unbounded_sequence_enum_field.resize(seq_length);
        dcdr.deserializeArray(reinterpret_cast<uint32_t*>(m_unbounded_sequence_enum_field.data()), seq_length);
    }

    {
        uint32_t seq_length = 0;
        dcdr >> seq_length;
        m_unbounded_sequence_enum2_field.resize(seq_length);
        dcdr.deserializeArray(reinterpret_cast<uint32_t*>(m_unbounded_sequence_enum2_field.data()), seq_length);
    }

    dcdr >> m_unbounded_sequence_struct_field;
}

/*!
 * @brief This function sets a value in member char_field
 * @param _char_field New value for member char_field
 */
void ContentFilterTestType::char_field(
        char _char_field)
{
    m_char_field = _char_field;
}

/*!
 * @brief This function returns the value of member char_field
 * @return Value of member char_field
 */
char ContentFilterTestType::char_field() const
{
    return m_char_field;
}

/*!
 * @brief This function returns a reference to member char_field
 * @return Reference to member char_field
 */
char& ContentFilterTestType::char_field()
{
    return m_char_field;
}

/*!
 * @brief This function sets a value in member uint8_field
 * @param _uint8_field New value for member uint8_field
 */
void ContentFilterTestType::uint8_field(
        uint8_t _uint8_field)
{
    m_uint8_field = _uint8_field;
}

/*!
 * @brief This function returns the value of member uint8_field
 * @return Value of member uint8_field
 */
uint8_t ContentFilterTestType::uint8_field() const
{
    return m_uint8_field;
}

/*!
 * @brief This function returns a reference to member uint8_field
 * @return Reference to member uint8_field
 */
uint8_t& ContentFilterTestType::uint8_field()
{
    return m_uint8_field;
}

/*!
 * @brief This function sets a value in member int16_field
 * @param _int16_field New value for member int16_field
 */
void ContentFilterTestType::int16_field(
        int16_t _int16_field)
{
    m_int16_field = _int16_field;
}

/*!
 * @brief This function returns the value of member int16_field
 * @return Value of member int16_field
 */
int16_t ContentFilterTestType::int16_field() const
{
    return m_int16_field;
}

/*!
 * @brief This function returns a reference to member int16_field
 * @return Reference to member int16_field
 */
int16_t& ContentFilterTestType::int16_field()
{
    return m_int16_field;
}

/*!
 * @brief This function sets a value in member uint16_field
 * @param _uint16_field New value for member uint16_field
 */
void ContentFilterTestType::uint16_field(
        uint16_t _uint16_field)
{
    m_uint16_field = _uint16_field;
}

/*!
 * @brief This function returns the value of member uint16_field
 * @return Value of member uint16_field
 */
uint16_t ContentFilterTestType::uint16_field() const
{
    return m_uint16_field;
}

/*!
 * @brief This function returns a reference to member uint16_field
 * @return Reference to member uint16_field
 */
uint16_t& ContentFilterTestType::uint16_field()
{
    return m_uint16_field;
}

/*!
 * @brief This function sets a value in member int32_field
 * @param _int32_field New value for member int32_field
 */
void ContentFilterTestType::int32_field(
        int32_t _int32_field)
{
    m_int32_field = _int32_field;
}

/*!
 * @brief This function returns the value of member int32_field
 * @return Value of member int32_field
 */
int32_t ContentFilterTestType::int32_field() const
{
    return m_int32_field;
}

/*!
 * @brief This function returns a reference to member int32_field
 * @return Reference to member int32_field
 */
int32_t& ContentFilterTestType::int32_field()
{
    return m_int32_field;
}

/*!
 * @brief This function sets a value in member uint32_field
 * @param _uint32_field New value for member uint32_field
 */
void ContentFilterTestType::uint32_field(
        uint32_t _uint32_field)
{
    m_uint32_field = _uint32_field;
}

/*!
 * @brief This function returns the value of member uint32_field
 * @return Value of member uint32_field
 */
uint32_t ContentFilterTestType::uint32_field() const
{
    return m_uint32_field;
}

/*!
 * @brief This function returns a reference to member uint32_field
 * @return Reference to member uint32_field
 */
uint32_t& ContentFilterTestType::uint32_field()
{
    return m_uint32_field;
}

/*!
 * @brief This function sets a value in member int64_field
 * @param _int64_field New value for member int64_field
 */
void ContentFilterTestType::int64_field(
        int64_t _int64_field)
{
    m_int64_field = _int64_field;
}

/*!
 * @brief This function returns the value of member int64_field
 * @return Value of member int64_field
 */
int64_t ContentFilterTestType::int64_field() const
{
    return m_int64_field;
}

/*!
 * @brief This function returns a reference to member int64_field
 * @return Reference to member int64_field
 */
int64_t& ContentFilterTestType::int64_field()
{
    return m_int64_field;
}

/*!
 * @brief This function sets a value in member uint64_field
 * @param _uint64_field New value for member uint64_field
 */
void ContentFilterTestType::uint64_field(
        uint64_t _uint64_field)
{
    m_uint64_field = _uint64_field;
}

/*!
 * @brief This function returns the value of member uint64_field
 * @return Value of member uint64_field
 */
uint64_t ContentFilterTestType::uint64_field() const
{
    return m_uint64_field;
}

/*!
 * @brief This function returns a reference to member uint64_field
 * @return Reference to member uint64_field
 */
uint64_t& ContentFilterTestType::uint64_field()
{
    return m_uint64_field;
}

/*!
 * @brief This function sets a value in member float_field
 * @param _float_field New value for member float_field
 */
void ContentFilterTestType::float_field(
        float _float_field)
{
    m_float_field = _float_field;
}

/*!
 * @brief This function returns the value of member float_field
 * @return Value of member float_field
 */
float ContentFilterTestType::float_field() const
{
    return m_float_field;
}

/*!
 * @brief This function returns a reference to member float_field
 * @return Reference to member float_field
 */
float& ContentFilterTestType::float_field()
{
    return m_float_field;
}

/*!
 * @brief This function sets a value in member double_field
 * @param _double_field New value for member double_field
 */
void ContentFilterTestType::double_field(
        double _double_field)
{
    m_double_field = _double_field;
}

/*!
 * @brief This function returns the value of member double_field
 * @return Value of member double_field
 */
double ContentFilterTestType::double_field() const
{
    return m_double_field;
}

/*!
 * @brief This function returns a reference to member double_field
 * @return Reference to member double_field
 */
double& ContentFilterTestType::double_field()
{
    return m_double_field;
}

/*!
 * @brief This function sets a value in member long_double_field
 * @param _long_double_field New value for member long_double_field
 */
void ContentFilterTestType::long_double_field(
        long double _long_double_field)
{
    m_long_double_field = _long_double_field;
}

/*!
 * @brief This function returns the value of member long_double_field
 * @return Value of member long_double_field
 */
long double ContentFilterTestType::long_double_field() const
{
    return m_long_double_field;
}

/*!
 * @brief This function returns a reference to member long_double_field
 * @return Reference to member long_double_field
 */
long double& ContentFilterTestType::long_double_field()
{
    return m_long_double_field;
}

/*!
 * @brief This function sets a value in member bool_field
 * @param _bool_field New value for member bool_field
 */
void ContentFilterTestType::bool_field(
        bool _bool_field)
{
    m_bool_field = _bool_field;
}

/*!
 * @brief This function returns the value of member bool_field
 * @return Value of member bool_field
 */
bool ContentFilterTestType::bool_field() const
{
    return m_bool_field;
}

/*!
 * @brief This function returns a reference to member bool_field
 * @return Reference to member bool_field
 */
bool& ContentFilterTestType::bool_field()
{
    return m_bool_field;
}

/*!
 * @brief This function copies the value in member string_field
 * @param _string_field New value to be copied in member string_field
 */
void ContentFilterTestType::string_field(
        const std::string& _string_field)
{
    m_string_field = _string_field;
}

/*!
 * @brief This function moves the value in member string_field
 * @param _string_field New value to be moved in member string_field
 */
void ContentFilterTestType::string_field(
        std::string&& _string_field)
{
    m_string_field = std::move(_string_field);
}

/*!
 * @brief This function returns a constant reference to member string_field
 * @return Constant reference to member string_field
 */
const std::string& ContentFilterTestType::string_field() const
{
    return m_string_field;
}

/*!
 * @brief This function returns a reference to member string_field
 * @return Reference to member string_field
 */
std::string& ContentFilterTestType::string_field()
{
    return m_string_field;
}
/*!
 * @brief This function sets a value in member enum_field
 * @param _enum_field New value for member enum_field
 */
void ContentFilterTestType::enum_field(
        Color _enum_field)
{
    m_enum_field = _enum_field;
}

/*!
 * @brief This function returns the value of member enum_field
 * @return Value of member enum_field
 */
Color ContentFilterTestType::enum_field() const
{
    return m_enum_field;
}

/*!
 * @brief This function returns a reference to member enum_field
 * @return Reference to member enum_field
 */
Color& ContentFilterTestType::enum_field()
{
    return m_enum_field;
}

/*!
 * @brief This function sets a value in member enum2_field
 * @param _enum2_field New value for member enum2_field
 */
void ContentFilterTestType::enum2_field(
        Material _enum2_field)
{
    m_enum2_field = _enum2_field;
}

/*!
 * @brief This function returns the value of member enum2_field
 * @return Value of member enum2_field
 */
Material ContentFilterTestType::enum2_field() const
{
    return m_enum2_field;
}

/*!
 * @brief This function returns a reference to member enum2_field
 * @return Reference to member enum2_field
 */
Material& ContentFilterTestType::enum2_field()
{
    return m_enum2_field;
}

/*!
 * @brief This function copies the value in member struct_field
 * @param _struct_field New value to be copied in member struct_field
 */
void ContentFilterTestType::struct_field(
        const StructType& _struct_field)
{
    m_struct_field = _struct_field;
}

/*!
 * @brief This function moves the value in member struct_field
 * @param _struct_field New value to be moved in member struct_field
 */
void ContentFilterTestType::struct_field(
        StructType&& _struct_field)
{
    m_struct_field = std::move(_struct_field);
}

/*!
 * @brief This function returns a constant reference to member struct_field
 * @return Constant reference to member struct_field
 */
const StructType& ContentFilterTestType::struct_field() const
{
    return m_struct_field;
}

/*!
 * @brief This function returns a reference to member struct_field
 * @return Reference to member struct_field
 */
StructType& ContentFilterTestType::struct_field()
{
    return m_struct_field;
}
/*!
 * @brief This function copies the value in member array_char_field
 * @param _array_char_field New value to be copied in member array_char_field
 */
void ContentFilterTestType::array_char_field(
        const std::array<char, 3>& _array_char_field)
{
    m_array_char_field = _array_char_field;
}

/*!
 * @brief This function moves the value in member array_char_field
 * @param _array_char_field New value to be moved in member array_char_field
 */
void ContentFilterTestType::array_char_field(
        std::array<char, 3>&& _array_char_field)
{
    m_array_char_field = std::move(_array_char_field);
}

/*!
 * @brief This function returns a constant reference to member array_char_field
 * @return Constant reference to member array_char_field
 */
const std::array<char, 3>& ContentFilterTestType::array_char_field() const
{
    return m_array_char_field;
}

/*!
 * @brief This function returns a reference to member array_char_field
 * @return Reference to member array_char_field
 */
std::array<char, 3>& ContentFilterTestType::array_char_field()
{
    return m_array_char_field;
}
/*!
 * @brief This function copies the value in member array_uint8_field
 * @param _array_uint8_field New value to be copied in member array_uint8_field
 */
void ContentFilterTestType::array_uint8_field(
        const std::array<uint8_t, 3>& _array_uint8_field)
{
    m_array_uint8_field = _array_uint8_field;
}

/*!
 * @brief This function moves the value in member array_uint8_field
 * @param _array_uint8_field New value to be moved in member array_uint8_field
 */
void ContentFilterTestType::array_uint8_field(
        std::array<uint8_t, 3>&& _array_uint8_field)
{
    m_array_uint8_field = std::move(_array_uint8_field);
}

/*!
 * @brief This function returns a constant reference to member array_uint8_field
 * @return Constant reference to member array_uint8_field
 */
const std::array<uint8_t, 3>& ContentFilterTestType::array_uint8_field() const
{
    return m_array_uint8_field;
}

/*!
 * @brief This function returns a reference to member array_uint8_field
 * @return Reference to member array_uint8_field
 */
std::array<uint8_t, 3>& ContentFilterTestType::array_uint8_field()
{
    return m_array_uint8_field;
}
/*!
 * @brief This function copies the value in member array_int16_field
 * @param _array_int16_field New value to be copied in member array_int16_field
 */
void ContentFilterTestType::array_int16_field(
        const std::array<int16_t, 3>& _array_int16_field)
{
    m_array_int16_field = _array_int16_field;
}

/*!
 * @brief This function moves the value in member array_int16_field
 * @param _array_int16_field New value to be moved in member array_int16_field
 */
void ContentFilterTestType::array_int16_field(
        std::array<int16_t, 3>&& _array_int16_field)
{
    m_array_int16_field = std::move(_array_int16_field);
}

/*!
 * @brief This function returns a constant reference to member array_int16_field
 * @return Constant reference to member array_int16_field
 */
const std::array<int16_t, 3>& ContentFilterTestType::array_int16_field() const
{
    return m_array_int16_field;
}

/*!
 * @brief This function returns a reference to member array_int16_field
 * @return Reference to member array_int16_field
 */
std::array<int16_t, 3>& ContentFilterTestType::array_int16_field()
{
    return m_array_int16_field;
}
/*!
 * @brief This function copies the value in member array_uint16_field
 * @param _array_uint16_field New value to be copied in member array_uint16_field
 */
void ContentFilterTestType::array_uint16_field(
        const std::array<uint16_t, 3>& _array_uint16_field)
{
    m_array_uint16_field = _array_uint16_field;
}

/*!
 * @brief This function moves the value in member array_uint16_field
 * @param _array_uint16_field New value to be moved in member array_uint16_field
 */
void ContentFilterTestType::array_uint16_field(
        std::array<uint16_t, 3>&& _array_uint16_field)
{
    m_array_uint16_field = std::move(_array_uint16_field);
}

/*!
 * @brief This function returns a constant reference to member array_uint16_field
 * @return Constant reference to member array_uint16_field
 */
const std::array<uint16_t, 3>& ContentFilterTestType::array_uint16_field() const
{
    return m_array_uint16_field;
}

/*!
 * @brief This function returns a reference to member array_uint16_field
 * @return Reference to member array_uint16_field
 */
std::array<uint16_t, 3>& ContentFilterTestType::array_uint16_field()
{
    return m_array_uint16_field;
}
/*!
 * @brief This function copies the value in member array_int32_field
 * @param _array_int32_field New value to be copied in member array_int32_field
 */
void ContentFilterTestType::array_int32_field(
        const std::array<int32_t, 3>& _array_int32_field)
{
    m_array_int32_field = _array_int32_field;
}

/*!
 * @brief This function moves the value in member array_int32_field
 * @param _array_int32_field New value to be moved in member array_int32_field
 */
void ContentFilterTestType::array_int32_field(
        std::array<int32_t, 3>&& _array_int32_field)
{
    m_array_int32_field = std::move(_array_int32_field);
}

/*!
 * @brief This function returns a constant reference to member array_int32_field
 * @return Constant reference to member array_int32_field
 */
const std::array<int32_t, 3>& ContentFilterTestType::array_int32_field() const
{
    return m_array_int32_field;
}

/*!
 * @brief This function returns a reference to member array_int32_field
 * @return Reference to member array_int32_field
 */
std::array<int32_t, 3>& ContentFilterTestType::array_int32_field()
{
    return m_array_int32_field;
}
/*!
 * @brief This function copies the value in member array_uint32_field
 * @param _array_uint32_field New value to be copied in member array_uint32_field
 */
void ContentFilterTestType::array_uint32_field(
        const std::array<uint32_t, 3>& _array_uint32_field)
{
    m_array_uint32_field = _array_uint32_field;
}

/*!
 * @brief This function moves the value in member array_uint32_field
 * @param _array_uint32_field New value to be moved in member array_uint32_field
 */
void ContentFilterTestType::array_uint32_field(
        std::array<uint32_t, 3>&& _array_uint32_field)
{
    m_array_uint32_field = std::move(_array_uint32_field);
}

/*!
 * @brief This function returns a constant reference to member array_uint32_field
 * @return Constant reference to member array_uint32_field
 */
const std::array<uint32_t, 3>& ContentFilterTestType::array_uint32_field() const
{
    return m_array_uint32_field;
}

/*!
 * @brief This function returns a reference to member array_uint32_field
 * @return Reference to member array_uint32_field
 */
std::array<uint32_t, 3>& ContentFilterTestType::array_uint32_field()
{
    return m_array_uint32_field;
}
/*!
 * @brief This function copies the value in member array_int64_field
 * @param _array_int64_field New value to be copied in member array_int64_field
 */
void ContentFilterTestType::array_int64_field(
        const std::array<int64_t, 3>& _array_int64_field)
{
    m_array_int64_field = _array_int64_field;
}

/*!
 * @brief This function moves the value in member array_int64_field
 * @param _array_int64_field New value to be moved in member array_int64_field
 */
void ContentFilterTestType::array_int64_field(
        std::array<int64_t, 3>&& _array_int64_field)
{
    m_array_int64_field = std::move(_array_int64_field);
}

/*!
 * @brief This function returns a constant reference to member array_int64_field
 * @return Constant reference to member array_int64_field
 */
const std::array<int64_t, 3>& ContentFilterTestType::array_int64_field() const
{
    return m_array_int64_field;
}

/*!
 * @brief This function returns a reference to member array_int64_field
 * @return Reference to member array_int64_field
 */
std::array<int64_t, 3>& ContentFilterTestType::array_int64_field()
{
    return m_array_int64_field;
}
/*!
 * @brief This function copies the value in member array_uint64_field
 * @param _array_uint64_field New value to be copied in member array_uint64_field
 */
void ContentFilterTestType::array_uint64_field(
        const std::array<uint64_t, 3>& _array_uint64_field)
{
    m_array_uint64_field = _array_uint64_field;
}

/*!
 * @brief This function moves the value in member array_uint64_field
 * @param _array_uint64_field New value to be moved in member array_uint64_field
 */
void ContentFilterTestType::array_uint64_field(
        std::array<uint64_t, 3>&& _array_uint64_field)
{
    m_array_uint64_field = std::move(_array_uint64_field);
}

/*!
 * @brief This function returns a constant reference to member array_uint64_field
 * @return Constant reference to member array_uint64_field
 */
const std::array<uint64_t, 3>& ContentFilterTestType::array_uint64_field() const
{
    return m_array_uint64_field;
}

/*!
 * @brief This function returns a reference to member array_uint64_field
 * @return Reference to member array_uint64_field
 */
std::array<uint64_t, 3>& ContentFilterTestType::array_uint64_field()
{
    return m_array_uint64_field;
}
/*!
 * @brief This function copies the value in member array_float_field
 * @param _array_float_field New value to be copied in member array_float_field
 */
void ContentFilterTestType::array_float_field(
        const std::array<float, 3>& _array_float_field)
{
    m_array_float_field = _array_float_field;
}

/*!
 * @brief This function moves the value in member array_float_field
 * @param _array_float_field New value to be moved in member array_float_field
 */
void ContentFilterTestType::array_float_field(
        std::array<float, 3>&& _array_float_field)
{
    m_array_float_field = std::move(_array_float_field);
}

/*!
 * @brief This function returns a constant reference to member array_float_field
 * @return Constant reference to member array_float_field
 */
const std::array<float, 3>& ContentFilterTestType::array_float_field() const
{
    return m_array_float_field;
}

/*!
 * @brief This function returns a reference to member array_float_field
 * @return Reference to member array_float_field
 */
std::array<float, 3>& ContentFilterTestType::array_float_field()
{
    return m_array_float_field;
}
/*!
 * @brief This function copies the value in member array_double_field
 * @param _array_double_field New value to be copied in member array_double_field
 */
void ContentFilterTestType::array_double_field(
        const std::array<double, 3>& _array_double_field)
{
    m_array_double_field = _array_double_field;
}

/*!
 * @brief This function moves the value in member array_double_field
 * @param _array_double_field New value to be moved in member array_double_field
 */
void ContentFilterTestType::array_double_field(
        std::array<double, 3>&& _array_double_field)
{
    m_array_double_field = std::move(_array_double_field);
}

/*!
 * @brief This function returns a constant reference to member array_double_field
 * @return Constant reference to member array_double_field
 */
const std::array<double, 3>& ContentFilterTestType::array_double_field() const
{
    return m_array_double_field;
}

/*!
 * @brief This function returns a reference to member array_double_field
 * @return Reference to member array_double_field
 */
std::array<double, 3>& ContentFilterTestType::array_double_field()
{
    return m_array_double_field;
}
/*!
 * @brief This function copies the value in member array_long_double_field
 * @param _array_long_double_field New value to be copied in member array_long_double_field
 */
void ContentFilterTestType::array_long_double_field(
        const std::array<long double, 3>& _array_long_double_field)
{
    m_array_long_double_field = _array_long_double_field;
}

/*!
 * @brief This function moves the value in member array_long_double_field
 * @param _array_long_double_field New value to be moved in member array_long_double_field
 */
void ContentFilterTestType::array_long_double_field(
        std::array<long double, 3>&& _array_long_double_field)
{
    m_array_long_double_field = std::move(_array_long_double_field);
}

/*!
 * @brief This function returns a constant reference to member array_long_double_field
 * @return Constant reference to member array_long_double_field
 */
const std::array<long double, 3>& ContentFilterTestType::array_long_double_field() const
{
    return m_array_long_double_field;
}

/*!
 * @brief This function returns a reference to member array_long_double_field
 * @return Reference to member array_long_double_field
 */
std::array<long double, 3>& ContentFilterTestType::array_long_double_field()
{
    return m_array_long_double_field;
}
/*!
 * @brief This function copies the value in member array_bool_field
 * @param _array_bool_field New value to be copied in member array_bool_field
 */
void ContentFilterTestType::array_bool_field(
        const std::array<bool, 3>& _array_bool_field)
{
    m_array_bool_field = _array_bool_field;
}

/*!
 * @brief This function moves the value in member array_bool_field
 * @param _array_bool_field New value to be moved in member array_bool_field
 */
void ContentFilterTestType::array_bool_field(
        std::array<bool, 3>&& _array_bool_field)
{
    m_array_bool_field = std::move(_array_bool_field);
}

/*!
 * @brief This function returns a constant reference to member array_bool_field
 * @return Constant reference to member array_bool_field
 */
const std::array<bool, 3>& ContentFilterTestType::array_bool_field() const
{
    return m_array_bool_field;
}

/*!
 * @brief This function returns a reference to member array_bool_field
 * @return Reference to member array_bool_field
 */
std::array<bool, 3>& ContentFilterTestType::array_bool_field()
{
    return m_array_bool_field;
}
/*!
 * @brief This function copies the value in member array_string_field
 * @param _array_string_field New value to be copied in member array_string_field
 */
void ContentFilterTestType::array_string_field(
        const std::array<std::string, 3>& _array_string_field)
{
    m_array_string_field = _array_string_field;
}

/*!
 * @brief This function moves the value in member array_string_field
 * @param _array_string_field New value to be moved in member array_string_field
 */
void ContentFilterTestType::array_string_field(
        std::array<std::string, 3>&& _array_string_field)
{
    m_array_string_field = std::move(_array_string_field);
}

/*!
 * @brief This function returns a constant reference to member array_string_field
 * @return Constant reference to member array_string_field
 */
const std::array<std::string, 3>& ContentFilterTestType::array_string_field() const
{
    return m_array_string_field;
}

/*!
 * @brief This function returns a reference to member array_string_field
 * @return Reference to member array_string_field
 */
std::array<std::string, 3>& ContentFilterTestType::array_string_field()
{
    return m_array_string_field;
}
/*!
 * @brief This function copies the value in member array_enum_field
 * @param _array_enum_field New value to be copied in member array_enum_field
 */
void ContentFilterTestType::array_enum_field(
        const std::array<Color, 3>& _array_enum_field)
{
    m_array_enum_field = _array_enum_field;
}

/*!
 * @brief This function moves the value in member array_enum_field
 * @param _array_enum_field New value to be moved in member array_enum_field
 */
void ContentFilterTestType::array_enum_field(
        std::array<Color, 3>&& _array_enum_field)
{
    m_array_enum_field = std::move(_array_enum_field);
}

/*!
 * @brief This function returns a constant reference to member array_enum_field
 * @return Constant reference to member array_enum_field
 */
const std::array<Color, 3>& ContentFilterTestType::array_enum_field() const
{
    return m_array_enum_field;
}

/*!
 * @brief This function returns a reference to member array_enum_field
 * @return Reference to member array_enum_field
 */
std::array<Color, 3>& ContentFilterTestType::array_enum_field()
{
    return m_array_enum_field;
}
/*!
 * @brief This function copies the value in member array_enum2_field
 * @param _array_enum2_field New value to be copied in member array_enum2_field
 */
void ContentFilterTestType::array_enum2_field(
        const std::array<Material, 3>& _array_enum2_field)
{
    m_array_enum2_field = _array_enum2_field;
}

/*!
 * @brief This function moves the value in member array_enum2_field
 * @param _array_enum2_field New value to be moved in member array_enum2_field
 */
void ContentFilterTestType::array_enum2_field(
        std::array<Material, 3>&& _array_enum2_field)
{
    m_array_enum2_field = std::move(_array_enum2_field);
}

/*!
 * @brief This function returns a constant reference to member array_enum2_field
 * @return Constant reference to member array_enum2_field
 */
const std::array<Material, 3>& ContentFilterTestType::array_enum2_field() const
{
    return m_array_enum2_field;
}

/*!
 * @brief This function returns a reference to member array_enum2_field
 * @return Reference to member array_enum2_field
 */
std::array<Material, 3>& ContentFilterTestType::array_enum2_field()
{
    return m_array_enum2_field;
}
/*!
 * @brief This function copies the value in member array_struct_field
 * @param _array_struct_field New value to be copied in member array_struct_field
 */
void ContentFilterTestType::array_struct_field(
        const std::array<StructType, 3>& _array_struct_field)
{
    m_array_struct_field = _array_struct_field;
}

/*!
 * @brief This function moves the value in member array_struct_field
 * @param _array_struct_field New value to be moved in member array_struct_field
 */
void ContentFilterTestType::array_struct_field(
        std::array<StructType, 3>&& _array_struct_field)
{
    m_array_struct_field = std::move(_array_struct_field);
}

/*!
 * @brief This function returns a constant reference to member array_struct_field
 * @return Constant reference to member array_struct_field
 */
const std::array<StructType, 3>& ContentFilterTestType::array_struct_field() const
{
    return m_array_struct_field;
}

/*!
 * @brief This function returns a reference to member array_struct_field
 * @return Reference to member array_struct_field
 */
std::array<StructType, 3>& ContentFilterTestType::array_struct_field()
{
    return m_array_struct_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_char_field
 * @param _bounded_sequence_char_field New value to be copied in member bounded_sequence_char_field
 */
void ContentFilterTestType::bounded_sequence_char_field(
        const std::vector<char>& _bounded_sequence_char_field)
{
    m_bounded_sequence_char_field = _bounded_sequence_char_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_char_field
 * @param _bounded_sequence_char_field New value to be moved in member bounded_sequence_char_field
 */
void ContentFilterTestType::bounded_sequence_char_field(
        std::vector<char>&& _bounded_sequence_char_field)
{
    m_bounded_sequence_char_field = std::move(_bounded_sequence_char_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_char_field
 * @return Constant reference to member bounded_sequence_char_field
 */
const std::vector<char>& ContentFilterTestType::bounded_sequence_char_field() const
{
    return m_bounded_sequence_char_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_char_field
 * @return Reference to member bounded_sequence_char_field
 */
std::vector<char>& ContentFilterTestType::bounded_sequence_char_field()
{
    return m_bounded_sequence_char_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_uint8_field
 * @param _bounded_sequence_uint8_field New value to be copied in member bounded_sequence_uint8_field
 */
void ContentFilterTestType::bounded_sequence_uint8_field(
        const std::vector<uint8_t>& _bounded_sequence_uint8_field)
{
    m_bounded_sequence_uint8_field = _bounded_sequence_uint8_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_uint8_field
 * @param _bounded_sequence_uint8_field New value to be moved in member bounded_sequence_uint8_field
 */
void ContentFilterTestType::bounded_sequence_uint8_field(
        std::vector<uint8_t>&& _bounded_sequence_uint8_field)
{
    m_bounded_sequence_uint8_field = std::move(_bounded_sequence_uint8_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_uint8_field
 * @return Constant reference to member bounded_sequence_uint8_field
 */
const std::vector<uint8_t>& ContentFilterTestType::bounded_sequence_uint8_field() const
{
    return m_bounded_sequence_uint8_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_uint8_field
 * @return Reference to member bounded_sequence_uint8_field
 */
std::vector<uint8_t>& ContentFilterTestType::bounded_sequence_uint8_field()
{
    return m_bounded_sequence_uint8_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_int16_field
 * @param _bounded_sequence_int16_field New value to be copied in member bounded_sequence_int16_field
 */
void ContentFilterTestType::bounded_sequence_int16_field(
        const std::vector<int16_t>& _bounded_sequence_int16_field)
{
    m_bounded_sequence_int16_field = _bounded_sequence_int16_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_int16_field
 * @param _bounded_sequence_int16_field New value to be moved in member bounded_sequence_int16_field
 */
void ContentFilterTestType::bounded_sequence_int16_field(
        std::vector<int16_t>&& _bounded_sequence_int16_field)
{
    m_bounded_sequence_int16_field = std::move(_bounded_sequence_int16_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_int16_field
 * @return Constant reference to member bounded_sequence_int16_field
 */
const std::vector<int16_t>& ContentFilterTestType::bounded_sequence_int16_field() const
{
    return m_bounded_sequence_int16_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_int16_field
 * @return Reference to member bounded_sequence_int16_field
 */
std::vector<int16_t>& ContentFilterTestType::bounded_sequence_int16_field()
{
    return m_bounded_sequence_int16_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_uint16_field
 * @param _bounded_sequence_uint16_field New value to be copied in member bounded_sequence_uint16_field
 */
void ContentFilterTestType::bounded_sequence_uint16_field(
        const std::vector<uint16_t>& _bounded_sequence_uint16_field)
{
    m_bounded_sequence_uint16_field = _bounded_sequence_uint16_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_uint16_field
 * @param _bounded_sequence_uint16_field New value to be moved in member bounded_sequence_uint16_field
 */
void ContentFilterTestType::bounded_sequence_uint16_field(
        std::vector<uint16_t>&& _bounded_sequence_uint16_field)
{
    m_bounded_sequence_uint16_field = std::move(_bounded_sequence_uint16_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_uint16_field
 * @return Constant reference to member bounded_sequence_uint16_field
 */
const std::vector<uint16_t>& ContentFilterTestType::bounded_sequence_uint16_field() const
{
    return m_bounded_sequence_uint16_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_uint16_field
 * @return Reference to member bounded_sequence_uint16_field
 */
std::vector<uint16_t>& ContentFilterTestType::bounded_sequence_uint16_field()
{
    return m_bounded_sequence_uint16_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_int32_field
 * @param _bounded_sequence_int32_field New value to be copied in member bounded_sequence_int32_field
 */
void ContentFilterTestType::bounded_sequence_int32_field(
        const std::vector<int32_t>& _bounded_sequence_int32_field)
{
    m_bounded_sequence_int32_field = _bounded_sequence_int32_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_int32_field
 * @param _bounded_sequence_int32_field New value to be moved in member bounded_sequence_int32_field
 */
void ContentFilterTestType::bounded_sequence_int32_field(
        std::vector<int32_t>&& _bounded_sequence_int32_field)
{
    m_bounded_sequence_int32_field = std::move(_bounded_sequence_int32_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_int32_field
 * @return Constant reference to member bounded_sequence_int32_field
 */
const std::vector<int32_t>& ContentFilterTestType::bounded_sequence_int32_field() const
{
    return m_bounded_sequence_int32_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_int32_field
 * @return Reference to member bounded_sequence_int32_field
 */
std::vector<int32_t>& ContentFilterTestType::bounded_sequence_int32_field()
{
    return m_bounded_sequence_int32_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_uint32_field
 * @param _bounded_sequence_uint32_field New value to be copied in member bounded_sequence_uint32_field
 */
void ContentFilterTestType::bounded_sequence_uint32_field(
        const std::vector<uint32_t>& _bounded_sequence_uint32_field)
{
    m_bounded_sequence_uint32_field = _bounded_sequence_uint32_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_uint32_field
 * @param _bounded_sequence_uint32_field New value to be moved in member bounded_sequence_uint32_field
 */
void ContentFilterTestType::bounded_sequence_uint32_field(
        std::vector<uint32_t>&& _bounded_sequence_uint32_field)
{
    m_bounded_sequence_uint32_field = std::move(_bounded_sequence_uint32_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_uint32_field
 * @return Constant reference to member bounded_sequence_uint32_field
 */
const std::vector<uint32_t>& ContentFilterTestType::bounded_sequence_uint32_field() const
{
    return m_bounded_sequence_uint32_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_uint32_field
 * @return Reference to member bounded_sequence_uint32_field
 */
std::vector<uint32_t>& ContentFilterTestType::bounded_sequence_uint32_field()
{
    return m_bounded_sequence_uint32_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_int64_field
 * @param _bounded_sequence_int64_field New value to be copied in member bounded_sequence_int64_field
 */
void ContentFilterTestType::bounded_sequence_int64_field(
        const std::vector<int64_t>& _bounded_sequence_int64_field)
{
    m_bounded_sequence_int64_field = _bounded_sequence_int64_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_int64_field
 * @param _bounded_sequence_int64_field New value to be moved in member bounded_sequence_int64_field
 */
void ContentFilterTestType::bounded_sequence_int64_field(
        std::vector<int64_t>&& _bounded_sequence_int64_field)
{
    m_bounded_sequence_int64_field = std::move(_bounded_sequence_int64_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_int64_field
 * @return Constant reference to member bounded_sequence_int64_field
 */
const std::vector<int64_t>& ContentFilterTestType::bounded_sequence_int64_field() const
{
    return m_bounded_sequence_int64_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_int64_field
 * @return Reference to member bounded_sequence_int64_field
 */
std::vector<int64_t>& ContentFilterTestType::bounded_sequence_int64_field()
{
    return m_bounded_sequence_int64_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_uint64_field
 * @param _bounded_sequence_uint64_field New value to be copied in member bounded_sequence_uint64_field
 */
void ContentFilterTestType::bounded_sequence_uint64_field(
        const std::vector<uint64_t>& _bounded_sequence_uint64_field)
{
    m_bounded_sequence_uint64_field = _bounded_sequence_uint64_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_uint64_field
 * @param _bounded_sequence_uint64_field New value to be moved in member bounded_sequence_uint64_field
 */
void ContentFilterTestType::bounded_sequence_uint64_field(
        std::vector<uint64_t>&& _bounded_sequence_uint64_field)
{
    m_bounded_sequence_uint64_field = std::move(_bounded_sequence_uint64_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_uint64_field
 * @return Constant reference to member bounded_sequence_uint64_field
 */
const std::vector<uint64_t>& ContentFilterTestType::bounded_sequence_uint64_field() const
{
    return m_bounded_sequence_uint64_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_uint64_field
 * @return Reference to member bounded_sequence_uint64_field
 */
std::vector<uint64_t>& ContentFilterTestType::bounded_sequence_uint64_field()
{
    return m_bounded_sequence_uint64_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_float_field
 * @param _bounded_sequence_float_field New value to be copied in member bounded_sequence_float_field
 */
void ContentFilterTestType::bounded_sequence_float_field(
        const std::vector<float>& _bounded_sequence_float_field)
{
    m_bounded_sequence_float_field = _bounded_sequence_float_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_float_field
 * @param _bounded_sequence_float_field New value to be moved in member bounded_sequence_float_field
 */
void ContentFilterTestType::bounded_sequence_float_field(
        std::vector<float>&& _bounded_sequence_float_field)
{
    m_bounded_sequence_float_field = std::move(_bounded_sequence_float_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_float_field
 * @return Constant reference to member bounded_sequence_float_field
 */
const std::vector<float>& ContentFilterTestType::bounded_sequence_float_field() const
{
    return m_bounded_sequence_float_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_float_field
 * @return Reference to member bounded_sequence_float_field
 */
std::vector<float>& ContentFilterTestType::bounded_sequence_float_field()
{
    return m_bounded_sequence_float_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_double_field
 * @param _bounded_sequence_double_field New value to be copied in member bounded_sequence_double_field
 */
void ContentFilterTestType::bounded_sequence_double_field(
        const std::vector<double>& _bounded_sequence_double_field)
{
    m_bounded_sequence_double_field = _bounded_sequence_double_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_double_field
 * @param _bounded_sequence_double_field New value to be moved in member bounded_sequence_double_field
 */
void ContentFilterTestType::bounded_sequence_double_field(
        std::vector<double>&& _bounded_sequence_double_field)
{
    m_bounded_sequence_double_field = std::move(_bounded_sequence_double_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_double_field
 * @return Constant reference to member bounded_sequence_double_field
 */
const std::vector<double>& ContentFilterTestType::bounded_sequence_double_field() const
{
    return m_bounded_sequence_double_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_double_field
 * @return Reference to member bounded_sequence_double_field
 */
std::vector<double>& ContentFilterTestType::bounded_sequence_double_field()
{
    return m_bounded_sequence_double_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_long_double_field
 * @param _bounded_sequence_long_double_field New value to be copied in member bounded_sequence_long_double_field
 */
void ContentFilterTestType::bounded_sequence_long_double_field(
        const std::vector<long double>& _bounded_sequence_long_double_field)
{
    m_bounded_sequence_long_double_field = _bounded_sequence_long_double_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_long_double_field
 * @param _bounded_sequence_long_double_field New value to be moved in member bounded_sequence_long_double_field
 */
void ContentFilterTestType::bounded_sequence_long_double_field(
        std::vector<long double>&& _bounded_sequence_long_double_field)
{
    m_bounded_sequence_long_double_field = std::move(_bounded_sequence_long_double_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_long_double_field
 * @return Constant reference to member bounded_sequence_long_double_field
 */
const std::vector<long double>& ContentFilterTestType::bounded_sequence_long_double_field() const
{
    return m_bounded_sequence_long_double_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_long_double_field
 * @return Reference to member bounded_sequence_long_double_field
 */
std::vector<long double>& ContentFilterTestType::bounded_sequence_long_double_field()
{
    return m_bounded_sequence_long_double_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_bool_field
 * @param _bounded_sequence_bool_field New value to be copied in member bounded_sequence_bool_field
 */
void ContentFilterTestType::bounded_sequence_bool_field(
        const std::vector<bool>& _bounded_sequence_bool_field)
{
    m_bounded_sequence_bool_field = _bounded_sequence_bool_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_bool_field
 * @param _bounded_sequence_bool_field New value to be moved in member bounded_sequence_bool_field
 */
void ContentFilterTestType::bounded_sequence_bool_field(
        std::vector<bool>&& _bounded_sequence_bool_field)
{
    m_bounded_sequence_bool_field = std::move(_bounded_sequence_bool_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_bool_field
 * @return Constant reference to member bounded_sequence_bool_field
 */
const std::vector<bool>& ContentFilterTestType::bounded_sequence_bool_field() const
{
    return m_bounded_sequence_bool_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_bool_field
 * @return Reference to member bounded_sequence_bool_field
 */
std::vector<bool>& ContentFilterTestType::bounded_sequence_bool_field()
{
    return m_bounded_sequence_bool_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_string_field
 * @param _bounded_sequence_string_field New value to be copied in member bounded_sequence_string_field
 */
void ContentFilterTestType::bounded_sequence_string_field(
        const std::vector<std::string>& _bounded_sequence_string_field)
{
    m_bounded_sequence_string_field = _bounded_sequence_string_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_string_field
 * @param _bounded_sequence_string_field New value to be moved in member bounded_sequence_string_field
 */
void ContentFilterTestType::bounded_sequence_string_field(
        std::vector<std::string>&& _bounded_sequence_string_field)
{
    m_bounded_sequence_string_field = std::move(_bounded_sequence_string_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_string_field
 * @return Constant reference to member bounded_sequence_string_field
 */
const std::vector<std::string>& ContentFilterTestType::bounded_sequence_string_field() const
{
    return m_bounded_sequence_string_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_string_field
 * @return Reference to member bounded_sequence_string_field
 */
std::vector<std::string>& ContentFilterTestType::bounded_sequence_string_field()
{
    return m_bounded_sequence_string_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_enum_field
 * @param _bounded_sequence_enum_field New value to be copied in member bounded_sequence_enum_field
 */
void ContentFilterTestType::bounded_sequence_enum_field(
        const std::vector<Color>& _bounded_sequence_enum_field)
{
    m_bounded_sequence_enum_field = _bounded_sequence_enum_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_enum_field
 * @param _bounded_sequence_enum_field New value to be moved in member bounded_sequence_enum_field
 */
void ContentFilterTestType::bounded_sequence_enum_field(
        std::vector<Color>&& _bounded_sequence_enum_field)
{
    m_bounded_sequence_enum_field = std::move(_bounded_sequence_enum_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_enum_field
 * @return Constant reference to member bounded_sequence_enum_field
 */
const std::vector<Color>& ContentFilterTestType::bounded_sequence_enum_field() const
{
    return m_bounded_sequence_enum_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_enum_field
 * @return Reference to member bounded_sequence_enum_field
 */
std::vector<Color>& ContentFilterTestType::bounded_sequence_enum_field()
{
    return m_bounded_sequence_enum_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_enum2_field
 * @param _bounded_sequence_enum2_field New value to be copied in member bounded_sequence_enum2_field
 */
void ContentFilterTestType::bounded_sequence_enum2_field(
        const std::vector<Material>& _bounded_sequence_enum2_field)
{
    m_bounded_sequence_enum2_field = _bounded_sequence_enum2_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_enum2_field
 * @param _bounded_sequence_enum2_field New value to be moved in member bounded_sequence_enum2_field
 */
void ContentFilterTestType::bounded_sequence_enum2_field(
        std::vector<Material>&& _bounded_sequence_enum2_field)
{
    m_bounded_sequence_enum2_field = std::move(_bounded_sequence_enum2_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_enum2_field
 * @return Constant reference to member bounded_sequence_enum2_field
 */
const std::vector<Material>& ContentFilterTestType::bounded_sequence_enum2_field() const
{
    return m_bounded_sequence_enum2_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_enum2_field
 * @return Reference to member bounded_sequence_enum2_field
 */
std::vector<Material>& ContentFilterTestType::bounded_sequence_enum2_field()
{
    return m_bounded_sequence_enum2_field;
}
/*!
 * @brief This function copies the value in member bounded_sequence_struct_field
 * @param _bounded_sequence_struct_field New value to be copied in member bounded_sequence_struct_field
 */
void ContentFilterTestType::bounded_sequence_struct_field(
        const std::vector<StructType>& _bounded_sequence_struct_field)
{
    m_bounded_sequence_struct_field = _bounded_sequence_struct_field;
}

/*!
 * @brief This function moves the value in member bounded_sequence_struct_field
 * @param _bounded_sequence_struct_field New value to be moved in member bounded_sequence_struct_field
 */
void ContentFilterTestType::bounded_sequence_struct_field(
        std::vector<StructType>&& _bounded_sequence_struct_field)
{
    m_bounded_sequence_struct_field = std::move(_bounded_sequence_struct_field);
}

/*!
 * @brief This function returns a constant reference to member bounded_sequence_struct_field
 * @return Constant reference to member bounded_sequence_struct_field
 */
const std::vector<StructType>& ContentFilterTestType::bounded_sequence_struct_field() const
{
    return m_bounded_sequence_struct_field;
}

/*!
 * @brief This function returns a reference to member bounded_sequence_struct_field
 * @return Reference to member bounded_sequence_struct_field
 */
std::vector<StructType>& ContentFilterTestType::bounded_sequence_struct_field()
{
    return m_bounded_sequence_struct_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_char_field
 * @param _unbounded_sequence_char_field New value to be copied in member unbounded_sequence_char_field
 */
void ContentFilterTestType::unbounded_sequence_char_field(
        const std::vector<char>& _unbounded_sequence_char_field)
{
    m_unbounded_sequence_char_field = _unbounded_sequence_char_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_char_field
 * @param _unbounded_sequence_char_field New value to be moved in member unbounded_sequence_char_field
 */
void ContentFilterTestType::unbounded_sequence_char_field(
        std::vector<char>&& _unbounded_sequence_char_field)
{
    m_unbounded_sequence_char_field = std::move(_unbounded_sequence_char_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_char_field
 * @return Constant reference to member unbounded_sequence_char_field
 */
const std::vector<char>& ContentFilterTestType::unbounded_sequence_char_field() const
{
    return m_unbounded_sequence_char_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_char_field
 * @return Reference to member unbounded_sequence_char_field
 */
std::vector<char>& ContentFilterTestType::unbounded_sequence_char_field()
{
    return m_unbounded_sequence_char_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_uint8_field
 * @param _unbounded_sequence_uint8_field New value to be copied in member unbounded_sequence_uint8_field
 */
void ContentFilterTestType::unbounded_sequence_uint8_field(
        const std::vector<uint8_t>& _unbounded_sequence_uint8_field)
{
    m_unbounded_sequence_uint8_field = _unbounded_sequence_uint8_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_uint8_field
 * @param _unbounded_sequence_uint8_field New value to be moved in member unbounded_sequence_uint8_field
 */
void ContentFilterTestType::unbounded_sequence_uint8_field(
        std::vector<uint8_t>&& _unbounded_sequence_uint8_field)
{
    m_unbounded_sequence_uint8_field = std::move(_unbounded_sequence_uint8_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_uint8_field
 * @return Constant reference to member unbounded_sequence_uint8_field
 */
const std::vector<uint8_t>& ContentFilterTestType::unbounded_sequence_uint8_field() const
{
    return m_unbounded_sequence_uint8_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_uint8_field
 * @return Reference to member unbounded_sequence_uint8_field
 */
std::vector<uint8_t>& ContentFilterTestType::unbounded_sequence_uint8_field()
{
    return m_unbounded_sequence_uint8_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_int16_field
 * @param _unbounded_sequence_int16_field New value to be copied in member unbounded_sequence_int16_field
 */
void ContentFilterTestType::unbounded_sequence_int16_field(
        const std::vector<int16_t>& _unbounded_sequence_int16_field)
{
    m_unbounded_sequence_int16_field = _unbounded_sequence_int16_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_int16_field
 * @param _unbounded_sequence_int16_field New value to be moved in member unbounded_sequence_int16_field
 */
void ContentFilterTestType::unbounded_sequence_int16_field(
        std::vector<int16_t>&& _unbounded_sequence_int16_field)
{
    m_unbounded_sequence_int16_field = std::move(_unbounded_sequence_int16_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_int16_field
 * @return Constant reference to member unbounded_sequence_int16_field
 */
const std::vector<int16_t>& ContentFilterTestType::unbounded_sequence_int16_field() const
{
    return m_unbounded_sequence_int16_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_int16_field
 * @return Reference to member unbounded_sequence_int16_field
 */
std::vector<int16_t>& ContentFilterTestType::unbounded_sequence_int16_field()
{
    return m_unbounded_sequence_int16_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_uint16_field
 * @param _unbounded_sequence_uint16_field New value to be copied in member unbounded_sequence_uint16_field
 */
void ContentFilterTestType::unbounded_sequence_uint16_field(
        const std::vector<uint16_t>& _unbounded_sequence_uint16_field)
{
    m_unbounded_sequence_uint16_field = _unbounded_sequence_uint16_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_uint16_field
 * @param _unbounded_sequence_uint16_field New value to be moved in member unbounded_sequence_uint16_field
 */
void ContentFilterTestType::unbounded_sequence_uint16_field(
        std::vector<uint16_t>&& _unbounded_sequence_uint16_field)
{
    m_unbounded_sequence_uint16_field = std::move(_unbounded_sequence_uint16_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_uint16_field
 * @return Constant reference to member unbounded_sequence_uint16_field
 */
const std::vector<uint16_t>& ContentFilterTestType::unbounded_sequence_uint16_field() const
{
    return m_unbounded_sequence_uint16_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_uint16_field
 * @return Reference to member unbounded_sequence_uint16_field
 */
std::vector<uint16_t>& ContentFilterTestType::unbounded_sequence_uint16_field()
{
    return m_unbounded_sequence_uint16_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_int32_field
 * @param _unbounded_sequence_int32_field New value to be copied in member unbounded_sequence_int32_field
 */
void ContentFilterTestType::unbounded_sequence_int32_field(
        const std::vector<int32_t>& _unbounded_sequence_int32_field)
{
    m_unbounded_sequence_int32_field = _unbounded_sequence_int32_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_int32_field
 * @param _unbounded_sequence_int32_field New value to be moved in member unbounded_sequence_int32_field
 */
void ContentFilterTestType::unbounded_sequence_int32_field(
        std::vector<int32_t>&& _unbounded_sequence_int32_field)
{
    m_unbounded_sequence_int32_field = std::move(_unbounded_sequence_int32_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_int32_field
 * @return Constant reference to member unbounded_sequence_int32_field
 */
const std::vector<int32_t>& ContentFilterTestType::unbounded_sequence_int32_field() const
{
    return m_unbounded_sequence_int32_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_int32_field
 * @return Reference to member unbounded_sequence_int32_field
 */
std::vector<int32_t>& ContentFilterTestType::unbounded_sequence_int32_field()
{
    return m_unbounded_sequence_int32_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_uint32_field
 * @param _unbounded_sequence_uint32_field New value to be copied in member unbounded_sequence_uint32_field
 */
void ContentFilterTestType::unbounded_sequence_uint32_field(
        const std::vector<uint32_t>& _unbounded_sequence_uint32_field)
{
    m_unbounded_sequence_uint32_field = _unbounded_sequence_uint32_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_uint32_field
 * @param _unbounded_sequence_uint32_field New value to be moved in member unbounded_sequence_uint32_field
 */
void ContentFilterTestType::unbounded_sequence_uint32_field(
        std::vector<uint32_t>&& _unbounded_sequence_uint32_field)
{
    m_unbounded_sequence_uint32_field = std::move(_unbounded_sequence_uint32_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_uint32_field
 * @return Constant reference to member unbounded_sequence_uint32_field
 */
const std::vector<uint32_t>& ContentFilterTestType::unbounded_sequence_uint32_field() const
{
    return m_unbounded_sequence_uint32_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_uint32_field
 * @return Reference to member unbounded_sequence_uint32_field
 */
std::vector<uint32_t>& ContentFilterTestType::unbounded_sequence_uint32_field()
{
    return m_unbounded_sequence_uint32_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_int64_field
 * @param _unbounded_sequence_int64_field New value to be copied in member unbounded_sequence_int64_field
 */
void ContentFilterTestType::unbounded_sequence_int64_field(
        const std::vector<int64_t>& _unbounded_sequence_int64_field)
{
    m_unbounded_sequence_int64_field = _unbounded_sequence_int64_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_int64_field
 * @param _unbounded_sequence_int64_field New value to be moved in member unbounded_sequence_int64_field
 */
void ContentFilterTestType::unbounded_sequence_int64_field(
        std::vector<int64_t>&& _unbounded_sequence_int64_field)
{
    m_unbounded_sequence_int64_field = std::move(_unbounded_sequence_int64_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_int64_field
 * @return Constant reference to member unbounded_sequence_int64_field
 */
const std::vector<int64_t>& ContentFilterTestType::unbounded_sequence_int64_field() const
{
    return m_unbounded_sequence_int64_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_int64_field
 * @return Reference to member unbounded_sequence_int64_field
 */
std::vector<int64_t>& ContentFilterTestType::unbounded_sequence_int64_field()
{
    return m_unbounded_sequence_int64_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_uint64_field
 * @param _unbounded_sequence_uint64_field New value to be copied in member unbounded_sequence_uint64_field
 */
void ContentFilterTestType::unbounded_sequence_uint64_field(
        const std::vector<uint64_t>& _unbounded_sequence_uint64_field)
{
    m_unbounded_sequence_uint64_field = _unbounded_sequence_uint64_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_uint64_field
 * @param _unbounded_sequence_uint64_field New value to be moved in member unbounded_sequence_uint64_field
 */
void ContentFilterTestType::unbounded_sequence_uint64_field(
        std::vector<uint64_t>&& _unbounded_sequence_uint64_field)
{
    m_unbounded_sequence_uint64_field = std::move(_unbounded_sequence_uint64_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_uint64_field
 * @return Constant reference to member unbounded_sequence_uint64_field
 */
const std::vector<uint64_t>& ContentFilterTestType::unbounded_sequence_uint64_field() const
{
    return m_unbounded_sequence_uint64_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_uint64_field
 * @return Reference to member unbounded_sequence_uint64_field
 */
std::vector<uint64_t>& ContentFilterTestType::unbounded_sequence_uint64_field()
{
    return m_unbounded_sequence_uint64_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_float_field
 * @param _unbounded_sequence_float_field New value to be copied in member unbounded_sequence_float_field
 */
void ContentFilterTestType::unbounded_sequence_float_field(
        const std::vector<float>& _unbounded_sequence_float_field)
{
    m_unbounded_sequence_float_field = _unbounded_sequence_float_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_float_field
 * @param _unbounded_sequence_float_field New value to be moved in member unbounded_sequence_float_field
 */
void ContentFilterTestType::unbounded_sequence_float_field(
        std::vector<float>&& _unbounded_sequence_float_field)
{
    m_unbounded_sequence_float_field = std::move(_unbounded_sequence_float_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_float_field
 * @return Constant reference to member unbounded_sequence_float_field
 */
const std::vector<float>& ContentFilterTestType::unbounded_sequence_float_field() const
{
    return m_unbounded_sequence_float_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_float_field
 * @return Reference to member unbounded_sequence_float_field
 */
std::vector<float>& ContentFilterTestType::unbounded_sequence_float_field()
{
    return m_unbounded_sequence_float_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_double_field
 * @param _unbounded_sequence_double_field New value to be copied in member unbounded_sequence_double_field
 */
void ContentFilterTestType::unbounded_sequence_double_field(
        const std::vector<double>& _unbounded_sequence_double_field)
{
    m_unbounded_sequence_double_field = _unbounded_sequence_double_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_double_field
 * @param _unbounded_sequence_double_field New value to be moved in member unbounded_sequence_double_field
 */
void ContentFilterTestType::unbounded_sequence_double_field(
        std::vector<double>&& _unbounded_sequence_double_field)
{
    m_unbounded_sequence_double_field = std::move(_unbounded_sequence_double_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_double_field
 * @return Constant reference to member unbounded_sequence_double_field
 */
const std::vector<double>& ContentFilterTestType::unbounded_sequence_double_field() const
{
    return m_unbounded_sequence_double_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_double_field
 * @return Reference to member unbounded_sequence_double_field
 */
std::vector<double>& ContentFilterTestType::unbounded_sequence_double_field()
{
    return m_unbounded_sequence_double_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_long_double_field
 * @param _unbounded_sequence_long_double_field New value to be copied in member unbounded_sequence_long_double_field
 */
void ContentFilterTestType::unbounded_sequence_long_double_field(
        const std::vector<long double>& _unbounded_sequence_long_double_field)
{
    m_unbounded_sequence_long_double_field = _unbounded_sequence_long_double_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_long_double_field
 * @param _unbounded_sequence_long_double_field New value to be moved in member unbounded_sequence_long_double_field
 */
void ContentFilterTestType::unbounded_sequence_long_double_field(
        std::vector<long double>&& _unbounded_sequence_long_double_field)
{
    m_unbounded_sequence_long_double_field = std::move(_unbounded_sequence_long_double_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_long_double_field
 * @return Constant reference to member unbounded_sequence_long_double_field
 */
const std::vector<long double>& ContentFilterTestType::unbounded_sequence_long_double_field() const
{
    return m_unbounded_sequence_long_double_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_long_double_field
 * @return Reference to member unbounded_sequence_long_double_field
 */
std::vector<long double>& ContentFilterTestType::unbounded_sequence_long_double_field()
{
    return m_unbounded_sequence_long_double_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_bool_field
 * @param _unbounded_sequence_bool_field New value to be copied in member unbounded_sequence_bool_field
 */
void ContentFilterTestType::unbounded_sequence_bool_field(
        const std::vector<bool>& _unbounded_sequence_bool_field)
{
    m_unbounded_sequence_bool_field = _unbounded_sequence_bool_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_bool_field
 * @param _unbounded_sequence_bool_field New value to be moved in member unbounded_sequence_bool_field
 */
void ContentFilterTestType::unbounded_sequence_bool_field(
        std::vector<bool>&& _unbounded_sequence_bool_field)
{
    m_unbounded_sequence_bool_field = std::move(_unbounded_sequence_bool_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_bool_field
 * @return Constant reference to member unbounded_sequence_bool_field
 */
const std::vector<bool>& ContentFilterTestType::unbounded_sequence_bool_field() const
{
    return m_unbounded_sequence_bool_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_bool_field
 * @return Reference to member unbounded_sequence_bool_field
 */
std::vector<bool>& ContentFilterTestType::unbounded_sequence_bool_field()
{
    return m_unbounded_sequence_bool_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_string_field
 * @param _unbounded_sequence_string_field New value to be copied in member unbounded_sequence_string_field
 */
void ContentFilterTestType::unbounded_sequence_string_field(
        const std::vector<std::string>& _unbounded_sequence_string_field)
{
    m_unbounded_sequence_string_field = _unbounded_sequence_string_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_string_field
 * @param _unbounded_sequence_string_field New value to be moved in member unbounded_sequence_string_field
 */
void ContentFilterTestType::unbounded_sequence_string_field(
        std::vector<std::string>&& _unbounded_sequence_string_field)
{
    m_unbounded_sequence_string_field = std::move(_unbounded_sequence_string_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_string_field
 * @return Constant reference to member unbounded_sequence_string_field
 */
const std::vector<std::string>& ContentFilterTestType::unbounded_sequence_string_field() const
{
    return m_unbounded_sequence_string_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_string_field
 * @return Reference to member unbounded_sequence_string_field
 */
std::vector<std::string>& ContentFilterTestType::unbounded_sequence_string_field()
{
    return m_unbounded_sequence_string_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_enum_field
 * @param _unbounded_sequence_enum_field New value to be copied in member unbounded_sequence_enum_field
 */
void ContentFilterTestType::unbounded_sequence_enum_field(
        const std::vector<Color>& _unbounded_sequence_enum_field)
{
    m_unbounded_sequence_enum_field = _unbounded_sequence_enum_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_enum_field
 * @param _unbounded_sequence_enum_field New value to be moved in member unbounded_sequence_enum_field
 */
void ContentFilterTestType::unbounded_sequence_enum_field(
        std::vector<Color>&& _unbounded_sequence_enum_field)
{
    m_unbounded_sequence_enum_field = std::move(_unbounded_sequence_enum_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_enum_field
 * @return Constant reference to member unbounded_sequence_enum_field
 */
const std::vector<Color>& ContentFilterTestType::unbounded_sequence_enum_field() const
{
    return m_unbounded_sequence_enum_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_enum_field
 * @return Reference to member unbounded_sequence_enum_field
 */
std::vector<Color>& ContentFilterTestType::unbounded_sequence_enum_field()
{
    return m_unbounded_sequence_enum_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_enum2_field
 * @param _unbounded_sequence_enum2_field New value to be copied in member unbounded_sequence_enum2_field
 */
void ContentFilterTestType::unbounded_sequence_enum2_field(
        const std::vector<Material>& _unbounded_sequence_enum2_field)
{
    m_unbounded_sequence_enum2_field = _unbounded_sequence_enum2_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_enum2_field
 * @param _unbounded_sequence_enum2_field New value to be moved in member unbounded_sequence_enum2_field
 */
void ContentFilterTestType::unbounded_sequence_enum2_field(
        std::vector<Material>&& _unbounded_sequence_enum2_field)
{
    m_unbounded_sequence_enum2_field = std::move(_unbounded_sequence_enum2_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_enum2_field
 * @return Constant reference to member unbounded_sequence_enum2_field
 */
const std::vector<Material>& ContentFilterTestType::unbounded_sequence_enum2_field() const
{
    return m_unbounded_sequence_enum2_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_enum2_field
 * @return Reference to member unbounded_sequence_enum2_field
 */
std::vector<Material>& ContentFilterTestType::unbounded_sequence_enum2_field()
{
    return m_unbounded_sequence_enum2_field;
}
/*!
 * @brief This function copies the value in member unbounded_sequence_struct_field
 * @param _unbounded_sequence_struct_field New value to be copied in member unbounded_sequence_struct_field
 */
void ContentFilterTestType::unbounded_sequence_struct_field(
        const std::vector<StructType>& _unbounded_sequence_struct_field)
{
    m_unbounded_sequence_struct_field = _unbounded_sequence_struct_field;
}

/*!
 * @brief This function moves the value in member unbounded_sequence_struct_field
 * @param _unbounded_sequence_struct_field New value to be moved in member unbounded_sequence_struct_field
 */
void ContentFilterTestType::unbounded_sequence_struct_field(
        std::vector<StructType>&& _unbounded_sequence_struct_field)
{
    m_unbounded_sequence_struct_field = std::move(_unbounded_sequence_struct_field);
}

/*!
 * @brief This function returns a constant reference to member unbounded_sequence_struct_field
 * @return Constant reference to member unbounded_sequence_struct_field
 */
const std::vector<StructType>& ContentFilterTestType::unbounded_sequence_struct_field() const
{
    return m_unbounded_sequence_struct_field;
}

/*!
 * @brief This function returns a reference to member unbounded_sequence_struct_field
 * @return Reference to member unbounded_sequence_struct_field
 */
std::vector<StructType>& ContentFilterTestType::unbounded_sequence_struct_field()
{
    return m_unbounded_sequence_struct_field;
}


size_t ContentFilterTestType::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return ContentFilterTestType_max_key_cdr_typesize;
}

bool ContentFilterTestType::isKeyDefined()
{
    return false;
}

void ContentFilterTestType::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

