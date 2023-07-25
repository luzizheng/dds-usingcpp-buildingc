/*!
 * @file AnnotationParameterValue.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _ANNOTATIONPARAMETERVALUE_H_
#define _ANNOTATIONPARAMETERVALUE_H_

#if _MSC_VER

#if defined(max)
#pragma push_macro("max")
#undef max
#define FASTDDS_RESTORE_MAX
#endif // defined(max)

#if defined(min)
#pragma push_macro("min")
#undef min
#define FASTDDS_RESTORE_MIN
#endif // defined(min)

#endif // if _MSC_VER

#include <fastrtps/types/TypesBase.h>
#include <fastrtps/types/TypeIdentifier.h>
#include <fastrtps/utils/string_convert.hpp>
#include <fastrtps/fastrtps_dll.h>
#include <stdint.h>
#include <array>
#include <vector>

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima
namespace eprosima {
namespace fastrtps {

namespace types {

/*!
 * @brief This class represents the structure ExtendedAnnotationParameterValue defined by the user in the IDL file.
 * @ingroup ANNOTATIONPARAMETERVALUE
 */
class ExtendedAnnotationParameterValue
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI ExtendedAnnotationParameterValue();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~ExtendedAnnotationParameterValue();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ExtendedAnnotationParameterValue that will be copied.
     */
    RTPS_DllAPI ExtendedAnnotationParameterValue(
            const ExtendedAnnotationParameterValue& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ExtendedAnnotationParameterValue that will be copied.
     */
    RTPS_DllAPI ExtendedAnnotationParameterValue(
            ExtendedAnnotationParameterValue&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ExtendedAnnotationParameterValue that will be copied.
     */
    RTPS_DllAPI ExtendedAnnotationParameterValue& operator =(
            const ExtendedAnnotationParameterValue& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ExtendedAnnotationParameterValue that will be copied.
     */
    RTPS_DllAPI ExtendedAnnotationParameterValue& operator =(
            ExtendedAnnotationParameterValue&& x);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const ExtendedAnnotationParameterValue& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    RTPS_DllAPI static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    RTPS_DllAPI static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

    RTPS_DllAPI bool operator ==(
            const ExtendedAnnotationParameterValue&) const
    {
        return true;
    }

private:
};
/*!
 * @brief This class represents the union AnnotationParameterValue defined by the user in the IDL file.
 * @ingroup ANNOTATIONPARAMETERVALUE
 */
class AnnotationParameterValue
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI AnnotationParameterValue();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~AnnotationParameterValue();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object AnnotationParameterValue that will be copied.
     */
    RTPS_DllAPI AnnotationParameterValue(
            const AnnotationParameterValue& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object AnnotationParameterValue that will be copied.
     */
    RTPS_DllAPI AnnotationParameterValue(
            AnnotationParameterValue&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object AnnotationParameterValue that will be copied.
     */
    RTPS_DllAPI AnnotationParameterValue& operator =(
            const AnnotationParameterValue& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object AnnotationParameterValue that will be copied.
     */
    RTPS_DllAPI AnnotationParameterValue& operator =(
            AnnotationParameterValue&& x);

    /*!
     * @brief This function sets the discriminator value.
     * @param __d New value for the discriminator.
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
     */
    RTPS_DllAPI void _d(
            char __d);

    /*!
     * @brief This function returns the value of the discriminator.
     * @return Value of the discriminator
     */
    RTPS_DllAPI char _d() const;

    /*!
     * @brief This function returns a reference to the discriminator.
     * @return Reference to the discriminator.
     */
    RTPS_DllAPI char& _d();

    /*!
     * @brief This function sets a value in member boolean_value
     * @param _boolean_value New value for member boolean_value
     */
    RTPS_DllAPI void boolean_value(
            bool _boolean_value);

    /*!
     * @brief This function returns the value of member boolean_value
     * @return Value of member boolean_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI bool boolean_value() const;

    /*!
     * @brief This function returns a reference to member boolean_value
     * @return Reference to member boolean_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI bool& boolean_value();
    /*!
     * @brief This function sets a value in member byte_value
     * @param _byte_value New value for member byte_value
     */
    RTPS_DllAPI void byte_value(
            uint8_t _byte_value);

    /*!
     * @brief This function returns the value of member byte_value
     * @return Value of member byte_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI uint8_t byte_value() const;

    /*!
     * @brief This function returns a reference to member byte_value
     * @return Reference to member byte_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI uint8_t& byte_value();
    /*!
     * @brief This function sets a value in member int16_value
     * @param _int16_value New value for member int16_value
     */
    RTPS_DllAPI void int16_value(
            int16_t _int16_value);

    /*!
     * @brief This function returns the value of member int16_value
     * @return Value of member int16_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI int16_t int16_value() const;

    /*!
     * @brief This function returns a reference to member int16_value
     * @return Reference to member int16_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI int16_t& int16_value();
    /*!
     * @brief This function sets a value in member uint_16_value
     * @param _uint_16_value New value for member uint_16_value
     */
    RTPS_DllAPI void uint_16_value(
            uint16_t _uint_16_value);

    /*!
     * @brief This function returns the value of member uint_16_value
     * @return Value of member uint_16_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI uint16_t uint_16_value() const;

    /*!
     * @brief This function returns a reference to member uint_16_value
     * @return Reference to member uint_16_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI uint16_t& uint_16_value();
    /*!
     * @brief This function sets a value in member int32_value
     * @param _int32_value New value for member int32_value
     */
    RTPS_DllAPI void int32_value(
            int32_t _int32_value);

    /*!
     * @brief This function returns the value of member int32_value
     * @return Value of member int32_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI int32_t int32_value() const;

    /*!
     * @brief This function returns a reference to member int32_value
     * @return Reference to member int32_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI int32_t& int32_value();
    /*!
     * @brief This function sets a value in member uint32_value
     * @param _uint32_value New value for member uint32_value
     */
    RTPS_DllAPI void uint32_value(
            uint32_t _uint32_value);

    /*!
     * @brief This function returns the value of member uint32_value
     * @return Value of member uint32_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI uint32_t uint32_value() const;

    /*!
     * @brief This function returns a reference to member uint32_value
     * @return Reference to member uint32_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI uint32_t& uint32_value();
    /*!
     * @brief This function sets a value in member int64_value
     * @param _int64_value New value for member int64_value
     */
    RTPS_DllAPI void int64_value(
            int64_t _int64_value);

    /*!
     * @brief This function returns the value of member int64_value
     * @return Value of member int64_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI int64_t int64_value() const;

    /*!
     * @brief This function returns a reference to member int64_value
     * @return Reference to member int64_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI int64_t& int64_value();

    /*!
     * @brief This function sets a value in member uint64_value
     * @param _uint64_value New value for member uint64_value
     */
    RTPS_DllAPI void uint64_value(
            uint64_t _uint64_value);

    /*!
     * @brief This function returns the value of member uint64_value
     * @return Value of member uint64_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI uint64_t uint64_value() const;

    /*!
     * @brief This function returns a reference to member uint64_value
     * @return Reference to member uint64_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI uint64_t& uint64_value();
    /*!
     * @brief This function sets a value in member float32_value
     * @param _float32_value New value for member float32_value
     */
    RTPS_DllAPI void float32_value(
            float _float32_value);

    /*!
     * @brief This function returns the value of member float32_value
     * @return Value of member float32_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI float float32_value() const;

    /*!
     * @brief This function returns a reference to member float32_value
     * @return Reference to member float32_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI float& float32_value();
    /*!
     * @brief This function sets a value in member float64_value
     * @param _float64_value New value for member float64_value
     */
    RTPS_DllAPI void float64_value(
            double _float64_value);

    /*!
     * @brief This function returns the value of member float64_value
     * @return Value of member float64_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI double float64_value() const;

    /*!
     * @brief This function returns a reference to member float64_value
     * @return Reference to member float64_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI double& float64_value();

    /*!
     * @brief This function sets a value in member float128_value
     * @param _float128_value New value for member float128_value
     */
    RTPS_DllAPI void float128_value(
            long double _float128_value);

    /*!
     * @brief This function returns the value of member float128_value
     * @return Value of member float128_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI long double float128_value() const;

    /*!
     * @brief This function returns a reference to member float128_value
     * @return Reference to member float128_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI long double& float128_value();
    /*!
     * @brief This function sets a value in member char_value
     * @param _char_value New value for member char_value
     */
    RTPS_DllAPI void char_value(
            char _char_value);

    /*!
     * @brief This function returns the value of member char_value
     * @return Value of member char_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI char char_value() const;

    /*!
     * @brief This function returns a reference to member char_value
     * @return Reference to member char_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI char& char_value();
    /*!
     * @brief This function sets a value in member wchar_value
     * @param _wchar_value New value for member wchar_value
     */
    RTPS_DllAPI void wchar_value(
            wchar_t _wchar_value);

    /*!
     * @brief This function returns the value of member wchar_value
     * @return Value of member wchar_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI wchar_t wchar_value() const;

    /*!
     * @brief This function returns a reference to member wchar_value
     * @return Reference to member wchar_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI wchar_t& wchar_value();
    /*!
     * @brief This function sets a value in member enumerated_value
     * @param _enumerated_value New value for member enumerated_value
     */
    RTPS_DllAPI void enumerated_value(
            int32_t _enumerated_value);

    /*!
     * @brief This function returns the value of member enumerated_value
     * @return Value of member enumerated_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI int32_t enumerated_value() const;

    /*!
     * @brief This function returns a reference to member enumerated_value
     * @return Reference to member enumerated_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI int32_t& enumerated_value();
    /*!
     * @brief This function copies the value in member string8_value
     * @param _string8_value New value to be copied in member string8_value
     */
    RTPS_DllAPI void string8_value(
            const std::string& _string8_value);

    /*!
     * @brief This function moves the value in member string8_value
     * @param _string8_value New value to be moved in member string8_value
     */
    RTPS_DllAPI void string8_value(
            std::string&& _string8_value);

    /*!
     * @brief This function returns a constant reference to member string8_value
     * @return Constant reference to member string8_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI const std::string& string8_value() const;

    /*!
     * @brief This function returns a reference to member string8_value
     * @return Reference to member string8_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI std::string& string8_value();
    /*!
     * @brief This function copies the value in member string16_value
     * @param _string16_value New value to be copied in member string16_value
     */
    RTPS_DllAPI void string16_value(
            const std::wstring& _string16_value);

    /*!
     * @brief This function moves the value in member string16_value
     * @param _string16_value New value to be moved in member string16_value
     */
    RTPS_DllAPI void string16_value(
            std::wstring&& _string16_value);

    /*!
     * @brief This function returns a constant reference to member string16_value
     * @return Constant reference to member string16_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI const std::wstring& string16_value() const;

    /*!
     * @brief This function returns a reference to member string16_value
     * @return Reference to member string16_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI std::wstring& string16_value();

    /*!
     * @brief This function copies the value in member extended_value
     * @param _extended_value New value to be copied in member extended_value
     */
    RTPS_DllAPI void extended_value(
            const ExtendedAnnotationParameterValue& _extended_value);

    /*!
     * @brief This function moves the value in member extended_value
     * @param _extended_value New value to be moved in member extended_value
     */
    RTPS_DllAPI void extended_value(
            ExtendedAnnotationParameterValue&& _extended_value);

    /*!
     * @brief This function returns a constant reference to member extended_value
     * @return Constant reference to member extended_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI const ExtendedAnnotationParameterValue& extended_value() const;

    /*!
     * @brief This function returns a reference to member extended_value
     * @return Reference to member extended_value
     * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
     */
    RTPS_DllAPI ExtendedAnnotationParameterValue& extended_value();

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const AnnotationParameterValue& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    RTPS_DllAPI static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    RTPS_DllAPI static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

    RTPS_DllAPI bool operator ==(
            const AnnotationParameterValue& other) const;

    /**
     * Aux method to return value as its string representation.
     */
    RTPS_DllAPI std::string to_string() const
    {
        switch (m__d)
        {
            case TK_BOOLEAN:
                return (m_boolean_value) ? "true" : "false";
            case TK_BYTE:
                return std::to_string(m_byte_value);
            case TK_INT16:
                return std::to_string(m_int16_value);
            case TK_UINT16:
                return std::to_string(m_uint_16_value);
            case TK_INT32:
                return std::to_string(m_int32_value);
            case TK_UINT32:
                return std::to_string(m_uint32_value);
            case TK_INT64:
                return std::to_string(m_int64_value);
            case TK_UINT64:
                return std::to_string(m_uint64_value);
            case TK_FLOAT32:
                return std::to_string(m_float32_value);
            case TK_FLOAT64:
                return std::to_string(m_float64_value);
            case TK_FLOAT128:
                return std::to_string(m_float128_value);
            case TK_CHAR8:
                return std::to_string(m_char_value);
            case TK_CHAR16:
                return std::to_string(m_wchar_value);
            case TK_ENUM:
                return std::to_string(m_enumerated_value);
            case TK_STRING16:
            {
                return wstring_to_bytes(m_string16_value);
            }
            case TK_STRING8:
            case TK_NONE: // Cheat!
                return m_string8_value;
            default:
                return "";
        }
    }

    /**
     * Aux method to set value from its string representation.
     */
    RTPS_DllAPI void from_string(
            const std::string& value)
    {
        switch (m__d)
        {
            case TK_BOOLEAN:
            {
                std::string val_ = value;
                std::transform(val_.begin(), val_.end(), val_.begin(),
                        [](unsigned char c)
                        {
                            return static_cast<char>(std::tolower(c));
                        });
                boolean_value(val_.compare("0") != 0 || val_.compare(CONST_TRUE) == 0);
            }
            break;
            case TK_BYTE:
            {
                byte_value(static_cast<uint8_t>(std::stoul(value)));
            }
            break;
            case TK_INT16:
            {
                int16_value(static_cast<int16_t>(std::stoi(value)));
            }
            break;
            case TK_INT32:
            {
                int32_value(static_cast<int32_t>(std::stoi(value)));
            }
            break;
            case TK_INT64:
            {
                int64_value(static_cast<int64_t>(std::stoll(value)));
            }
            break;
            case TK_UINT16:
            {
                uint_16_value(static_cast<uint16_t>(std::stoul(value)));
            }
            break;
            case TK_UINT32:
            {
                uint32_value(static_cast<uint32_t>(std::stoul(value)));
            }
            break;
            case TK_UINT64:
            {
                uint64_value(static_cast<uint64_t>(std::stoull(value)));
            }
            break;
            case TK_FLOAT32:
            {
                float32_value(std::stof(value));
            }
            break;
            case TK_FLOAT64:
            {
                float64_value(std::stod(value));
            }
            break;
            case TK_FLOAT128:
            {
                float128_value(std::stold(value));
            }
            break;
            case TK_CHAR8:
            {
                char_value(value.c_str()[0]);
            }
            break;
            case TK_CHAR16:
            {
                wchar_value(wstring_from_bytes(value).c_str()[0]);
            }
            break;
            case TK_STRING8:
            case TK_NONE: // Cheat!
            {
                string8_value(value);
            }
            break;
            case TK_STRING16:
            {
                string16_value(wstring_from_bytes(value));
            }
            break;
            case TK_ENUM:
            {
                // TODO Translate from enum value name to integer value
                enumerated_value(static_cast<int32_t>(std::stoul(value)));
            }
            break;
            default:
                break;
        }
    }

private:

    char m__d;

    bool m_boolean_value;
    uint8_t m_byte_value;
    int16_t m_int16_value;
    uint16_t m_uint_16_value;
    int32_t m_int32_value;
    uint32_t m_uint32_value;
    int64_t m_int64_value;
    uint64_t m_uint64_value;
    float m_float32_value;
    double m_float64_value;
    long double m_float128_value;
    char m_char_value;
    wchar_t m_wchar_value;
    int32_t m_enumerated_value;
    std::string m_string8_value;
    std::wstring m_string16_value;
    ExtendedAnnotationParameterValue m_extended_value;
};

/*!
 * @brief This class represents the structure AppliedAnnotationParameter defined by the user in the IDL file.
 * @ingroup ANNOTATIONPARAMETERVALUE
 */
class AppliedAnnotationParameter
{
public:

    /*!
     * @brief Default constructor.
     */
    RTPS_DllAPI AppliedAnnotationParameter();

    /*!
     * @brief Default destructor.
     */
    RTPS_DllAPI ~AppliedAnnotationParameter();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object AppliedAnnotationParameter that will be copied.
     */
    RTPS_DllAPI AppliedAnnotationParameter(
            const AppliedAnnotationParameter& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object AppliedAnnotationParameter that will be copied.
     */
    RTPS_DllAPI AppliedAnnotationParameter(
            AppliedAnnotationParameter&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object AppliedAnnotationParameter that will be copied.
     */
    RTPS_DllAPI AppliedAnnotationParameter& operator =(
            const AppliedAnnotationParameter& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object AppliedAnnotationParameter that will be copied.
     */
    RTPS_DllAPI AppliedAnnotationParameter& operator =(
            AppliedAnnotationParameter&& x);

    /*!
     * @brief This function copies the value in member paramname_hash
     * @param _paramname_hash New value to be copied in member paramname_hash
     */
    inline void paramname_hash(
            const NameHash& _paramname_hash)
    {
        m_paramname_hash = _paramname_hash;
    }

    /*!
     * @brief This function moves the value in member paramname_hash
     * @param _paramname_hash New value to be moved in member paramname_hash
     */
    inline void paramname_hash(
            NameHash&& _paramname_hash)
    {
        m_paramname_hash = std::move(_paramname_hash);
    }

    /*!
     * @brief This function returns a constant reference to member paramname_hash
     * @return Constant reference to member paramname_hash
     */
    inline const NameHash& paramname_hash() const
    {
        return m_paramname_hash;
    }

    /*!
     * @brief This function returns a reference to member paramname_hash
     * @return Reference to member paramname_hash
     */
    inline NameHash& paramname_hash()
    {
        return m_paramname_hash;
    }

    /*!
     * @brief This function copies the value in member value
     * @param _value New value to be copied in member value
     */
    inline void value(
            const AnnotationParameterValue& _value)
    {
        m_value = _value;
    }

    /*!
     * @brief This function moves the value in member value
     * @param _value New value to be moved in member value
     */
    inline void value(
            AnnotationParameterValue&& _value)
    {
        m_value = std::move(_value);
    }

    /*!
     * @brief This function returns a constant reference to member value
     * @return Constant reference to member value
     */
    inline const AnnotationParameterValue& value() const
    {
        return m_value;
    }

    /*!
     * @brief This function returns a reference to member value
     * @return Reference to member value
     */
    inline AnnotationParameterValue& value()
    {
        return m_value;
    }

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    RTPS_DllAPI static size_t getCdrSerializedSize(
            const AppliedAnnotationParameter& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    RTPS_DllAPI static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    RTPS_DllAPI static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    RTPS_DllAPI void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

    RTPS_DllAPI bool operator ==(
            const AppliedAnnotationParameter& other) const;

private:

    NameHash m_paramname_hash;
    AnnotationParameterValue m_value;
};


// The application of an annotation to some type or type member
/*struct AppliedAnnotationParameter {
    NameHash                  paramname_hash;
    AnnotationParameterValue  value;
   };*/
/*
   class AppliedAnnotationParameter
   {
   public:
    AppliedAnnotationParameter();
    ~AppliedAnnotationParameter();
    AppliedAnnotationParameter(const AppliedAnnotationParameter &x);
    AppliedAnnotationParameter(AppliedAnnotationParameter &&x);
    AppliedAnnotationParameter& operator=(const AppliedAnnotationParameter &x);
    AppliedAnnotationParameter& operator=(AppliedAnnotationParameter &&x);

    inline void paramname_hash(const NameHash &_paramname_hash) { m_paramname_hash = _paramname_hash; }
    inline void paramname_hash(NameHash &&_paramname_hash) { m_paramname_hash = std::move(_paramname_hash); }
    inline const NameHash& paramname_hash() const { return m_paramname_hash; }
    inline NameHash& paramname_hash() { return m_paramname_hash; }

    inline void value(const AnnotationParameterValue &_value) { m_value = _value; }
    inline void value(AnnotationParameterValue &&_value) { m_value = std::move(_value); }
    inline const AnnotationParameterValue& value() const { return m_value; }
    inline AnnotationParameterValue& value() { return m_value; }

    static size_t getCdrSerializedSize(const AppliedAnnotationParameter& data, size_t current_alignment = 0);
    void serialize(eprosima::fastcdr::Cdr &cdr) const;
    void deserialize(eprosima::fastcdr::Cdr &cdr);
    static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);
    static bool isKeyDefined();
    void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

   private:
    NameHash m_paramname_hash;
    AnnotationParameterValue m_value;
   };
 */
// Sorted by AppliedAnnotationParameter.paramname_hash
typedef std::vector<AppliedAnnotationParameter> AppliedAnnotationParameterSeq;

/*struct AppliedAnnotation {
    TypeIdentifier                     annotation_typeid;
    AppliedAnnotationParameterSeq   param_seq;  // @Optional
   };*/
class AppliedAnnotation
{
public:

    RTPS_DllAPI AppliedAnnotation();

    RTPS_DllAPI ~AppliedAnnotation();

    RTPS_DllAPI AppliedAnnotation(
            const AppliedAnnotation& x);

    RTPS_DllAPI AppliedAnnotation(
            AppliedAnnotation&& x);
    RTPS_DllAPI AppliedAnnotation& operator =(
            const AppliedAnnotation& x);
    RTPS_DllAPI AppliedAnnotation& operator =(
            AppliedAnnotation&& x);

    inline void annotation_typeid(
            const TypeIdentifier& _annotation_typeid)
    {
        m_annotation_typeid = _annotation_typeid;
    }

    inline void annotation_typeid(
            TypeIdentifier&& _annotation_typeid)
    {
        m_annotation_typeid = std::move(_annotation_typeid);
    }

    inline const TypeIdentifier& annotation_typeid() const
    {
        return m_annotation_typeid;
    }

    inline TypeIdentifier& annotation_typeid()
    {
        return m_annotation_typeid;
    }

    inline void param_seq(
            const AppliedAnnotationParameterSeq& _param_seq)
    {
        m_param_seq = _param_seq;
    }

    inline void param_seq(
            AppliedAnnotationParameterSeq&& _param_seq)
    {
        m_param_seq = std::move(_param_seq);
    }

    inline const AppliedAnnotationParameterSeq& param_seq() const
    {
        return m_param_seq;
    }

    inline AppliedAnnotationParameterSeq& param_seq()
    {
        return m_param_seq;
    }

    RTPS_DllAPI static size_t getCdrSerializedSize(
            const AppliedAnnotation& data,
            size_t current_alignment = 0);
    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;
    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);
    RTPS_DllAPI static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);
    RTPS_DllAPI static bool isKeyDefined();
    RTPS_DllAPI void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

    RTPS_DllAPI bool operator ==(
            const AppliedAnnotation& other) const;

private:

    TypeIdentifier m_annotation_typeid;
    AppliedAnnotationParameterSeq m_param_seq;
};

// Sorted by AppliedAnnotation.annotation_typeid
typedef std::vector<AppliedAnnotation> AppliedAnnotationSeq;

// @verbatim(placement="<placement>", language="<lang>", text="<text>")
/*struct AppliedVerbatimAnnotation {
    std::string placement; // 32
    std::string language; // 32
    std::string     text;
   };*/
class AppliedVerbatimAnnotation
{
public:

    RTPS_DllAPI AppliedVerbatimAnnotation();

    RTPS_DllAPI ~AppliedVerbatimAnnotation();

    RTPS_DllAPI AppliedVerbatimAnnotation(
            const AppliedVerbatimAnnotation& x);

    RTPS_DllAPI AppliedVerbatimAnnotation(
            AppliedVerbatimAnnotation&& x);

    RTPS_DllAPI AppliedVerbatimAnnotation& operator =(
            const AppliedVerbatimAnnotation& x);

    RTPS_DllAPI AppliedVerbatimAnnotation& operator =(
            AppliedVerbatimAnnotation&& x);

    inline void placement(
            const std::string& _placement)
    {
        m_placement = _placement;
    }

    inline void placement(
            std::string&& _placement)
    {
        m_placement = std::move(_placement);
    }

    inline const std::string& placement() const
    {
        return m_placement;
    }

    inline std::string& placement()
    {
        return m_placement;
    }

    inline void language(
            const std::string& _language)
    {
        m_language = _language;
    }

    inline void language(
            std::string&& _language)
    {
        m_language = std::move(_language);
    }

    inline const std::string& language() const
    {
        return m_language;
    }

    inline std::string& language()
    {
        return m_language;
    }

    inline void text(
            const std::string& _text)
    {
        m_text = _text;
    }

    inline void text(
            std::string&& _text)
    {
        m_text = std::move(_text);
    }

    inline const std::string& text() const
    {
        return m_text;
    }

    inline std::string& text()
    {
        return m_text;
    }

    RTPS_DllAPI static size_t getCdrSerializedSize(
            const AppliedVerbatimAnnotation& data,
            size_t current_alignment = 0);

    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    RTPS_DllAPI static bool isKeyDefined();

    RTPS_DllAPI void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

    RTPS_DllAPI bool operator ==(
            const AppliedVerbatimAnnotation& other) const;

private:

    std::string m_placement;
    std::string m_language;
    std::string m_text;
};

// --- Aggregate types: -----------------------------------------------
/*struct AppliedBuiltinMemberAnnotations {
    std::string                  unit; // @unit("<unit>") // @Optional
    AnnotationParameterValue min; // @min , @range // @Optional
    AnnotationParameterValue max; // @max , @range // @Optional
    std::string               hash_id; // @hash_id("<membername>") // @Optional
   };
 */
class AppliedBuiltinMemberAnnotations
{
public:

    RTPS_DllAPI AppliedBuiltinMemberAnnotations();

    RTPS_DllAPI ~AppliedBuiltinMemberAnnotations();

    RTPS_DllAPI AppliedBuiltinMemberAnnotations(
            const AppliedBuiltinMemberAnnotations& x);

    RTPS_DllAPI AppliedBuiltinMemberAnnotations(
            AppliedBuiltinMemberAnnotations&& x);

    RTPS_DllAPI AppliedBuiltinMemberAnnotations& operator =(
            const AppliedBuiltinMemberAnnotations& x);

    RTPS_DllAPI AppliedBuiltinMemberAnnotations& operator =(
            AppliedBuiltinMemberAnnotations&& x);

    inline void unit(
            const std::string& _unit)
    {
        m_unit = _unit;
    }

    inline void unit(
            std::string&& _unit)
    {
        m_unit = std::move(_unit);
    }

    inline const std::string& unit() const
    {
        return m_unit;
    }

    inline std::string& unit()
    {
        return m_unit;
    }

    inline void min(
            const AnnotationParameterValue& _min)
    {
        m_min = _min;
    }

    inline void min(
            AnnotationParameterValue&& _min)
    {
        m_min = std::move(_min);
    }

    inline const AnnotationParameterValue& min() const
    {
        return m_min;
    }

    inline AnnotationParameterValue& min()
    {
        return m_min;
    }

    inline void max(
            const AnnotationParameterValue& _max)
    {
        m_max = _max;
    }

    inline void max(
            AnnotationParameterValue&& _max)
    {
        m_max = std::move(_max);
    }

    inline const AnnotationParameterValue& max() const
    {
        return m_max;
    }

    inline AnnotationParameterValue& max()
    {
        return m_max;
    }

    inline void hash_id(
            const std::string& _hash_id)
    {
        m_hash_id = _hash_id;
    }

    inline void hash_id(
            std::string&& _hash_id)
    {
        m_hash_id = std::move(_hash_id);
    }

    inline const std::string& hash_id() const
    {
        return m_hash_id;
    }

    inline std::string& hash_id()
    {
        return m_hash_id;
    }

    RTPS_DllAPI static size_t getCdrSerializedSize(
            const AppliedBuiltinMemberAnnotations& data,
            size_t current_alignment = 0);

    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr& cdr);

    RTPS_DllAPI static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    RTPS_DllAPI static bool isKeyDefined();

    RTPS_DllAPI void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

    RTPS_DllAPI bool operator ==(
            const AppliedBuiltinMemberAnnotations& other) const;

private:

    std::string m_unit;
    AnnotationParameterValue m_min;
    AnnotationParameterValue m_max;
    std::string m_hash_id;
};


} // namespace types
} // namespace fastrtps
} // namespace eprosima

#if _MSC_VER

#if defined(FASTDDS_RESTORE_MIN)
#pragma pop_macro("min")
#undef FASTDDS_RESTORE_MIN
#endif // defined(FASTDDS_RESTORE_MIN)

#if defined(FASTDDS_RESTORE_MAX)
#pragma pop_macro("max")
#undef FASTDDS_RESTORE_MAX
#endif // defined(FASTDDS_RESTORE_MAX)

#endif // if _MSC_VER

#endif // _ANNOTATIONPARAMETERVALUE_H_
