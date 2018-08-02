#include<stdio.h>

/**
 * 输入身高（cm）打印标准体重
 * 
 */

// 声明计算体重函数原型
double weight(int);

int main(int argc, char const *argv[])
{
    puts("请输入您的身高（cm): ");
    int height;

    scanf("%d", &height);

    double w = weight(height);


    printf("您的标准体重是：%.1f \n", w);

    
    return 0;
}


double weight(int height) {
    return (height - 100) * 0.9;
}