#include <stdio.h>

/**
 *  标准九九乘法表
 */
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 9; i ++) {
        for (int j = 1; j <= i; j ++) {
            printf("%d x %d = %2d  ", j, i, j * i);
        }
        putchar('\n');
    }
    
    return 0;
}
