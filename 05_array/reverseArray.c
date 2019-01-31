#include "../header.h"
#define LENGTH 10

/**
 * 将数组元素调换位置 如[1, 2, 3, 4] -> [4, 3, 2, 1]
 * #define LENGTH 10 表示宏定义，在编译之前会进行统一替换
 */

void reverseArray(int[]);

int main(int argc, char const *argv[])
{
    printf("请输入整数数组, 数组长度为：%d \n", LENGTH);

    int a[LENGTH] = {0};

    for (int index = 0; index < LENGTH; index ++) {
        printf("a[%d]: ", index);
        scanf("%d", &a[index]);
    }
    
    puts("before reverse : ");
    
    display(a, LENGTH);

    reverseArray(a);

    puts("after reverse : ");
    display(a, LENGTH);

    return 0;
}

void reverseArray(int a[]) {
    for (int index = 0; index < LENGTH / 2; index ++) {
        int temp = a[index];
        a[index] = a[LENGTH - index - 1];
        a[LENGTH - index - 1] = temp;
    }
}
