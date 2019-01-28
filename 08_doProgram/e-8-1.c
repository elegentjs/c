#include <stdio.h>

/**
 * 函数式宏，是在编译期间展开并填入程序的，跟宏定义类似
 * 
 */

#define diff(x, y) ((x) - (y))

int main(int argc, char const *argv[])
{
    int x = 1;
    int y = 10;

    printf("x - y = %d \n", diff(x, y));
    
    return 0;
}
