#include "stdio.h"

/**
 * 演示指针类型的重要性，当声明为空指针类型时，
 * 虽然可以给指针赋值，但获取内容时因为丢失了具体指针类型，
 * 编译器就无法得知获取多长地址的内容
 */
int main(int argc, char const *argv[])
{
    int foo = 5;
    void *p;

    p = &foo;

    // error: argument type void is incomplete
    // printf("*p: %d \n", *p);
    printf("*p: %d \n", *(int*)p);

    return 0;
}
