#include <stdio.h>


/**
 * 将数组元素调换位置 如[1, 2, 3, 4] -> [4, 3, 2, 1]
 * 
 */

void printArray(int[], int);

void reverseArray(int[], int);

int main(int argc, char const *argv[])
{
    puts("请输入整数数组：");

    int a[5] = {0};

    for (int index = 0; index < 5; index ++) {
        printf("a[%d]: ", index);
        scanf("%d", &a[index]);
    }
    
    puts("before reverse : ");
    printArray(a, 5);

    reverseArray(a, 5);

    puts("after reverse : ");
    printArray(a, 5);

    return 0;
}

void printArray(int a[], int length) {
    for (int index = 0; index < 5; index ++) {
        printf("a[%d]: %d   ", index, a[index]);
    }

    putchar('\n');
}

void reverseArray(int a[], int length) {
    for (int index = 0; index < length / 2; index ++) {
        int temp = a[index];
        a[index] = a[length - index - 1];
        a[length - index - 1] = temp;
    }
}
