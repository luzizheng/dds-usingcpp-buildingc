

#ifndef _FASTCDR_EXCEPTIONS_BADPARAMEXCEPTION_H_
#define _FASTCDR_EXCEPTIONS_BADPARAMEXCEPTION_H_

#include "Exception.h"

namespace eprosima {
namespace fastcdr {
namespace exception {
/*!
 * @brief This class is thrown as an exception when a invalid parameter was being serialized.
 * @ingroup EXCEPTIONMODULE
 */
class BadParamException : public Exception
{
public:

    /*!
     * @brief Default constructor.
     *
     * @param message A error message. This message pointer is copied.
     */
    Cdr_DllAPI BadParamException(
            const char* const& message) noexcept;

    /*!
     * @brief Default copy constructor.
     *
     * @param ex BadParamException that will be copied.
     */
    Cdr_DllAPI BadParamException(
            const BadParamException& ex) noexcept;

#if HAVE_CXX0X
    /*!
     * @brief Default move constructor.
     *
     * @param ex BadParamException that will be moved.
     */
    Cdr_DllAPI BadParamException(
            BadParamException&& ex) noexcept;
#endif // if HAVE_CXX0X

    /*!
     * @brief Assigment operation.
     *
     * @param ex BadParamException that will be copied.
     */
    Cdr_DllAPI BadParamException& operator =(
            const BadParamException& ex) noexcept;

#if HAVE_CXX0X
    /*!
     * @brief Assigment operation.
     *
     * @param ex BadParamException that will be moved.
     */
    BadParamException& operator =(
            BadParamException&& ex) noexcept;
#endif // if HAVE_CXX0X

    //! @brief Default constructor
    virtual Cdr_DllAPI ~BadParamException() noexcept;

    //! @brief This function throws the object as exception.
    virtual Cdr_DllAPI void raise() const;

    //! @brief Default message used in the library.
    static Cdr_DllAPI const char* const BAD_PARAM_MESSAGE_DEFAULT;
};
}         //namespace exception
}     //namespace fastcdr
} //namespace eprosima
#endif // _FASTCDR_EXCEPTIONS_BADPARAMEXCEPTION_H_
