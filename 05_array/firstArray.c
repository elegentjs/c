#include <stdio.h>

/**
 *  
 */
int main(int argc, char const *argv[])
{
    int a[10] = {0};

    // 不可使用赋值语句对数组进行初始化，只可声明的同时进行初始化
    // a = {1, 2, 3};

    for (int index = 0; index < 10; index ++) {
        printf("a[%d] : %5d \n", index, a[index]);
    }

    putchar('\n');

    return 0;
}
