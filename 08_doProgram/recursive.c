#include<stdio.h>

/**
 * 计算n！
 */

int factorial(int i) {
    if (i == 1) return 1;
    return i * factorial(i - 1);
}

int main(int argc, char const *argv[])
{
    puts("请输入一个正整数，我们将计算它的阶乘。");
    
    int i;

    scanf("%d", &i);

    int result = factorial(i);

    printf("%d的阶乘是：%d \n", i, result);

    return 0;
}
