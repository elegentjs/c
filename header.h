#include <stdio.h>
#include <math.h>

#define ERROR -1

/**
 * function prototype declare
 * 数组元素打印函数原型声明
 * @param array 需要打印的数组
 * @length  数组长度
 */
void display(int array[], int length) {
    for (int index = 0; index < length; index ++) {
        printf("array[%d]: %d ", index, array[index]);
    }

    putchar('\n');
}
