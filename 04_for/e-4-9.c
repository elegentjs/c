#include <stdio.h>

/**
 * 
 * 按升序显示小于输出值的所有正偶数
 * 
 */
int main(int argc, char const *argv[])
{
    puts("请输入一个正整数：");

    int i;

    scanf("%d", &i);

    for (int index = 0; index < i; index += 2) {
        printf("%4d", index);
    }

    putchar('\n');

    return 0;
}
