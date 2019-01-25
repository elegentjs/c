#include "../header.h"

/**
 * 自动存储期（automatic storage duration）
 * 在函数中不使用static修饰的变量即为自动存储期变量，即函数调用时生成，函数调用完成时销毁
 * 
 * 静态存储期（static storage duration）
 * 在函数中使用static修饰，或在函数外声明定义的变量被称为静态存储期变量。这些变量在main函数执行
 * 之前的准备阶段被创建出来，在程序结束的时候消失。
 * 
 * 
 */

int b[10];

int main(int argc, char const *argv[])
{
    static int a[10];

    display(a, 10);
    display(b, 10);

    return 0;
}


