#include <stdio.h>

/**
 * 
 *  输入金字塔的层数，用*号打印出来
 *  算法思路：
 *    假设金字塔为n层，则第n层的*号数为：2n - 1
 *    打印时前导的空格跟n的关系为：n - 1, 如第一层的前导空格数为n - 1, 第二层为n - 2,依次类推     
 *   
 */
void printPyramid(int n) {
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n - i; j ++) {
            putchar(' ');
        }

        for (int k = 1; k <= 2 * i - 1; k ++) {
            putchar('*');
        }

        putchar('\n');
    }
}

int main(int argc, char const *argv[])
{
    puts("请输入金字塔的层数：");

    int i;

    scanf("%d", &i);

    printPyramid(i);

    return 0;
}

