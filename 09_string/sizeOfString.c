#include<stdio.h>

/**
 * 从打印结果可以看出，字符串的长度比实际我们看到的字符个数大1
 *  因为字符序列的末尾会加上NUL字符（\0）
 * 
 *  字符串本质上是字符数组
 */
int main(int argc, char const *argv[])
{
    printf("sizeof 123   = %d\n", (unsigned) sizeof("123"));    
    printf("sizeof AB\\tC   = %d\n", (unsigned) sizeof("AB\tC"));    
    printf("sizeof AB\\0C   = %d\n", (unsigned) sizeof("AB\0C"));    

    return 0;
}
