/*
 * @Descripttion: 
 * @version: 
 * @Author: Yueyang
 * @email: 1700695611@qq.com
 * @Date: 2021-04-11 12:59:13
 * @LastEditors: Yueyang
 * @LastEditTime: 2021-04-11 13:16:37
 */
#include "tcp_net_socket.h"

int main(int argc, char* argv[])
{
    Socket s=Socket();
    int sfd= s.Connect(argv[1],atoi(argv[2]));
    char buf[512] = {0};
    send(sfd, "hello", 6, 0);     //向sfd服务端发送数据
    recv(sfd, buf, sizeof(buf), 0); //从sfd服务端接收数据
    puts(buf);
    close(sfd);
    
}