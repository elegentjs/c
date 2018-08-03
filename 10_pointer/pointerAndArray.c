#include<stdio.h>

int main(int argc, char const *argv[])
{
    int vc[3] = {0};
    int *p = vc;


    printf("vc      : %p \n", vc);
    printf("&vc     : %p \n", &vc);
    printf("&vc[0]  : %p \n", &vc[0]);
    printf("p       : %p \n", p);
    printf("p + 1   : %p \n", p + 1);
    printf("p + 2   : %p \n", p + 2);
    printf("p + 3   : %p \n", p + 3);
    printf("p[0]    : %d \n", p[0]); // 等价于*(p + 0), 等于vc[0]
    printf("p[1]    : %d \n", p[1]);
    printf("p[2]    : %d \n", p[2]);
    printf("p[3]    : %d \n", p[3]);


    return 0;
}
