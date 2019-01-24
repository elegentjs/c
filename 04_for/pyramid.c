#include <stdio.h>

/**
 *  打印金字塔
 */
int main(int argc, char const *argv[])
{
    puts("请输入金字塔的层数：");

    int i;
    scanf("%d", &i);

    printf("金字塔的层数为：%d \n", i);

    for (int j = 1; j <= i; j ++) {
        // 先打印空格
        for (int k = 0; k < i - j; k ++) {
            printf(" ");
        }

        // 再打印星号
        for (int m = 0; m < 2 * j - 1; m ++) {
            printf("*");
        }

        putchar('\n');

    }

    return 0;
}
