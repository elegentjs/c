#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    double y;
    int z[3];

    printf("x 的地址：    %p \n", &x);
    printf("y 的地址：    %p \n", &y);
    printf("z 的地址：    %p \n", &z);
    printf("z[0]  的地址： %p \n", &z[0]);
    printf("z[1]  的地址： %p \n", &z[1]);
    printf("z[2]  的地址： %p \n", &z[2]);
    printf("z + 1 的地址： %p \n", &z + 1);

    return 0;
}
