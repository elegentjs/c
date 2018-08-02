#include<stdio.h>

/**
 * 显示小于输入整数的所有二的乘方
 * 
 */
int main(int argc, char const *argv[])
{
    puts("请输入一个整数：");
    
    int i;

    scanf("%d", &i);

    for (int index = 2; index < i; index *= 2) {
        printf("%6d", index);
    }

    putchar('\n');

    return 0;
}
