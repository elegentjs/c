#include "stdio.h"

/**
 *  演示遍历数组（pointer）
 * 
 */

void display(int *array, int length);

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    display(array, sizeof(array) / sizeof(array[0]));

    return 0;
}

void display(int *array, int length) {
    for (int *p = array; p != &array[length]; p ++) {
        printf("%d \n", *p);
    }
}
