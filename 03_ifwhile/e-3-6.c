#include <stdio.h>

/**
 * 计算4个数值中较大的
 *  可以是main中第一步演示的那样，依次比较得出最大
 *  也可以像下方的函数调用一样，先两两比较，再把比较的结果传给函数得出最大的
 */

int max(int, int);

int main(int argc, char const *argv[])
{
    
    puts("请输入4个整数：");

    int i, j, k, l, result;

    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &k);
    scanf("%d", &l);

    result = i;

    if (j > result) {
        result = j;
    }

    if (k > result) {
        result = k;
    }

    if (l > result) {
        result = l;
    }

    printf("%d, %d, %d, %d 中最大的是： %d \n", i, j, k, l, result);


    puts("采用函数计算：");

    result = max(max(i, j), max(k, l));
    printf("最大的是： %d \n", result);

    return 0;
}

int max(int i, int j) {
    return i > j ? i : j;
}
