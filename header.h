/* include start */
#include <stdio.h>
#include <math.h>
/* include end */

/* define start */
#define ERROR -1
/* define end */


/* function prototype declaration start */

/**
 * 数组元素打印
 * @param array 需要打印的数组
 * @param length 数组长度
 */
void display(int array[], int length);

/**
 * 计算输入的字符串的长度
 */
unsigned strLength(const char[]);


/* function prototype declaration end */

/**
 * function prototype declare
 * 数组元素打印函数原型声明
 * @param array 需要打印的数组
 * @param length 数组长度
 */
void display(int array[], int length) {
    for (int index = 0; index < length; index ++) {
        printf("array[%d]: %d ", index, array[index]);
    }

    putchar('\n');
}


/**
 * 计算输入的字符串的长度
 */
unsigned strLength(const char charArray[]) {
    unsigned length = 0;

    while(charArray[length ++]);

    return length;
}

