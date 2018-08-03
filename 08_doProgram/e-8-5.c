#include<stdio.h>

int main(int argc, char const *argv[])
{
     puts("请输入一个正整数，我们将计算它的阶乘。");
    
    int i;

    scanf("%d", &i);

    int result = 1;
    for (; i >= 1; i --) {
        result *= i;
    }

    printf("%d的阶乘是：%d \n", i, result);
    
    return 0;
}
