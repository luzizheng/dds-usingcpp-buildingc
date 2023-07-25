/*!
 * @file SecurityException.h
 */
#ifndef _FASTDDS_RTPS_SECURITY_EXCEPTIONS_SECURITYEXCEPTION_H_
#define _FASTDDS_RTPS_SECURITY_EXCEPTIONS_SECURITYEXCEPTION_H_

#include <fastdds/rtps/exceptions/Exception.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

/**
 * @brief This class is thrown as an exception when there is an error in security module.
 * @ingroup EXCEPTIONMODULE
 */
class SecurityException : public Exception
{
    public:

        RTPS_DllAPI SecurityException() {}

        /**
         * @brief Default constructor.
         * @param message An error message. This message is copied.
         */
        RTPS_DllAPI SecurityException(const std::string& message) : Exception(message.c_str(), 1) {}

        /**
         * @brief Default copy constructor.
         * @param ex SecurityException that will be copied.
         */
        RTPS_DllAPI SecurityException(const SecurityException &ex);

        /**
         * @brief Default move constructor.
         * @param ex SecurityException that will be moved.
         */
        RTPS_DllAPI SecurityException(SecurityException&& ex);

        /**
         * @brief Assigment operation.
         * @param ex SecurityException that will be copied.
         */
        RTPS_DllAPI SecurityException& operator=(const SecurityException &ex);

        /**
         * @brief Assigment operation.
         * @param ex SecurityException that will be moved.
         */
        RTPS_DllAPI SecurityException& operator=(SecurityException&& ex);

        /// \brief Default constructor
        virtual RTPS_DllAPI ~SecurityException() throw();

        /// \brief This function throws the object as an exception.
        virtual RTPS_DllAPI void raise() const;
};
} // namespace security
} // namespace rtps
} // namespace fastrtps
} // namespace eprosima

#endif // _FASTDDS_RTPS_SECURITY_EXCEPTIONS_SECURITYEXCEPTION_H_
