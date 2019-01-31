#include "stdio.h"

/**
 * 演示初始化为null指针
 */
int main(int argc, char const *argv[])
{
    int foo = 5;
    int *p = NULL;

    printf("指针赋值之前：%p \n", p);
    p = &foo;

    printf("指针赋值之后：%p \n", p);
    return 0;
}
