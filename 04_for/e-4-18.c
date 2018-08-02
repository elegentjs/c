#include<stdio.h>

int main(int argc, char const *argv[])
{
    puts("请输入金字塔的层数：");

    int i, j;

    scanf("%d", &i);

    for (int index = 1; index <= i; index ++) {
        for (int j = 1; j <= i - index; j ++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * index - 1; j ++) {
            printf("*");
        }

        putchar('\n');
    }

    return 0;
}

