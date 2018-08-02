#include<stdio.h>

/**
 * 读取三个整数，计算它们的和并打印它们的值
 * 
 */
int main(int argc, char const *argv[])
{
    int i, j, k, result;

    puts("请输入三个整数：");

    printf("请输入第一整数：");
    scanf("%d", &i);

    printf("请输入第二整数：");
    scanf("%d", &j);

    printf("请输入第三整数：");
    scanf("%d", &k);

    result = i + j + k;

    printf("它们的和为：%d \n", result);
    
    return 0;
}
