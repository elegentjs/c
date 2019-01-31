#include <stdio.h>

/**
 * 
 */
int main(int argc, char const *argv[])
{
    puts("请输入三个整数，用来判断相等情况：");
    
    int i, j, k;

    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &k);

    if (i == j && j == k) {
        printf("三个值都相等. \n");
    } else if (i == j || j == k || i == k) {
        printf("有两个值相等. \n");
    } else {
        printf("三个值都不相等。\n");
    }


    return 0;
}
