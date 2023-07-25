/*!
 * @file ContentFilterTestType.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_CONTENTFILTERTESTTYPE_H_
#define _FAST_DDS_GENERATED_CONTENTFILTERTESTTYPE_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(CONTENTFILTERTESTTYPE_SOURCE)
#define CONTENTFILTERTESTTYPE_DllAPI __declspec( dllexport )
#else
#define CONTENTFILTERTESTTYPE_DllAPI __declspec( dllimport )
#endif // CONTENTFILTERTESTTYPE_SOURCE
#else
#define CONTENTFILTERTESTTYPE_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define CONTENTFILTERTESTTYPE_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the enumeration Color defined by the user in the IDL file.
 * @ingroup ContentFilterTestType
 */
enum Color : uint32_t
{
    RED,
    GREEN,
    BLUE,
    YELLOW,
    MAGENTA
};
/*!
 * @brief This class represents the enumeration Material defined by the user in the IDL file.
 * @ingroup ContentFilterTestType
 */
enum Material : uint32_t
{
    WOOD,
    PLASTIC,
    METAL,
    CONCRETE,
    STONE
};
/*!
 * @brief This class represents the structure StructType defined by the user in the IDL file.
 * @ingroup ContentFilterTestType
 */
class StructType
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport StructType();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~StructType();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object StructType that will be copied.
     */
    eProsima_user_DllExport StructType(
            const StructType& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object StructType that will be copied.
     */
    eProsima_user_DllExport StructType(
            StructType&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object StructType that will be copied.
     */
    eProsima_user_DllExport StructType& operator =(
            const StructType& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object StructType that will be copied.
     */
    eProsima_user_DllExport StructType& operator =(
            StructType&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x StructType object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const StructType& x) const;

    /*!
     * @brief Comparison operator.
     * @param x StructType object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const StructType& x) const;

    /*!
     * @brief This function sets a value in member char_field
     * @param _char_field New value for member char_field
     */
    eProsima_user_DllExport void char_field(
            char _char_field);

    /*!
     * @brief This function returns the value of member char_field
     * @return Value of member char_field
     */
    eProsima_user_DllExport char char_field() const;

    /*!
     * @brief This function returns a reference to member char_field
     * @return Reference to member char_field
     */
    eProsima_user_DllExport char& char_field();

    /*!
     * @brief This function sets a value in member uint8_field
     * @param _uint8_field New value for member uint8_field
     */
    eProsima_user_DllExport void uint8_field(
            uint8_t _uint8_field);

    /*!
     * @brief This function returns the value of member uint8_field
     * @return Value of member uint8_field
     */
    eProsima_user_DllExport uint8_t uint8_field() const;

    /*!
     * @brief This function returns a reference to member uint8_field
     * @return Reference to member uint8_field
     */
    eProsima_user_DllExport uint8_t& uint8_field();

    /*!
     * @brief This function sets a value in member int16_field
     * @param _int16_field New value for member int16_field
     */
    eProsima_user_DllExport void int16_field(
            int16_t _int16_field);

    /*!
     * @brief This function returns the value of member int16_field
     * @return Value of member int16_field
     */
    eProsima_user_DllExport int16_t int16_field() const;

    /*!
     * @brief This function returns a reference to member int16_field
     * @return Reference to member int16_field
     */
    eProsima_user_DllExport int16_t& int16_field();

    /*!
     * @brief This function sets a value in member uint16_field
     * @param _uint16_field New value for member uint16_field
     */
    eProsima_user_DllExport void uint16_field(
            uint16_t _uint16_field);

    /*!
     * @brief This function returns the value of member uint16_field
     * @return Value of member uint16_field
     */
    eProsima_user_DllExport uint16_t uint16_field() const;

    /*!
     * @brief This function returns a reference to member uint16_field
     * @return Reference to member uint16_field
     */
    eProsima_user_DllExport uint16_t& uint16_field();

    /*!
     * @brief This function sets a value in member int32_field
     * @param _int32_field New value for member int32_field
     */
    eProsima_user_DllExport void int32_field(
            int32_t _int32_field);

    /*!
     * @brief This function returns the value of member int32_field
     * @return Value of member int32_field
     */
    eProsima_user_DllExport int32_t int32_field() const;

    /*!
     * @brief This function returns a reference to member int32_field
     * @return Reference to member int32_field
     */
    eProsima_user_DllExport int32_t& int32_field();

    /*!
     * @brief This function sets a value in member uint32_field
     * @param _uint32_field New value for member uint32_field
     */
    eProsima_user_DllExport void uint32_field(
            uint32_t _uint32_field);

    /*!
     * @brief This function returns the value of member uint32_field
     * @return Value of member uint32_field
     */
    eProsima_user_DllExport uint32_t uint32_field() const;

    /*!
     * @brief This function returns a reference to member uint32_field
     * @return Reference to member uint32_field
     */
    eProsima_user_DllExport uint32_t& uint32_field();

    /*!
     * @brief This function sets a value in member int64_field
     * @param _int64_field New value for member int64_field
     */
    eProsima_user_DllExport void int64_field(
            int64_t _int64_field);

    /*!
     * @brief This function returns the value of member int64_field
     * @return Value of member int64_field
     */
    eProsima_user_DllExport int64_t int64_field() const;

    /*!
     * @brief This function returns a reference to member int64_field
     * @return Reference to member int64_field
     */
    eProsima_user_DllExport int64_t& int64_field();

    /*!
     * @brief This function sets a value in member uint64_field
     * @param _uint64_field New value for member uint64_field
     */
    eProsima_user_DllExport void uint64_field(
            uint64_t _uint64_field);

    /*!
     * @brief This function returns the value of member uint64_field
     * @return Value of member uint64_field
     */
    eProsima_user_DllExport uint64_t uint64_field() const;

    /*!
     * @brief This function returns a reference to member uint64_field
     * @return Reference to member uint64_field
     */
    eProsima_user_DllExport uint64_t& uint64_field();

    /*!
     * @brief This function sets a value in member float_field
     * @param _float_field New value for member float_field
     */
    eProsima_user_DllExport void float_field(
            float _float_field);

    /*!
     * @brief This function returns the value of member float_field
     * @return Value of member float_field
     */
    eProsima_user_DllExport float float_field() const;

    /*!
     * @brief This function returns a reference to member float_field
     * @return Reference to member float_field
     */
    eProsima_user_DllExport float& float_field();

    /*!
     * @brief This function sets a value in member double_field
     * @param _double_field New value for member double_field
     */
    eProsima_user_DllExport void double_field(
            double _double_field);

    /*!
     * @brief This function returns the value of member double_field
     * @return Value of member double_field
     */
    eProsima_user_DllExport double double_field() const;

    /*!
     * @brief This function returns a reference to member double_field
     * @return Reference to member double_field
     */
    eProsima_user_DllExport double& double_field();

    /*!
     * @brief This function sets a value in member long_double_field
     * @param _long_double_field New value for member long_double_field
     */
    eProsima_user_DllExport void long_double_field(
            long double _long_double_field);

    /*!
     * @brief This function returns the value of member long_double_field
     * @return Value of member long_double_field
     */
    eProsima_user_DllExport long double long_double_field() const;

    /*!
     * @brief This function returns a reference to member long_double_field
     * @return Reference to member long_double_field
     */
    eProsima_user_DllExport long double& long_double_field();

    /*!
     * @brief This function sets a value in member bool_field
     * @param _bool_field New value for member bool_field
     */
    eProsima_user_DllExport void bool_field(
            bool _bool_field);

    /*!
     * @brief This function returns the value of member bool_field
     * @return Value of member bool_field
     */
    eProsima_user_DllExport bool bool_field() const;

    /*!
     * @brief This function returns a reference to member bool_field
     * @return Reference to member bool_field
     */
    eProsima_user_DllExport bool& bool_field();

    /*!
     * @brief This function copies the value in member string_field
     * @param _string_field New value to be copied in member string_field
     */
    eProsima_user_DllExport void string_field(
            const std::string& _string_field);

    /*!
     * @brief This function moves the value in member string_field
     * @param _string_field New value to be moved in member string_field
     */
    eProsima_user_DllExport void string_field(
            std::string&& _string_field);

    /*!
     * @brief This function returns a constant reference to member string_field
     * @return Constant reference to member string_field
     */
    eProsima_user_DllExport const std::string& string_field() const;

    /*!
     * @brief This function returns a reference to member string_field
     * @return Reference to member string_field
     */
    eProsima_user_DllExport std::string& string_field();
    /*!
     * @brief This function sets a value in member enum_field
     * @param _enum_field New value for member enum_field
     */
    eProsima_user_DllExport void enum_field(
            Color _enum_field);

    /*!
     * @brief This function returns the value of member enum_field
     * @return Value of member enum_field
     */
    eProsima_user_DllExport Color enum_field() const;

    /*!
     * @brief This function returns a reference to member enum_field
     * @return Reference to member enum_field
     */
    eProsima_user_DllExport Color& enum_field();

    /*!
     * @brief This function sets a value in member enum2_field
     * @param _enum2_field New value for member enum2_field
     */
    eProsima_user_DllExport void enum2_field(
            Material _enum2_field);

    /*!
     * @brief This function returns the value of member enum2_field
     * @return Value of member enum2_field
     */
    eProsima_user_DllExport Material enum2_field() const;

    /*!
     * @brief This function returns a reference to member enum2_field
     * @return Reference to member enum2_field
     */
    eProsima_user_DllExport Material& enum2_field();


    /*!
    * @brief This function returns the maximum serialized size of an object
    * depending on the buffer alignment.
    * @param current_alignment Buffer alignment.
    * @return Maximum serialized size.
    */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const StructType& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    char m_char_field;
    uint8_t m_uint8_field;
    int16_t m_int16_field;
    uint16_t m_uint16_field;
    int32_t m_int32_field;
    uint32_t m_uint32_field;
    int64_t m_int64_field;
    uint64_t m_uint64_field;
    float m_float_field;
    double m_double_field;
    long double m_long_double_field;
    bool m_bool_field;
    std::string m_string_field;
    Color m_enum_field;
    Material m_enum2_field;

};
const uint32_t max_array_size = 3;
const uint32_t max_seq_size = 5;
/*!
 * @brief This class represents the structure ContentFilterTestType defined by the user in the IDL file.
 * @ingroup ContentFilterTestType
 */
class ContentFilterTestType
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ContentFilterTestType();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ContentFilterTestType();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ContentFilterTestType that will be copied.
     */
    eProsima_user_DllExport ContentFilterTestType(
            const ContentFilterTestType& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ContentFilterTestType that will be copied.
     */
    eProsima_user_DllExport ContentFilterTestType(
            ContentFilterTestType&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ContentFilterTestType that will be copied.
     */
    eProsima_user_DllExport ContentFilterTestType& operator =(
            const ContentFilterTestType& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ContentFilterTestType that will be copied.
     */
    eProsima_user_DllExport ContentFilterTestType& operator =(
            ContentFilterTestType&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ContentFilterTestType object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ContentFilterTestType& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ContentFilterTestType object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ContentFilterTestType& x) const;

    /*!
     * @brief This function sets a value in member char_field
     * @param _char_field New value for member char_field
     */
    eProsima_user_DllExport void char_field(
            char _char_field);

    /*!
     * @brief This function returns the value of member char_field
     * @return Value of member char_field
     */
    eProsima_user_DllExport char char_field() const;

    /*!
     * @brief This function returns a reference to member char_field
     * @return Reference to member char_field
     */
    eProsima_user_DllExport char& char_field();

    /*!
     * @brief This function sets a value in member uint8_field
     * @param _uint8_field New value for member uint8_field
     */
    eProsima_user_DllExport void uint8_field(
            uint8_t _uint8_field);

    /*!
     * @brief This function returns the value of member uint8_field
     * @return Value of member uint8_field
     */
    eProsima_user_DllExport uint8_t uint8_field() const;

    /*!
     * @brief This function returns a reference to member uint8_field
     * @return Reference to member uint8_field
     */
    eProsima_user_DllExport uint8_t& uint8_field();

    /*!
     * @brief This function sets a value in member int16_field
     * @param _int16_field New value for member int16_field
     */
    eProsima_user_DllExport void int16_field(
            int16_t _int16_field);

    /*!
     * @brief This function returns the value of member int16_field
     * @return Value of member int16_field
     */
    eProsima_user_DllExport int16_t int16_field() const;

    /*!
     * @brief This function returns a reference to member int16_field
     * @return Reference to member int16_field
     */
    eProsima_user_DllExport int16_t& int16_field();

    /*!
     * @brief This function sets a value in member uint16_field
     * @param _uint16_field New value for member uint16_field
     */
    eProsima_user_DllExport void uint16_field(
            uint16_t _uint16_field);

    /*!
     * @brief This function returns the value of member uint16_field
     * @return Value of member uint16_field
     */
    eProsima_user_DllExport uint16_t uint16_field() const;

    /*!
     * @brief This function returns a reference to member uint16_field
     * @return Reference to member uint16_field
     */
    eProsima_user_DllExport uint16_t& uint16_field();

    /*!
     * @brief This function sets a value in member int32_field
     * @param _int32_field New value for member int32_field
     */
    eProsima_user_DllExport void int32_field(
            int32_t _int32_field);

    /*!
     * @brief This function returns the value of member int32_field
     * @return Value of member int32_field
     */
    eProsima_user_DllExport int32_t int32_field() const;

    /*!
     * @brief This function returns a reference to member int32_field
     * @return Reference to member int32_field
     */
    eProsima_user_DllExport int32_t& int32_field();

    /*!
     * @brief This function sets a value in member uint32_field
     * @param _uint32_field New value for member uint32_field
     */
    eProsima_user_DllExport void uint32_field(
            uint32_t _uint32_field);

    /*!
     * @brief This function returns the value of member uint32_field
     * @return Value of member uint32_field
     */
    eProsima_user_DllExport uint32_t uint32_field() const;

    /*!
     * @brief This function returns a reference to member uint32_field
     * @return Reference to member uint32_field
     */
    eProsima_user_DllExport uint32_t& uint32_field();

    /*!
     * @brief This function sets a value in member int64_field
     * @param _int64_field New value for member int64_field
     */
    eProsima_user_DllExport void int64_field(
            int64_t _int64_field);

    /*!
     * @brief This function returns the value of member int64_field
     * @return Value of member int64_field
     */
    eProsima_user_DllExport int64_t int64_field() const;

    /*!
     * @brief This function returns a reference to member int64_field
     * @return Reference to member int64_field
     */
    eProsima_user_DllExport int64_t& int64_field();

    /*!
     * @brief This function sets a value in member uint64_field
     * @param _uint64_field New value for member uint64_field
     */
    eProsima_user_DllExport void uint64_field(
            uint64_t _uint64_field);

    /*!
     * @brief This function returns the value of member uint64_field
     * @return Value of member uint64_field
     */
    eProsima_user_DllExport uint64_t uint64_field() const;

    /*!
     * @brief This function returns a reference to member uint64_field
     * @return Reference to member uint64_field
     */
    eProsima_user_DllExport uint64_t& uint64_field();

    /*!
     * @brief This function sets a value in member float_field
     * @param _float_field New value for member float_field
     */
    eProsima_user_DllExport void float_field(
            float _float_field);

    /*!
     * @brief This function returns the value of member float_field
     * @return Value of member float_field
     */
    eProsima_user_DllExport float float_field() const;

    /*!
     * @brief This function returns a reference to member float_field
     * @return Reference to member float_field
     */
    eProsima_user_DllExport float& float_field();

    /*!
     * @brief This function sets a value in member double_field
     * @param _double_field New value for member double_field
     */
    eProsima_user_DllExport void double_field(
            double _double_field);

    /*!
     * @brief This function returns the value of member double_field
     * @return Value of member double_field
     */
    eProsima_user_DllExport double double_field() const;

    /*!
     * @brief This function returns a reference to member double_field
     * @return Reference to member double_field
     */
    eProsima_user_DllExport double& double_field();

    /*!
     * @brief This function sets a value in member long_double_field
     * @param _long_double_field New value for member long_double_field
     */
    eProsima_user_DllExport void long_double_field(
            long double _long_double_field);

    /*!
     * @brief This function returns the value of member long_double_field
     * @return Value of member long_double_field
     */
    eProsima_user_DllExport long double long_double_field() const;

    /*!
     * @brief This function returns a reference to member long_double_field
     * @return Reference to member long_double_field
     */
    eProsima_user_DllExport long double& long_double_field();

    /*!
     * @brief This function sets a value in member bool_field
     * @param _bool_field New value for member bool_field
     */
    eProsima_user_DllExport void bool_field(
            bool _bool_field);

    /*!
     * @brief This function returns the value of member bool_field
     * @return Value of member bool_field
     */
    eProsima_user_DllExport bool bool_field() const;

    /*!
     * @brief This function returns a reference to member bool_field
     * @return Reference to member bool_field
     */
    eProsima_user_DllExport bool& bool_field();

    /*!
     * @brief This function copies the value in member string_field
     * @param _string_field New value to be copied in member string_field
     */
    eProsima_user_DllExport void string_field(
            const std::string& _string_field);

    /*!
     * @brief This function moves the value in member string_field
     * @param _string_field New value to be moved in member string_field
     */
    eProsima_user_DllExport void string_field(
            std::string&& _string_field);

    /*!
     * @brief This function returns a constant reference to member string_field
     * @return Constant reference to member string_field
     */
    eProsima_user_DllExport const std::string& string_field() const;

    /*!
     * @brief This function returns a reference to member string_field
     * @return Reference to member string_field
     */
    eProsima_user_DllExport std::string& string_field();
    /*!
     * @brief This function sets a value in member enum_field
     * @param _enum_field New value for member enum_field
     */
    eProsima_user_DllExport void enum_field(
            Color _enum_field);

    /*!
     * @brief This function returns the value of member enum_field
     * @return Value of member enum_field
     */
    eProsima_user_DllExport Color enum_field() const;

    /*!
     * @brief This function returns a reference to member enum_field
     * @return Reference to member enum_field
     */
    eProsima_user_DllExport Color& enum_field();

    /*!
     * @brief This function sets a value in member enum2_field
     * @param _enum2_field New value for member enum2_field
     */
    eProsima_user_DllExport void enum2_field(
            Material _enum2_field);

    /*!
     * @brief This function returns the value of member enum2_field
     * @return Value of member enum2_field
     */
    eProsima_user_DllExport Material enum2_field() const;

    /*!
     * @brief This function returns a reference to member enum2_field
     * @return Reference to member enum2_field
     */
    eProsima_user_DllExport Material& enum2_field();

    /*!
     * @brief This function copies the value in member struct_field
     * @param _struct_field New value to be copied in member struct_field
     */
    eProsima_user_DllExport void struct_field(
            const StructType& _struct_field);

    /*!
     * @brief This function moves the value in member struct_field
     * @param _struct_field New value to be moved in member struct_field
     */
    eProsima_user_DllExport void struct_field(
            StructType&& _struct_field);

    /*!
     * @brief This function returns a constant reference to member struct_field
     * @return Constant reference to member struct_field
     */
    eProsima_user_DllExport const StructType& struct_field() const;

    /*!
     * @brief This function returns a reference to member struct_field
     * @return Reference to member struct_field
     */
    eProsima_user_DllExport StructType& struct_field();
    /*!
     * @brief This function copies the value in member array_char_field
     * @param _array_char_field New value to be copied in member array_char_field
     */
    eProsima_user_DllExport void array_char_field(
            const std::array<char, 3>& _array_char_field);

    /*!
     * @brief This function moves the value in member array_char_field
     * @param _array_char_field New value to be moved in member array_char_field
     */
    eProsima_user_DllExport void array_char_field(
            std::array<char, 3>&& _array_char_field);

    /*!
     * @brief This function returns a constant reference to member array_char_field
     * @return Constant reference to member array_char_field
     */
    eProsima_user_DllExport const std::array<char, 3>& array_char_field() const;

    /*!
     * @brief This function returns a reference to member array_char_field
     * @return Reference to member array_char_field
     */
    eProsima_user_DllExport std::array<char, 3>& array_char_field();
    /*!
     * @brief This function copies the value in member array_uint8_field
     * @param _array_uint8_field New value to be copied in member array_uint8_field
     */
    eProsima_user_DllExport void array_uint8_field(
            const std::array<uint8_t, 3>& _array_uint8_field);

    /*!
     * @brief This function moves the value in member array_uint8_field
     * @param _array_uint8_field New value to be moved in member array_uint8_field
     */
    eProsima_user_DllExport void array_uint8_field(
            std::array<uint8_t, 3>&& _array_uint8_field);

    /*!
     * @brief This function returns a constant reference to member array_uint8_field
     * @return Constant reference to member array_uint8_field
     */
    eProsima_user_DllExport const std::array<uint8_t, 3>& array_uint8_field() const;

    /*!
     * @brief This function returns a reference to member array_uint8_field
     * @return Reference to member array_uint8_field
     */
    eProsima_user_DllExport std::array<uint8_t, 3>& array_uint8_field();
    /*!
     * @brief This function copies the value in member array_int16_field
     * @param _array_int16_field New value to be copied in member array_int16_field
     */
    eProsima_user_DllExport void array_int16_field(
            const std::array<int16_t, 3>& _array_int16_field);

    /*!
     * @brief This function moves the value in member array_int16_field
     * @param _array_int16_field New value to be moved in member array_int16_field
     */
    eProsima_user_DllExport void array_int16_field(
            std::array<int16_t, 3>&& _array_int16_field);

    /*!
     * @brief This function returns a constant reference to member array_int16_field
     * @return Constant reference to member array_int16_field
     */
    eProsima_user_DllExport const std::array<int16_t, 3>& array_int16_field() const;

    /*!
     * @brief This function returns a reference to member array_int16_field
     * @return Reference to member array_int16_field
     */
    eProsima_user_DllExport std::array<int16_t, 3>& array_int16_field();
    /*!
     * @brief This function copies the value in member array_uint16_field
     * @param _array_uint16_field New value to be copied in member array_uint16_field
     */
    eProsima_user_DllExport void array_uint16_field(
            const std::array<uint16_t, 3>& _array_uint16_field);

    /*!
     * @brief This function moves the value in member array_uint16_field
     * @param _array_uint16_field New value to be moved in member array_uint16_field
     */
    eProsima_user_DllExport void array_uint16_field(
            std::array<uint16_t, 3>&& _array_uint16_field);

    /*!
     * @brief This function returns a constant reference to member array_uint16_field
     * @return Constant reference to member array_uint16_field
     */
    eProsima_user_DllExport const std::array<uint16_t, 3>& array_uint16_field() const;

    /*!
     * @brief This function returns a reference to member array_uint16_field
     * @return Reference to member array_uint16_field
     */
    eProsima_user_DllExport std::array<uint16_t, 3>& array_uint16_field();
    /*!
     * @brief This function copies the value in member array_int32_field
     * @param _array_int32_field New value to be copied in member array_int32_field
     */
    eProsima_user_DllExport void array_int32_field(
            const std::array<int32_t, 3>& _array_int32_field);

    /*!
     * @brief This function moves the value in member array_int32_field
     * @param _array_int32_field New value to be moved in member array_int32_field
     */
    eProsima_user_DllExport void array_int32_field(
            std::array<int32_t, 3>&& _array_int32_field);

    /*!
     * @brief This function returns a constant reference to member array_int32_field
     * @return Constant reference to member array_int32_field
     */
    eProsima_user_DllExport const std::array<int32_t, 3>& array_int32_field() const;

    /*!
     * @brief This function returns a reference to member array_int32_field
     * @return Reference to member array_int32_field
     */
    eProsima_user_DllExport std::array<int32_t, 3>& array_int32_field();
    /*!
     * @brief This function copies the value in member array_uint32_field
     * @param _array_uint32_field New value to be copied in member array_uint32_field
     */
    eProsima_user_DllExport void array_uint32_field(
            const std::array<uint32_t, 3>& _array_uint32_field);

    /*!
     * @brief This function moves the value in member array_uint32_field
     * @param _array_uint32_field New value to be moved in member array_uint32_field
     */
    eProsima_user_DllExport void array_uint32_field(
            std::array<uint32_t, 3>&& _array_uint32_field);

    /*!
     * @brief This function returns a constant reference to member array_uint32_field
     * @return Constant reference to member array_uint32_field
     */
    eProsima_user_DllExport const std::array<uint32_t, 3>& array_uint32_field() const;

    /*!
     * @brief This function returns a reference to member array_uint32_field
     * @return Reference to member array_uint32_field
     */
    eProsima_user_DllExport std::array<uint32_t, 3>& array_uint32_field();
    /*!
     * @brief This function copies the value in member array_int64_field
     * @param _array_int64_field New value to be copied in member array_int64_field
     */
    eProsima_user_DllExport void array_int64_field(
            const std::array<int64_t, 3>& _array_int64_field);

    /*!
     * @brief This function moves the value in member array_int64_field
     * @param _array_int64_field New value to be moved in member array_int64_field
     */
    eProsima_user_DllExport void array_int64_field(
            std::array<int64_t, 3>&& _array_int64_field);

    /*!
     * @brief This function returns a constant reference to member array_int64_field
     * @return Constant reference to member array_int64_field
     */
    eProsima_user_DllExport const std::array<int64_t, 3>& array_int64_field() const;

    /*!
     * @brief This function returns a reference to member array_int64_field
     * @return Reference to member array_int64_field
     */
    eProsima_user_DllExport std::array<int64_t, 3>& array_int64_field();
    /*!
     * @brief This function copies the value in member array_uint64_field
     * @param _array_uint64_field New value to be copied in member array_uint64_field
     */
    eProsima_user_DllExport void array_uint64_field(
            const std::array<uint64_t, 3>& _array_uint64_field);

    /*!
     * @brief This function moves the value in member array_uint64_field
     * @param _array_uint64_field New value to be moved in member array_uint64_field
     */
    eProsima_user_DllExport void array_uint64_field(
            std::array<uint64_t, 3>&& _array_uint64_field);

    /*!
     * @brief This function returns a constant reference to member array_uint64_field
     * @return Constant reference to member array_uint64_field
     */
    eProsima_user_DllExport const std::array<uint64_t, 3>& array_uint64_field() const;

    /*!
     * @brief This function returns a reference to member array_uint64_field
     * @return Reference to member array_uint64_field
     */
    eProsima_user_DllExport std::array<uint64_t, 3>& array_uint64_field();
    /*!
     * @brief This function copies the value in member array_float_field
     * @param _array_float_field New value to be copied in member array_float_field
     */
    eProsima_user_DllExport void array_float_field(
            const std::array<float, 3>& _array_float_field);

    /*!
     * @brief This function moves the value in member array_float_field
     * @param _array_float_field New value to be moved in member array_float_field
     */
    eProsima_user_DllExport void array_float_field(
            std::array<float, 3>&& _array_float_field);

    /*!
     * @brief This function returns a constant reference to member array_float_field
     * @return Constant reference to member array_float_field
     */
    eProsima_user_DllExport const std::array<float, 3>& array_float_field() const;

    /*!
     * @brief This function returns a reference to member array_float_field
     * @return Reference to member array_float_field
     */
    eProsima_user_DllExport std::array<float, 3>& array_float_field();
    /*!
     * @brief This function copies the value in member array_double_field
     * @param _array_double_field New value to be copied in member array_double_field
     */
    eProsima_user_DllExport void array_double_field(
            const std::array<double, 3>& _array_double_field);

    /*!
     * @brief This function moves the value in member array_double_field
     * @param _array_double_field New value to be moved in member array_double_field
     */
    eProsima_user_DllExport void array_double_field(
            std::array<double, 3>&& _array_double_field);

    /*!
     * @brief This function returns a constant reference to member array_double_field
     * @return Constant reference to member array_double_field
     */
    eProsima_user_DllExport const std::array<double, 3>& array_double_field() const;

    /*!
     * @brief This function returns a reference to member array_double_field
     * @return Reference to member array_double_field
     */
    eProsima_user_DllExport std::array<double, 3>& array_double_field();
    /*!
     * @brief This function copies the value in member array_long_double_field
     * @param _array_long_double_field New value to be copied in member array_long_double_field
     */
    eProsima_user_DllExport void array_long_double_field(
            const std::array<long double, 3>& _array_long_double_field);

    /*!
     * @brief This function moves the value in member array_long_double_field
     * @param _array_long_double_field New value to be moved in member array_long_double_field
     */
    eProsima_user_DllExport void array_long_double_field(
            std::array<long double, 3>&& _array_long_double_field);

    /*!
     * @brief This function returns a constant reference to member array_long_double_field
     * @return Constant reference to member array_long_double_field
     */
    eProsima_user_DllExport const std::array<long double, 3>& array_long_double_field() const;

    /*!
     * @brief This function returns a reference to member array_long_double_field
     * @return Reference to member array_long_double_field
     */
    eProsima_user_DllExport std::array<long double, 3>& array_long_double_field();
    /*!
     * @brief This function copies the value in member array_bool_field
     * @param _array_bool_field New value to be copied in member array_bool_field
     */
    eProsima_user_DllExport void array_bool_field(
            const std::array<bool, 3>& _array_bool_field);

    /*!
     * @brief This function moves the value in member array_bool_field
     * @param _array_bool_field New value to be moved in member array_bool_field
     */
    eProsima_user_DllExport void array_bool_field(
            std::array<bool, 3>&& _array_bool_field);

    /*!
     * @brief This function returns a constant reference to member array_bool_field
     * @return Constant reference to member array_bool_field
     */
    eProsima_user_DllExport const std::array<bool, 3>& array_bool_field() const;

    /*!
     * @brief This function returns a reference to member array_bool_field
     * @return Reference to member array_bool_field
     */
    eProsima_user_DllExport std::array<bool, 3>& array_bool_field();
    /*!
     * @brief This function copies the value in member array_string_field
     * @param _array_string_field New value to be copied in member array_string_field
     */
    eProsima_user_DllExport void array_string_field(
            const std::array<std::string, 3>& _array_string_field);

    /*!
     * @brief This function moves the value in member array_string_field
     * @param _array_string_field New value to be moved in member array_string_field
     */
    eProsima_user_DllExport void array_string_field(
            std::array<std::string, 3>&& _array_string_field);

    /*!
     * @brief This function returns a constant reference to member array_string_field
     * @return Constant reference to member array_string_field
     */
    eProsima_user_DllExport const std::array<std::string, 3>& array_string_field() const;

    /*!
     * @brief This function returns a reference to member array_string_field
     * @return Reference to member array_string_field
     */
    eProsima_user_DllExport std::array<std::string, 3>& array_string_field();
    /*!
     * @brief This function copies the value in member array_enum_field
     * @param _array_enum_field New value to be copied in member array_enum_field
     */
    eProsima_user_DllExport void array_enum_field(
            const std::array<Color, 3>& _array_enum_field);

    /*!
     * @brief This function moves the value in member array_enum_field
     * @param _array_enum_field New value to be moved in member array_enum_field
     */
    eProsima_user_DllExport void array_enum_field(
            std::array<Color, 3>&& _array_enum_field);

    /*!
     * @brief This function returns a constant reference to member array_enum_field
     * @return Constant reference to member array_enum_field
     */
    eProsima_user_DllExport const std::array<Color, 3>& array_enum_field() const;

    /*!
     * @brief This function returns a reference to member array_enum_field
     * @return Reference to member array_enum_field
     */
    eProsima_user_DllExport std::array<Color, 3>& array_enum_field();
    /*!
     * @brief This function copies the value in member array_enum2_field
     * @param _array_enum2_field New value to be copied in member array_enum2_field
     */
    eProsima_user_DllExport void array_enum2_field(
            const std::array<Material, 3>& _array_enum2_field);

    /*!
     * @brief This function moves the value in member array_enum2_field
     * @param _array_enum2_field New value to be moved in member array_enum2_field
     */
    eProsima_user_DllExport void array_enum2_field(
            std::array<Material, 3>&& _array_enum2_field);

    /*!
     * @brief This function returns a constant reference to member array_enum2_field
     * @return Constant reference to member array_enum2_field
     */
    eProsima_user_DllExport const std::array<Material, 3>& array_enum2_field() const;

    /*!
     * @brief This function returns a reference to member array_enum2_field
     * @return Reference to member array_enum2_field
     */
    eProsima_user_DllExport std::array<Material, 3>& array_enum2_field();
    /*!
     * @brief This function copies the value in member array_struct_field
     * @param _array_struct_field New value to be copied in member array_struct_field
     */
    eProsima_user_DllExport void array_struct_field(
            const std::array<StructType, 3>& _array_struct_field);

    /*!
     * @brief This function moves the value in member array_struct_field
     * @param _array_struct_field New value to be moved in member array_struct_field
     */
    eProsima_user_DllExport void array_struct_field(
            std::array<StructType, 3>&& _array_struct_field);

    /*!
     * @brief This function returns a constant reference to member array_struct_field
     * @return Constant reference to member array_struct_field
     */
    eProsima_user_DllExport const std::array<StructType, 3>& array_struct_field() const;

    /*!
     * @brief This function returns a reference to member array_struct_field
     * @return Reference to member array_struct_field
     */
    eProsima_user_DllExport std::array<StructType, 3>& array_struct_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_char_field
     * @param _bounded_sequence_char_field New value to be copied in member bounded_sequence_char_field
     */
    eProsima_user_DllExport void bounded_sequence_char_field(
            const std::vector<char>& _bounded_sequence_char_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_char_field
     * @param _bounded_sequence_char_field New value to be moved in member bounded_sequence_char_field
     */
    eProsima_user_DllExport void bounded_sequence_char_field(
            std::vector<char>&& _bounded_sequence_char_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_char_field
     * @return Constant reference to member bounded_sequence_char_field
     */
    eProsima_user_DllExport const std::vector<char>& bounded_sequence_char_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_char_field
     * @return Reference to member bounded_sequence_char_field
     */
    eProsima_user_DllExport std::vector<char>& bounded_sequence_char_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_uint8_field
     * @param _bounded_sequence_uint8_field New value to be copied in member bounded_sequence_uint8_field
     */
    eProsima_user_DllExport void bounded_sequence_uint8_field(
            const std::vector<uint8_t>& _bounded_sequence_uint8_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_uint8_field
     * @param _bounded_sequence_uint8_field New value to be moved in member bounded_sequence_uint8_field
     */
    eProsima_user_DllExport void bounded_sequence_uint8_field(
            std::vector<uint8_t>&& _bounded_sequence_uint8_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_uint8_field
     * @return Constant reference to member bounded_sequence_uint8_field
     */
    eProsima_user_DllExport const std::vector<uint8_t>& bounded_sequence_uint8_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_uint8_field
     * @return Reference to member bounded_sequence_uint8_field
     */
    eProsima_user_DllExport std::vector<uint8_t>& bounded_sequence_uint8_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_int16_field
     * @param _bounded_sequence_int16_field New value to be copied in member bounded_sequence_int16_field
     */
    eProsima_user_DllExport void bounded_sequence_int16_field(
            const std::vector<int16_t>& _bounded_sequence_int16_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_int16_field
     * @param _bounded_sequence_int16_field New value to be moved in member bounded_sequence_int16_field
     */
    eProsima_user_DllExport void bounded_sequence_int16_field(
            std::vector<int16_t>&& _bounded_sequence_int16_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_int16_field
     * @return Constant reference to member bounded_sequence_int16_field
     */
    eProsima_user_DllExport const std::vector<int16_t>& bounded_sequence_int16_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_int16_field
     * @return Reference to member bounded_sequence_int16_field
     */
    eProsima_user_DllExport std::vector<int16_t>& bounded_sequence_int16_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_uint16_field
     * @param _bounded_sequence_uint16_field New value to be copied in member bounded_sequence_uint16_field
     */
    eProsima_user_DllExport void bounded_sequence_uint16_field(
            const std::vector<uint16_t>& _bounded_sequence_uint16_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_uint16_field
     * @param _bounded_sequence_uint16_field New value to be moved in member bounded_sequence_uint16_field
     */
    eProsima_user_DllExport void bounded_sequence_uint16_field(
            std::vector<uint16_t>&& _bounded_sequence_uint16_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_uint16_field
     * @return Constant reference to member bounded_sequence_uint16_field
     */
    eProsima_user_DllExport const std::vector<uint16_t>& bounded_sequence_uint16_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_uint16_field
     * @return Reference to member bounded_sequence_uint16_field
     */
    eProsima_user_DllExport std::vector<uint16_t>& bounded_sequence_uint16_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_int32_field
     * @param _bounded_sequence_int32_field New value to be copied in member bounded_sequence_int32_field
     */
    eProsima_user_DllExport void bounded_sequence_int32_field(
            const std::vector<int32_t>& _bounded_sequence_int32_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_int32_field
     * @param _bounded_sequence_int32_field New value to be moved in member bounded_sequence_int32_field
     */
    eProsima_user_DllExport void bounded_sequence_int32_field(
            std::vector<int32_t>&& _bounded_sequence_int32_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_int32_field
     * @return Constant reference to member bounded_sequence_int32_field
     */
    eProsima_user_DllExport const std::vector<int32_t>& bounded_sequence_int32_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_int32_field
     * @return Reference to member bounded_sequence_int32_field
     */
    eProsima_user_DllExport std::vector<int32_t>& bounded_sequence_int32_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_uint32_field
     * @param _bounded_sequence_uint32_field New value to be copied in member bounded_sequence_uint32_field
     */
    eProsima_user_DllExport void bounded_sequence_uint32_field(
            const std::vector<uint32_t>& _bounded_sequence_uint32_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_uint32_field
     * @param _bounded_sequence_uint32_field New value to be moved in member bounded_sequence_uint32_field
     */
    eProsima_user_DllExport void bounded_sequence_uint32_field(
            std::vector<uint32_t>&& _bounded_sequence_uint32_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_uint32_field
     * @return Constant reference to member bounded_sequence_uint32_field
     */
    eProsima_user_DllExport const std::vector<uint32_t>& bounded_sequence_uint32_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_uint32_field
     * @return Reference to member bounded_sequence_uint32_field
     */
    eProsima_user_DllExport std::vector<uint32_t>& bounded_sequence_uint32_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_int64_field
     * @param _bounded_sequence_int64_field New value to be copied in member bounded_sequence_int64_field
     */
    eProsima_user_DllExport void bounded_sequence_int64_field(
            const std::vector<int64_t>& _bounded_sequence_int64_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_int64_field
     * @param _bounded_sequence_int64_field New value to be moved in member bounded_sequence_int64_field
     */
    eProsima_user_DllExport void bounded_sequence_int64_field(
            std::vector<int64_t>&& _bounded_sequence_int64_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_int64_field
     * @return Constant reference to member bounded_sequence_int64_field
     */
    eProsima_user_DllExport const std::vector<int64_t>& bounded_sequence_int64_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_int64_field
     * @return Reference to member bounded_sequence_int64_field
     */
    eProsima_user_DllExport std::vector<int64_t>& bounded_sequence_int64_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_uint64_field
     * @param _bounded_sequence_uint64_field New value to be copied in member bounded_sequence_uint64_field
     */
    eProsima_user_DllExport void bounded_sequence_uint64_field(
            const std::vector<uint64_t>& _bounded_sequence_uint64_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_uint64_field
     * @param _bounded_sequence_uint64_field New value to be moved in member bounded_sequence_uint64_field
     */
    eProsima_user_DllExport void bounded_sequence_uint64_field(
            std::vector<uint64_t>&& _bounded_sequence_uint64_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_uint64_field
     * @return Constant reference to member bounded_sequence_uint64_field
     */
    eProsima_user_DllExport const std::vector<uint64_t>& bounded_sequence_uint64_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_uint64_field
     * @return Reference to member bounded_sequence_uint64_field
     */
    eProsima_user_DllExport std::vector<uint64_t>& bounded_sequence_uint64_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_float_field
     * @param _bounded_sequence_float_field New value to be copied in member bounded_sequence_float_field
     */
    eProsima_user_DllExport void bounded_sequence_float_field(
            const std::vector<float>& _bounded_sequence_float_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_float_field
     * @param _bounded_sequence_float_field New value to be moved in member bounded_sequence_float_field
     */
    eProsima_user_DllExport void bounded_sequence_float_field(
            std::vector<float>&& _bounded_sequence_float_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_float_field
     * @return Constant reference to member bounded_sequence_float_field
     */
    eProsima_user_DllExport const std::vector<float>& bounded_sequence_float_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_float_field
     * @return Reference to member bounded_sequence_float_field
     */
    eProsima_user_DllExport std::vector<float>& bounded_sequence_float_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_double_field
     * @param _bounded_sequence_double_field New value to be copied in member bounded_sequence_double_field
     */
    eProsima_user_DllExport void bounded_sequence_double_field(
            const std::vector<double>& _bounded_sequence_double_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_double_field
     * @param _bounded_sequence_double_field New value to be moved in member bounded_sequence_double_field
     */
    eProsima_user_DllExport void bounded_sequence_double_field(
            std::vector<double>&& _bounded_sequence_double_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_double_field
     * @return Constant reference to member bounded_sequence_double_field
     */
    eProsima_user_DllExport const std::vector<double>& bounded_sequence_double_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_double_field
     * @return Reference to member bounded_sequence_double_field
     */
    eProsima_user_DllExport std::vector<double>& bounded_sequence_double_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_long_double_field
     * @param _bounded_sequence_long_double_field New value to be copied in member bounded_sequence_long_double_field
     */
    eProsima_user_DllExport void bounded_sequence_long_double_field(
            const std::vector<long double>& _bounded_sequence_long_double_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_long_double_field
     * @param _bounded_sequence_long_double_field New value to be moved in member bounded_sequence_long_double_field
     */
    eProsima_user_DllExport void bounded_sequence_long_double_field(
            std::vector<long double>&& _bounded_sequence_long_double_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_long_double_field
     * @return Constant reference to member bounded_sequence_long_double_field
     */
    eProsima_user_DllExport const std::vector<long double>& bounded_sequence_long_double_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_long_double_field
     * @return Reference to member bounded_sequence_long_double_field
     */
    eProsima_user_DllExport std::vector<long double>& bounded_sequence_long_double_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_bool_field
     * @param _bounded_sequence_bool_field New value to be copied in member bounded_sequence_bool_field
     */
    eProsima_user_DllExport void bounded_sequence_bool_field(
            const std::vector<bool>& _bounded_sequence_bool_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_bool_field
     * @param _bounded_sequence_bool_field New value to be moved in member bounded_sequence_bool_field
     */
    eProsima_user_DllExport void bounded_sequence_bool_field(
            std::vector<bool>&& _bounded_sequence_bool_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_bool_field
     * @return Constant reference to member bounded_sequence_bool_field
     */
    eProsima_user_DllExport const std::vector<bool>& bounded_sequence_bool_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_bool_field
     * @return Reference to member bounded_sequence_bool_field
     */
    eProsima_user_DllExport std::vector<bool>& bounded_sequence_bool_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_string_field
     * @param _bounded_sequence_string_field New value to be copied in member bounded_sequence_string_field
     */
    eProsima_user_DllExport void bounded_sequence_string_field(
            const std::vector<std::string>& _bounded_sequence_string_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_string_field
     * @param _bounded_sequence_string_field New value to be moved in member bounded_sequence_string_field
     */
    eProsima_user_DllExport void bounded_sequence_string_field(
            std::vector<std::string>&& _bounded_sequence_string_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_string_field
     * @return Constant reference to member bounded_sequence_string_field
     */
    eProsima_user_DllExport const std::vector<std::string>& bounded_sequence_string_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_string_field
     * @return Reference to member bounded_sequence_string_field
     */
    eProsima_user_DllExport std::vector<std::string>& bounded_sequence_string_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_enum_field
     * @param _bounded_sequence_enum_field New value to be copied in member bounded_sequence_enum_field
     */
    eProsima_user_DllExport void bounded_sequence_enum_field(
            const std::vector<Color>& _bounded_sequence_enum_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_enum_field
     * @param _bounded_sequence_enum_field New value to be moved in member bounded_sequence_enum_field
     */
    eProsima_user_DllExport void bounded_sequence_enum_field(
            std::vector<Color>&& _bounded_sequence_enum_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_enum_field
     * @return Constant reference to member bounded_sequence_enum_field
     */
    eProsima_user_DllExport const std::vector<Color>& bounded_sequence_enum_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_enum_field
     * @return Reference to member bounded_sequence_enum_field
     */
    eProsima_user_DllExport std::vector<Color>& bounded_sequence_enum_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_enum2_field
     * @param _bounded_sequence_enum2_field New value to be copied in member bounded_sequence_enum2_field
     */
    eProsima_user_DllExport void bounded_sequence_enum2_field(
            const std::vector<Material>& _bounded_sequence_enum2_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_enum2_field
     * @param _bounded_sequence_enum2_field New value to be moved in member bounded_sequence_enum2_field
     */
    eProsima_user_DllExport void bounded_sequence_enum2_field(
            std::vector<Material>&& _bounded_sequence_enum2_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_enum2_field
     * @return Constant reference to member bounded_sequence_enum2_field
     */
    eProsima_user_DllExport const std::vector<Material>& bounded_sequence_enum2_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_enum2_field
     * @return Reference to member bounded_sequence_enum2_field
     */
    eProsima_user_DllExport std::vector<Material>& bounded_sequence_enum2_field();
    /*!
     * @brief This function copies the value in member bounded_sequence_struct_field
     * @param _bounded_sequence_struct_field New value to be copied in member bounded_sequence_struct_field
     */
    eProsima_user_DllExport void bounded_sequence_struct_field(
            const std::vector<StructType>& _bounded_sequence_struct_field);

    /*!
     * @brief This function moves the value in member bounded_sequence_struct_field
     * @param _bounded_sequence_struct_field New value to be moved in member bounded_sequence_struct_field
     */
    eProsima_user_DllExport void bounded_sequence_struct_field(
            std::vector<StructType>&& _bounded_sequence_struct_field);

    /*!
     * @brief This function returns a constant reference to member bounded_sequence_struct_field
     * @return Constant reference to member bounded_sequence_struct_field
     */
    eProsima_user_DllExport const std::vector<StructType>& bounded_sequence_struct_field() const;

    /*!
     * @brief This function returns a reference to member bounded_sequence_struct_field
     * @return Reference to member bounded_sequence_struct_field
     */
    eProsima_user_DllExport std::vector<StructType>& bounded_sequence_struct_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_char_field
     * @param _unbounded_sequence_char_field New value to be copied in member unbounded_sequence_char_field
     */
    eProsima_user_DllExport void unbounded_sequence_char_field(
            const std::vector<char>& _unbounded_sequence_char_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_char_field
     * @param _unbounded_sequence_char_field New value to be moved in member unbounded_sequence_char_field
     */
    eProsima_user_DllExport void unbounded_sequence_char_field(
            std::vector<char>&& _unbounded_sequence_char_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_char_field
     * @return Constant reference to member unbounded_sequence_char_field
     */
    eProsima_user_DllExport const std::vector<char>& unbounded_sequence_char_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_char_field
     * @return Reference to member unbounded_sequence_char_field
     */
    eProsima_user_DllExport std::vector<char>& unbounded_sequence_char_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_uint8_field
     * @param _unbounded_sequence_uint8_field New value to be copied in member unbounded_sequence_uint8_field
     */
    eProsima_user_DllExport void unbounded_sequence_uint8_field(
            const std::vector<uint8_t>& _unbounded_sequence_uint8_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_uint8_field
     * @param _unbounded_sequence_uint8_field New value to be moved in member unbounded_sequence_uint8_field
     */
    eProsima_user_DllExport void unbounded_sequence_uint8_field(
            std::vector<uint8_t>&& _unbounded_sequence_uint8_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_uint8_field
     * @return Constant reference to member unbounded_sequence_uint8_field
     */
    eProsima_user_DllExport const std::vector<uint8_t>& unbounded_sequence_uint8_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_uint8_field
     * @return Reference to member unbounded_sequence_uint8_field
     */
    eProsima_user_DllExport std::vector<uint8_t>& unbounded_sequence_uint8_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_int16_field
     * @param _unbounded_sequence_int16_field New value to be copied in member unbounded_sequence_int16_field
     */
    eProsima_user_DllExport void unbounded_sequence_int16_field(
            const std::vector<int16_t>& _unbounded_sequence_int16_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_int16_field
     * @param _unbounded_sequence_int16_field New value to be moved in member unbounded_sequence_int16_field
     */
    eProsima_user_DllExport void unbounded_sequence_int16_field(
            std::vector<int16_t>&& _unbounded_sequence_int16_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_int16_field
     * @return Constant reference to member unbounded_sequence_int16_field
     */
    eProsima_user_DllExport const std::vector<int16_t>& unbounded_sequence_int16_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_int16_field
     * @return Reference to member unbounded_sequence_int16_field
     */
    eProsima_user_DllExport std::vector<int16_t>& unbounded_sequence_int16_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_uint16_field
     * @param _unbounded_sequence_uint16_field New value to be copied in member unbounded_sequence_uint16_field
     */
    eProsima_user_DllExport void unbounded_sequence_uint16_field(
            const std::vector<uint16_t>& _unbounded_sequence_uint16_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_uint16_field
     * @param _unbounded_sequence_uint16_field New value to be moved in member unbounded_sequence_uint16_field
     */
    eProsima_user_DllExport void unbounded_sequence_uint16_field(
            std::vector<uint16_t>&& _unbounded_sequence_uint16_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_uint16_field
     * @return Constant reference to member unbounded_sequence_uint16_field
     */
    eProsima_user_DllExport const std::vector<uint16_t>& unbounded_sequence_uint16_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_uint16_field
     * @return Reference to member unbounded_sequence_uint16_field
     */
    eProsima_user_DllExport std::vector<uint16_t>& unbounded_sequence_uint16_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_int32_field
     * @param _unbounded_sequence_int32_field New value to be copied in member unbounded_sequence_int32_field
     */
    eProsima_user_DllExport void unbounded_sequence_int32_field(
            const std::vector<int32_t>& _unbounded_sequence_int32_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_int32_field
     * @param _unbounded_sequence_int32_field New value to be moved in member unbounded_sequence_int32_field
     */
    eProsima_user_DllExport void unbounded_sequence_int32_field(
            std::vector<int32_t>&& _unbounded_sequence_int32_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_int32_field
     * @return Constant reference to member unbounded_sequence_int32_field
     */
    eProsima_user_DllExport const std::vector<int32_t>& unbounded_sequence_int32_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_int32_field
     * @return Reference to member unbounded_sequence_int32_field
     */
    eProsima_user_DllExport std::vector<int32_t>& unbounded_sequence_int32_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_uint32_field
     * @param _unbounded_sequence_uint32_field New value to be copied in member unbounded_sequence_uint32_field
     */
    eProsima_user_DllExport void unbounded_sequence_uint32_field(
            const std::vector<uint32_t>& _unbounded_sequence_uint32_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_uint32_field
     * @param _unbounded_sequence_uint32_field New value to be moved in member unbounded_sequence_uint32_field
     */
    eProsima_user_DllExport void unbounded_sequence_uint32_field(
            std::vector<uint32_t>&& _unbounded_sequence_uint32_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_uint32_field
     * @return Constant reference to member unbounded_sequence_uint32_field
     */
    eProsima_user_DllExport const std::vector<uint32_t>& unbounded_sequence_uint32_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_uint32_field
     * @return Reference to member unbounded_sequence_uint32_field
     */
    eProsima_user_DllExport std::vector<uint32_t>& unbounded_sequence_uint32_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_int64_field
     * @param _unbounded_sequence_int64_field New value to be copied in member unbounded_sequence_int64_field
     */
    eProsima_user_DllExport void unbounded_sequence_int64_field(
            const std::vector<int64_t>& _unbounded_sequence_int64_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_int64_field
     * @param _unbounded_sequence_int64_field New value to be moved in member unbounded_sequence_int64_field
     */
    eProsima_user_DllExport void unbounded_sequence_int64_field(
            std::vector<int64_t>&& _unbounded_sequence_int64_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_int64_field
     * @return Constant reference to member unbounded_sequence_int64_field
     */
    eProsima_user_DllExport const std::vector<int64_t>& unbounded_sequence_int64_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_int64_field
     * @return Reference to member unbounded_sequence_int64_field
     */
    eProsima_user_DllExport std::vector<int64_t>& unbounded_sequence_int64_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_uint64_field
     * @param _unbounded_sequence_uint64_field New value to be copied in member unbounded_sequence_uint64_field
     */
    eProsima_user_DllExport void unbounded_sequence_uint64_field(
            const std::vector<uint64_t>& _unbounded_sequence_uint64_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_uint64_field
     * @param _unbounded_sequence_uint64_field New value to be moved in member unbounded_sequence_uint64_field
     */
    eProsima_user_DllExport void unbounded_sequence_uint64_field(
            std::vector<uint64_t>&& _unbounded_sequence_uint64_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_uint64_field
     * @return Constant reference to member unbounded_sequence_uint64_field
     */
    eProsima_user_DllExport const std::vector<uint64_t>& unbounded_sequence_uint64_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_uint64_field
     * @return Reference to member unbounded_sequence_uint64_field
     */
    eProsima_user_DllExport std::vector<uint64_t>& unbounded_sequence_uint64_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_float_field
     * @param _unbounded_sequence_float_field New value to be copied in member unbounded_sequence_float_field
     */
    eProsima_user_DllExport void unbounded_sequence_float_field(
            const std::vector<float>& _unbounded_sequence_float_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_float_field
     * @param _unbounded_sequence_float_field New value to be moved in member unbounded_sequence_float_field
     */
    eProsima_user_DllExport void unbounded_sequence_float_field(
            std::vector<float>&& _unbounded_sequence_float_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_float_field
     * @return Constant reference to member unbounded_sequence_float_field
     */
    eProsima_user_DllExport const std::vector<float>& unbounded_sequence_float_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_float_field
     * @return Reference to member unbounded_sequence_float_field
     */
    eProsima_user_DllExport std::vector<float>& unbounded_sequence_float_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_double_field
     * @param _unbounded_sequence_double_field New value to be copied in member unbounded_sequence_double_field
     */
    eProsima_user_DllExport void unbounded_sequence_double_field(
            const std::vector<double>& _unbounded_sequence_double_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_double_field
     * @param _unbounded_sequence_double_field New value to be moved in member unbounded_sequence_double_field
     */
    eProsima_user_DllExport void unbounded_sequence_double_field(
            std::vector<double>&& _unbounded_sequence_double_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_double_field
     * @return Constant reference to member unbounded_sequence_double_field
     */
    eProsima_user_DllExport const std::vector<double>& unbounded_sequence_double_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_double_field
     * @return Reference to member unbounded_sequence_double_field
     */
    eProsima_user_DllExport std::vector<double>& unbounded_sequence_double_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_long_double_field
     * @param _unbounded_sequence_long_double_field New value to be copied in member unbounded_sequence_long_double_field
     */
    eProsima_user_DllExport void unbounded_sequence_long_double_field(
            const std::vector<long double>& _unbounded_sequence_long_double_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_long_double_field
     * @param _unbounded_sequence_long_double_field New value to be moved in member unbounded_sequence_long_double_field
     */
    eProsima_user_DllExport void unbounded_sequence_long_double_field(
            std::vector<long double>&& _unbounded_sequence_long_double_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_long_double_field
     * @return Constant reference to member unbounded_sequence_long_double_field
     */
    eProsima_user_DllExport const std::vector<long double>& unbounded_sequence_long_double_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_long_double_field
     * @return Reference to member unbounded_sequence_long_double_field
     */
    eProsima_user_DllExport std::vector<long double>& unbounded_sequence_long_double_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_bool_field
     * @param _unbounded_sequence_bool_field New value to be copied in member unbounded_sequence_bool_field
     */
    eProsima_user_DllExport void unbounded_sequence_bool_field(
            const std::vector<bool>& _unbounded_sequence_bool_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_bool_field
     * @param _unbounded_sequence_bool_field New value to be moved in member unbounded_sequence_bool_field
     */
    eProsima_user_DllExport void unbounded_sequence_bool_field(
            std::vector<bool>&& _unbounded_sequence_bool_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_bool_field
     * @return Constant reference to member unbounded_sequence_bool_field
     */
    eProsima_user_DllExport const std::vector<bool>& unbounded_sequence_bool_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_bool_field
     * @return Reference to member unbounded_sequence_bool_field
     */
    eProsima_user_DllExport std::vector<bool>& unbounded_sequence_bool_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_string_field
     * @param _unbounded_sequence_string_field New value to be copied in member unbounded_sequence_string_field
     */
    eProsima_user_DllExport void unbounded_sequence_string_field(
            const std::vector<std::string>& _unbounded_sequence_string_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_string_field
     * @param _unbounded_sequence_string_field New value to be moved in member unbounded_sequence_string_field
     */
    eProsima_user_DllExport void unbounded_sequence_string_field(
            std::vector<std::string>&& _unbounded_sequence_string_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_string_field
     * @return Constant reference to member unbounded_sequence_string_field
     */
    eProsima_user_DllExport const std::vector<std::string>& unbounded_sequence_string_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_string_field
     * @return Reference to member unbounded_sequence_string_field
     */
    eProsima_user_DllExport std::vector<std::string>& unbounded_sequence_string_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_enum_field
     * @param _unbounded_sequence_enum_field New value to be copied in member unbounded_sequence_enum_field
     */
    eProsima_user_DllExport void unbounded_sequence_enum_field(
            const std::vector<Color>& _unbounded_sequence_enum_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_enum_field
     * @param _unbounded_sequence_enum_field New value to be moved in member unbounded_sequence_enum_field
     */
    eProsima_user_DllExport void unbounded_sequence_enum_field(
            std::vector<Color>&& _unbounded_sequence_enum_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_enum_field
     * @return Constant reference to member unbounded_sequence_enum_field
     */
    eProsima_user_DllExport const std::vector<Color>& unbounded_sequence_enum_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_enum_field
     * @return Reference to member unbounded_sequence_enum_field
     */
    eProsima_user_DllExport std::vector<Color>& unbounded_sequence_enum_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_enum2_field
     * @param _unbounded_sequence_enum2_field New value to be copied in member unbounded_sequence_enum2_field
     */
    eProsima_user_DllExport void unbounded_sequence_enum2_field(
            const std::vector<Material>& _unbounded_sequence_enum2_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_enum2_field
     * @param _unbounded_sequence_enum2_field New value to be moved in member unbounded_sequence_enum2_field
     */
    eProsima_user_DllExport void unbounded_sequence_enum2_field(
            std::vector<Material>&& _unbounded_sequence_enum2_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_enum2_field
     * @return Constant reference to member unbounded_sequence_enum2_field
     */
    eProsima_user_DllExport const std::vector<Material>& unbounded_sequence_enum2_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_enum2_field
     * @return Reference to member unbounded_sequence_enum2_field
     */
    eProsima_user_DllExport std::vector<Material>& unbounded_sequence_enum2_field();
    /*!
     * @brief This function copies the value in member unbounded_sequence_struct_field
     * @param _unbounded_sequence_struct_field New value to be copied in member unbounded_sequence_struct_field
     */
    eProsima_user_DllExport void unbounded_sequence_struct_field(
            const std::vector<StructType>& _unbounded_sequence_struct_field);

    /*!
     * @brief This function moves the value in member unbounded_sequence_struct_field
     * @param _unbounded_sequence_struct_field New value to be moved in member unbounded_sequence_struct_field
     */
    eProsima_user_DllExport void unbounded_sequence_struct_field(
            std::vector<StructType>&& _unbounded_sequence_struct_field);

    /*!
     * @brief This function returns a constant reference to member unbounded_sequence_struct_field
     * @return Constant reference to member unbounded_sequence_struct_field
     */
    eProsima_user_DllExport const std::vector<StructType>& unbounded_sequence_struct_field() const;

    /*!
     * @brief This function returns a reference to member unbounded_sequence_struct_field
     * @return Reference to member unbounded_sequence_struct_field
     */
    eProsima_user_DllExport std::vector<StructType>& unbounded_sequence_struct_field();

    /*!
    * @brief This function returns the maximum serialized size of an object
    * depending on the buffer alignment.
    * @param current_alignment Buffer alignment.
    * @return Maximum serialized size.
    */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const ContentFilterTestType& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    char m_char_field;
    uint8_t m_uint8_field;
    int16_t m_int16_field;
    uint16_t m_uint16_field;
    int32_t m_int32_field;
    uint32_t m_uint32_field;
    int64_t m_int64_field;
    uint64_t m_uint64_field;
    float m_float_field;
    double m_double_field;
    long double m_long_double_field;
    bool m_bool_field;
    std::string m_string_field;
    Color m_enum_field;
    Material m_enum2_field;
    StructType m_struct_field;
    std::array<char, 3> m_array_char_field;
    std::array<uint8_t, 3> m_array_uint8_field;
    std::array<int16_t, 3> m_array_int16_field;
    std::array<uint16_t, 3> m_array_uint16_field;
    std::array<int32_t, 3> m_array_int32_field;
    std::array<uint32_t, 3> m_array_uint32_field;
    std::array<int64_t, 3> m_array_int64_field;
    std::array<uint64_t, 3> m_array_uint64_field;
    std::array<float, 3> m_array_float_field;
    std::array<double, 3> m_array_double_field;
    std::array<long double, 3> m_array_long_double_field;
    std::array<bool, 3> m_array_bool_field;
    std::array<std::string, 3> m_array_string_field;
    std::array<Color, 3> m_array_enum_field;
    std::array<Material, 3> m_array_enum2_field;
    std::array<StructType, 3> m_array_struct_field;
    std::vector<char> m_bounded_sequence_char_field;
    std::vector<uint8_t> m_bounded_sequence_uint8_field;
    std::vector<int16_t> m_bounded_sequence_int16_field;
    std::vector<uint16_t> m_bounded_sequence_uint16_field;
    std::vector<int32_t> m_bounded_sequence_int32_field;
    std::vector<uint32_t> m_bounded_sequence_uint32_field;
    std::vector<int64_t> m_bounded_sequence_int64_field;
    std::vector<uint64_t> m_bounded_sequence_uint64_field;
    std::vector<float> m_bounded_sequence_float_field;
    std::vector<double> m_bounded_sequence_double_field;
    std::vector<long double> m_bounded_sequence_long_double_field;
    std::vector<bool> m_bounded_sequence_bool_field;
    std::vector<std::string> m_bounded_sequence_string_field;
    std::vector<Color> m_bounded_sequence_enum_field;
    std::vector<Material> m_bounded_sequence_enum2_field;
    std::vector<StructType> m_bounded_sequence_struct_field;
    std::vector<char> m_unbounded_sequence_char_field;
    std::vector<uint8_t> m_unbounded_sequence_uint8_field;
    std::vector<int16_t> m_unbounded_sequence_int16_field;
    std::vector<uint16_t> m_unbounded_sequence_uint16_field;
    std::vector<int32_t> m_unbounded_sequence_int32_field;
    std::vector<uint32_t> m_unbounded_sequence_uint32_field;
    std::vector<int64_t> m_unbounded_sequence_int64_field;
    std::vector<uint64_t> m_unbounded_sequence_uint64_field;
    std::vector<float> m_unbounded_sequence_float_field;
    std::vector<double> m_unbounded_sequence_double_field;
    std::vector<long double> m_unbounded_sequence_long_double_field;
    std::vector<bool> m_unbounded_sequence_bool_field;
    std::vector<std::string> m_unbounded_sequence_string_field;
    std::vector<Color> m_unbounded_sequence_enum_field;
    std::vector<Material> m_unbounded_sequence_enum2_field;
    std::vector<StructType> m_unbounded_sequence_struct_field;

};

#endif // _FAST_DDS_GENERATED_CONTENTFILTERTESTTYPE_H_

