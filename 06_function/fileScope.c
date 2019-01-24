#include<stdio.h>

/**
 * 演示文件作用域效果
 * 如果函数中引用文件作用域的变量，可以用extern进行声明，当然也可以直接使用，
 * 程序会自动先从当前函数作用域中查找变量，找不到忘上一级的文件作用域查找
 */

#define NUMBER 10

int array[NUMBER] = {1, 2, 3, 4, 5};

int main(int argc, char const *argv[])
{
    // extern int array[];
    
    for (int index = 0; index < 10; index ++) {
        printf("array[%d] : %d \n", index, array[index]);
    }

    return 0;
}
