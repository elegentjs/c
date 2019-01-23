#include<stdio.h>

/**
 * 输入两个整数，打印第一数是第二数的百分比，不保留小数点
 */
int main(int argc, char const *argv[])
{
    puts("请输入两个整数，打印第一个数是第二个数的百分比。");   

    int i, j;

    printf("第一个数：");
    scanf("%d", &i);
    
    printf("第二个数：");
    scanf("%d", &j);

    printf("百分比：%.0f %%\n", (i * 1.0  / j) * 100);

    return 0;
}
