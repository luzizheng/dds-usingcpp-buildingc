/*!
 * @file TestingData.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_TESTINGDATA_H_
#define _FAST_DDS_GENERATED_TESTINGDATA_H_


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
#if defined(TestingData_SOURCE)
#define TestingData_DllAPI __declspec( dllexport )
#else
#define TestingData_DllAPI __declspec( dllimport )
#endif // TestingData_SOURCE
#else
#define TestingData_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define TestingData_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure TestingData defined by the user in the IDL file.
 * @ingroup TESTINGDATA
 */
class TestingData
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport TestingData();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~TestingData();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object TestingData that will be copied.
     */
    eProsima_user_DllExport TestingData(
            const TestingData& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object TestingData that will be copied.
     */
    eProsima_user_DllExport TestingData(
            TestingData&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object TestingData that will be copied.
     */
    eProsima_user_DllExport TestingData& operator =(
            const TestingData& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object TestingData that will be copied.
     */
    eProsima_user_DllExport TestingData& operator =(
            TestingData&& x);

    /*!
     * @brief Comparison operator.
     * @param x TestingData object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const TestingData& x) const;

    /*!
     * @brief Comparison operator.
     * @param x TestingData object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const TestingData& x) const;

    /*!
     * @brief This function sets a value in member timestamp
     * @param _timestamp New value for member timestamp
     */
    eProsima_user_DllExport void timestamp(
            double _timestamp);

    /*!
     * @brief This function returns the value of member timestamp
     * @return Value of member timestamp
     */
    eProsima_user_DllExport double timestamp() const;

    /*!
     * @brief This function returns a reference to member timestamp
     * @return Reference to member timestamp
     */
    eProsima_user_DllExport double& timestamp();

    /*!
     * @brief This function copies the value in member message
     * @param _message New value to be copied in member message
     */
    eProsima_user_DllExport void message(
            const std::string& _message);

    /*!
     * @brief This function moves the value in member message
     * @param _message New value to be moved in member message
     */
    eProsima_user_DllExport void message(
            std::string&& _message);

    /*!
     * @brief This function returns a constant reference to member message
     * @return Constant reference to member message
     */
    eProsima_user_DllExport const std::string& message() const;

    /*!
     * @brief This function returns a reference to member message
     * @return Reference to member message
     */
    eProsima_user_DllExport std::string& message();
    /*!
     * @brief This function sets a value in member index
     * @param _index New value for member index
     */
    eProsima_user_DllExport void index(
            uint32_t _index);

    /*!
     * @brief This function returns the value of member index
     * @return Value of member index
     */
    eProsima_user_DllExport uint32_t index() const;

    /*!
     * @brief This function returns a reference to member index
     * @return Reference to member index
     */
    eProsima_user_DllExport uint32_t& index();

    /*!
     * @brief This function copies the value in member payload
     * @param _payload New value to be copied in member payload
     */
    eProsima_user_DllExport void payload(
            const std::vector<char>& _payload);

    /*!
     * @brief This function moves the value in member payload
     * @param _payload New value to be moved in member payload
     */
    eProsima_user_DllExport void payload(
            std::vector<char>&& _payload);

    /*!
     * @brief This function returns a constant reference to member payload
     * @return Constant reference to member payload
     */
    eProsima_user_DllExport const std::vector<char>& payload() const;

    /*!
     * @brief This function returns a reference to member payload
     * @return Reference to member payload
     */
    eProsima_user_DllExport std::vector<char>& payload();

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
            const TestingData& data,
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

    double m_timestamp;
    std::string m_message;
    uint32_t m_index;
    std::vector<char> m_payload;
};

#endif // _FAST_DDS_GENERATED_TESTINGDATA_H_