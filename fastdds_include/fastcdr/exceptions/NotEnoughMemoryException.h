

#ifndef _FASTCDR_EXCEPTIONS_NOTENOUGHMEMORYEXCEPTION_H_
#define _FASTCDR_EXCEPTIONS_NOTENOUGHMEMORYEXCEPTION_H_

#include "Exception.h"

namespace eprosima {
namespace fastcdr {
namespace exception {
/*!
 * @brief This class is thrown as an exception when the buffer's internal memory reachs its size limit.
 * @ingroup EXCEPTIONMODULE
 */
class NotEnoughMemoryException : public Exception
{
public:

    /*!
     * @brief Default constructor.
     *
     * @param message A error message. This message pointer is copied.
     */
    Cdr_DllAPI NotEnoughMemoryException(
            const char* const& message) noexcept;

    /*!
     * @brief Default copy constructor.
     *
     * @param ex NotEnoughMemoryException that will be copied.
     */
    Cdr_DllAPI NotEnoughMemoryException(
            const NotEnoughMemoryException& ex) noexcept;

#if HAVE_CXX0X
    /*!
     * @brief Default move constructor.
     *
     * @param ex NotEnoughMemoryException that will be moved.
     */
    Cdr_DllAPI NotEnoughMemoryException(
            NotEnoughMemoryException&& ex) noexcept;
#endif // if HAVE_CXX0X

    /*!
     * @brief Assigment operation.
     *
     * @param ex NotEnoughMemoryException that will be copied.
     */
    Cdr_DllAPI NotEnoughMemoryException& operator =(
            const NotEnoughMemoryException& ex) noexcept;

#if HAVE_CXX0X
    /*!
     * @brief Assigment operation.
     *
     * @param ex NotEnoughMemoryException that will be moved.
     */
    Cdr_DllAPI NotEnoughMemoryException& operator =(
            NotEnoughMemoryException&& ex) noexcept;
#endif // if HAVE_CXX0X

    //! @brief Default constructor
    virtual Cdr_DllAPI ~NotEnoughMemoryException() noexcept;

    //! @brief This function throws the object as exception.
    virtual Cdr_DllAPI void raise() const override;

    //! @brief Default message used in the library.
    static Cdr_DllAPI const char* const NOT_ENOUGH_MEMORY_MESSAGE_DEFAULT;
};
}         //namespace exception
}     //namespace fastcdr
} //namespace eprosima
#endif // _FASTCDR_EXCEPTIONS_NOTENOUGHMEMORYEXCEPTION_H_
