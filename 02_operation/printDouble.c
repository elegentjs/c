#include<stdio.h>

/**
 * 打印输入的实数
 * 
 */
int main(int argc, char const *argv[])
{
    double i;

    printf ("请输入一个实数：");

    scanf("%lf", &i);
    
    printf("您输入了%lf \n", i);

    return 0;
}
