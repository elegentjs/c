#include <stdio.h>

/**
 *  演示函数指针，引用函数名即为指向函数地址的指针
 *  函数指针的类型是函数原型的变体
 */

void print(int);

int main(int argc, char const *argv[])
{
    void (*f)(int) = print;

    f(1);

    return 0;
}

void print(int i) {
    printf("arg : %d \n", i);
}
