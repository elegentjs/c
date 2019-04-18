#include "../header.h"

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

    display(array, 5);

    return 0;
}
