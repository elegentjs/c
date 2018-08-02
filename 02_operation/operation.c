#include<stdio.h>


/**
 * 读取两个整数的值，并依次计算它们的和，差，积，商和余数
 * 
 */
int main(int argc, char const *argv[])
{
    puts("请输入两个整数值：");

    int i, j;

    printf("第一个: ");
    scanf("%d", &i);
    printf("第二个: ");
    scanf("%d", &j);

    printf("和：%d \n", i + j);
    printf("差：%d \n", i - j);
    printf("积：%d \n", i * j);
    printf("商：%d \n", i / j);
    printf("余：%d \n", i % j);

    return 0;
}
