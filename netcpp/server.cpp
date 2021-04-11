/*
 * @Descripttion: 
 * @version: 
 * @Author: Yueyang
 * @email: 1700695611@qq.com
 * @Date: 2021-04-11 13:18:00
 * @LastEditors: Yueyang
 * @LastEditTime: 2021-04-11 13:23:29
 */
#include "tcp_net_socket.h"

int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        printf("usage:./servertcp  ip  port\n");
        exit(-1);
    }
    Socket s(argv[1],atoi(argv[2]));
    int fd=s.Accept();
    while(1) //用while循环表示可以与多个客户端接收和发送，但仍是阻塞模式的
    {
    char buf[512] = {0};
    if(recv(fd, buf, sizeof(buf), 0) == -1)//从cfd客户端接收数据存于buf中
    {
        perror("recv");
        exit(-1);
    }
    puts(buf);
    if(send(fd, "hello world", 12, 0) == -1)//从buf中取向cfd客户端发送数据
    {
        perror("send");
        exit(-1);
    }
    }
}