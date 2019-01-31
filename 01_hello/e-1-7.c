#include <stdio.h>

/**
 * 从标准输入（keyboard）读取两个整数，并计算和打印它们的乘积
 */
int main(int argc, char const *argv[])
{
    puts("请输入两个整数：");

    int i, j, result;

    printf("请输入第一整数：");
    scanf("%d", &i);

    printf("请输入第二整数：");
    scanf("%d", &j);

    result = i * j;

    printf("乘积结果为：%d \n", result);

    return 0;
}
