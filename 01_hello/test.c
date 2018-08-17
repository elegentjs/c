#include<stdio.h>


int main(int argc, char const *argv[])
{
    int no;

    puts("请输入一个正整数：");
    scanf("%d", &no);

    printf("%d的个位数是：%d \n", no, no % 10);
    return 0;
}
