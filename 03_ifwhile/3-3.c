#include <stdio.h>

/**
 * 正数的绝对值是它本身，负数的绝对值是对应的正数
 */
int main(int argc, char const *argv[])
{
    
    puts("请输入一个整数，将输出它的绝对值：");

    int i, result;
    
    scanf("%d", &i);

    if (i < 0) {
        result = i * -1;
    } else {
        result = i;
    }

    printf("%d的绝对值是：%d \n", i, result);

    return 0;
}
