#include <stdio.h>

/**
 * 
 * 根据输入的整数循环输出1234567890
 * 
 */
int main(int argc, char const *argv[])
{
    puts("请输入一个正整数：");
    int i;

    scanf("%d", &i);

    int loop = 1;

    while(i--) {
        printf("%d", loop);

        if (loop == 9) {
            loop = 0;
        } else {
            loop ++;
        }

    }

    putchar('\n');

    return 0;
}
