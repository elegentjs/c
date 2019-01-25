#include <stdio.h>

/**
 * 依次输入整型数组元素，并打印出来
 * 
 */
int main(int argc, char const *argv[])
{
    int array[5];

    puts("请输入5个整型数组元素：");
    for (int index = 0; index < 5; index ++) {
        scanf("%d\n", &array[index]);
    }

    for (int i = 0; i < 5; i ++) {
        printf("array[%d] : %d \n", i, array[i]);
    }

    return 0;
}
