#include "stdio.h"

/**
 * 本示例展示了指针的运算特性
 *  当 + 1时表示是指针当前地址 + 指针类型的位数（sizeof(int)）
 */
int main(int argc, char const *argv[])
{
    int foo;
    int *p = &foo;

    printf("p : %p \n", p);

    p++;

    printf("p : %p \n", p);
    printf("p : %p \n", p + 3);

    return 0;
}
