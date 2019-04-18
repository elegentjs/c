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

/**
 * 打印指定整数的二进制字符串
 */
char* binaryStr(unsigned int);

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
unsigned strLength(const char *s) {
    unsigned length = 0;

    while(*s ++) {
        length ++;
    }

    return length;
}

int bitCounts(unsigned int i) {
    int count = 0;

    while(i) {
        if (i & 1U) count ++;
        i >>= 1;
    }

    return count;
    
}

char* binaryStr(unsigned int num) {
    int intBits = bitCounts(~0U);

    char* result; 

    for (int index = intBits - 1; index >= 0; index --) {
        *(result + 1) = (num >> index & 1U ? '1' : '0');
    }

    *(result + 1) = '\0';

    printf("result : %s \n", result);

    return result;
}

