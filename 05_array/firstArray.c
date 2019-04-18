#include "../header.h"

/**
 *  remember: 不可用赋值语句对数组进行初始化
 */
int main(int argc, char const *argv[])
{
    int a[10] = {0};

    // 不可使用赋值语句对数组进行初始化，只可声明的同时进行初始化
    // a = {1, 2, 3};

    display(a, 10);

    putchar('\n');

    return 0;
}
