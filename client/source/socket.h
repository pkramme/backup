#ifndef __SOCKET_H_INCLUDED__
#define __SOCKET_H_INCLUDED__

#include<boost/asio.hpp>
#include<cstdlib>

void socket(char ip, unsigned short port)
{
     boost::asio::io_service ioService;
     boost::asio::ip::tcp::endpoint server(boost::asio::ip::address::from_string(argv[1]), port);
     boost::asio::ip::tcp::socket socket(ioService);
     socket.connect(server);
     std::cout << "LOCAL ENDPOINT: " << socket.local_endpoint() << std::endl;
     std::cout << "CONNECT WITH... " << socket.remote_endpoint() << " ...connected" << std::endl;
     int bufferwidth = 80;
     char buffer[bufferwidth + 1];
     int current_bytes = socket.read_some(boost::asio::buffer(buffer, bufferwidth));
     buffer[current_bytes] = '\0';
     std::cout << buffer << std::endl;
}

#endif
