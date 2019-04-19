#include <stdio.h>
#include <stdlib.h>

/**
 * 演示C语言各中类型变量（auto, static, malloc）地址打印
 *  同时可以看到引用函数名也可以打印地址
 *      函数名（pointer）就是指向当前函数在内存的地址，函数在编译为机器码后在运行时被加载到内存中的某个区域
 */

int global_variable;
static int file_static_variable;

void f1() {
    int f1_variable;
    static int f1_static_variable;

    printf("&f1_variable.. %p \n", &f1_variable);
    printf("&f1_static_variable.. %p \n", &f1_static_variable);
}

void f2() {
    int f2_variable;
    
    printf("&f2_variable .. %p \n", &f2_variable);
}

int main(int argc, char const *argv[])
{
    int *p;

    // 打印函数的地址，直接引用函数名表示指向函数的指针
    printf("&f1 .. %p \n", f1);
    printf("&f2 .. %p \n", f2);

    // 打印字符串的地址，字符串在c中就是字符数组
    printf("string literal .. %p \n", "abc");

    // 打印全局变量地址
    printf("&global_variable .. %p \n", &global_variable);

    // 打印文件内的静态变量的地址
    printf("&file_static_variable .. %p \n", &file_static_variable);

    // 调用f1,f2
    f1();
    f2();

    // 通过malloc申请内存区域
    p = malloc(sizeof(int));
    printf("malloc address .. %p \n", p);

    return 0;
}
