#include<stdio.h>

/**
 *  函数与函数式宏的区别
 *  
 *  函数式宏是在编译期展开并填入程序的
 * 
 *  而函数定义需要为每个形参都定义各自的数据类型，返回类型也只能为一种
 *  
 *  函数为我们做了一些复杂处理：
 *   1）参数传递（将实参复制到形参）
 *   2）函数调用和返回操作
 *   3）返回值的传递
 * 
 *  在使用函数式宏时一定要考虑是否会产生副作用
 * 
 */


#define sqrt(x) ((x) * (x))

int main(int argc, char const *argv[])
{
    puts("请输入一个整数和浮点数，程序将分别计算他们的平方");
    
    int i;
    double j;

    printf("请输入一个整数：");
    scanf("%d", &i);

    printf("请输入一个浮点数：");
    scanf("%lf", &j);

    printf("sqrt of %d : %d \n", i, sqrt(i));
    printf("sqrt of %.2lf : %.2lf \n", j, sqrt(j));

    return 0;
}
