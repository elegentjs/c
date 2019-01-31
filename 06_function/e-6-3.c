#include <stdio.h>

/**
 * 创建一个函数，返回int型参数的立方
 */

int cube(int);

int main(int argc, char const *argv[])
{
    puts("请输入一个整数，程序将计算它的立方。");
    
    int x;

    scanf("%d", &x);

    printf("%d的立方是： %d  \n", x, cube(x));

    return 0;
}

/**
 * 计算指定int值的立方
 */
int cube(int x) {
    return x * x * x;
}
