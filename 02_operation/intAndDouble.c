#include <stdio.h>

/**
 *  整数和浮点数演示    
 *  
 *  浮点型 %f 默认显示小数点后六位
 * 
 *  45 -> 表示整型常量
 *  45.0 -> double常量
 * 
 *  这个跟java中是一样的
 * 
 */
int main(int argc, char const *argv[])
{
    int i;
    double j;

    i = 9.99;
    j = 9.99;

    printf("int值： %d \n", i);
    printf("int值／2： %d \n", i / 2);

    printf("double值： %f \n", j);
    printf("double值／2： %f \n", j / 2);
    
    return 0;
}
