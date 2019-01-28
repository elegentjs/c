#include "../header.h"

/**
 * 打印ASCII码 二进制，十进制，八进制，十六进制和对应字符
 * 
 */

int main(int argc, char const *argv[])
{
    for (int index = 0; index < 128; index ++) {
        printf("%4c, %d, %o, %X ", index, index, index, index);
        putchar('\n');
    }

    putchar('\n');
    return 0;
}
