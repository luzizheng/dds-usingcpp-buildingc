

#ifndef _FASTDDS_TCP_ACCEPTOR_BASE_
#define _FASTDDS_TCP_ACCEPTOR_BASE_

#include <asio.hpp>
#include <fastdds/rtps/common/Locator.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

class TCPTransportInterface;

/**
 * Common class to wrap ASIO acceptors.
 */
class TCPAcceptor
{
protected:

    asio::ip::tcp::acceptor acceptor_;
    Locator locator_;
    asio::ip::tcp::endpoint endpoint_;
    std::vector<Locator> pending_out_locators_;
    asio::io_service* io_service_;

public:

    TCPAcceptor(
            asio::io_service& io_service,
            TCPTransportInterface* parent,
            const Locator& locator);

    TCPAcceptor(
            asio::io_service& io_service,
            const std::string& interface,
            const Locator& locator);

    const Locator& locator() const
    {
        return locator_;
    }

    Locator& locator()
    {
        return locator_;
    }

    virtual ~TCPAcceptor() = default;
};


} // namespace rtps
} // namespace fastdds
} // namespace eprosima

#endif // _FASTDDS_TCP_ACCEPTOR_BASE_
