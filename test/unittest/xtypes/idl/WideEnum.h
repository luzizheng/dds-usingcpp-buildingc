/*!
 * @file WideEnum.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_WIDEENUM_H_
#define _FAST_DDS_GENERATED_WIDEENUM_H_


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
#if defined(WIDEENUM_SOURCE)
#define WIDEENUM_DllAPI __declspec( dllexport )
#else
#define WIDEENUM_DllAPI __declspec( dllimport )
#endif // WIDEENUM_SOURCE
#else
#define WIDEENUM_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define WIDEENUM_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the enumeration MyEnumWide defined by the user in the IDL file.
 * @ingroup WideEnum
 */
enum MyEnumWide : uint32_t
{
    A,
    B,
    C,
    D
};
/*!
 * @brief This class represents the structure MyEnumWideStruct defined by the user in the IDL file.
 * @ingroup WideEnum
 */
class MyEnumWideStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MyEnumWideStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MyEnumWideStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MyEnumWideStruct that will be copied.
     */
    eProsima_user_DllExport MyEnumWideStruct(
            const MyEnumWideStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MyEnumWideStruct that will be copied.
     */
    eProsima_user_DllExport MyEnumWideStruct(
            MyEnumWideStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MyEnumWideStruct that will be copied.
     */
    eProsima_user_DllExport MyEnumWideStruct& operator =(
            const MyEnumWideStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MyEnumWideStruct that will be copied.
     */
    eProsima_user_DllExport MyEnumWideStruct& operator =(
            MyEnumWideStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MyEnumWideStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MyEnumWideStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MyEnumWideStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MyEnumWideStruct& x) const;

    /*!
     * @brief This function sets a value in member my_enum_wide
     * @param _my_enum_wide New value for member my_enum_wide
     */
    eProsima_user_DllExport void my_enum_wide(
            MyEnumWide _my_enum_wide);

    /*!
     * @brief This function returns the value of member my_enum_wide
     * @return Value of member my_enum_wide
     */
    eProsima_user_DllExport MyEnumWide my_enum_wide() const;

    /*!
     * @brief This function returns a reference to member my_enum_wide
     * @return Reference to member my_enum_wide
     */
    eProsima_user_DllExport MyEnumWide& my_enum_wide();


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
            const MyEnumWideStruct& data,
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

    MyEnumWide m_my_enum_wide;

};
/*!
 * @brief This class represents the union SimpleWideUnion defined by the user in the IDL file.
 * @ingroup WideEnum
 */
class SimpleWideUnion
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleWideUnion();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleWideUnion();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleWideUnion that will be copied.
     */
    eProsima_user_DllExport SimpleWideUnion(
            const SimpleWideUnion& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleWideUnion that will be copied.
     */
    eProsima_user_DllExport SimpleWideUnion(
            SimpleWideUnion&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleWideUnion that will be copied.
     */
    eProsima_user_DllExport SimpleWideUnion& operator =(
            const SimpleWideUnion& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleWideUnion that will be copied.
     */
    eProsima_user_DllExport SimpleWideUnion& operator =(
            SimpleWideUnion&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleWideUnion object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleWideUnion& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleWideUnion object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleWideUnion& x) const;

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
     * @brief This function sets a value in member third
     * @param _third New value for member third
     */
    eProsima_user_DllExport void third(
            uint8_t _third);

    /*!
     * @brief This function returns the value of member third
     * @return Value of member third
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport uint8_t third() const;

    /*!
     * @brief This function returns a reference to member third
     * @return Reference to member third
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    eProsima_user_DllExport uint8_t& third();


    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const SimpleWideUnion& data,
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
    uint8_t m_third;
};
/*!
 * @brief This class represents the structure SimpleWideUnionStruct defined by the user in the IDL file.
 * @ingroup WideEnum
 */
class SimpleWideUnionStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SimpleWideUnionStruct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SimpleWideUnionStruct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object SimpleWideUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleWideUnionStruct(
            const SimpleWideUnionStruct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object SimpleWideUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleWideUnionStruct(
            SimpleWideUnionStruct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object SimpleWideUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleWideUnionStruct& operator =(
            const SimpleWideUnionStruct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object SimpleWideUnionStruct that will be copied.
     */
    eProsima_user_DllExport SimpleWideUnionStruct& operator =(
            SimpleWideUnionStruct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x SimpleWideUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SimpleWideUnionStruct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x SimpleWideUnionStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SimpleWideUnionStruct& x) const;

    /*!
     * @brief This function copies the value in member my_union
     * @param _my_union New value to be copied in member my_union
     */
    eProsima_user_DllExport void my_union(
            const SimpleWideUnion& _my_union);

    /*!
     * @brief This function moves the value in member my_union
     * @param _my_union New value to be moved in member my_union
     */
    eProsima_user_DllExport void my_union(
            SimpleWideUnion&& _my_union);

    /*!
     * @brief This function returns a constant reference to member my_union
     * @return Constant reference to member my_union
     */
    eProsima_user_DllExport const SimpleWideUnion& my_union() const;

    /*!
     * @brief This function returns a reference to member my_union
     * @return Reference to member my_union
     */
    eProsima_user_DllExport SimpleWideUnion& my_union();

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
            const SimpleWideUnionStruct& data,
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

    SimpleWideUnion m_my_union;

};

#endif // _FAST_DDS_GENERATED_WIDEENUM_H_

