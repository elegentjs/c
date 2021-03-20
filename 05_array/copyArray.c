#include "../header.h"

/**
 *
 * 复制数组，不可直接用赋值运算符进行赋值，必须数组元素逐一赋值
 * 数组只有在声明时是数组，传递时已变成了指针，丢失了长度
 */

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    puts("array: a");
    display(a, 9);

    int b[9] = {0};

    for (int index = 0; index < 9; index ++) {
        b[index] = a[index];
    }

    puts("array: b");
    display(b, 9);

    return 0;
}
