#include<stdio.h>

/**
 * 创建一个函数，返回三个int值中较小的值
 */

int minOf(int, int, int);

int main(int argc, char const *argv[])
{
    puts("请输入三个整数，程序将打印出最小的一个。");
    
    int x, y, z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("%d, %d, %d, 最小的一个是： %d  \n", x, y, z, minOf(x, y, z));

    return 0;
}

int minOf(int x, int y, int z) {
    int temp = x > y ? y : x;

    return temp > z ? z : temp;
}
