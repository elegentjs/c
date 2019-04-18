#include <stdio.h>

/**
 *  输入两个数，判断第二个数是不是第一个数的约数
 * 算法思路：
 *  如果能被整除，说明是约数，反之不是约数
 * 
 * 注意：
 *  if, while等条件判断遵循统一规则：
 * 
 *      如果表达式计算结果为0表示false
 *      非0就表示true
 */
int main(int argc, char const *argv[])
{
    puts("请输入两个整数：");
    
    int i, j;

    scanf("%d", &i);
    scanf("%d", &j);

    if (i % j) {
        printf("%d 不是 %d 的约数. \n", j, i);
    } else {
        printf("%d 是 %d 的约数. \n", j, i);
    }

    return 0;
}
