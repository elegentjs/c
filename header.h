/* include start */
#include <stdio.h>
#include <math.h>
/* include end */

/* define start */
#define ERROR -1
/* define end */


/* function prototype declaration start */
/**
 *  自动计算数组长度
 *  原理：使用sizeof
 */
int arryLen(int* array);

/**
 * 数组元素打印
 * @param array 需要打印的数组
 */
void display(int array[]);

/**
 * 计算输入的字符串的长度
 */
unsigned strLength(const char[]);


/* function prototype declaration end */

/**
 *  自动计算数组长度
 *  原理：使用sizeof
 */
int arrayLen(int* array) {
    return (int) (sizeof(array) / sizeof(*array));
}

/**
 * function prototype declare
 * 数组元素打印函数原型声明
 * @param array 需要打印的数组
 * @length  数组长度
 */
void display(int array[]) {
    int length = arrayLen(array);
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

