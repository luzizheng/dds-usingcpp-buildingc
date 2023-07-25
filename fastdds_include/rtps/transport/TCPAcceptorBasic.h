

#ifndef _FASTDDS_TCP_ACCEPTOR_BASIC_
#define _FASTDDS_TCP_ACCEPTOR_BASIC_

#include <rtps/transport/TCPAcceptor.h>
#include <rtps/transport/TCPChannelResourceBasic.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

/**
 * Plain TCP Socket acceptor wrapper class.
 */
class TCPAcceptorBasic : public TCPAcceptor
{
public:

    /**
     * Constructor
     * @param io_service Reference to the ASIO service.
     * @param parent Pointer to the transport that is going to manage the acceptor.
     * @param locator Locator with the information about where to accept connections.
     */
    TCPAcceptorBasic(
            asio::io_service& io_service,
            TCPTransportInterface* parent,
            const Locator& locator);

    /**
     * Constructor
     * @param io_service Reference to the ASIO service.
     * @param interface Network interface to bind the socket
     * @param locator Locator with the information about where to accept connections.
     */
    TCPAcceptorBasic(
            asio::io_service& io_service,
            const std::string& interface,
            const Locator& locator);

    /**
     * Destructor
     */
    virtual ~TCPAcceptorBasic()
    {
        acceptor_.cancel();
        acceptor_.close();
    }

    //! Method to start the accepting process.
    void accept(
            TCPTransportInterface* parent);

private:

    asio::ip::tcp::socket socket_;
};


} // namespace rtps
} // namespace fastdds
} // namespace eprosima

#endif // _FASTDDS_TCP_ACCEPTOR_BASIC_
