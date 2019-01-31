#include <stdio.h>

/**
 * 声明函数，返回两个参数中较大者
 */
int max(int, int);

int main(int argc, char const *argv[])
{
    puts("请依次输入三个整数，我们将打印出最大的数：");

    int i, j, k;

    puts("输入第一个数： ");
    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &k);

    printf("输入的三个数依次为：%d, %d, %d\n", i, j, k);

    printf("最大的数为： %d \n", max(max(i, j), k));

    return 0;
}


int max(int a, int b) {
    return a > b ? a : b;
}