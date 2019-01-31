#include <stdio.h>

/**
 * 
 * 读取整数，并显示加10后的结果
 */
int main() {
    int i;
    printf("请输入一个整数：\n");

    scanf("%d", &i);

    printf("加10后的结果是： %d \n", i + 10);

    return 0;
}