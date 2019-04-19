#include <stdio.h>

/**
 *  演示数组访问越界
 */

void hello() {
    fprintf(stderr, "hello!\n");
}

void func() {
    void *buf[10];
    static int i;

    for (i = 0; i < 100; i ++) { // over flow
        buf[i] = hello;
    }

}

int main(int argc, char const *argv[])
{
    int buf[1000];

    func();

    return 0;
}
