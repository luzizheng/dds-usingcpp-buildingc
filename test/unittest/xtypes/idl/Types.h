/*!
 * @file Types.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_TYPES_H_
#define _FAST_DDS_GENERATED_TYPES_H_


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
#if defined(TYPES_SOURCE)
#define TYPES_DllAPI __declspec( dllexport )
#else
#define TYPES_DllAPI __declspec( dllimport )
#endif // TYPES_SOURCE
#else
#define TYPES_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define TYPES_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the enumeration MyEnum defined by the user in the IDL file.
 * @ingroup Types
 */
enum MyEnum : uint32_t
{
    A,
    B,
    C
};
/*!
 * @brief This class represents the enumeration MyBadEnum defined by the user in the IDL file.
 * @ingroup Types
 */
enum MyBadEnum : uint32_t
{
    A1,
    B1,
    C1
};
/*!
 * @brief This class represents the structure MyEnumStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class MyEnumStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MyEnumStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MyEnumStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MyEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyEnumStruct(
            const MyEnumStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MyEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyEnumStruct(
            MyEnumStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MyEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyEnumStruct& operator =(
            const MyEnumStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MyEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyEnumStruct& operator =(
            MyEnumStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MyEnumStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MyEnumStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MyEnumStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MyEnumStruct& x) const;

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
            const MyEnumStruct& data,
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

    MyEnum m_my_enum;

};
/*!
 * @brief This class represents the structure MyBadEnumStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class MyBadEnumStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MyBadEnumStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MyBadEnumStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MyBadEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyBadEnumStruct(
            const MyBadEnumStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MyBadEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyBadEnumStruct(
            MyBadEnumStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MyBadEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyBadEnumStruct& operator =(
            const MyBadEnumStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MyBadEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyBadEnumStruct& operator =(
            MyBadEnumStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MyBadEnumStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MyBadEnumStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MyBadEnumStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MyBadEnumStruct& x) const;

    /*!
     * @brief This function sets a value in member my_enum
     * @param _my_enum New value for member my_enum
     */
    eProsima_user_DllExport void my_enum(
            MyBadEnum _my_enum);

    /*!
     * @brief This function returns the value of member my_enum
     * @return Value of member my_enum
     */
    eProsima_user_DllExport MyBadEnum my_enum() const;

    /*!
     * @brief This function returns a reference to member my_enum
     * @return Reference to member my_enum
     */
    eProsima_user_DllExport MyBadEnum& my_enum();


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
            const MyBadEnumStruct& data,
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

    MyBadEnum m_my_enum;

};
typedef MyEnum MyAliasEnum;
/*!
 * @brief This class represents the structure MyAliasEnumStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class MyAliasEnumStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MyAliasEnumStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MyAliasEnumStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MyAliasEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyAliasEnumStruct(
            const MyAliasEnumStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MyAliasEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyAliasEnumStruct(
            MyAliasEnumStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MyAliasEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyAliasEnumStruct& operator =(
            const MyAliasEnumStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MyAliasEnumStruct that will be copied.
     */
    eProsima_user_DllExport MyAliasEnumStruct& operator =(
            MyAliasEnumStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MyAliasEnumStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MyAliasEnumStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MyAliasEnumStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MyAliasEnumStruct& x) const;

    /*!
     * @brief This function sets a value in member my_enum
     * @param _my_enum New value for member my_enum
     */
    eProsima_user_DllExport void my_enum(
            MyAliasEnum _my_enum);

    /*!
     * @brief This function returns the value of member my_enum
     * @return Value of member my_enum
     */
    eProsima_user_DllExport MyAliasEnum my_enum() const;

    /*!
     * @brief This function returns a reference to member my_enum
     * @return Reference to member my_enum
     */
    eProsima_user_DllExport MyAliasEnum& my_enum();


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
            const MyAliasEnumStruct& data,
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

    MyAliasEnum m_my_enum;

};
/*!
 * @brief This class represents the structure BasicStruct defined by the user in the IDL file.
 * @ingroup Types
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
    int32_t m_my_int32;
    std::string m_my_string;

};
/*!
 * @brief This class represents the structure BasicNamesStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class BasicNamesStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport BasicNamesStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~BasicNamesStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object BasicNamesStruct that will be copied.
     */
    eProsima_user_DllExport BasicNamesStruct(
            const BasicNamesStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object BasicNamesStruct that will be copied.
     */
    eProsima_user_DllExport BasicNamesStruct(
            BasicNamesStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object BasicNamesStruct that will be copied.
     */
    eProsima_user_DllExport BasicNamesStruct& operator =(
            const BasicNamesStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object BasicNamesStruct that will be copied.
     */
    eProsima_user_DllExport BasicNamesStruct& operator =(
            BasicNamesStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x BasicNamesStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const BasicNamesStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x BasicNamesStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const BasicNamesStruct& x) const;

    /*!
     * @brief This function sets a value in member my_bool_name
     * @param _my_bool_name New value for member my_bool_name
     */
    eProsima_user_DllExport void my_bool_name(
            bool _my_bool_name);

    /*!
     * @brief This function returns the value of member my_bool_name
     * @return Value of member my_bool_name
     */
    eProsima_user_DllExport bool my_bool_name() const;

    /*!
     * @brief This function returns a reference to member my_bool_name
     * @return Reference to member my_bool_name
     */
    eProsima_user_DllExport bool& my_bool_name();

    /*!
     * @brief This function sets a value in member my_int32_name
     * @param _my_int32_name New value for member my_int32_name
     */
    eProsima_user_DllExport void my_int32_name(
            int32_t _my_int32_name);

    /*!
     * @brief This function returns the value of member my_int32_name
     * @return Value of member my_int32_name
     */
    eProsima_user_DllExport int32_t my_int32_name() const;

    /*!
     * @brief This function returns a reference to member my_int32_name
     * @return Reference to member my_int32_name
     */
    eProsima_user_DllExport int32_t& my_int32_name();

    /*!
     * @brief This function copies the value in member my_string_name
     * @param _my_string_name New value to be copied in member my_string_name
     */
    eProsima_user_DllExport void my_string_name(
            const std::string& _my_string_name);

    /*!
     * @brief This function moves the value in member my_string_name
     * @param _my_string_name New value to be moved in member my_string_name
     */
    eProsima_user_DllExport void my_string_name(
            std::string&& _my_string_name);

    /*!
     * @brief This function returns a constant reference to member my_string_name
     * @return Constant reference to member my_string_name
     */
    eProsima_user_DllExport const std::string& my_string_name() const;

    /*!
     * @brief This function returns a reference to member my_string_name
     * @return Reference to member my_string_name
     */
    eProsima_user_DllExport std::string& my_string_name();

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
            const BasicNamesStruct& data,
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

    bool m_my_bool_name;
    int32_t m_my_int32_name;
    std::string m_my_string_name;

};
/*!
 * @brief This class represents the structure BasicBadStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class BasicBadStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport BasicBadStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~BasicBadStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object BasicBadStruct that will be copied.
     */
    eProsima_user_DllExport BasicBadStruct(
            const BasicBadStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object BasicBadStruct that will be copied.
     */
    eProsima_user_DllExport BasicBadStruct(
            BasicBadStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object BasicBadStruct that will be copied.
     */
    eProsima_user_DllExport BasicBadStruct& operator =(
            const BasicBadStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object BasicBadStruct that will be copied.
     */
    eProsima_user_DllExport BasicBadStruct& operator =(
            BasicBadStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x BasicBadStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const BasicBadStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x BasicBadStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const BasicBadStruct& x) const;

    /*!
     * @brief This function sets a value in member my_bool
     * @param _my_bool New value for member my_bool
     */
    eProsima_user_DllExport void my_bool(
            uint8_t _my_bool);

    /*!
     * @brief This function returns the value of member my_bool
     * @return Value of member my_bool
     */
    eProsima_user_DllExport uint8_t my_bool() const;

    /*!
     * @brief This function returns a reference to member my_bool
     * @return Reference to member my_bool
     */
    eProsima_user_DllExport uint8_t& my_bool();

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
            const BasicBadStruct& data,
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

    uint8_t m_my_bool;
    int32_t m_my_int32;
    std::string m_my_string;

};
/*!
 * @brief This class represents the structure BasicWideStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class BasicWideStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport BasicWideStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~BasicWideStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object BasicWideStruct that will be copied.
     */
    eProsima_user_DllExport BasicWideStruct(
            const BasicWideStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object BasicWideStruct that will be copied.
     */
    eProsima_user_DllExport BasicWideStruct(
            BasicWideStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object BasicWideStruct that will be copied.
     */
    eProsima_user_DllExport BasicWideStruct& operator =(
            const BasicWideStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object BasicWideStruct that will be copied.
     */
    eProsima_user_DllExport BasicWideStruct& operator =(
            BasicWideStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x BasicWideStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const BasicWideStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x BasicWideStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const BasicWideStruct& x) const;

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
     * @brief This function sets a value in member new_int32
     * @param _new_int32 New value for member new_int32
     */
    eProsima_user_DllExport void new_int32(
            int32_t _new_int32);

    /*!
     * @brief This function returns the value of member new_int32
     * @return Value of member new_int32
     */
    eProsima_user_DllExport int32_t new_int32() const;

    /*!
     * @brief This function returns a reference to member new_int32
     * @return Reference to member new_int32
     */
    eProsima_user_DllExport int32_t& new_int32();

    /*!
     * @brief This function copies the value in member new_string
     * @param _new_string New value to be copied in member new_string
     */
    eProsima_user_DllExport void new_string(
            const std::string& _new_string);

    /*!
     * @brief This function moves the value in member new_string
     * @param _new_string New value to be moved in member new_string
     */
    eProsima_user_DllExport void new_string(
            std::string&& _new_string);

    /*!
     * @brief This function returns a constant reference to member new_string
     * @return Constant reference to member new_string
     */
    eProsima_user_DllExport const std::string& new_string() const;

    /*!
     * @brief This function returns a reference to member new_string
     * @return Reference to member new_string
     */
    eProsima_user_DllExport std::string& new_string();

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
            const BasicWideStruct& data,
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
    int32_t m_my_int32;
    std::string m_my_string;
    int32_t m_new_int32;
    std::string m_new_string;

};
/*!
 * @brief This class represents the structure BadBasicWideStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class BadBasicWideStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport BadBasicWideStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~BadBasicWideStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object BadBasicWideStruct that will be copied.
     */
    eProsima_user_DllExport BadBasicWideStruct(
            const BadBasicWideStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object BadBasicWideStruct that will be copied.
     */
    eProsima_user_DllExport BadBasicWideStruct(
            BadBasicWideStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object BadBasicWideStruct that will be copied.
     */
    eProsima_user_DllExport BadBasicWideStruct& operator =(
            const BadBasicWideStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object BadBasicWideStruct that will be copied.
     */
    eProsima_user_DllExport BadBasicWideStruct& operator =(
            BadBasicWideStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x BadBasicWideStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const BadBasicWideStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x BadBasicWideStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const BadBasicWideStruct& x) const;

    /*!
     * @brief This function sets a value in member new_int32
     * @param _new_int32 New value for member new_int32
     */
    eProsima_user_DllExport void new_int32(
            int32_t _new_int32);

    /*!
     * @brief This function returns the value of member new_int32
     * @return Value of member new_int32
     */
    eProsima_user_DllExport int32_t new_int32() const;

    /*!
     * @brief This function returns a reference to member new_int32
     * @return Reference to member new_int32
     */
    eProsima_user_DllExport int32_t& new_int32();

    /*!
     * @brief This function copies the value in member new_string
     * @param _new_string New value to be copied in member new_string
     */
    eProsima_user_DllExport void new_string(
            const std::string& _new_string);

    /*!
     * @brief This function moves the value in member new_string
     * @param _new_string New value to be moved in member new_string
     */
    eProsima_user_DllExport void new_string(
            std::string&& _new_string);

    /*!
     * @brief This function returns a constant reference to member new_string
     * @return Constant reference to member new_string
     */
    eProsima_user_DllExport const std::string& new_string() const;

    /*!
     * @brief This function returns a reference to member new_string
     * @return Reference to member new_string
     */
    eProsima_user_DllExport std::string& new_string();
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
            const BadBasicWideStruct& data,
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

    int32_t m_new_int32;
    std::string m_new_string;
    bool m_my_bool;
    int32_t m_my_int32;
    std::string m_my_string;

};
/*!
 * @brief This class represents the structure StringStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class StringStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport StringStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~StringStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object StringStruct that will be copied.
     */
    eProsima_user_DllExport StringStruct(
            const StringStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object StringStruct that will be copied.
     */
    eProsima_user_DllExport StringStruct(
            StringStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object StringStruct that will be copied.
     */
    eProsima_user_DllExport StringStruct& operator =(
            const StringStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object StringStruct that will be copied.
     */
    eProsima_user_DllExport StringStruct& operator =(
            StringStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x StringStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const StringStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x StringStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const StringStruct& x) const;

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
            const StringStruct& data,
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

    std::string m_my_string;

};
/*!
 * @brief This class represents the structure LargeStringStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class LargeStringStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport LargeStringStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~LargeStringStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object LargeStringStruct that will be copied.
     */
    eProsima_user_DllExport LargeStringStruct(
            const LargeStringStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object LargeStringStruct that will be copied.
     */
    eProsima_user_DllExport LargeStringStruct(
            LargeStringStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object LargeStringStruct that will be copied.
     */
    eProsima_user_DllExport LargeStringStruct& operator =(
            const LargeStringStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object LargeStringStruct that will be copied.
     */
    eProsima_user_DllExport LargeStringStruct& operator =(
            LargeStringStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x LargeStringStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const LargeStringStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x LargeStringStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const LargeStringStruct& x) const;

    /*!
     * @brief This function copies the value in member my_large_string
     * @param _my_large_string New value to be copied in member my_large_string
     */
    eProsima_user_DllExport void my_large_string(
            const eprosima::fastrtps::fixed_string<41925>& _my_large_string);

    /*!
     * @brief This function moves the value in member my_large_string
     * @param _my_large_string New value to be moved in member my_large_string
     */
    eProsima_user_DllExport void my_large_string(
            eprosima::fastrtps::fixed_string<41925>&& _my_large_string);

    /*!
     * @brief This function returns a constant reference to member my_large_string
     * @return Constant reference to member my_large_string
     */
    eProsima_user_DllExport const eprosima::fastrtps::fixed_string<41925>& my_large_string() const;

    /*!
     * @brief This function returns a reference to member my_large_string
     * @return Reference to member my_large_string
     */
    eProsima_user_DllExport eprosima::fastrtps::fixed_string<41925>& my_large_string();

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
            const LargeStringStruct& data,
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

    eprosima::fastrtps::fixed_string<41925> m_my_large_string;

};
/*!
 * @brief This class represents the structure WStringStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class WStringStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport WStringStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~WStringStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object WStringStruct that will be copied.
     */
    eProsima_user_DllExport WStringStruct(
            const WStringStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object WStringStruct that will be copied.
     */
    eProsima_user_DllExport WStringStruct(
            WStringStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object WStringStruct that will be copied.
     */
    eProsima_user_DllExport WStringStruct& operator =(
            const WStringStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object WStringStruct that will be copied.
     */
    eProsima_user_DllExport WStringStruct& operator =(
            WStringStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x WStringStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const WStringStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x WStringStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const WStringStruct& x) const;

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
            const WStringStruct& data,
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

    std::wstring m_my_wstring;

};
/*!
 * @brief This class represents the structure LargeWStringStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class LargeWStringStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport LargeWStringStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~LargeWStringStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object LargeWStringStruct that will be copied.
     */
    eProsima_user_DllExport LargeWStringStruct(
            const LargeWStringStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object LargeWStringStruct that will be copied.
     */
    eProsima_user_DllExport LargeWStringStruct(
            LargeWStringStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object LargeWStringStruct that will be copied.
     */
    eProsima_user_DllExport LargeWStringStruct& operator =(
            const LargeWStringStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object LargeWStringStruct that will be copied.
     */
    eProsima_user_DllExport LargeWStringStruct& operator =(
            LargeWStringStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x LargeWStringStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const LargeWStringStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x LargeWStringStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const LargeWStringStruct& x) const;

    /*!
     * @brief This function copies the value in member my_large_wstring
     * @param _my_large_wstring New value to be copied in member my_large_wstring
     */
    eProsima_user_DllExport void my_large_wstring(
            const std::wstring& _my_large_wstring);

    /*!
     * @brief This function moves the value in member my_large_wstring
     * @param _my_large_wstring New value to be moved in member my_large_wstring
     */
    eProsima_user_DllExport void my_large_wstring(
            std::wstring&& _my_large_wstring);

    /*!
     * @brief This function returns a constant reference to member my_large_wstring
     * @return Constant reference to member my_large_wstring
     */
    eProsima_user_DllExport const std::wstring& my_large_wstring() const;

    /*!
     * @brief This function returns a reference to member my_large_wstring
     * @return Reference to member my_large_wstring
     */
    eProsima_user_DllExport std::wstring& my_large_wstring();

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
            const LargeWStringStruct& data,
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

    std::wstring m_my_large_wstring;

};
/*!
 * @brief This class represents the structure ArrayStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class ArrayStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ArrayStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ArrayStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayStruct(
            const ArrayStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayStruct(
            ArrayStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayStruct& operator =(
            const ArrayStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayStruct& operator =(
            ArrayStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ArrayStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ArrayStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ArrayStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ArrayStruct& x) const;

    /*!
     * @brief This function copies the value in member my_array
     * @param _my_array New value to be copied in member my_array
     */
    eProsima_user_DllExport void my_array(
            const std::array<int32_t, 2>& _my_array);

    /*!
     * @brief This function moves the value in member my_array
     * @param _my_array New value to be moved in member my_array
     */
    eProsima_user_DllExport void my_array(
            std::array<int32_t, 2>&& _my_array);

    /*!
     * @brief This function returns a constant reference to member my_array
     * @return Constant reference to member my_array
     */
    eProsima_user_DllExport const std::array<int32_t, 2>& my_array() const;

    /*!
     * @brief This function returns a reference to member my_array
     * @return Reference to member my_array
     */
    eProsima_user_DllExport std::array<int32_t, 2>& my_array();

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
            const ArrayStruct& data,
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

    std::array<int32_t, 2> m_my_array;

};
/*!
 * @brief This class represents the structure ArrayStructEqual defined by the user in the IDL file.
 * @ingroup Types
 */
class ArrayStructEqual
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ArrayStructEqual();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ArrayStructEqual();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ArrayStructEqual that will be copied.
     */
    eProsima_user_DllExport ArrayStructEqual(
            const ArrayStructEqual& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ArrayStructEqual that will be copied.
     */
    eProsima_user_DllExport ArrayStructEqual(
            ArrayStructEqual&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ArrayStructEqual that will be copied.
     */
    eProsima_user_DllExport ArrayStructEqual& operator =(
            const ArrayStructEqual& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ArrayStructEqual that will be copied.
     */
    eProsima_user_DllExport ArrayStructEqual& operator =(
            ArrayStructEqual&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ArrayStructEqual object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ArrayStructEqual& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ArrayStructEqual object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ArrayStructEqual& x) const;

    /*!
     * @brief This function copies the value in member my_array_equal
     * @param _my_array_equal New value to be copied in member my_array_equal
     */
    eProsima_user_DllExport void my_array_equal(
            const std::array<int32_t, 2>& _my_array_equal);

    /*!
     * @brief This function moves the value in member my_array_equal
     * @param _my_array_equal New value to be moved in member my_array_equal
     */
    eProsima_user_DllExport void my_array_equal(
            std::array<int32_t, 2>&& _my_array_equal);

    /*!
     * @brief This function returns a constant reference to member my_array_equal
     * @return Constant reference to member my_array_equal
     */
    eProsima_user_DllExport const std::array<int32_t, 2>& my_array_equal() const;

    /*!
     * @brief This function returns a reference to member my_array_equal
     * @return Reference to member my_array_equal
     */
    eProsima_user_DllExport std::array<int32_t, 2>& my_array_equal();

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
            const ArrayStructEqual& data,
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

    std::array<int32_t, 2> m_my_array_equal;

};
/*!
 * @brief This class represents the structure ArrayBadStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class ArrayBadStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ArrayBadStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ArrayBadStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ArrayBadStruct that will be copied.
     */
    eProsima_user_DllExport ArrayBadStruct(
            const ArrayBadStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ArrayBadStruct that will be copied.
     */
    eProsima_user_DllExport ArrayBadStruct(
            ArrayBadStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ArrayBadStruct that will be copied.
     */
    eProsima_user_DllExport ArrayBadStruct& operator =(
            const ArrayBadStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ArrayBadStruct that will be copied.
     */
    eProsima_user_DllExport ArrayBadStruct& operator =(
            ArrayBadStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ArrayBadStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ArrayBadStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ArrayBadStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ArrayBadStruct& x) const;

    /*!
     * @brief This function copies the value in member my_array
     * @param _my_array New value to be copied in member my_array
     */
    eProsima_user_DllExport void my_array(
            const std::array<uint8_t, 2>& _my_array);

    /*!
     * @brief This function moves the value in member my_array
     * @param _my_array New value to be moved in member my_array
     */
    eProsima_user_DllExport void my_array(
            std::array<uint8_t, 2>&& _my_array);

    /*!
     * @brief This function returns a constant reference to member my_array
     * @return Constant reference to member my_array
     */
    eProsima_user_DllExport const std::array<uint8_t, 2>& my_array() const;

    /*!
     * @brief This function returns a reference to member my_array
     * @return Reference to member my_array
     */
    eProsima_user_DllExport std::array<uint8_t, 2>& my_array();

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
            const ArrayBadStruct& data,
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

    std::array<uint8_t, 2> m_my_array;

};
/*!
 * @brief This class represents the structure ArrayDimensionsStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class ArrayDimensionsStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ArrayDimensionsStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ArrayDimensionsStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ArrayDimensionsStruct that will be copied.
     */
    eProsima_user_DllExport ArrayDimensionsStruct(
            const ArrayDimensionsStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ArrayDimensionsStruct that will be copied.
     */
    eProsima_user_DllExport ArrayDimensionsStruct(
            ArrayDimensionsStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ArrayDimensionsStruct that will be copied.
     */
    eProsima_user_DllExport ArrayDimensionsStruct& operator =(
            const ArrayDimensionsStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ArrayDimensionsStruct that will be copied.
     */
    eProsima_user_DllExport ArrayDimensionsStruct& operator =(
            ArrayDimensionsStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ArrayDimensionsStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ArrayDimensionsStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ArrayDimensionsStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ArrayDimensionsStruct& x) const;

    /*!
     * @brief This function copies the value in member my_array
     * @param _my_array New value to be copied in member my_array
     */
    eProsima_user_DllExport void my_array(
            const std::array<std::array<int32_t, 2>, 2>& _my_array);

    /*!
     * @brief This function moves the value in member my_array
     * @param _my_array New value to be moved in member my_array
     */
    eProsima_user_DllExport void my_array(
            std::array<std::array<int32_t, 2>, 2>&& _my_array);

    /*!
     * @brief This function returns a constant reference to member my_array
     * @return Constant reference to member my_array
     */
    eProsima_user_DllExport const std::array<std::array<int32_t, 2>, 2>& my_array() const;

    /*!
     * @brief This function returns a reference to member my_array
     * @return Reference to member my_array
     */
    eProsima_user_DllExport std::array<std::array<int32_t, 2>, 2>& my_array();

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
            const ArrayDimensionsStruct& data,
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

    std::array<std::array<int32_t, 2>, 2> m_my_array;

};
/*!
 * @brief This class represents the structure ArraySizeStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class ArraySizeStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ArraySizeStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ArraySizeStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ArraySizeStruct that will be copied.
     */
    eProsima_user_DllExport ArraySizeStruct(
            const ArraySizeStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ArraySizeStruct that will be copied.
     */
    eProsima_user_DllExport ArraySizeStruct(
            ArraySizeStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ArraySizeStruct that will be copied.
     */
    eProsima_user_DllExport ArraySizeStruct& operator =(
            const ArraySizeStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ArraySizeStruct that will be copied.
     */
    eProsima_user_DllExport ArraySizeStruct& operator =(
            ArraySizeStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ArraySizeStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ArraySizeStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ArraySizeStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ArraySizeStruct& x) const;

    /*!
     * @brief This function copies the value in member my_array
     * @param _my_array New value to be copied in member my_array
     */
    eProsima_user_DllExport void my_array(
            const std::array<int32_t, 5>& _my_array);

    /*!
     * @brief This function moves the value in member my_array
     * @param _my_array New value to be moved in member my_array
     */
    eProsima_user_DllExport void my_array(
            std::array<int32_t, 5>&& _my_array);

    /*!
     * @brief This function returns a constant reference to member my_array
     * @return Constant reference to member my_array
     */
    eProsima_user_DllExport const std::array<int32_t, 5>& my_array() const;

    /*!
     * @brief This function returns a reference to member my_array
     * @return Reference to member my_array
     */
    eProsima_user_DllExport std::array<int32_t, 5>& my_array();

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
            const ArraySizeStruct& data,
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

    std::array<int32_t, 5> m_my_array;

};
/*!
 * @brief This class represents the structure SequenceStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SequenceStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SequenceStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SequenceStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceStruct(
            const SequenceStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceStruct(
            SequenceStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceStruct& operator =(
            const SequenceStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceStruct& operator =(
            SequenceStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SequenceStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SequenceStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SequenceStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SequenceStruct& x) const;

    /*!
     * @brief This function copies the value in member my_sequence
     * @param _my_sequence New value to be copied in member my_sequence
     */
    eProsima_user_DllExport void my_sequence(
            const std::vector<int32_t>& _my_sequence);

    /*!
     * @brief This function moves the value in member my_sequence
     * @param _my_sequence New value to be moved in member my_sequence
     */
    eProsima_user_DllExport void my_sequence(
            std::vector<int32_t>&& _my_sequence);

    /*!
     * @brief This function returns a constant reference to member my_sequence
     * @return Constant reference to member my_sequence
     */
    eProsima_user_DllExport const std::vector<int32_t>& my_sequence() const;

    /*!
     * @brief This function returns a reference to member my_sequence
     * @return Reference to member my_sequence
     */
    eProsima_user_DllExport std::vector<int32_t>& my_sequence();

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
            const SequenceStruct& data,
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

    std::vector<int32_t> m_my_sequence;

};
/*!
 * @brief This class represents the structure SequenceStructEqual defined by the user in the IDL file.
 * @ingroup Types
 */
class SequenceStructEqual
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SequenceStructEqual();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SequenceStructEqual();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SequenceStructEqual that will be copied.
     */
    eProsima_user_DllExport SequenceStructEqual(
            const SequenceStructEqual& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SequenceStructEqual that will be copied.
     */
    eProsima_user_DllExport SequenceStructEqual(
            SequenceStructEqual&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SequenceStructEqual that will be copied.
     */
    eProsima_user_DllExport SequenceStructEqual& operator =(
            const SequenceStructEqual& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SequenceStructEqual that will be copied.
     */
    eProsima_user_DllExport SequenceStructEqual& operator =(
            SequenceStructEqual&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SequenceStructEqual object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SequenceStructEqual& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SequenceStructEqual object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SequenceStructEqual& x) const;

    /*!
     * @brief This function copies the value in member my_sequence_equal
     * @param _my_sequence_equal New value to be copied in member my_sequence_equal
     */
    eProsima_user_DllExport void my_sequence_equal(
            const std::vector<int32_t>& _my_sequence_equal);

    /*!
     * @brief This function moves the value in member my_sequence_equal
     * @param _my_sequence_equal New value to be moved in member my_sequence_equal
     */
    eProsima_user_DllExport void my_sequence_equal(
            std::vector<int32_t>&& _my_sequence_equal);

    /*!
     * @brief This function returns a constant reference to member my_sequence_equal
     * @return Constant reference to member my_sequence_equal
     */
    eProsima_user_DllExport const std::vector<int32_t>& my_sequence_equal() const;

    /*!
     * @brief This function returns a reference to member my_sequence_equal
     * @return Reference to member my_sequence_equal
     */
    eProsima_user_DllExport std::vector<int32_t>& my_sequence_equal();

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
            const SequenceStructEqual& data,
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

    std::vector<int32_t> m_my_sequence_equal;

};
/*!
 * @brief This class represents the structure SequenceBadStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SequenceBadStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SequenceBadStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SequenceBadStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SequenceBadStruct that will be copied.
     */
    eProsima_user_DllExport SequenceBadStruct(
            const SequenceBadStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SequenceBadStruct that will be copied.
     */
    eProsima_user_DllExport SequenceBadStruct(
            SequenceBadStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SequenceBadStruct that will be copied.
     */
    eProsima_user_DllExport SequenceBadStruct& operator =(
            const SequenceBadStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SequenceBadStruct that will be copied.
     */
    eProsima_user_DllExport SequenceBadStruct& operator =(
            SequenceBadStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SequenceBadStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SequenceBadStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SequenceBadStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SequenceBadStruct& x) const;

    /*!
     * @brief This function copies the value in member my_sequence
     * @param _my_sequence New value to be copied in member my_sequence
     */
    eProsima_user_DllExport void my_sequence(
            const std::vector<uint8_t>& _my_sequence);

    /*!
     * @brief This function moves the value in member my_sequence
     * @param _my_sequence New value to be moved in member my_sequence
     */
    eProsima_user_DllExport void my_sequence(
            std::vector<uint8_t>&& _my_sequence);

    /*!
     * @brief This function returns a constant reference to member my_sequence
     * @return Constant reference to member my_sequence
     */
    eProsima_user_DllExport const std::vector<uint8_t>& my_sequence() const;

    /*!
     * @brief This function returns a reference to member my_sequence
     * @return Reference to member my_sequence
     */
    eProsima_user_DllExport std::vector<uint8_t>& my_sequence();

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
            const SequenceBadStruct& data,
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

    std::vector<uint8_t> m_my_sequence;

};
/*!
 * @brief This class represents the structure SequenceBoundsStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SequenceBoundsStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SequenceBoundsStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SequenceBoundsStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SequenceBoundsStruct that will be copied.
     */
    eProsima_user_DllExport SequenceBoundsStruct(
            const SequenceBoundsStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SequenceBoundsStruct that will be copied.
     */
    eProsima_user_DllExport SequenceBoundsStruct(
            SequenceBoundsStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SequenceBoundsStruct that will be copied.
     */
    eProsima_user_DllExport SequenceBoundsStruct& operator =(
            const SequenceBoundsStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SequenceBoundsStruct that will be copied.
     */
    eProsima_user_DllExport SequenceBoundsStruct& operator =(
            SequenceBoundsStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SequenceBoundsStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SequenceBoundsStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SequenceBoundsStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SequenceBoundsStruct& x) const;

    /*!
     * @brief This function copies the value in member my_sequence
     * @param _my_sequence New value to be copied in member my_sequence
     */
    eProsima_user_DllExport void my_sequence(
            const std::vector<int32_t>& _my_sequence);

    /*!
     * @brief This function moves the value in member my_sequence
     * @param _my_sequence New value to be moved in member my_sequence
     */
    eProsima_user_DllExport void my_sequence(
            std::vector<int32_t>&& _my_sequence);

    /*!
     * @brief This function returns a constant reference to member my_sequence
     * @return Constant reference to member my_sequence
     */
    eProsima_user_DllExport const std::vector<int32_t>& my_sequence() const;

    /*!
     * @brief This function returns a reference to member my_sequence
     * @return Reference to member my_sequence
     */
    eProsima_user_DllExport std::vector<int32_t>& my_sequence();

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
            const SequenceBoundsStruct& data,
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

    std::vector<int32_t> m_my_sequence;

};
/*!
 * @brief This class represents the structure SequenceSequenceStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SequenceSequenceStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SequenceSequenceStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SequenceSequenceStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SequenceSequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceSequenceStruct(
            const SequenceSequenceStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SequenceSequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceSequenceStruct(
            SequenceSequenceStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SequenceSequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceSequenceStruct& operator =(
            const SequenceSequenceStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SequenceSequenceStruct that will be copied.
     */
    eProsima_user_DllExport SequenceSequenceStruct& operator =(
            SequenceSequenceStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SequenceSequenceStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SequenceSequenceStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SequenceSequenceStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SequenceSequenceStruct& x) const;

    /*!
     * @brief This function copies the value in member my_sequence_sequence
     * @param _my_sequence_sequence New value to be copied in member my_sequence_sequence
     */
    eProsima_user_DllExport void my_sequence_sequence(
            const std::vector<std::vector<int32_t>>& _my_sequence_sequence);

    /*!
     * @brief This function moves the value in member my_sequence_sequence
     * @param _my_sequence_sequence New value to be moved in member my_sequence_sequence
     */
    eProsima_user_DllExport void my_sequence_sequence(
            std::vector<std::vector<int32_t>>&& _my_sequence_sequence);

    /*!
     * @brief This function returns a constant reference to member my_sequence_sequence
     * @return Constant reference to member my_sequence_sequence
     */
    eProsima_user_DllExport const std::vector<std::vector<int32_t>>& my_sequence_sequence() const;

    /*!
     * @brief This function returns a reference to member my_sequence_sequence
     * @return Reference to member my_sequence_sequence
     */
    eProsima_user_DllExport std::vector<std::vector<int32_t>>& my_sequence_sequence();

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
            const SequenceSequenceStruct& data,
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

    std::vector<std::vector<int32_t>> m_my_sequence_sequence;

};
/*!
 * @brief This class represents the structure SequenceSequenceBoundsStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SequenceSequenceBoundsStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SequenceSequenceBoundsStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SequenceSequenceBoundsStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SequenceSequenceBoundsStruct that will be copied.
     */
    eProsima_user_DllExport SequenceSequenceBoundsStruct(
            const SequenceSequenceBoundsStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SequenceSequenceBoundsStruct that will be copied.
     */
    eProsima_user_DllExport SequenceSequenceBoundsStruct(
            SequenceSequenceBoundsStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SequenceSequenceBoundsStruct that will be copied.
     */
    eProsima_user_DllExport SequenceSequenceBoundsStruct& operator =(
            const SequenceSequenceBoundsStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SequenceSequenceBoundsStruct that will be copied.
     */
    eProsima_user_DllExport SequenceSequenceBoundsStruct& operator =(
            SequenceSequenceBoundsStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SequenceSequenceBoundsStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SequenceSequenceBoundsStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SequenceSequenceBoundsStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SequenceSequenceBoundsStruct& x) const;

    /*!
     * @brief This function copies the value in member my_sequence_sequence
     * @param _my_sequence_sequence New value to be copied in member my_sequence_sequence
     */
    eProsima_user_DllExport void my_sequence_sequence(
            const std::vector<std::vector<int32_t>>& _my_sequence_sequence);

    /*!
     * @brief This function moves the value in member my_sequence_sequence
     * @param _my_sequence_sequence New value to be moved in member my_sequence_sequence
     */
    eProsima_user_DllExport void my_sequence_sequence(
            std::vector<std::vector<int32_t>>&& _my_sequence_sequence);

    /*!
     * @brief This function returns a constant reference to member my_sequence_sequence
     * @return Constant reference to member my_sequence_sequence
     */
    eProsima_user_DllExport const std::vector<std::vector<int32_t>>& my_sequence_sequence() const;

    /*!
     * @brief This function returns a reference to member my_sequence_sequence
     * @return Reference to member my_sequence_sequence
     */
    eProsima_user_DllExport std::vector<std::vector<int32_t>>& my_sequence_sequence();

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
            const SequenceSequenceBoundsStruct& data,
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

    std::vector<std::vector<int32_t>> m_my_sequence_sequence;

};
/*!
 * @brief This class represents the structure MapStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class MapStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MapStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MapStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MapStruct that will be copied.
     */
    eProsima_user_DllExport MapStruct(
            const MapStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MapStruct that will be copied.
     */
    eProsima_user_DllExport MapStruct(
            MapStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MapStruct that will be copied.
     */
    eProsima_user_DllExport MapStruct& operator =(
            const MapStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MapStruct that will be copied.
     */
    eProsima_user_DllExport MapStruct& operator =(
            MapStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MapStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MapStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MapStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MapStruct& x) const;

    /*!
     * @brief This function copies the value in member my_map
     * @param _my_map New value to be copied in member my_map
     */
    eProsima_user_DllExport void my_map(
            const std::map<int32_t, int32_t>& _my_map);

    /*!
     * @brief This function moves the value in member my_map
     * @param _my_map New value to be moved in member my_map
     */
    eProsima_user_DllExport void my_map(
            std::map<int32_t, int32_t>&& _my_map);

    /*!
     * @brief This function returns a constant reference to member my_map
     * @return Constant reference to member my_map
     */
    eProsima_user_DllExport const std::map<int32_t, int32_t>& my_map() const;

    /*!
     * @brief This function returns a reference to member my_map
     * @return Reference to member my_map
     */
    eProsima_user_DllExport std::map<int32_t, int32_t>& my_map();

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
            const MapStruct& data,
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

    std::map<int32_t, int32_t> m_my_map;

};
/*!
 * @brief This class represents the structure MapStructEqual defined by the user in the IDL file.
 * @ingroup Types
 */
class MapStructEqual
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MapStructEqual();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MapStructEqual();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MapStructEqual that will be copied.
     */
    eProsima_user_DllExport MapStructEqual(
            const MapStructEqual& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MapStructEqual that will be copied.
     */
    eProsima_user_DllExport MapStructEqual(
            MapStructEqual&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MapStructEqual that will be copied.
     */
    eProsima_user_DllExport MapStructEqual& operator =(
            const MapStructEqual& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MapStructEqual that will be copied.
     */
    eProsima_user_DllExport MapStructEqual& operator =(
            MapStructEqual&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MapStructEqual object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MapStructEqual& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MapStructEqual object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MapStructEqual& x) const;

    /*!
     * @brief This function copies the value in member my_map_equal
     * @param _my_map_equal New value to be copied in member my_map_equal
     */
    eProsima_user_DllExport void my_map_equal(
            const std::map<int32_t, int32_t>& _my_map_equal);

    /*!
     * @brief This function moves the value in member my_map_equal
     * @param _my_map_equal New value to be moved in member my_map_equal
     */
    eProsima_user_DllExport void my_map_equal(
            std::map<int32_t, int32_t>&& _my_map_equal);

    /*!
     * @brief This function returns a constant reference to member my_map_equal
     * @return Constant reference to member my_map_equal
     */
    eProsima_user_DllExport const std::map<int32_t, int32_t>& my_map_equal() const;

    /*!
     * @brief This function returns a reference to member my_map_equal
     * @return Reference to member my_map_equal
     */
    eProsima_user_DllExport std::map<int32_t, int32_t>& my_map_equal();

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
            const MapStructEqual& data,
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

    std::map<int32_t, int32_t> m_my_map_equal;

};
/*!
 * @brief This class represents the structure MapBadKeyStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class MapBadKeyStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MapBadKeyStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MapBadKeyStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MapBadKeyStruct that will be copied.
     */
    eProsima_user_DllExport MapBadKeyStruct(
            const MapBadKeyStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MapBadKeyStruct that will be copied.
     */
    eProsima_user_DllExport MapBadKeyStruct(
            MapBadKeyStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MapBadKeyStruct that will be copied.
     */
    eProsima_user_DllExport MapBadKeyStruct& operator =(
            const MapBadKeyStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MapBadKeyStruct that will be copied.
     */
    eProsima_user_DllExport MapBadKeyStruct& operator =(
            MapBadKeyStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MapBadKeyStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MapBadKeyStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MapBadKeyStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MapBadKeyStruct& x) const;

    /*!
     * @brief This function copies the value in member my_map
     * @param _my_map New value to be copied in member my_map
     */
    eProsima_user_DllExport void my_map(
            const std::map<uint8_t, int32_t>& _my_map);

    /*!
     * @brief This function moves the value in member my_map
     * @param _my_map New value to be moved in member my_map
     */
    eProsima_user_DllExport void my_map(
            std::map<uint8_t, int32_t>&& _my_map);

    /*!
     * @brief This function returns a constant reference to member my_map
     * @return Constant reference to member my_map
     */
    eProsima_user_DllExport const std::map<uint8_t, int32_t>& my_map() const;

    /*!
     * @brief This function returns a reference to member my_map
     * @return Reference to member my_map
     */
    eProsima_user_DllExport std::map<uint8_t, int32_t>& my_map();

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
            const MapBadKeyStruct& data,
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

    std::map<uint8_t, int32_t> m_my_map;

};
/*!
 * @brief This class represents the structure MapBadElemStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class MapBadElemStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MapBadElemStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MapBadElemStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MapBadElemStruct that will be copied.
     */
    eProsima_user_DllExport MapBadElemStruct(
            const MapBadElemStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MapBadElemStruct that will be copied.
     */
    eProsima_user_DllExport MapBadElemStruct(
            MapBadElemStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MapBadElemStruct that will be copied.
     */
    eProsima_user_DllExport MapBadElemStruct& operator =(
            const MapBadElemStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MapBadElemStruct that will be copied.
     */
    eProsima_user_DllExport MapBadElemStruct& operator =(
            MapBadElemStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MapBadElemStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MapBadElemStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MapBadElemStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MapBadElemStruct& x) const;

    /*!
     * @brief This function copies the value in member my_map
     * @param _my_map New value to be copied in member my_map
     */
    eProsima_user_DllExport void my_map(
            const std::map<int32_t, int64_t>& _my_map);

    /*!
     * @brief This function moves the value in member my_map
     * @param _my_map New value to be moved in member my_map
     */
    eProsima_user_DllExport void my_map(
            std::map<int32_t, int64_t>&& _my_map);

    /*!
     * @brief This function returns a constant reference to member my_map
     * @return Constant reference to member my_map
     */
    eProsima_user_DllExport const std::map<int32_t, int64_t>& my_map() const;

    /*!
     * @brief This function returns a reference to member my_map
     * @return Reference to member my_map
     */
    eProsima_user_DllExport std::map<int32_t, int64_t>& my_map();

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
            const MapBadElemStruct& data,
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

    std::map<int32_t, int64_t> m_my_map;

};
/*!
 * @brief This class represents the structure MapBoundsStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class MapBoundsStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MapBoundsStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MapBoundsStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MapBoundsStruct that will be copied.
     */
    eProsima_user_DllExport MapBoundsStruct(
            const MapBoundsStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MapBoundsStruct that will be copied.
     */
    eProsima_user_DllExport MapBoundsStruct(
            MapBoundsStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MapBoundsStruct that will be copied.
     */
    eProsima_user_DllExport MapBoundsStruct& operator =(
            const MapBoundsStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MapBoundsStruct that will be copied.
     */
    eProsima_user_DllExport MapBoundsStruct& operator =(
            MapBoundsStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MapBoundsStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MapBoundsStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MapBoundsStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MapBoundsStruct& x) const;

    /*!
     * @brief This function copies the value in member my_map
     * @param _my_map New value to be copied in member my_map
     */
    eProsima_user_DllExport void my_map(
            const std::map<int32_t, int32_t>& _my_map);

    /*!
     * @brief This function moves the value in member my_map
     * @param _my_map New value to be moved in member my_map
     */
    eProsima_user_DllExport void my_map(
            std::map<int32_t, int32_t>&& _my_map);

    /*!
     * @brief This function returns a constant reference to member my_map
     * @return Constant reference to member my_map
     */
    eProsima_user_DllExport const std::map<int32_t, int32_t>& my_map() const;

    /*!
     * @brief This function returns a reference to member my_map
     * @return Reference to member my_map
     */
    eProsima_user_DllExport std::map<int32_t, int32_t>& my_map();

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
            const MapBoundsStruct& data,
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

    std::map<int32_t, int32_t> m_my_map;

};
/*!
 * @brief This class represents the structure MapMapStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class MapMapStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MapMapStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MapMapStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MapMapStruct that will be copied.
     */
    eProsima_user_DllExport MapMapStruct(
            const MapMapStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MapMapStruct that will be copied.
     */
    eProsima_user_DllExport MapMapStruct(
            MapMapStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MapMapStruct that will be copied.
     */
    eProsima_user_DllExport MapMapStruct& operator =(
            const MapMapStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MapMapStruct that will be copied.
     */
    eProsima_user_DllExport MapMapStruct& operator =(
            MapMapStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MapMapStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MapMapStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MapMapStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MapMapStruct& x) const;

    /*!
     * @brief This function copies the value in member my_map_map
     * @param _my_map_map New value to be copied in member my_map_map
     */
    eProsima_user_DllExport void my_map_map(
            const std::map<int32_t, std::map<int32_t, int32_t>>& _my_map_map);

    /*!
     * @brief This function moves the value in member my_map_map
     * @param _my_map_map New value to be moved in member my_map_map
     */
    eProsima_user_DllExport void my_map_map(
            std::map<int32_t, std::map<int32_t, int32_t>>&& _my_map_map);

    /*!
     * @brief This function returns a constant reference to member my_map_map
     * @return Constant reference to member my_map_map
     */
    eProsima_user_DllExport const std::map<int32_t, std::map<int32_t, int32_t>>& my_map_map() const;

    /*!
     * @brief This function returns a reference to member my_map_map
     * @return Reference to member my_map_map
     */
    eProsima_user_DllExport std::map<int32_t, std::map<int32_t, int32_t>>& my_map_map();

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
            const MapMapStruct& data,
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

    std::map<int32_t, std::map<int32_t, int32_t>> m_my_map_map;

};
/*!
 * @brief This class represents the structure MapMapBoundsStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class MapMapBoundsStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MapMapBoundsStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MapMapBoundsStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MapMapBoundsStruct that will be copied.
     */
    eProsima_user_DllExport MapMapBoundsStruct(
            const MapMapBoundsStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MapMapBoundsStruct that will be copied.
     */
    eProsima_user_DllExport MapMapBoundsStruct(
            MapMapBoundsStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MapMapBoundsStruct that will be copied.
     */
    eProsima_user_DllExport MapMapBoundsStruct& operator =(
            const MapMapBoundsStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MapMapBoundsStruct that will be copied.
     */
    eProsima_user_DllExport MapMapBoundsStruct& operator =(
            MapMapBoundsStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MapMapBoundsStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MapMapBoundsStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MapMapBoundsStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MapMapBoundsStruct& x) const;

    /*!
     * @brief This function copies the value in member my_map_map
     * @param _my_map_map New value to be copied in member my_map_map
     */
    eProsima_user_DllExport void my_map_map(
            const std::map<int32_t, std::map<int32_t, int32_t>>& _my_map_map);

    /*!
     * @brief This function moves the value in member my_map_map
     * @param _my_map_map New value to be moved in member my_map_map
     */
    eProsima_user_DllExport void my_map_map(
            std::map<int32_t, std::map<int32_t, int32_t>>&& _my_map_map);

    /*!
     * @brief This function returns a constant reference to member my_map_map
     * @return Constant reference to member my_map_map
     */
    eProsima_user_DllExport const std::map<int32_t, std::map<int32_t, int32_t>>& my_map_map() const;

    /*!
     * @brief This function returns a reference to member my_map_map
     * @return Reference to member my_map_map
     */
    eProsima_user_DllExport std::map<int32_t, std::map<int32_t, int32_t>>& my_map_map();

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
            const MapMapBoundsStruct& data,
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

    std::map<int32_t, std::map<int32_t, int32_t>> m_my_map_map;

};
/*!
 * @brief This class represents the union SimpleUnion defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleUnion
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleUnion();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleUnion();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleUnion that will be copied.
     */
    eProsima_user_DllExport SimpleUnion(
            const SimpleUnion& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleUnion that will be copied.
     */
    eProsima_user_DllExport SimpleUnion(
            SimpleUnion&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleUnion that will be copied.
     */
    eProsima_user_DllExport SimpleUnion& operator =(
            const SimpleUnion& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleUnion that will be copied.
     */
    eProsima_user_DllExport SimpleUnion& operator =(
            SimpleUnion&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnion object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleUnion& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnion object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleUnion& x) const;

    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    eProsima_user_DllExport void _d(
            int32_t __d);

    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    eProsima_user_DllExport int32_t _d() const;

    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    eProsima_user_DllExport int32_t& _d();

    /*!
     * @brief This function sets a value in member first
     * @param _first New value for member first
     */
    eProsima_user_DllExport void first(
            int32_t _first);

    /*!
     * @brief This function returns the value of member first
     * @return Value of member first
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t first() const;

    /*!
     * @brief This function returns a reference to member first
     * @return Reference to member first
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t& first();

    /*!
     * @brief This function sets a value in member second
     * @param _second New value for member second
     */
    eProsima_user_DllExport void second(
            int64_t _second);

    /*!
     * @brief This function returns the value of member second
     * @return Value of member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t second() const;

    /*!
     * @brief This function returns a reference to member second
     * @return Reference to member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t& second();


    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const SimpleUnion& data,
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

    int32_t m__d;

    int32_t m_first;
    int64_t m_second;
};
/*!
 * @brief This class represents the union SimpleUnionNames defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleUnionNames
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleUnionNames();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleUnionNames();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleUnionNames that will be copied.
     */
    eProsima_user_DllExport SimpleUnionNames(
            const SimpleUnionNames& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleUnionNames that will be copied.
     */
    eProsima_user_DllExport SimpleUnionNames(
            SimpleUnionNames&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleUnionNames that will be copied.
     */
    eProsima_user_DllExport SimpleUnionNames& operator =(
            const SimpleUnionNames& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleUnionNames that will be copied.
     */
    eProsima_user_DllExport SimpleUnionNames& operator =(
            SimpleUnionNames&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnionNames object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleUnionNames& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnionNames object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleUnionNames& x) const;

    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    eProsima_user_DllExport void _d(
            int32_t __d);

    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    eProsima_user_DllExport int32_t _d() const;

    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    eProsima_user_DllExport int32_t& _d();

    /*!
     * @brief This function sets a value in member first_case
     * @param _first_case New value for member first_case
     */
    eProsima_user_DllExport void first_case(
            int32_t _first_case);

    /*!
     * @brief This function returns the value of member first_case
     * @return Value of member first_case
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t first_case() const;

    /*!
     * @brief This function returns a reference to member first_case
     * @return Reference to member first_case
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t& first_case();

    /*!
     * @brief This function sets a value in member second_case
     * @param _second_case New value for member second_case
     */
    eProsima_user_DllExport void second_case(
            int64_t _second_case);

    /*!
     * @brief This function returns the value of member second_case
     * @return Value of member second_case
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t second_case() const;

    /*!
     * @brief This function returns a reference to member second_case
     * @return Reference to member second_case
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t& second_case();


    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const SimpleUnionNames& data,
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

    int32_t m__d;

    int32_t m_first_case;
    int64_t m_second_case;
};
/*!
 * @brief This class represents the union SimpleTypeUnion defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleTypeUnion
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleTypeUnion();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleTypeUnion();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleTypeUnion that will be copied.
     */
    eProsima_user_DllExport SimpleTypeUnion(
            const SimpleTypeUnion& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleTypeUnion that will be copied.
     */
    eProsima_user_DllExport SimpleTypeUnion(
            SimpleTypeUnion&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleTypeUnion that will be copied.
     */
    eProsima_user_DllExport SimpleTypeUnion& operator =(
            const SimpleTypeUnion& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleTypeUnion that will be copied.
     */
    eProsima_user_DllExport SimpleTypeUnion& operator =(
            SimpleTypeUnion&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleTypeUnion object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleTypeUnion& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleTypeUnion object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleTypeUnion& x) const;

    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    eProsima_user_DllExport void _d(
            int32_t __d);

    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    eProsima_user_DllExport int32_t _d() const;

    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    eProsima_user_DllExport int32_t& _d();

    /*!
     * @brief This function sets a value in member first
     * @param _first New value for member first
     */
    eProsima_user_DllExport void first(
            uint8_t _first);

    /*!
     * @brief This function returns the value of member first
     * @return Value of member first
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport uint8_t first() const;

    /*!
     * @brief This function returns a reference to member first
     * @return Reference to member first
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport uint8_t& first();

    /*!
     * @brief This function sets a value in member second
     * @param _second New value for member second
     */
    eProsima_user_DllExport void second(
            int64_t _second);

    /*!
     * @brief This function returns the value of member second
     * @return Value of member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t second() const;

    /*!
     * @brief This function returns a reference to member second
     * @return Reference to member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t& second();


    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const SimpleTypeUnion& data,
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

    int32_t m__d;

    uint8_t m_first;
    int64_t m_second;
};
/*!
 * @brief This class represents the union SimpleBadUnion defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleBadUnion
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleBadUnion();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleBadUnion();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleBadUnion that will be copied.
     */
    eProsima_user_DllExport SimpleBadUnion(
            const SimpleBadUnion& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleBadUnion that will be copied.
     */
    eProsima_user_DllExport SimpleBadUnion(
            SimpleBadUnion&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleBadUnion that will be copied.
     */
    eProsima_user_DllExport SimpleBadUnion& operator =(
            const SimpleBadUnion& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleBadUnion that will be copied.
     */
    eProsima_user_DllExport SimpleBadUnion& operator =(
            SimpleBadUnion&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleBadUnion object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleBadUnion& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleBadUnion object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleBadUnion& x) const;

    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    eProsima_user_DllExport void _d(
            int32_t __d);

    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    eProsima_user_DllExport int32_t _d() const;

    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    eProsima_user_DllExport int32_t& _d();

    /*!
     * @brief This function sets a value in member first
     * @param _first New value for member first
     */
    eProsima_user_DllExport void first(
            int32_t _first);

    /*!
     * @brief This function returns the value of member first
     * @return Value of member first
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t first() const;

    /*!
     * @brief This function returns a reference to member first
     * @return Reference to member first
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t& first();

    /*!
     * @brief This function sets a value in member second
     * @param _second New value for member second
     */
    eProsima_user_DllExport void second(
            int64_t _second);

    /*!
     * @brief This function returns the value of member second
     * @return Value of member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t second() const;

    /*!
     * @brief This function returns a reference to member second
     * @return Reference to member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t& second();


    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const SimpleBadUnion& data,
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

    int32_t m__d;

    int32_t m_first;
    int64_t m_second;
};
/*!
 * @brief This class represents the union SimpleBadDiscUnion defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleBadDiscUnion
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleBadDiscUnion();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleBadDiscUnion();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleBadDiscUnion that will be copied.
     */
    eProsima_user_DllExport SimpleBadDiscUnion(
            const SimpleBadDiscUnion& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleBadDiscUnion that will be copied.
     */
    eProsima_user_DllExport SimpleBadDiscUnion(
            SimpleBadDiscUnion&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleBadDiscUnion that will be copied.
     */
    eProsima_user_DllExport SimpleBadDiscUnion& operator =(
            const SimpleBadDiscUnion& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleBadDiscUnion that will be copied.
     */
    eProsima_user_DllExport SimpleBadDiscUnion& operator =(
            SimpleBadDiscUnion&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleBadDiscUnion object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleBadDiscUnion& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleBadDiscUnion object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleBadDiscUnion& x) const;

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
     * @brief This function sets a value in member first
     * @param _first New value for member first
     */
    eProsima_user_DllExport void first(
            int32_t _first);

    /*!
     * @brief This function returns the value of member first
     * @return Value of member first
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t first() const;

    /*!
     * @brief This function returns a reference to member first
     * @return Reference to member first
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int32_t& first();

    /*!
     * @brief This function sets a value in member second
     * @param _second New value for member second
     */
    eProsima_user_DllExport void second(
            int64_t _second);

    /*!
     * @brief This function returns the value of member second
     * @return Value of member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t second() const;

    /*!
     * @brief This function returns a reference to member second
     * @return Reference to member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport int64_t& second();


    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const SimpleBadDiscUnion& data,
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

    int32_t m_first;
    int64_t m_second;
};
/*!
 * @brief This class represents the structure SimpleUnionStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleUnionStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleUnionStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleUnionStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleUnionStruct(
            const SimpleUnionStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleUnionStruct(
            SimpleUnionStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleUnionStruct& operator =(
            const SimpleUnionStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleUnionStruct& operator =(
            SimpleUnionStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleUnionStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleUnionStruct& x) const;

    /*!
     * @brief This function copies the value in member my_union
     * @param _my_union New value to be copied in member my_union
     */
    eProsima_user_DllExport void my_union(
            const SimpleUnion& _my_union);

    /*!
     * @brief This function moves the value in member my_union
     * @param _my_union New value to be moved in member my_union
     */
    eProsima_user_DllExport void my_union(
            SimpleUnion&& _my_union);

    /*!
     * @brief This function returns a constant reference to member my_union
     * @return Constant reference to member my_union
     */
    eProsima_user_DllExport const SimpleUnion& my_union() const;

    /*!
     * @brief This function returns a reference to member my_union
     * @return Reference to member my_union
     */
    eProsima_user_DllExport SimpleUnion& my_union();

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
            const SimpleUnionStruct& data,
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

    SimpleUnion m_my_union;

};
/*!
 * @brief This class represents the structure SimpleUnionStructEqual defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleUnionStructEqual
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleUnionStructEqual();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleUnionStructEqual();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleUnionStructEqual that will be copied.
     */
    eProsima_user_DllExport SimpleUnionStructEqual(
            const SimpleUnionStructEqual& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleUnionStructEqual that will be copied.
     */
    eProsima_user_DllExport SimpleUnionStructEqual(
            SimpleUnionStructEqual&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleUnionStructEqual that will be copied.
     */
    eProsima_user_DllExport SimpleUnionStructEqual& operator =(
            const SimpleUnionStructEqual& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleUnionStructEqual that will be copied.
     */
    eProsima_user_DllExport SimpleUnionStructEqual& operator =(
            SimpleUnionStructEqual&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnionStructEqual object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleUnionStructEqual& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnionStructEqual object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleUnionStructEqual& x) const;

    /*!
     * @brief This function copies the value in member my_union_equal
     * @param _my_union_equal New value to be copied in member my_union_equal
     */
    eProsima_user_DllExport void my_union_equal(
            const SimpleUnion& _my_union_equal);

    /*!
     * @brief This function moves the value in member my_union_equal
     * @param _my_union_equal New value to be moved in member my_union_equal
     */
    eProsima_user_DllExport void my_union_equal(
            SimpleUnion&& _my_union_equal);

    /*!
     * @brief This function returns a constant reference to member my_union_equal
     * @return Constant reference to member my_union_equal
     */
    eProsima_user_DllExport const SimpleUnion& my_union_equal() const;

    /*!
     * @brief This function returns a reference to member my_union_equal
     * @return Reference to member my_union_equal
     */
    eProsima_user_DllExport SimpleUnion& my_union_equal();

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
            const SimpleUnionStructEqual& data,
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

    SimpleUnion m_my_union_equal;

};
/*!
 * @brief This class represents the structure SimpleUnionNamesStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleUnionNamesStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleUnionNamesStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleUnionNamesStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleUnionNamesStruct that will be copied.
     */
    eProsima_user_DllExport SimpleUnionNamesStruct(
            const SimpleUnionNamesStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleUnionNamesStruct that will be copied.
     */
    eProsima_user_DllExport SimpleUnionNamesStruct(
            SimpleUnionNamesStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleUnionNamesStruct that will be copied.
     */
    eProsima_user_DllExport SimpleUnionNamesStruct& operator =(
            const SimpleUnionNamesStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleUnionNamesStruct that will be copied.
     */
    eProsima_user_DllExport SimpleUnionNamesStruct& operator =(
            SimpleUnionNamesStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnionNamesStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleUnionNamesStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleUnionNamesStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleUnionNamesStruct& x) const;

    /*!
     * @brief This function copies the value in member my_union
     * @param _my_union New value to be copied in member my_union
     */
    eProsima_user_DllExport void my_union(
            const SimpleUnionNames& _my_union);

    /*!
     * @brief This function moves the value in member my_union
     * @param _my_union New value to be moved in member my_union
     */
    eProsima_user_DllExport void my_union(
            SimpleUnionNames&& _my_union);

    /*!
     * @brief This function returns a constant reference to member my_union
     * @return Constant reference to member my_union
     */
    eProsima_user_DllExport const SimpleUnionNames& my_union() const;

    /*!
     * @brief This function returns a reference to member my_union
     * @return Reference to member my_union
     */
    eProsima_user_DllExport SimpleUnionNames& my_union();

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
            const SimpleUnionNamesStruct& data,
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

    SimpleUnionNames m_my_union;

};
/*!
 * @brief This class represents the structure SimpleTypeUnionStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleTypeUnionStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleTypeUnionStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleTypeUnionStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleTypeUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleTypeUnionStruct(
            const SimpleTypeUnionStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleTypeUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleTypeUnionStruct(
            SimpleTypeUnionStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleTypeUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleTypeUnionStruct& operator =(
            const SimpleTypeUnionStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleTypeUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleTypeUnionStruct& operator =(
            SimpleTypeUnionStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleTypeUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleTypeUnionStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleTypeUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleTypeUnionStruct& x) const;

    /*!
     * @brief This function copies the value in member my_union
     * @param _my_union New value to be copied in member my_union
     */
    eProsima_user_DllExport void my_union(
            const SimpleTypeUnion& _my_union);

    /*!
     * @brief This function moves the value in member my_union
     * @param _my_union New value to be moved in member my_union
     */
    eProsima_user_DllExport void my_union(
            SimpleTypeUnion&& _my_union);

    /*!
     * @brief This function returns a constant reference to member my_union
     * @return Constant reference to member my_union
     */
    eProsima_user_DllExport const SimpleTypeUnion& my_union() const;

    /*!
     * @brief This function returns a reference to member my_union
     * @return Reference to member my_union
     */
    eProsima_user_DllExport SimpleTypeUnion& my_union();

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
            const SimpleTypeUnionStruct& data,
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

    SimpleTypeUnion m_my_union;

};
/*!
 * @brief This class represents the structure SimpleBadUnionStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SimpleBadUnionStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleBadUnionStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleBadUnionStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleBadUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleBadUnionStruct(
            const SimpleBadUnionStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleBadUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleBadUnionStruct(
            SimpleBadUnionStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleBadUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleBadUnionStruct& operator =(
            const SimpleBadUnionStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleBadUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleBadUnionStruct& operator =(
            SimpleBadUnionStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleBadUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleBadUnionStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleBadUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleBadUnionStruct& x) const;

    /*!
     * @brief This function copies the value in member my_union
     * @param _my_union New value to be copied in member my_union
     */
    eProsima_user_DllExport void my_union(
            const SimpleBadUnion& _my_union);

    /*!
     * @brief This function moves the value in member my_union
     * @param _my_union New value to be moved in member my_union
     */
    eProsima_user_DllExport void my_union(
            SimpleBadUnion&& _my_union);

    /*!
     * @brief This function returns a constant reference to member my_union
     * @return Constant reference to member my_union
     */
    eProsima_user_DllExport const SimpleBadUnion& my_union() const;

    /*!
     * @brief This function returns a reference to member my_union
     * @return Reference to member my_union
     */
    eProsima_user_DllExport SimpleBadUnion& my_union();

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
            const SimpleBadUnionStruct& data,
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

    SimpleBadUnion m_my_union;

};
/*!
 * @brief This class represents the structure SimplBadDiscUnionStruct defined by the user in the IDL file.
 * @ingroup Types
 */
class SimplBadDiscUnionStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimplBadDiscUnionStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimplBadDiscUnionStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimplBadDiscUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimplBadDiscUnionStruct(
            const SimplBadDiscUnionStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimplBadDiscUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimplBadDiscUnionStruct(
            SimplBadDiscUnionStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimplBadDiscUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimplBadDiscUnionStruct& operator =(
            const SimplBadDiscUnionStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimplBadDiscUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimplBadDiscUnionStruct& operator =(
            SimplBadDiscUnionStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimplBadDiscUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimplBadDiscUnionStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimplBadDiscUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimplBadDiscUnionStruct& x) const;

    /*!
     * @brief This function copies the value in member my_union
     * @param _my_union New value to be copied in member my_union
     */
    eProsima_user_DllExport void my_union(
            const SimpleBadDiscUnion& _my_union);

    /*!
     * @brief This function moves the value in member my_union
     * @param _my_union New value to be moved in member my_union
     */
    eProsima_user_DllExport void my_union(
            SimpleBadDiscUnion&& _my_union);

    /*!
     * @brief This function returns a constant reference to member my_union
     * @return Constant reference to member my_union
     */
    eProsima_user_DllExport const SimpleBadDiscUnion& my_union() const;

    /*!
     * @brief This function returns a reference to member my_union
     * @return Reference to member my_union
     */
    eProsima_user_DllExport SimpleBadDiscUnion& my_union();

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
            const SimplBadDiscUnionStruct& data,
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

    SimpleBadDiscUnion m_my_union;

};

#endif // _FAST_DDS_GENERATED_TYPES_H_

