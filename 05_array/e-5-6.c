#include <stdio.h>

/**
 * 将一个浮点型数据赋值给整型，会丢失精度
 * %f 默认会保留小数点后6位
 */
int main(int argc, char const *argv[])
{
    double a;
    int b;

    a = b = 1.5;

    printf("a: %lf \n", a);
    printf("b: %d \n", b);

    return 0;
}
