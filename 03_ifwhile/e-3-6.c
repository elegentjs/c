#include <stdio.h>

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

    return 0;
}
