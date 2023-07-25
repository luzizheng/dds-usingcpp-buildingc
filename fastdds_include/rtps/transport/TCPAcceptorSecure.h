

#ifndef _FASTDDS_TCP_ACCEPTOR_SECURE_
#define _FASTDDS_TCP_ACCEPTOR_SECURE_

#define OPENSSL_API_COMPAT 10101

#include <asio/ssl.hpp>
#include <rtps/transport/TCPAcceptor.h>
#include <rtps/transport/TCPChannelResourceSecure.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

/**
 * TLS TCP Socket acceptor wrapper class.
 */
class TCPAcceptorSecure : public TCPAcceptor
{
public:

    /**
     * Constructor
     * @param io_service Reference to the ASIO service.
     * @param parent Pointer to the transport that is going to manage the acceptor.
     * @param locator Locator with the information about where to accept connections.
     */
    TCPAcceptorSecure(
            asio::io_service& io_service,
            TCPTransportInterface* parent,
            const Locator& locator);

    /**
     * Constructor
     * @param io_service Reference to the ASIO service.
     * @param interface Network interface to bind the socket
     * @param locator Locator with the information about where to accept connections.
     */
    TCPAcceptorSecure(
            asio::io_service& io_service,
            const std::string& interface,
            const Locator& locator);

    /**
     * Destructor
     */
    virtual ~TCPAcceptorSecure()
    {
        acceptor_.cancel();
        acceptor_.close();
    }

    //! Method to start the accepting process.
    void accept(
            TCPTransportInterface* parent,
            asio::ssl::context&);

};


} // namespace rtps
} // namespace fastdds
} // namespace eprosima

#endif // _FASTDDS_TCP_ACCEPTOR_SECURE_
