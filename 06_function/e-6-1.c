#include<stdio.h>

/**
 * 创建一个函数，返回两个int值中较小的值
 */

int minOf(int, int);

int main(int argc, char const *argv[])
{
    puts("请输入两个整数，程序将打印出较小的一个。");
    
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("%d, %d, 较小的一个是： %d  \n", x, y , minOf(x, y));

    return 0;
}

int minOf(int x, int y) {
    return x > y ? y : x;
}
