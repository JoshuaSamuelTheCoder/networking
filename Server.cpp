#include <boost/lexical_cast.hpp>
#include <boost/asio.hpp>

int main()
{
	boost::asio::io_service;

	boost::asio::io::tcp::acceptor(io_service, boost::asio::io::tcp::endpoint(boost::asio::io::tcp::v4(), 3341));

	boost::asio::io::tcp::socket socket(io_service);

	acceptor.accept(socket);

	boost::system::error_code ignored_error;

	boost::asio::write(socket, boost::asio::buffer("01-28-1999"), ignored_error);
}
