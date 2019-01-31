#include "../header.h"

void reverseAndCopy(int[], int[], int);

int main(int argc, char const *argv[])
{
    int source[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target[10];

    reverseAndCopy(source, target, 10);

    // 打印数组
    display(target, 10);
    
    putchar('\n');

    return 0;
}

void reverseAndCopy(int source[], int target[], int length) {
    int i = 0;
    for (int index = length - 1; index >= 0; index --) {
        target[i ++] = source[index];
    }
}