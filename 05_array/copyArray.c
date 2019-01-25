#include "../header.h"

/**
 *
 * 复制数组，不可直接用赋值运算符进行赋值，必须数组元素逐一赋值
 */

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    puts("array: a");
    display(a);

    int b[9] = {0};

    for (int index = 0; index < arrayLen(b); index ++) {
        b[index] = a[index];
    }

    puts("array: b");
    display(b);

    return 0;
}
