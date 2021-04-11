/*
 * @Descripttion: 
 * @version: 
 * @Author: Yueyang
 * @email: 1700695611@qq.com
 * @Date: 2021-04-11 12:25:09
 * @LastEditors: Yueyang
 * @LastEditTime: 2021-04-11 12:28:19
 */
#include "tcp_net_socket.h"
int main(int argc, char* argv[])
{
    if(argc < 3)
    {
    printf("usage:./clienttcp  ip  port\n");
    exit(-1);
    }
    int sfd = tcp_connect(argv[1],atoi(argv[2]));
    char buf[512] = {0};
    send(sfd, "hello", 6, 0);     //向sfd服务端发送数据
    recv(sfd, buf, sizeof(buf), 0); //从sfd服务端接收数据
    puts(buf);
    close(sfd);
}