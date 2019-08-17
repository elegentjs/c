/* 公共header */
#include <stdio.h>
#include <stdlib.h>

#define ERROR 0
#define OK 1
#define TRUE 1
#define FALSE 0
#define MAX_SIZE 100


typedef int Status;

/**
 * 数组元素打印
 * @param array 需要打印的数组
 * @param length 数组长度
 */
void display(int array[], int length);

void display(int array[], int length) {
    for (int index = 0; index < length; index ++) {
        printf("%2d ", array[index]);
    }   

    puts("");
}



