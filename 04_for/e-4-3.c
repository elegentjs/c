#include <stdio.h>

/**
 * 计算两个整数之间所有整数的和
 * 
 */
int main(int argc, char const *argv[])
{
    puts("请输入两个整数，我们会计算会它们之间所有数的和："); 
    
    int i, j, sum;

    scanf("%d", &i);
    scanf("%d", &j);

    int low, high;

    if (i > j) {
        low = j;
        high = i;
    } else {
        low = i;
        high = j;
    }

    sum = 0;

    for (int index = low + 1; index < high; index ++) {
        sum += index;
    }

    printf("%d, %d 之间所有整数的和为： %d \n", i, j, sum);

    return 0;
}
