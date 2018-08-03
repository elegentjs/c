#include<stdio.h>

/**
 * sizeOf 运算符
 * 
 *  char的长度表示1
 *  其余的类型都是它的倍数
 *  演示结果：
 * 
 *   sizeOf(char) = 1
 *   sizeOf(short) = 2
 *   sizeOf(int) = 4
 *   sizeOf(long) = 8
 * 
 */
int main(int argc, char const *argv[])
{
    printf("sizeOf(char) = %u\n", (unsigned) sizeof(char));
    printf("sizeOf(short) = %u\n", (unsigned) sizeof(short));
    printf("sizeOf(int) = %u\n", (unsigned) sizeof(int));
    printf("sizeOf(long) = %u\n", (unsigned) sizeof(long));

    return 0;
}
