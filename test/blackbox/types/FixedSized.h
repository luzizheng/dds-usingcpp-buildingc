/*!
 * @file FixedSized.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_FIXEDSIZED_H_
#define _FAST_DDS_GENERATED_FIXEDSIZED_H_


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
#if defined(FIXEDSIZED_SOURCE)
#define FIXEDSIZED_DllAPI __declspec( dllexport )
#else
#define FIXEDSIZED_DllAPI __declspec( dllimport )
#endif // FIXEDSIZED_SOURCE
#else
#define FIXEDSIZED_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define FIXEDSIZED_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure FixedSized defined by the user in the IDL file.
 * @ingroup FixedSized
 */
class FixedSized
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport FixedSized();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~FixedSized();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object FixedSized that will be copied.
     */
    eProsima_user_DllExport FixedSized(
            const FixedSized& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object FixedSized that will be copied.
     */
    eProsima_user_DllExport FixedSized(
            FixedSized&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object FixedSized that will be copied.
     */
    eProsima_user_DllExport FixedSized& operator =(
            const FixedSized& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object FixedSized that will be copied.
     */
    eProsima_user_DllExport FixedSized& operator =(
            FixedSized&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x FixedSized object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const FixedSized& x) const;

    /*!
     * @brief Comparison operator.
     * @param x FixedSized object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const FixedSized& x) const;

    /*!
     * @brief This function sets a value in member index
     * @param _index New value for member index
     */
    eProsima_user_DllExport void index(
            uint16_t _index);

    /*!
     * @brief This function returns the value of member index
     * @return Value of member index
     */
    eProsima_user_DllExport uint16_t index() const;

    /*!
     * @brief This function returns a reference to member index
     * @return Reference to member index
     */
    eProsima_user_DllExport uint16_t& index();


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
            const FixedSized& data,
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

    uint16_t m_index;

};

#endif // _FAST_DDS_GENERATED_FIXEDSIZED_H_

