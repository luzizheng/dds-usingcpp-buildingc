

#ifndef _FASTCDR_EXCEPTIONS_EXCEPTION_H_
#define _FASTCDR_EXCEPTIONS_EXCEPTION_H_

#include <fastcdr/fastcdr_dll.h>
#include <string>
#include <exception>

namespace eprosima {
namespace fastcdr {
namespace exception {
/*!
 * @brief This abstract class is used to create exceptions.
 * @ingroup EXCEPTIONMODULE
 */
class Exception : public std::exception
{
public:

    //! \brief Default destructor.
    virtual Cdr_DllAPI ~Exception() noexcept;

    //! \brief This function throws the object as exception.
    virtual Cdr_DllAPI void raise() const = 0;

    /*!
     * @brief This function returns the error message.
     *
     * @return The error message.
     */
    virtual Cdr_DllAPI const char* what() const noexcept override;

protected:

    /*!
     * @brief Default constructor.
     *
     * @param message A error message. This message pointer is copied.
     */
    Cdr_DllAPI Exception(
            const char* const& message) noexcept;

    /*!
     * @brief Default copy constructor.
     *
     * @param ex Exception that will be copied.
     */
    Cdr_DllAPI Exception(
            const Exception& ex) noexcept;

#if HAVE_CXX0X
    /*!
     * @brief Default move constructor.
     *
     * @param ex Exception that will be moved.
     */
    Cdr_DllAPI Exception(
            Exception&& ex) noexcept;
#endif // if HAVE_CXX0X

    /*!
     * @brief Assigment operation.
     *
     * @param ex Exception that will be copied.
     */
    Cdr_DllAPI Exception& operator =(
            const Exception& ex) noexcept;

#if HAVE_CXX0X
    /*!
     * @brief Assigment operation.
     *
     * @param ex Exception that will be moved.
     */
    Cdr_DllAPI Exception& operator =(
            Exception&&) noexcept;
#endif // if HAVE_CXX0X

private:

    const char* m_message;
};
}         //namespace exception
}     //namespace fastcdr
} //namespace eprosima

#endif // _FASTCDR_EXCEPTIONS_EXCEPTION_H_
