#include <stdio.h>

/**
 *输入一个数，判断是不是奇数
 * 算法：
 *  不能被2整除的数是奇数
 */
int main(int argc, char const *argv[])
{
    puts("请输入一个奇数：");
    
    int i;

    scanf("%d", &i);

    // 不能被2整除的数为奇数，能被2整除的余数是0，if条件为0时是false，其余是true
    if (i % 2) {
        printf("%d是奇数 \n", i);
    } else {
        printf("%d不是奇数 \n", i);
    }

    return 0;
}
