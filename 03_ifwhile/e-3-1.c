#include<stdio.h>

/**
 *  输入两个数，判断第二个数是不是第一个数的约数
 * 
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
