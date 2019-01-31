#include <stdio.h>

/**
 * 读取两个整数，输入它们的和以及乘积
 * 
 */
int main(int argc, char const *argv[])
{
    printf("请输入两个整数：\n");

    int i, j;

    printf("第一个：");
    scanf("%d", &i);

    printf("第二个：");
    scanf("%d", &j);
    
    printf("和：%d \n", i + j);
    printf("积：%d \n", i * j);

    return 0;
}
