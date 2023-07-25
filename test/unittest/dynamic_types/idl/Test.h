/*!
 * @file Test.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_TEST_H_
#define _FAST_DDS_GENERATED_TEST_H_


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
#if defined(TEST_SOURCE)
#define TEST_DllAPI __declspec( dllexport )
#else
#define TEST_DllAPI __declspec( dllimport )
#endif // TEST_SOURCE
#else
#define TEST_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define TEST_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the enumeration MyEnum defined by the user in the IDL file.
 * @ingroup Test
 */
enum MyEnum : uint32_t
{
    A,
    B,
    C
};
typedef MyEnum MyAliasEnum;
typedef MyAliasEnum MyAliasEnum2;
typedef MyAliasEnum2 MyAliasEnum3;
/*!
 * @brief This class represents the structure BasicStruct defined by the user in the IDL file.
 * @ingroup Test
 */
class BasicStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport BasicStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~BasicStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object BasicStruct that will be copied.
     */
    eProsima_user_DllExport BasicStruct(
            const BasicStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object BasicStruct that will be copied.
     */
    eProsima_user_DllExport BasicStruct(
            BasicStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object BasicStruct that will be copied.
     */
    eProsima_user_DllExport BasicStruct& operator =(
            const BasicStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object BasicStruct that will be copied.
     */
    eProsima_user_DllExport BasicStruct& operator =(
            BasicStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x BasicStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const BasicStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x BasicStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const BasicStruct& x) const;

    /*!
     * @brief This function sets a value in member my_bool
     * @param _my_bool New value for member my_bool
     */
    eProsima_user_DllExport void my_bool(
            bool _my_bool);

    /*!
     * @brief This function returns the value of member my_bool
     * @return Value of member my_bool
     */
    eProsima_user_DllExport bool my_bool() const;

    /*!
     * @brief This function returns a reference to member my_bool
     * @return Reference to member my_bool
     */
    eProsima_user_DllExport bool& my_bool();

    /*!
     * @brief This function sets a value in member my_octet
     * @param _my_octet New value for member my_octet
     */
    eProsima_user_DllExport void my_octet(
            uint8_t _my_octet);

    /*!
     * @brief This function returns the value of member my_octet
     * @return Value of member my_octet
     */
    eProsima_user_DllExport uint8_t my_octet() const;

    /*!
     * @brief This function returns a reference to member my_octet
     * @return Reference to member my_octet
     */
    eProsima_user_DllExport uint8_t& my_octet();

    /*!
     * @brief This function sets a value in member my_int16
     * @param _my_int16 New value for member my_int16
     */
    eProsima_user_DllExport void my_int16(
            int16_t _my_int16);

    /*!
     * @brief This function returns the value of member my_int16
     * @return Value of member my_int16
     */
    eProsima_user_DllExport int16_t my_int16() const;

    /*!
     * @brief This function returns a reference to member my_int16
     * @return Reference to member my_int16
     */
    eProsima_user_DllExport int16_t& my_int16();

    /*!
     * @brief This function sets a value in member my_int32
     * @param _my_int32 New value for member my_int32
     */
    eProsima_user_DllExport void my_int32(
            int32_t _my_int32);

    /*!
     * @brief This function returns the value of member my_int32
     * @return Value of member my_int32
     */
    eProsima_user_DllExport int32_t my_int32() const;

    /*!
     * @brief This function returns a reference to member my_int32
     * @return Reference to member my_int32
     */
    eProsima_user_DllExport int32_t& my_int32();

    /*!
     * @brief This function sets a value in member my_int64
     * @param _my_int64 New value for member my_int64
     */
    eProsima_user_DllExport void my_int64(
            int64_t _my_int64);

    /*!
     * @brief This function returns the value of member my_int64
     * @return Value of member my_int64
     */
    eProsima_user_DllExport int64_t my_int64() const;

    /*!
     * @brief This function returns a reference to member my_int64
     * @return Reference to member my_int64
     */
    eProsima_user_DllExport int64_t& my_int64();

    /*!
     * @brief This function sets a value in member my_uint16
     * @param _my_uint16 New value for member my_uint16
     */
    eProsima_user_DllExport void my_uint16(
            uint16_t _my_uint16);

    /*!
     * @brief This function returns the value of member my_uint16
     * @return Value of member my_uint16
     */
    eProsima_user_DllExport uint16_t my_uint16() const;

    /*!
     * @brief This function returns a reference to member my_uint16
     * @return Reference to member my_uint16
     */
    eProsima_user_DllExport uint16_t& my_uint16();

    /*!
     * @brief This function sets a value in member my_uint32
     * @param _my_uint32 New value for member my_uint32
     */
    eProsima_user_DllExport void my_uint32(
            uint32_t _my_uint32);

    /*!
     * @brief This function returns the value of member my_uint32
     * @return Value of member my_uint32
     */
    eProsima_user_DllExport uint32_t my_uint32() const;

    /*!
     * @brief This function returns a reference to member my_uint32
     * @return Reference to member my_uint32
     */
    eProsima_user_DllExport uint32_t& my_uint32();

    /*!
     * @brief This function sets a value in member my_uint64
     * @param _my_uint64 New value for member my_uint64
     */
    eProsima_user_DllExport void my_uint64(
            uint64_t _my_uint64);

    /*!
     * @brief This function returns the value of member my_uint64
     * @return Value of member my_uint64
     */
    eProsima_user_DllExport uint64_t my_uint64() const;

    /*!
     * @brief This function returns a reference to member my_uint64
     * @return Reference to member my_uint64
     */
    eProsima_user_DllExport uint64_t& my_uint64();

    /*!
     * @brief This function sets a value in member my_float32
     * @param _my_float32 New value for member my_float32
     */
    eProsima_user_DllExport void my_float32(
            float _my_float32);

    /*!
     * @brief This function returns the value of member my_float32
     * @return Value of member my_float32
     */
    eProsima_user_DllExport float my_float32() const;

    /*!
     * @brief This function returns a reference to member my_float32
     * @return Reference to member my_float32
     */
    eProsima_user_DllExport float& my_float32();

    /*!
     * @brief This function sets a value in member my_float64
     * @param _my_float64 New value for member my_float64
     */
    eProsima_user_DllExport void my_float64(
            double _my_float64);

    /*!
     * @brief This function returns the value of member my_float64
     * @return Value of member my_float64
     */
    eProsima_user_DllExport double my_float64() const;

    /*!
     * @brief This function returns a reference to member my_float64
     * @return Reference to member my_float64
     */
    eProsima_user_DllExport double& my_float64();

    /*!
     * @brief This function sets a value in member my_float128
     * @param _my_float128 New value for member my_float128
     */
    eProsima_user_DllExport void my_float128(
            long double _my_float128);

    /*!
     * @brief This function returns the value of member my_float128
     * @return Value of member my_float128
     */
    eProsima_user_DllExport long double my_float128() const;

    /*!
     * @brief This function returns a reference to member my_float128
     * @return Reference to member my_float128
     */
    eProsima_user_DllExport long double& my_float128();

    /*!
     * @brief This function sets a value in member my_char
     * @param _my_char New value for member my_char
     */
    eProsima_user_DllExport void my_char(
            char _my_char);

    /*!
     * @brief This function returns the value of member my_char
     * @return Value of member my_char
     */
    eProsima_user_DllExport char my_char() const;

    /*!
     * @brief This function returns a reference to member my_char
     * @return Reference to member my_char
     */
    eProsima_user_DllExport char& my_char();

    /*!
     * @brief This function sets a value in member my_wchar
     * @param _my_wchar New value for member my_wchar
     */
    eProsima_user_DllExport void my_wchar(
            wchar_t _my_wchar);

    /*!
     * @brief This function returns the value of member my_wchar
     * @return Value of member my_wchar
     */
    eProsima_user_DllExport wchar_t my_wchar() const;

    /*!
     * @brief This function returns a reference to member my_wchar
     * @return Reference to member my_wchar
     */
    eProsima_user_DllExport wchar_t& my_wchar();

    /*!
     * @brief This function copies the value in member my_string
     * @param _my_string New value to be copied in member my_string
     */
    eProsima_user_DllExport void my_string(
            const std::string& _my_string);

    /*!
     * @brief This function moves the value in member my_string
     * @param _my_string New value to be moved in member my_string
     */
    eProsima_user_DllExport void my_string(
            std::string&& _my_string);

    /*!
     * @brief This function returns a constant reference to member my_string
     * @return Constant reference to member my_string
     */
    eProsima_user_DllExport const std::string& my_string() const;

    /*!
     * @brief This function returns a reference to member my_string
     * @return Reference to member my_string
     */
    eProsima_user_DllExport std::string& my_string();
    /*!
     * @brief This function copies the value in member my_wstring
     * @param _my_wstring New value to be copied in member my_wstring
     */
    eProsima_user_DllExport void my_wstring(
            const std::wstring& _my_wstring);

    /*!
     * @brief This function moves the value in member my_wstring
     * @param _my_wstring New value to be moved in member my_wstring
     */
    eProsima_user_DllExport void my_wstring(
            std::wstring&& _my_wstring);

    /*!
     * @brief This function returns a constant reference to member my_wstring
     * @return Constant reference to member my_wstring
     */
    eProsima_user_DllExport const std::wstring& my_wstring() const;

    /*!
     * @brief This function returns a reference to member my_wstring
     * @return Reference to member my_wstring
     */
    eProsima_user_DllExport std::wstring& my_wstring();

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
            const BasicStruct& data,
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

    bool m_my_bool;
    uint8_t m_my_octet;
    int16_t m_my_int16;
    int32_t m_my_int32;
    int64_t m_my_int64;
    uint16_t m_my_uint16;
    uint32_t m_my_uint32;
    uint64_t m_my_uint64;
    float m_my_float32;
    double m_my_float64;
    long double m_my_float128;
    char m_my_char;
    wchar_t m_my_wchar;
    std::string m_my_string;
    std::wstring m_my_wstring;

};
typedef std::array<uint8_t, 500> MyOctetArray500;
typedef std::array<BasicStruct, 5> BSAlias5;
typedef std::array<MyAliasEnum3, 42> MA3;
typedef std::array<int32_t, 2> MyMiniArray;
typedef std::vector<int32_t> MySequenceLong;
/*!
 * @brief This class represents the structure ComplexStruct defined by the user in the IDL file.
 * @ingroup Test
 */
class ComplexStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ComplexStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ComplexStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ComplexStruct that will be copied.
     */
    eProsima_user_DllExport ComplexStruct(
            const ComplexStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ComplexStruct that will be copied.
     */
    eProsima_user_DllExport ComplexStruct(
            ComplexStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ComplexStruct that will be copied.
     */
    eProsima_user_DllExport ComplexStruct& operator =(
            const ComplexStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ComplexStruct that will be copied.
     */
    eProsima_user_DllExport ComplexStruct& operator =(
            ComplexStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ComplexStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ComplexStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ComplexStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ComplexStruct& x) const;

    /*!
     * @brief This function sets a value in member my_octet
     * @param _my_octet New value for member my_octet
     */
    eProsima_user_DllExport void my_octet(
            uint8_t _my_octet);

    /*!
     * @brief This function returns the value of member my_octet
     * @return Value of member my_octet
     */
    eProsima_user_DllExport uint8_t my_octet() const;

    /*!
     * @brief This function returns a reference to member my_octet
     * @return Reference to member my_octet
     */
    eProsima_user_DllExport uint8_t& my_octet();

    /*!
     * @brief This function copies the value in member my_basic_struct
     * @param _my_basic_struct New value to be copied in member my_basic_struct
     */
    eProsima_user_DllExport void my_basic_struct(
            const BasicStruct& _my_basic_struct);

    /*!
     * @brief This function moves the value in member my_basic_struct
     * @param _my_basic_struct New value to be moved in member my_basic_struct
     */
    eProsima_user_DllExport void my_basic_struct(
            BasicStruct&& _my_basic_struct);

    /*!
     * @brief This function returns a constant reference to member my_basic_struct
     * @return Constant reference to member my_basic_struct
     */
    eProsima_user_DllExport const BasicStruct& my_basic_struct() const;

    /*!
     * @brief This function returns a reference to member my_basic_struct
     * @return Reference to member my_basic_struct
     */
    eProsima_user_DllExport BasicStruct& my_basic_struct();
    /*!
     * @brief This function sets a value in member my_alias_enum
     * @param _my_alias_enum New value for member my_alias_enum
     */
    eProsima_user_DllExport void my_alias_enum(
            MyAliasEnum _my_alias_enum);

    /*!
     * @brief This function returns the value of member my_alias_enum
     * @return Value of member my_alias_enum
     */
    eProsima_user_DllExport MyAliasEnum my_alias_enum() const;

    /*!
     * @brief This function returns a reference to member my_alias_enum
     * @return Reference to member my_alias_enum
     */
    eProsima_user_DllExport MyAliasEnum& my_alias_enum();

    /*!
     * @brief This function sets a value in member my_enum
     * @param _my_enum New value for member my_enum
     */
    eProsima_user_DllExport void my_enum(
            MyEnum _my_enum);

    /*!
     * @brief This function returns the value of member my_enum
     * @return Value of member my_enum
     */
    eProsima_user_DllExport MyEnum my_enum() const;

    /*!
     * @brief This function returns a reference to member my_enum
     * @return Reference to member my_enum
     */
    eProsima_user_DllExport MyEnum& my_enum();

    /*!
     * @brief This function copies the value in member my_sequence_octet
     * @param _my_sequence_octet New value to be copied in member my_sequence_octet
     */
    eProsima_user_DllExport void my_sequence_octet(
            const std::vector<uint8_t>& _my_sequence_octet);

    /*!
     * @brief This function moves the value in member my_sequence_octet
     * @param _my_sequence_octet New value to be moved in member my_sequence_octet
     */
    eProsima_user_DllExport void my_sequence_octet(
            std::vector<uint8_t>&& _my_sequence_octet);

    /*!
     * @brief This function returns a constant reference to member my_sequence_octet
     * @return Constant reference to member my_sequence_octet
     */
    eProsima_user_DllExport const std::vector<uint8_t>& my_sequence_octet() const;

    /*!
     * @brief This function returns a reference to member my_sequence_octet
     * @return Reference to member my_sequence_octet
     */
    eProsima_user_DllExport std::vector<uint8_t>& my_sequence_octet();
    /*!
     * @brief This function copies the value in member my_sequence_struct
     * @param _my_sequence_struct New value to be copied in member my_sequence_struct
     */
    eProsima_user_DllExport void my_sequence_struct(
            const std::vector<BasicStruct>& _my_sequence_struct);

    /*!
     * @brief This function moves the value in member my_sequence_struct
     * @param _my_sequence_struct New value to be moved in member my_sequence_struct
     */
    eProsima_user_DllExport void my_sequence_struct(
            std::vector<BasicStruct>&& _my_sequence_struct);

    /*!
     * @brief This function returns a constant reference to member my_sequence_struct
     * @return Constant reference to member my_sequence_struct
     */
    eProsima_user_DllExport const std::vector<BasicStruct>& my_sequence_struct() const;

    /*!
     * @brief This function returns a reference to member my_sequence_struct
     * @return Reference to member my_sequence_struct
     */
    eProsima_user_DllExport std::vector<BasicStruct>& my_sequence_struct();
    /*!
     * @brief This function copies the value in member my_array_octet
     * @param _my_array_octet New value to be copied in member my_array_octet
     */
    eProsima_user_DllExport void my_array_octet(
            const std::array<std::array<std::array<char, 4>, 5>, 500>& _my_array_octet);

    /*!
     * @brief This function moves the value in member my_array_octet
     * @param _my_array_octet New value to be moved in member my_array_octet
     */
    eProsima_user_DllExport void my_array_octet(
            std::array<std::array<std::array<char, 4>, 5>, 500>&& _my_array_octet);

    /*!
     * @brief This function returns a constant reference to member my_array_octet
     * @return Constant reference to member my_array_octet
     */
    eProsima_user_DllExport const std::array<std::array<std::array<char, 4>, 5>, 500>& my_array_octet() const;

    /*!
     * @brief This function returns a reference to member my_array_octet
     * @return Reference to member my_array_octet
     */
    eProsima_user_DllExport std::array<std::array<std::array<char, 4>, 5>, 500>& my_array_octet();
    /*!
     * @brief This function copies the value in member my_octet_array_500
     * @param _my_octet_array_500 New value to be copied in member my_octet_array_500
     */
    eProsima_user_DllExport void my_octet_array_500(
            const MyOctetArray500& _my_octet_array_500);

    /*!
     * @brief This function moves the value in member my_octet_array_500
     * @param _my_octet_array_500 New value to be moved in member my_octet_array_500
     */
    eProsima_user_DllExport void my_octet_array_500(
            MyOctetArray500&& _my_octet_array_500);

    /*!
     * @brief This function returns a constant reference to member my_octet_array_500
     * @return Constant reference to member my_octet_array_500
     */
    eProsima_user_DllExport const MyOctetArray500& my_octet_array_500() const;

    /*!
     * @brief This function returns a reference to member my_octet_array_500
     * @return Reference to member my_octet_array_500
     */
    eProsima_user_DllExport MyOctetArray500& my_octet_array_500();
    /*!
     * @brief This function copies the value in member my_array_struct
     * @param _my_array_struct New value to be copied in member my_array_struct
     */
    eProsima_user_DllExport void my_array_struct(
            const std::array<BasicStruct, 5>& _my_array_struct);

    /*!
     * @brief This function moves the value in member my_array_struct
     * @param _my_array_struct New value to be moved in member my_array_struct
     */
    eProsima_user_DllExport void my_array_struct(
            std::array<BasicStruct, 5>&& _my_array_struct);

    /*!
     * @brief This function returns a constant reference to member my_array_struct
     * @return Constant reference to member my_array_struct
     */
    eProsima_user_DllExport const std::array<BasicStruct, 5>& my_array_struct() const;

    /*!
     * @brief This function returns a reference to member my_array_struct
     * @return Reference to member my_array_struct
     */
    eProsima_user_DllExport std::array<BasicStruct, 5>& my_array_struct();
    /*!
     * @brief This function copies the value in member my_map_octet_short
     * @param _my_map_octet_short New value to be copied in member my_map_octet_short
     */
    eProsima_user_DllExport void my_map_octet_short(
            const std::map<uint8_t, int16_t>& _my_map_octet_short);

    /*!
     * @brief This function moves the value in member my_map_octet_short
     * @param _my_map_octet_short New value to be moved in member my_map_octet_short
     */
    eProsima_user_DllExport void my_map_octet_short(
            std::map<uint8_t, int16_t>&& _my_map_octet_short);

    /*!
     * @brief This function returns a constant reference to member my_map_octet_short
     * @return Constant reference to member my_map_octet_short
     */
    eProsima_user_DllExport const std::map<uint8_t, int16_t>& my_map_octet_short() const;

    /*!
     * @brief This function returns a reference to member my_map_octet_short
     * @return Reference to member my_map_octet_short
     */
    eProsima_user_DllExport std::map<uint8_t, int16_t>& my_map_octet_short();
    /*!
     * @brief This function copies the value in member my_map_long_struct
     * @param _my_map_long_struct New value to be copied in member my_map_long_struct
     */
    eProsima_user_DllExport void my_map_long_struct(
            const std::map<int32_t, BasicStruct>& _my_map_long_struct);

    /*!
     * @brief This function moves the value in member my_map_long_struct
     * @param _my_map_long_struct New value to be moved in member my_map_long_struct
     */
    eProsima_user_DllExport void my_map_long_struct(
            std::map<int32_t, BasicStruct>&& _my_map_long_struct);

    /*!
     * @brief This function returns a constant reference to member my_map_long_struct
     * @return Constant reference to member my_map_long_struct
     */
    eProsima_user_DllExport const std::map<int32_t, BasicStruct>& my_map_long_struct() const;

    /*!
     * @brief This function returns a reference to member my_map_long_struct
     * @return Reference to member my_map_long_struct
     */
    eProsima_user_DllExport std::map<int32_t, BasicStruct>& my_map_long_struct();
    /*!
     * @brief This function copies the value in member my_map_long_seq_octet
     * @param _my_map_long_seq_octet New value to be copied in member my_map_long_seq_octet
     */
    eProsima_user_DllExport void my_map_long_seq_octet(
            const std::map<int32_t, std::vector<std::vector<uint8_t>>>& _my_map_long_seq_octet);

    /*!
     * @brief This function moves the value in member my_map_long_seq_octet
     * @param _my_map_long_seq_octet New value to be moved in member my_map_long_seq_octet
     */
    eProsima_user_DllExport void my_map_long_seq_octet(
            std::map<int32_t, std::vector<std::vector<uint8_t>>>&& _my_map_long_seq_octet);

    /*!
     * @brief This function returns a constant reference to member my_map_long_seq_octet
     * @return Constant reference to member my_map_long_seq_octet
     */
    eProsima_user_DllExport const std::map<int32_t, std::vector<std::vector<uint8_t>>>& my_map_long_seq_octet() const;

    /*!
     * @brief This function returns a reference to member my_map_long_seq_octet
     * @return Reference to member my_map_long_seq_octet
     */
    eProsima_user_DllExport std::map<int32_t, std::vector<std::vector<uint8_t>>>& my_map_long_seq_octet();
    /*!
     * @brief This function copies the value in member my_map_long_octet_array_500
     * @param _my_map_long_octet_array_500 New value to be copied in member my_map_long_octet_array_500
     */
    eProsima_user_DllExport void my_map_long_octet_array_500(
            const std::map<int32_t, MyOctetArray500>& _my_map_long_octet_array_500);

    /*!
     * @brief This function moves the value in member my_map_long_octet_array_500
     * @param _my_map_long_octet_array_500 New value to be moved in member my_map_long_octet_array_500
     */
    eProsima_user_DllExport void my_map_long_octet_array_500(
            std::map<int32_t, MyOctetArray500>&& _my_map_long_octet_array_500);

    /*!
     * @brief This function returns a constant reference to member my_map_long_octet_array_500
     * @return Constant reference to member my_map_long_octet_array_500
     */
    eProsima_user_DllExport const std::map<int32_t, MyOctetArray500>& my_map_long_octet_array_500() const;

    /*!
     * @brief This function returns a reference to member my_map_long_octet_array_500
     * @return Reference to member my_map_long_octet_array_500
     */
    eProsima_user_DllExport std::map<int32_t, MyOctetArray500>& my_map_long_octet_array_500();
    /*!
     * @brief This function copies the value in member my_map_long_lol_type
     * @param _my_map_long_lol_type New value to be copied in member my_map_long_lol_type
     */
    eProsima_user_DllExport void my_map_long_lol_type(
            const std::map<int32_t, std::map<uint8_t, BSAlias5>>& _my_map_long_lol_type);

    /*!
     * @brief This function moves the value in member my_map_long_lol_type
     * @param _my_map_long_lol_type New value to be moved in member my_map_long_lol_type
     */
    eProsima_user_DllExport void my_map_long_lol_type(
            std::map<int32_t, std::map<uint8_t, BSAlias5>>&& _my_map_long_lol_type);

    /*!
     * @brief This function returns a constant reference to member my_map_long_lol_type
     * @return Constant reference to member my_map_long_lol_type
     */
    eProsima_user_DllExport const std::map<int32_t, std::map<uint8_t, BSAlias5>>& my_map_long_lol_type() const;

    /*!
     * @brief This function returns a reference to member my_map_long_lol_type
     * @return Reference to member my_map_long_lol_type
     */
    eProsima_user_DllExport std::map<int32_t, std::map<uint8_t, BSAlias5>>& my_map_long_lol_type();
    /*!
     * @brief This function copies the value in member my_small_string_8
     * @param _my_small_string_8 New value to be copied in member my_small_string_8
     */
    eProsima_user_DllExport void my_small_string_8(
            const eprosima::fastrtps::fixed_string<128>& _my_small_string_8);

    /*!
     * @brief This function moves the value in member my_small_string_8
     * @param _my_small_string_8 New value to be moved in member my_small_string_8
     */
    eProsima_user_DllExport void my_small_string_8(
            eprosima::fastrtps::fixed_string<128>&& _my_small_string_8);

    /*!
     * @brief This function returns a constant reference to member my_small_string_8
     * @return Constant reference to member my_small_string_8
     */
    eProsima_user_DllExport const eprosima::fastrtps::fixed_string<128>& my_small_string_8() const;

    /*!
     * @brief This function returns a reference to member my_small_string_8
     * @return Reference to member my_small_string_8
     */
    eProsima_user_DllExport eprosima::fastrtps::fixed_string<128>& my_small_string_8();
    /*!
     * @brief This function copies the value in member my_small_string_16
     * @param _my_small_string_16 New value to be copied in member my_small_string_16
     */
    eProsima_user_DllExport void my_small_string_16(
            const std::wstring& _my_small_string_16);

    /*!
     * @brief This function moves the value in member my_small_string_16
     * @param _my_small_string_16 New value to be moved in member my_small_string_16
     */
    eProsima_user_DllExport void my_small_string_16(
            std::wstring&& _my_small_string_16);

    /*!
     * @brief This function returns a constant reference to member my_small_string_16
     * @return Constant reference to member my_small_string_16
     */
    eProsima_user_DllExport const std::wstring& my_small_string_16() const;

    /*!
     * @brief This function returns a reference to member my_small_string_16
     * @return Reference to member my_small_string_16
     */
    eProsima_user_DllExport std::wstring& my_small_string_16();
    /*!
     * @brief This function copies the value in member my_large_string_8
     * @param _my_large_string_8 New value to be copied in member my_large_string_8
     */
    eProsima_user_DllExport void my_large_string_8(
            const eprosima::fastrtps::fixed_string<500>& _my_large_string_8);

    /*!
     * @brief This function moves the value in member my_large_string_8
     * @param _my_large_string_8 New value to be moved in member my_large_string_8
     */
    eProsima_user_DllExport void my_large_string_8(
            eprosima::fastrtps::fixed_string<500>&& _my_large_string_8);

    /*!
     * @brief This function returns a constant reference to member my_large_string_8
     * @return Constant reference to member my_large_string_8
     */
    eProsima_user_DllExport const eprosima::fastrtps::fixed_string<500>& my_large_string_8() const;

    /*!
     * @brief This function returns a reference to member my_large_string_8
     * @return Reference to member my_large_string_8
     */
    eProsima_user_DllExport eprosima::fastrtps::fixed_string<500>& my_large_string_8();
    /*!
     * @brief This function copies the value in member my_large_string_16
     * @param _my_large_string_16 New value to be copied in member my_large_string_16
     */
    eProsima_user_DllExport void my_large_string_16(
            const std::wstring& _my_large_string_16);

    /*!
     * @brief This function moves the value in member my_large_string_16
     * @param _my_large_string_16 New value to be moved in member my_large_string_16
     */
    eProsima_user_DllExport void my_large_string_16(
            std::wstring&& _my_large_string_16);

    /*!
     * @brief This function returns a constant reference to member my_large_string_16
     * @return Constant reference to member my_large_string_16
     */
    eProsima_user_DllExport const std::wstring& my_large_string_16() const;

    /*!
     * @brief This function returns a reference to member my_large_string_16
     * @return Reference to member my_large_string_16
     */
    eProsima_user_DllExport std::wstring& my_large_string_16();
    /*!
     * @brief This function copies the value in member my_array_string
     * @param _my_array_string New value to be copied in member my_array_string
     */
    eProsima_user_DllExport void my_array_string(
            const std::array<std::array<eprosima::fastrtps::fixed_string<75>, 5>, 5>& _my_array_string);

    /*!
     * @brief This function moves the value in member my_array_string
     * @param _my_array_string New value to be moved in member my_array_string
     */
    eProsima_user_DllExport void my_array_string(
            std::array<std::array<eprosima::fastrtps::fixed_string<75>, 5>, 5>&& _my_array_string);

    /*!
     * @brief This function returns a constant reference to member my_array_string
     * @return Constant reference to member my_array_string
     */
    eProsima_user_DllExport const std::array<std::array<eprosima::fastrtps::fixed_string<75>, 5>, 5>& my_array_string() const;

    /*!
     * @brief This function returns a reference to member my_array_string
     * @return Reference to member my_array_string
     */
    eProsima_user_DllExport std::array<std::array<eprosima::fastrtps::fixed_string<75>, 5>, 5>& my_array_string();
    /*!
     * @brief This function copies the value in member multi_alias_array_42
     * @param _multi_alias_array_42 New value to be copied in member multi_alias_array_42
     */
    eProsima_user_DllExport void multi_alias_array_42(
            const MA3& _multi_alias_array_42);

    /*!
     * @brief This function moves the value in member multi_alias_array_42
     * @param _multi_alias_array_42 New value to be moved in member multi_alias_array_42
     */
    eProsima_user_DllExport void multi_alias_array_42(
            MA3&& _multi_alias_array_42);

    /*!
     * @brief This function returns a constant reference to member multi_alias_array_42
     * @return Constant reference to member multi_alias_array_42
     */
    eProsima_user_DllExport const MA3& multi_alias_array_42() const;

    /*!
     * @brief This function returns a reference to member multi_alias_array_42
     * @return Reference to member multi_alias_array_42
     */
    eProsima_user_DllExport MA3& multi_alias_array_42();
    /*!
     * @brief This function copies the value in member my_array_arrays
     * @param _my_array_arrays New value to be copied in member my_array_arrays
     */
    eProsima_user_DllExport void my_array_arrays(
            const std::array<MyMiniArray, 5>& _my_array_arrays);

    /*!
     * @brief This function moves the value in member my_array_arrays
     * @param _my_array_arrays New value to be moved in member my_array_arrays
     */
    eProsima_user_DllExport void my_array_arrays(
            std::array<MyMiniArray, 5>&& _my_array_arrays);

    /*!
     * @brief This function returns a constant reference to member my_array_arrays
     * @return Constant reference to member my_array_arrays
     */
    eProsima_user_DllExport const std::array<MyMiniArray, 5>& my_array_arrays() const;

    /*!
     * @brief This function returns a reference to member my_array_arrays
     * @return Reference to member my_array_arrays
     */
    eProsima_user_DllExport std::array<MyMiniArray, 5>& my_array_arrays();
    /*!
     * @brief This function copies the value in member my_sequences_array
     * @param _my_sequences_array New value to be copied in member my_sequences_array
     */
    eProsima_user_DllExport void my_sequences_array(
            const std::array<MySequenceLong, 23>& _my_sequences_array);

    /*!
     * @brief This function moves the value in member my_sequences_array
     * @param _my_sequences_array New value to be moved in member my_sequences_array
     */
    eProsima_user_DllExport void my_sequences_array(
            std::array<MySequenceLong, 23>&& _my_sequences_array);

    /*!
     * @brief This function returns a constant reference to member my_sequences_array
     * @return Constant reference to member my_sequences_array
     */
    eProsima_user_DllExport const std::array<MySequenceLong, 23>& my_sequences_array() const;

    /*!
     * @brief This function returns a reference to member my_sequences_array
     * @return Reference to member my_sequences_array
     */
    eProsima_user_DllExport std::array<MySequenceLong, 23>& my_sequences_array();

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
            const ComplexStruct& data,
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

    uint8_t m_my_octet;
    BasicStruct m_my_basic_struct;
    MyAliasEnum m_my_alias_enum;
    MyEnum m_my_enum;
    std::vector<uint8_t> m_my_sequence_octet;
    std::vector<BasicStruct> m_my_sequence_struct;
    std::array<std::array<std::array<char, 4>, 5>, 500> m_my_array_octet;
    MyOctetArray500 m_my_octet_array_500;
    std::array<BasicStruct, 5> m_my_array_struct;
    std::map<uint8_t, int16_t> m_my_map_octet_short;
    std::map<int32_t, BasicStruct> m_my_map_long_struct;
    std::map<int32_t, std::vector<std::vector<uint8_t>>> m_my_map_long_seq_octet;
    std::map<int32_t, MyOctetArray500> m_my_map_long_octet_array_500;
    std::map<int32_t, std::map<uint8_t, BSAlias5>> m_my_map_long_lol_type;
    eprosima::fastrtps::fixed_string<128> m_my_small_string_8;
    std::wstring m_my_small_string_16;
    eprosima::fastrtps::fixed_string<500> m_my_large_string_8;
    std::wstring m_my_large_string_16;
    std::array<std::array<eprosima::fastrtps::fixed_string<75>, 5>, 5> m_my_array_string;
    MA3 m_multi_alias_array_42;
    std::array<MyMiniArray, 5> m_my_array_arrays;
    std::array<MySequenceLong, 23> m_my_sequences_array;

};
/*!
 * @brief This class represents the union MyUnion defined by the user in the IDL file.
 * @ingroup Test
 */
class MyUnion
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MyUnion();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MyUnion();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MyUnion that will be copied.
     */
    eProsima_user_DllExport MyUnion(
            const MyUnion& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MyUnion that will be copied.
     */
    eProsima_user_DllExport MyUnion(
            MyUnion&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MyUnion that will be copied.
     */
    eProsima_user_DllExport MyUnion& operator =(
            const MyUnion& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MyUnion that will be copied.
     */
    eProsima_user_DllExport MyUnion& operator =(
            MyUnion&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MyUnion object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MyUnion& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MyUnion object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MyUnion& x) const;

    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    eProsima_user_DllExport void _d(
            MyEnum __d);

    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    eProsima_user_DllExport MyEnum _d() const;

    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    eProsima_user_DllExport MyEnum& _d();

    /*!
     * @brief This function copies the value in member basic
     * @param _basic New value to be copied in member basic
     */
    eProsima_user_DllExport void basic(
            const BasicStruct& _basic);

    /*!
     * @brief This function moves the value in member basic
     * @param _basic New value to be moved in member basic
     */
    eProsima_user_DllExport void basic(
            BasicStruct&& _basic);

    /*!
     * @brief This function returns a constant reference to member basic
     * @return Constant reference to member basic
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const BasicStruct& basic() const;

    /*!
     * @brief This function returns a reference to member basic
     * @return Reference to member basic
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport BasicStruct& basic();
    /*!
     * @brief This function copies the value in member complex
     * @param _complex New value to be copied in member complex
     */
    eProsima_user_DllExport void complex(
            const ComplexStruct& _complex);

    /*!
     * @brief This function moves the value in member complex
     * @param _complex New value to be moved in member complex
     */
    eProsima_user_DllExport void complex(
            ComplexStruct&& _complex);

    /*!
     * @brief This function returns a constant reference to member complex
     * @return Constant reference to member complex
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const ComplexStruct& complex() const;

    /*!
     * @brief This function returns a reference to member complex
     * @return Reference to member complex
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport ComplexStruct& complex();

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const MyUnion& data,
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




private:

    MyEnum m__d;

    BasicStruct m_basic;
    ComplexStruct m_complex;
};
/*!
 * @brief This class represents the union MyUnion2 defined by the user in the IDL file.
 * @ingroup Test
 */
class MyUnion2
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MyUnion2();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MyUnion2();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MyUnion2 that will be copied.
     */
    eProsima_user_DllExport MyUnion2(
            const MyUnion2& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MyUnion2 that will be copied.
     */
    eProsima_user_DllExport MyUnion2(
            MyUnion2&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MyUnion2 that will be copied.
     */
    eProsima_user_DllExport MyUnion2& operator =(
            const MyUnion2& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MyUnion2 that will be copied.
     */
    eProsima_user_DllExport MyUnion2& operator =(
            MyUnion2&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MyUnion2 object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MyUnion2& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MyUnion2 object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MyUnion2& x) const;

    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    eProsima_user_DllExport void _d(
            uint8_t __d);

    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    eProsima_user_DllExport uint8_t _d() const;

    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    eProsima_user_DllExport uint8_t& _d();

    /*!
     * @brief This function sets a value in member uno
     * @param _uno New value for member uno
     */
    eProsima_user_DllExport void uno(
            int32_t _uno);

    /*!
     * @brief This function returns the value of member uno
     * @return Value of member uno
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t uno() const;

    /*!
     * @brief This function returns a reference to member uno
     * @return Reference to member uno
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t& uno();

    /*!
     * @brief This function copies the value in member imString
     * @param _imString New value to be copied in member imString
     */
    eProsima_user_DllExport void imString(
            const std::string& _imString);

    /*!
     * @brief This function moves the value in member imString
     * @param _imString New value to be moved in member imString
     */
    eProsima_user_DllExport void imString(
            std::string&& _imString);

    /*!
     * @brief This function returns a constant reference to member imString
     * @return Constant reference to member imString
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const std::string& imString() const;

    /*!
     * @brief This function returns a reference to member imString
     * @return Reference to member imString
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport std::string& imString();
    /*!
     * @brief This function sets a value in member tres
     * @param _tres New value for member tres
     */
    eProsima_user_DllExport void tres(
            int32_t _tres);

    /*!
     * @brief This function returns the value of member tres
     * @return Value of member tres
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t tres() const;

    /*!
     * @brief This function returns a reference to member tres
     * @return Reference to member tres
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t& tres();


    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const MyUnion2& data,
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




private:

    uint8_t m__d;

    int32_t m_uno;
    std::string m_imString;
    int32_t m_tres;
};
/*!
 * @brief This class represents the structure CompleteStruct defined by the user in the IDL file.
 * @ingroup Test
 */
class CompleteStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport CompleteStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~CompleteStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object CompleteStruct that will be copied.
     */
    eProsima_user_DllExport CompleteStruct(
            const CompleteStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object CompleteStruct that will be copied.
     */
    eProsima_user_DllExport CompleteStruct(
            CompleteStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object CompleteStruct that will be copied.
     */
    eProsima_user_DllExport CompleteStruct& operator =(
            const CompleteStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object CompleteStruct that will be copied.
     */
    eProsima_user_DllExport CompleteStruct& operator =(
            CompleteStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x CompleteStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const CompleteStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x CompleteStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const CompleteStruct& x) const;

    /*!
     * @brief This function copies the value in member my_union
     * @param _my_union New value to be copied in member my_union
     */
    eProsima_user_DllExport void my_union(
            const MyUnion& _my_union);

    /*!
     * @brief This function moves the value in member my_union
     * @param _my_union New value to be moved in member my_union
     */
    eProsima_user_DllExport void my_union(
            MyUnion&& _my_union);

    /*!
     * @brief This function returns a constant reference to member my_union
     * @return Constant reference to member my_union
     */
    eProsima_user_DllExport const MyUnion& my_union() const;

    /*!
     * @brief This function returns a reference to member my_union
     * @return Reference to member my_union
     */
    eProsima_user_DllExport MyUnion& my_union();
    /*!
     * @brief This function copies the value in member my_union_2
     * @param _my_union_2 New value to be copied in member my_union_2
     */
    eProsima_user_DllExport void my_union_2(
            const MyUnion2& _my_union_2);

    /*!
     * @brief This function moves the value in member my_union_2
     * @param _my_union_2 New value to be moved in member my_union_2
     */
    eProsima_user_DllExport void my_union_2(
            MyUnion2&& _my_union_2);

    /*!
     * @brief This function returns a constant reference to member my_union_2
     * @return Constant reference to member my_union_2
     */
    eProsima_user_DllExport const MyUnion2& my_union_2() const;

    /*!
     * @brief This function returns a reference to member my_union_2
     * @return Reference to member my_union_2
     */
    eProsima_user_DllExport MyUnion2& my_union_2();

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
            const CompleteStruct& data,
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

    MyUnion m_my_union;
    MyUnion2 m_my_union_2;

};
/*!
 * @brief This class represents the structure KeyedStruct defined by the user in the IDL file.
 * @ingroup Test
 */
class KeyedStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport KeyedStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~KeyedStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object KeyedStruct that will be copied.
     */
    eProsima_user_DllExport KeyedStruct(
            const KeyedStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object KeyedStruct that will be copied.
     */
    eProsima_user_DllExport KeyedStruct(
            KeyedStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object KeyedStruct that will be copied.
     */
    eProsima_user_DllExport KeyedStruct& operator =(
            const KeyedStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object KeyedStruct that will be copied.
     */
    eProsima_user_DllExport KeyedStruct& operator =(
            KeyedStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x KeyedStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const KeyedStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x KeyedStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const KeyedStruct& x) const;

    /*!
     * @brief This function sets a value in member key
     * @param _key New value for member key
     */
    eProsima_user_DllExport void key(
            uint8_t _key);

    /*!
     * @brief This function returns the value of member key
     * @return Value of member key
     */
    eProsima_user_DllExport uint8_t key() const;

    /*!
     * @brief This function returns a reference to member key
     * @return Reference to member key
     */
    eProsima_user_DllExport uint8_t& key();

    /*!
     * @brief This function copies the value in member basic
     * @param _basic New value to be copied in member basic
     */
    eProsima_user_DllExport void basic(
            const BasicStruct& _basic);

    /*!
     * @brief This function moves the value in member basic
     * @param _basic New value to be moved in member basic
     */
    eProsima_user_DllExport void basic(
            BasicStruct&& _basic);

    /*!
     * @brief This function returns a constant reference to member basic
     * @return Constant reference to member basic
     */
    eProsima_user_DllExport const BasicStruct& basic() const;

    /*!
     * @brief This function returns a reference to member basic
     * @return Reference to member basic
     */
    eProsima_user_DllExport BasicStruct& basic();

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
            const KeyedStruct& data,
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

    uint8_t m_key;
    BasicStruct m_basic;

};

#endif // _FAST_DDS_GENERATED_TEST_H_

