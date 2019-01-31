#include <stdio.h>

/**
 *  计算输入的三个数值中最小的并打印
 */
int main(int argc, char const *argv[])
{
    puts("请输入三个整数");
    
    int i, j, k;

    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &k);

    int result = i > j ? i : j;
    result = k > result ? k : result;

    printf("三个数%d, %d, %d 中最大的是：%d  \n", i, j, k, result);

    return 0;
}
