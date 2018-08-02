#include<stdio.h>

/**
 * 
 * 从输入的整数开始打印，直到1
 * 
 */
int main(int argc, char const *argv[])
{
    puts("请输入一个正整数：");
    
    int i;

    scanf("%d", &i);

    while(i >= 1) {
        printf("%5d", i --);
    }

    putchar('\n');

    return 0;
}
