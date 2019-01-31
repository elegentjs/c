#include <stdio.h>


/**
 *  演示puts函数的使用
 *  puts用来打印字符串至控制台，但不能做字符串格式化。puts("....")作用相当于 printf("....\n")
 *  可以自动加上换行符
 */
int main() {
    puts("请输入两个整数：");

    int i, j, result;

    printf("整数1: ");
    scanf("%d", &i);

    printf("整数2: ");
    scanf("%d", &j);

    result = i + j;

    printf("它们的和是： %d. \n", result);

    return 0;
}