#include<stdio.h>
#include<stdlib.h>
#include<netdb.h>
#include <arpa/inet.h>

int main(int argc, char const *argv[])
{
    puts("请输入域名地址，我们将获取它的ip地址信息：");

    char *domain = (char*)malloc(100 * sizeof(char));
    scanf("%s", domain);


    struct hostent *hostent =  gethostbyname(domain);
    
    // 主机的规范名
    char *name = hostent -> h_name;


    // ip 地址类型：ipv4; ipv6
    int addrType = hostent -> h_addrtype;
    // ip长度
    int length = hostent -> h_length;

    // ip地址
    char *ip = inet_ntoa(*(struct in_addr*)hostent -> h_addr_list[0]);

    printf("正式主机名： %s \n", name);
    printf("ip地址类型：%d \n", addrType);
    printf("ip长度：%d \n", length);
    printf("ip地址：%s \n", ip);

    return 0;
}
