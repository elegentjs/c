#include<stdio.h>

/**
 * 计算n！
 *  
 *  递归的强大之处是可以用有限的描述来定义无限的想象。如果待处理
 * 的问题，函数或数据结构已经具有了递归定义，那就可以使用递归算法
 * 
 */

int factorial(int i) {
    if (i == 1) return 1;
    return i * factorial(i - 1);
}

int main(int argc, char const *argv[])
{
    puts("请输入一个正整数，我们将计算它的阶乘。");
    
    int i;

    scanf("%d", &i);

    int result = factorial(i);

    printf("%d的阶乘是：%d \n", i, result);

    return 0;
}
