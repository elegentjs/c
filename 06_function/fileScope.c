#include<stdio.h>

/**
 * 演示文件作用域效果
 * 
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
