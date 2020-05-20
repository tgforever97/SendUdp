/**
  UDP server

  @project SendUDP
  @author WangMengYuan
  @since 2020/5/19
  @version v0.0.1 2020/5/19
*/

#ifndef SENDUDP_UDPSERVER_H
#define SENDUDP_UDPSERVER_H

#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

#define BUFSIZE 20

using std::string;
class UdpServer{

public:
    UdpServer(int port);

    UdpServer(UdpServer server);

    void startServer();

    void bandWidthServer();

    void freeAll();

    int genTestId();


private:
    std::atomic<int> nextTestId{0};
    struct sockaddr_in myAddr;
    struct sockaddr_in remAddr;
    int fd;
    uint8_t buffer[BUFSIZE];
};

#endif //SENDUDP_UDPSERVER_H
