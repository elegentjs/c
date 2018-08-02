#include<stdio.h>


int main(int argc, char const *argv[])
{
    puts("请输入一个整数：");

    int i;
    scanf("%d", &i);

    if (i <= 0) {
        return 0;
    }

    while(i--) {
        puts("*");
    }

    return 0;
}
