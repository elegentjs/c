#include <stdio.h>

/**
 *  标准九九乘法表
 */
void printMultiTable() {

    for (int i = 1; i <= 9; i ++) {
        for (int j = 1; j <= i; j ++) {
            printf("%d X %d = %2d ", j, i, i * j);    
        }

        putchar('\n');
    }
}

int main(int argc, char const *argv[])
{
    printMultiTable();
    
    return 0;
}




