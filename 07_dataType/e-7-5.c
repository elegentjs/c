#include <stdio.h>

/**
 * 本程序演示数据溢出
 * short range: -32768 ~ 32767
 * unsigned short range: 0 ~ 65535
 *
 * 结论：对于有符号整数的溢出，结果不可预知，由编译器决定
 *      对于无符号整数的溢出，结果可预知，为余数
 *
 */
int main(int argc, char const *argv[])
{
    // short range: -32768 ~ 32767
    // unsigned short range: 0 ~ 65535

    short i = 30000;
    short j = 3000;
    short k;

    k = i + j;

    // 对于有符号整数的溢出，结果不可预知，由编译器决定
    printf("k = %d \n", k); // -32536

    unsigned short x = 60000;
    unsigned short y = 6000;
    unsigned short z;

    z = x + y;

    // 对于无符号整型的溢出，是打印 66000 % 65536
    printf("z = %d \n", z); // 464
    
    return 0;
}
