/*!
 * @file Basic.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_BASIC_H_
#define _FAST_DDS_GENERATED_BASIC_H_


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
#if defined(BASIC_SOURCE)
#define BASIC_DllAPI __declspec( dllexport )
#else
#define BASIC_DllAPI __declspec( dllimport )
#endif // BASIC_SOURCE
#else
#define BASIC_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define BASIC_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the enumeration MyEnum defined by the user in the IDL file.
 * @ingroup Basic
 */
enum MyEnum : uint32_t
{
    A,
    B,
    C
};
typedef MyEnum MyAliasEnum;
typedef MyAliasEnum MyAliasAliasEnum;
/*!
 * @brief This class represents the structure EnumStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class EnumStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport EnumStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~EnumStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object EnumStruct that will be copied.
     */
    eProsima_user_DllExport EnumStruct(
            const EnumStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object EnumStruct that will be copied.
     */
    eProsima_user_DllExport EnumStruct(
            EnumStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object EnumStruct that will be copied.
     */
    eProsima_user_DllExport EnumStruct& operator =(
            const EnumStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object EnumStruct that will be copied.
     */
    eProsima_user_DllExport EnumStruct& operator =(
            EnumStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x EnumStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const EnumStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x EnumStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const EnumStruct& x) const;

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
            const EnumStruct& data,
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
 * @brief This class represents the structure AliasStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class AliasStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport AliasStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~AliasStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object AliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasStruct(
            const AliasStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object AliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasStruct(
            AliasStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object AliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasStruct& operator =(
            const AliasStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object AliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasStruct& operator =(
            AliasStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x AliasStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const AliasStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x AliasStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const AliasStruct& x) const;

    /*!
     * @brief This function sets a value in member my_alias
     * @param _my_alias New value for member my_alias
     */
    eProsima_user_DllExport void my_alias(
            MyAliasEnum _my_alias);

    /*!
     * @brief This function returns the value of member my_alias
     * @return Value of member my_alias
     */
    eProsima_user_DllExport MyAliasEnum my_alias() const;

    /*!
     * @brief This function returns a reference to member my_alias
     * @return Reference to member my_alias
     */
    eProsima_user_DllExport MyAliasEnum& my_alias();


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
            const AliasStruct& data,
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

    MyAliasEnum m_my_alias;

};
/*!
 * @brief This class represents the structure AliasAliasStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class AliasAliasStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport AliasAliasStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~AliasAliasStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object AliasAliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasAliasStruct(
            const AliasAliasStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object AliasAliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasAliasStruct(
            AliasAliasStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object AliasAliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasAliasStruct& operator =(
            const AliasAliasStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object AliasAliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasAliasStruct& operator =(
            AliasAliasStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x AliasAliasStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const AliasAliasStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x AliasAliasStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const AliasAliasStruct& x) const;

    /*!
     * @brief This function sets a value in member my_alias_alias
     * @param _my_alias_alias New value for member my_alias_alias
     */
    eProsima_user_DllExport void my_alias_alias(
            MyAliasAliasEnum _my_alias_alias);

    /*!
     * @brief This function returns the value of member my_alias_alias
     * @return Value of member my_alias_alias
     */
    eProsima_user_DllExport MyAliasAliasEnum my_alias_alias() const;

    /*!
     * @brief This function returns a reference to member my_alias_alias
     * @return Reference to member my_alias_alias
     */
    eProsima_user_DllExport MyAliasAliasEnum& my_alias_alias();


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
            const AliasAliasStruct& data,
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

    MyAliasAliasEnum m_my_alias_alias;

};
/*!
 * @brief This class represents the structure BoolStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class BoolStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport BoolStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~BoolStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object BoolStruct that will be copied.
     */
    eProsima_user_DllExport BoolStruct(
            const BoolStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object BoolStruct that will be copied.
     */
    eProsima_user_DllExport BoolStruct(
            BoolStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object BoolStruct that will be copied.
     */
    eProsima_user_DllExport BoolStruct& operator =(
            const BoolStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object BoolStruct that will be copied.
     */
    eProsima_user_DllExport BoolStruct& operator =(
            BoolStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x BoolStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const BoolStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x BoolStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const BoolStruct& x) const;

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
            const BoolStruct& data,
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

};
/*!
 * @brief This class represents the structure OctetStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class OctetStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport OctetStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~OctetStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object OctetStruct that will be copied.
     */
    eProsima_user_DllExport OctetStruct(
            const OctetStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object OctetStruct that will be copied.
     */
    eProsima_user_DllExport OctetStruct(
            OctetStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object OctetStruct that will be copied.
     */
    eProsima_user_DllExport OctetStruct& operator =(
            const OctetStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object OctetStruct that will be copied.
     */
    eProsima_user_DllExport OctetStruct& operator =(
            OctetStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x OctetStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const OctetStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x OctetStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const OctetStruct& x) const;

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
            const OctetStruct& data,
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

};
/*!
 * @brief This class represents the structure ShortStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ShortStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ShortStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ShortStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ShortStruct that will be copied.
     */
    eProsima_user_DllExport ShortStruct(
            const ShortStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ShortStruct that will be copied.
     */
    eProsima_user_DllExport ShortStruct(
            ShortStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ShortStruct that will be copied.
     */
    eProsima_user_DllExport ShortStruct& operator =(
            const ShortStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ShortStruct that will be copied.
     */
    eProsima_user_DllExport ShortStruct& operator =(
            ShortStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ShortStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ShortStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ShortStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ShortStruct& x) const;

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
            const ShortStruct& data,
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

    int16_t m_my_int16;

};
/*!
 * @brief This class represents the structure LongStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class LongStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport LongStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~LongStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object LongStruct that will be copied.
     */
    eProsima_user_DllExport LongStruct(
            const LongStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object LongStruct that will be copied.
     */
    eProsima_user_DllExport LongStruct(
            LongStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object LongStruct that will be copied.
     */
    eProsima_user_DllExport LongStruct& operator =(
            const LongStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object LongStruct that will be copied.
     */
    eProsima_user_DllExport LongStruct& operator =(
            LongStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x LongStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const LongStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x LongStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const LongStruct& x) const;

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
            const LongStruct& data,
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

    int32_t m_my_int32;

};
/*!
 * @brief This class represents the structure LongLongStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class LongLongStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport LongLongStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~LongLongStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object LongLongStruct that will be copied.
     */
    eProsima_user_DllExport LongLongStruct(
            const LongLongStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object LongLongStruct that will be copied.
     */
    eProsima_user_DllExport LongLongStruct(
            LongLongStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object LongLongStruct that will be copied.
     */
    eProsima_user_DllExport LongLongStruct& operator =(
            const LongLongStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object LongLongStruct that will be copied.
     */
    eProsima_user_DllExport LongLongStruct& operator =(
            LongLongStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x LongLongStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const LongLongStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x LongLongStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const LongLongStruct& x) const;

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
            const LongLongStruct& data,
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

    int64_t m_my_int64;

};
/*!
 * @brief This class represents the structure UShortStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class UShortStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport UShortStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~UShortStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object UShortStruct that will be copied.
     */
    eProsima_user_DllExport UShortStruct(
            const UShortStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object UShortStruct that will be copied.
     */
    eProsima_user_DllExport UShortStruct(
            UShortStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object UShortStruct that will be copied.
     */
    eProsima_user_DllExport UShortStruct& operator =(
            const UShortStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object UShortStruct that will be copied.
     */
    eProsima_user_DllExport UShortStruct& operator =(
            UShortStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x UShortStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const UShortStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x UShortStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const UShortStruct& x) const;

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
            const UShortStruct& data,
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

    uint16_t m_my_uint16;

};
/*!
 * @brief This class represents the structure ULongStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ULongStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ULongStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ULongStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ULongStruct that will be copied.
     */
    eProsima_user_DllExport ULongStruct(
            const ULongStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ULongStruct that will be copied.
     */
    eProsima_user_DllExport ULongStruct(
            ULongStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ULongStruct that will be copied.
     */
    eProsima_user_DllExport ULongStruct& operator =(
            const ULongStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ULongStruct that will be copied.
     */
    eProsima_user_DllExport ULongStruct& operator =(
            ULongStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ULongStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ULongStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ULongStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ULongStruct& x) const;

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
            const ULongStruct& data,
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

    uint32_t m_my_uint32;

};
/*!
 * @brief This class represents the structure ULongLongStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ULongLongStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ULongLongStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ULongLongStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ULongLongStruct that will be copied.
     */
    eProsima_user_DllExport ULongLongStruct(
            const ULongLongStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ULongLongStruct that will be copied.
     */
    eProsima_user_DllExport ULongLongStruct(
            ULongLongStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ULongLongStruct that will be copied.
     */
    eProsima_user_DllExport ULongLongStruct& operator =(
            const ULongLongStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ULongLongStruct that will be copied.
     */
    eProsima_user_DllExport ULongLongStruct& operator =(
            ULongLongStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ULongLongStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ULongLongStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ULongLongStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ULongLongStruct& x) const;

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
            const ULongLongStruct& data,
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

    uint64_t m_my_uint64;

};
/*!
 * @brief This class represents the structure FloatStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class FloatStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport FloatStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~FloatStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object FloatStruct that will be copied.
     */
    eProsima_user_DllExport FloatStruct(
            const FloatStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object FloatStruct that will be copied.
     */
    eProsima_user_DllExport FloatStruct(
            FloatStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object FloatStruct that will be copied.
     */
    eProsima_user_DllExport FloatStruct& operator =(
            const FloatStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object FloatStruct that will be copied.
     */
    eProsima_user_DllExport FloatStruct& operator =(
            FloatStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x FloatStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const FloatStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x FloatStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const FloatStruct& x) const;

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
            const FloatStruct& data,
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

    float m_my_float32;

};
/*!
 * @brief This class represents the structure DoubleStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class DoubleStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DoubleStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DoubleStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DoubleStruct that will be copied.
     */
    eProsima_user_DllExport DoubleStruct(
            const DoubleStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DoubleStruct that will be copied.
     */
    eProsima_user_DllExport DoubleStruct(
            DoubleStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DoubleStruct that will be copied.
     */
    eProsima_user_DllExport DoubleStruct& operator =(
            const DoubleStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DoubleStruct that will be copied.
     */
    eProsima_user_DllExport DoubleStruct& operator =(
            DoubleStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x DoubleStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const DoubleStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x DoubleStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const DoubleStruct& x) const;

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
            const DoubleStruct& data,
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

    double m_my_float64;

};
/*!
 * @brief This class represents the structure LongDoubleStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class LongDoubleStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport LongDoubleStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~LongDoubleStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object LongDoubleStruct that will be copied.
     */
    eProsima_user_DllExport LongDoubleStruct(
            const LongDoubleStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object LongDoubleStruct that will be copied.
     */
    eProsima_user_DllExport LongDoubleStruct(
            LongDoubleStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object LongDoubleStruct that will be copied.
     */
    eProsima_user_DllExport LongDoubleStruct& operator =(
            const LongDoubleStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object LongDoubleStruct that will be copied.
     */
    eProsima_user_DllExport LongDoubleStruct& operator =(
            LongDoubleStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x LongDoubleStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const LongDoubleStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x LongDoubleStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const LongDoubleStruct& x) const;

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
            const LongDoubleStruct& data,
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

    long double m_my_float128;

};
/*!
 * @brief This class represents the structure CharStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class CharStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport CharStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~CharStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object CharStruct that will be copied.
     */
    eProsima_user_DllExport CharStruct(
            const CharStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object CharStruct that will be copied.
     */
    eProsima_user_DllExport CharStruct(
            CharStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object CharStruct that will be copied.
     */
    eProsima_user_DllExport CharStruct& operator =(
            const CharStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object CharStruct that will be copied.
     */
    eProsima_user_DllExport CharStruct& operator =(
            CharStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x CharStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const CharStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x CharStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const CharStruct& x) const;

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
            const CharStruct& data,
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

    char m_my_char;

};
/*!
 * @brief This class represents the structure WCharStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class WCharStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport WCharStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~WCharStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object WCharStruct that will be copied.
     */
    eProsima_user_DllExport WCharStruct(
            const WCharStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object WCharStruct that will be copied.
     */
    eProsima_user_DllExport WCharStruct(
            WCharStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object WCharStruct that will be copied.
     */
    eProsima_user_DllExport WCharStruct& operator =(
            const WCharStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object WCharStruct that will be copied.
     */
    eProsima_user_DllExport WCharStruct& operator =(
            WCharStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x WCharStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const WCharStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x WCharStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const WCharStruct& x) const;

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
            const WCharStruct& data,
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

    wchar_t m_my_wchar;

};
/*!
 * @brief This class represents the structure StringStruct defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the structure WStringStruct defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the structure LargeStringStruct defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the structure LargeWStringStruct defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the structure ArraytStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ArraytStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ArraytStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ArraytStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ArraytStruct that will be copied.
     */
    eProsima_user_DllExport ArraytStruct(
            const ArraytStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ArraytStruct that will be copied.
     */
    eProsima_user_DllExport ArraytStruct(
            ArraytStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ArraytStruct that will be copied.
     */
    eProsima_user_DllExport ArraytStruct& operator =(
            const ArraytStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ArraytStruct that will be copied.
     */
    eProsima_user_DllExport ArraytStruct& operator =(
            ArraytStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ArraytStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ArraytStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ArraytStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ArraytStruct& x) const;

    /*!
     * @brief This function copies the value in member my_array
     * @param _my_array New value to be copied in member my_array
     */
    eProsima_user_DllExport void my_array(
            const std::array<std::array<std::array<int32_t, 2>, 2>, 2>& _my_array);

    /*!
     * @brief This function moves the value in member my_array
     * @param _my_array New value to be moved in member my_array
     */
    eProsima_user_DllExport void my_array(
            std::array<std::array<std::array<int32_t, 2>, 2>, 2>&& _my_array);

    /*!
     * @brief This function returns a constant reference to member my_array
     * @return Constant reference to member my_array
     */
    eProsima_user_DllExport const std::array<std::array<std::array<int32_t, 2>, 2>, 2>& my_array() const;

    /*!
     * @brief This function returns a reference to member my_array
     * @return Reference to member my_array
     */
    eProsima_user_DllExport std::array<std::array<std::array<int32_t, 2>, 2>, 2>& my_array();

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
            const ArraytStruct& data,
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

    std::array<std::array<std::array<int32_t, 2>, 2>, 2> m_my_array;

};
typedef std::array<std::array<int32_t, 2>, 2> MyArray;
/*!
 * @brief This class represents the structure ArrayArrayStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class ArrayArrayStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ArrayArrayStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ArrayArrayStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ArrayArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayArrayStruct(
            const ArrayArrayStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ArrayArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayArrayStruct(
            ArrayArrayStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ArrayArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayArrayStruct& operator =(
            const ArrayArrayStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ArrayArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayArrayStruct& operator =(
            ArrayArrayStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ArrayArrayStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ArrayArrayStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ArrayArrayStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ArrayArrayStruct& x) const;

    /*!
     * @brief This function copies the value in member my_array_array
     * @param _my_array_array New value to be copied in member my_array_array
     */
    eProsima_user_DllExport void my_array_array(
            const std::array<std::array<MyArray, 2>, 2>& _my_array_array);

    /*!
     * @brief This function moves the value in member my_array_array
     * @param _my_array_array New value to be moved in member my_array_array
     */
    eProsima_user_DllExport void my_array_array(
            std::array<std::array<MyArray, 2>, 2>&& _my_array_array);

    /*!
     * @brief This function returns a constant reference to member my_array_array
     * @return Constant reference to member my_array_array
     */
    eProsima_user_DllExport const std::array<std::array<MyArray, 2>, 2>& my_array_array() const;

    /*!
     * @brief This function returns a reference to member my_array_array
     * @return Reference to member my_array_array
     */
    eProsima_user_DllExport std::array<std::array<MyArray, 2>, 2>& my_array_array();

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
            const ArrayArrayStruct& data,
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

    std::array<std::array<MyArray, 2>, 2> m_my_array_array;

};
/*!
 * @brief This class represents the structure SequenceStruct defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the structure SequenceSequenceStruct defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the structure MapStruct defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the structure MapMapStruct defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the structure MyBitset defined by the user in the IDL file.
 * @ingroup Basic
 */
class MyBitset
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MyBitset();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MyBitset();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MyBitset that will be copied.
     */
    eProsima_user_DllExport MyBitset(
            const MyBitset& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MyBitset that will be copied.
     */
    eProsima_user_DllExport MyBitset(
            MyBitset&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MyBitset that will be copied.
     */
    eProsima_user_DllExport MyBitset& operator =(
            const MyBitset& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MyBitset that will be copied.
     */
    eProsima_user_DllExport MyBitset& operator =(
            MyBitset&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MyBitset object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MyBitset& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MyBitset object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MyBitset& x) const;

    /*!
     * @brief This function sets a value in member a
     * @param _a New value for member a
     */
    eProsima_user_DllExport void a(
            char _a);

    /*!
     * @brief This function returns the value of member a
     * @return Value of member a
     */
    eProsima_user_DllExport char a() const;

    /*!
     * @brief This function sets a value in member b
     * @param _b New value for member b
     */
    eProsima_user_DllExport void b(
            uint32_t _b);

    /*!
     * @brief This function returns the value of member b
     * @return Value of member b
     */
    eProsima_user_DllExport uint32_t b() const;

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const MyBitset& data,
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

    std::bitset<30> m_bitset;
};
/*!
 * @brief This class represents the structure BitsetStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class BitsetStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport BitsetStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~BitsetStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object BitsetStruct that will be copied.
     */
    eProsima_user_DllExport BitsetStruct(
            const BitsetStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object BitsetStruct that will be copied.
     */
    eProsima_user_DllExport BitsetStruct(
            BitsetStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object BitsetStruct that will be copied.
     */
    eProsima_user_DllExport BitsetStruct& operator =(
            const BitsetStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object BitsetStruct that will be copied.
     */
    eProsima_user_DllExport BitsetStruct& operator =(
            BitsetStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x BitsetStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const BitsetStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x BitsetStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const BitsetStruct& x) const;

    /*!
     * @brief This function copies the value in member a
     * @param _a New value to be copied in member a
     */
    eProsima_user_DllExport void a(
            const MyBitset& _a);

    /*!
     * @brief This function moves the value in member a
     * @param _a New value to be moved in member a
     */
    eProsima_user_DllExport void a(
            MyBitset&& _a);

    /*!
     * @brief This function returns a constant reference to member a
     * @return Constant reference to member a
     */
    eProsima_user_DllExport const MyBitset& a() const;

    /*!
     * @brief This function returns a reference to member a
     * @return Reference to member a
     */
    eProsima_user_DllExport MyBitset& a();

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
            const BitsetStruct& data,
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

    MyBitset m_a;

};
/*!
 * @brief This class represents the structure StructStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class StructStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport StructStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~StructStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object StructStruct that will be copied.
     */
    eProsima_user_DllExport StructStruct(
            const StructStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object StructStruct that will be copied.
     */
    eProsima_user_DllExport StructStruct(
            StructStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object StructStruct that will be copied.
     */
    eProsima_user_DllExport StructStruct& operator =(
            const StructStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object StructStruct that will be copied.
     */
    eProsima_user_DllExport StructStruct& operator =(
            StructStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x StructStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const StructStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x StructStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const StructStruct& x) const;

    /*!
     * @brief This function sets a value in member a
     * @param _a New value for member a
     */
    eProsima_user_DllExport void a(
            int32_t _a);

    /*!
     * @brief This function returns the value of member a
     * @return Value of member a
     */
    eProsima_user_DllExport int32_t a() const;

    /*!
     * @brief This function returns a reference to member a
     * @return Reference to member a
     */
    eProsima_user_DllExport int32_t& a();

    /*!
     * @brief This function sets a value in member b
     * @param _b New value for member b
     */
    eProsima_user_DllExport void b(
            int64_t _b);

    /*!
     * @brief This function returns the value of member b
     * @return Value of member b
     */
    eProsima_user_DllExport int64_t b() const;

    /*!
     * @brief This function returns a reference to member b
     * @return Reference to member b
     */
    eProsima_user_DllExport int64_t& b();


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
            const StructStruct& data,
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

    int32_t m_a;
    int64_t m_b;

};
/*!
 * @brief This class represents the structure StructStructStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class StructStructStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport StructStructStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~StructStructStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object StructStructStruct that will be copied.
     */
    eProsima_user_DllExport StructStructStruct(
            const StructStructStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object StructStructStruct that will be copied.
     */
    eProsima_user_DllExport StructStructStruct(
            StructStructStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object StructStructStruct that will be copied.
     */
    eProsima_user_DllExport StructStructStruct& operator =(
            const StructStructStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object StructStructStruct that will be copied.
     */
    eProsima_user_DllExport StructStructStruct& operator =(
            StructStructStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x StructStructStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const StructStructStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x StructStructStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const StructStructStruct& x) const;

    /*!
     * @brief This function copies the value in member child_struct
     * @param _child_struct New value to be copied in member child_struct
     */
    eProsima_user_DllExport void child_struct(
            const StructStruct& _child_struct);

    /*!
     * @brief This function moves the value in member child_struct
     * @param _child_struct New value to be moved in member child_struct
     */
    eProsima_user_DllExport void child_struct(
            StructStruct&& _child_struct);

    /*!
     * @brief This function returns a constant reference to member child_struct
     * @return Constant reference to member child_struct
     */
    eProsima_user_DllExport const StructStruct& child_struct() const;

    /*!
     * @brief This function returns a reference to member child_struct
     * @return Reference to member child_struct
     */
    eProsima_user_DllExport StructStruct& child_struct();
    /*!
     * @brief This function sets a value in member child_int64
     * @param _child_int64 New value for member child_int64
     */
    eProsima_user_DllExport void child_int64(
            int64_t _child_int64);

    /*!
     * @brief This function returns the value of member child_int64
     * @return Value of member child_int64
     */
    eProsima_user_DllExport int64_t child_int64() const;

    /*!
     * @brief This function returns a reference to member child_int64
     * @return Reference to member child_int64
     */
    eProsima_user_DllExport int64_t& child_int64();


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
            const StructStructStruct& data,
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

    StructStruct m_child_struct;
    int64_t m_child_int64;

};
/*!
 * @brief This class represents the union SimpleUnion defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the union UnionUnion defined by the user in the IDL file.
 * @ingroup Basic
 */
class UnionUnion
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport UnionUnion();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~UnionUnion();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object UnionUnion that will be copied.
     */
    eProsima_user_DllExport UnionUnion(
            const UnionUnion& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object UnionUnion that will be copied.
     */
    eProsima_user_DllExport UnionUnion(
            UnionUnion&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object UnionUnion that will be copied.
     */
    eProsima_user_DllExport UnionUnion& operator =(
            const UnionUnion& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object UnionUnion that will be copied.
     */
    eProsima_user_DllExport UnionUnion& operator =(
            UnionUnion&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x UnionUnion object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const UnionUnion& x) const;

    /*!
     * @brief Comparison operator.
     * @param x UnionUnion object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const UnionUnion& x) const;

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
     * @brief This function copies the value in member second
     * @param _second New value to be copied in member second
     */
    eProsima_user_DllExport void second(
            const SimpleUnion& _second);

    /*!
     * @brief This function moves the value in member second
     * @param _second New value to be moved in member second
     */
    eProsima_user_DllExport void second(
            SimpleUnion&& _second);

    /*!
     * @brief This function returns a constant reference to member second
     * @return Constant reference to member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport const SimpleUnion& second() const;

    /*!
     * @brief This function returns a reference to member second
     * @return Reference to member second
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport SimpleUnion& second();

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const UnionUnion& data,
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
    SimpleUnion m_second;
};
/*!
 * @brief This class represents the union WCharUnion defined by the user in the IDL file.
 * @ingroup Basic
 */
class WCharUnion
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport WCharUnion();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~WCharUnion();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object WCharUnion that will be copied.
     */
    eProsima_user_DllExport WCharUnion(
            const WCharUnion& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object WCharUnion that will be copied.
     */
    eProsima_user_DllExport WCharUnion(
            WCharUnion&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object WCharUnion that will be copied.
     */
    eProsima_user_DllExport WCharUnion& operator =(
            const WCharUnion& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object WCharUnion that will be copied.
     */
    eProsima_user_DllExport WCharUnion& operator =(
            WCharUnion&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x WCharUnion object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const WCharUnion& x) const;

    /*!
     * @brief Comparison operator.
     * @param x WCharUnion object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const WCharUnion& x) const;

    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    eProsima_user_DllExport void _d(
            wchar_t __d);

    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    eProsima_user_DllExport wchar_t _d() const;

    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    eProsima_user_DllExport wchar_t& _d();

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
            const WCharUnion& data,
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

    wchar_t m__d;

    int32_t m_first;
    int64_t m_second;
};
/*!
 * @brief This class represents the structure SimpleUnionStruct defined by the user in the IDL file.
 * @ingroup Basic
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
 * @brief This class represents the structure UnionUnionUnionStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class UnionUnionUnionStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport UnionUnionUnionStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~UnionUnionUnionStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object UnionUnionUnionStruct that will be copied.
     */
    eProsima_user_DllExport UnionUnionUnionStruct(
            const UnionUnionUnionStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object UnionUnionUnionStruct that will be copied.
     */
    eProsima_user_DllExport UnionUnionUnionStruct(
            UnionUnionUnionStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object UnionUnionUnionStruct that will be copied.
     */
    eProsima_user_DllExport UnionUnionUnionStruct& operator =(
            const UnionUnionUnionStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object UnionUnionUnionStruct that will be copied.
     */
    eProsima_user_DllExport UnionUnionUnionStruct& operator =(
            UnionUnionUnionStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x UnionUnionUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const UnionUnionUnionStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x UnionUnionUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const UnionUnionUnionStruct& x) const;

    /*!
     * @brief This function copies the value in member my_union
     * @param _my_union New value to be copied in member my_union
     */
    eProsima_user_DllExport void my_union(
            const UnionUnion& _my_union);

    /*!
     * @brief This function moves the value in member my_union
     * @param _my_union New value to be moved in member my_union
     */
    eProsima_user_DllExport void my_union(
            UnionUnion&& _my_union);

    /*!
     * @brief This function returns a constant reference to member my_union
     * @return Constant reference to member my_union
     */
    eProsima_user_DllExport const UnionUnion& my_union() const;

    /*!
     * @brief This function returns a reference to member my_union
     * @return Reference to member my_union
     */
    eProsima_user_DllExport UnionUnion& my_union();

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
            const UnionUnionUnionStruct& data,
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

    UnionUnion m_my_union;

};
/*!
 * @brief This class represents the structure WCharUnionStruct defined by the user in the IDL file.
 * @ingroup Basic
 */
class WCharUnionStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport WCharUnionStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~WCharUnionStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object WCharUnionStruct that will be copied.
     */
    eProsima_user_DllExport WCharUnionStruct(
            const WCharUnionStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object WCharUnionStruct that will be copied.
     */
    eProsima_user_DllExport WCharUnionStruct(
            WCharUnionStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object WCharUnionStruct that will be copied.
     */
    eProsima_user_DllExport WCharUnionStruct& operator =(
            const WCharUnionStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object WCharUnionStruct that will be copied.
     */
    eProsima_user_DllExport WCharUnionStruct& operator =(
            WCharUnionStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x WCharUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const WCharUnionStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x WCharUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const WCharUnionStruct& x) const;

    /*!
     * @brief This function copies the value in member my_union
     * @param _my_union New value to be copied in member my_union
     */
    eProsima_user_DllExport void my_union(
            const WCharUnion& _my_union);

    /*!
     * @brief This function moves the value in member my_union
     * @param _my_union New value to be moved in member my_union
     */
    eProsima_user_DllExport void my_union(
            WCharUnion&& _my_union);

    /*!
     * @brief This function returns a constant reference to member my_union
     * @return Constant reference to member my_union
     */
    eProsima_user_DllExport const WCharUnion& my_union() const;

    /*!
     * @brief This function returns a reference to member my_union
     * @return Reference to member my_union
     */
    eProsima_user_DllExport WCharUnion& my_union();

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
            const WCharUnionStruct& data,
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

    WCharUnion m_my_union;

};

#endif // _FAST_DDS_GENERATED_BASIC_H_

