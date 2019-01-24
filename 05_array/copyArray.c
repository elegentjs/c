#include<stdio.h>

/**
 *
 * 复制数组，不可直接用赋值运算符进行赋值，必须数组元素逐一赋值
 */

/**
 * 声明打印数组元素函数，在main方法中使用
 */
void printArray(int[], int);

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    puts("array: a");
    printArray(a, 9);

    int b[9] = {0};

    for (int index = 0; index < 9; index ++) {
        b[index] = a[index];
    }

    puts("array: b");
    printArray(b, 9);

    return 0;
}

void printArray(int a[], int length) {
    for (int index = 0; index < length; index ++) {
        printf("a[%d] : %3d\n", index, a[index]);
    }

    putchar('\n');
}