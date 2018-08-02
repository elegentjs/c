#include<stdio.h>

/**
 * 打印输入的实数
 * 
 */
int main(int argc, char const *argv[])
{
    float i;

    printf ("请输入一个实数：");

    scanf("%f", &i);
    
    printf("您输入了%f \n", i);

    return 0;
}
