#include <stdio.h>

/**
 * 
 * 输入长方形的长和宽，打印出对应的长方形
 * 
 */
int main(int argc, char const *argv[])
{
    puts("请输入长方形的长和宽");
    
    int length, width;

    scanf("%d", &length);
    scanf("%d", &width);

    for (int index = 1; index <= width; index ++) {
        for (int j = 1; j <= length; j ++) {
            printf("*");
        }

        putchar('\n');
    }

    return 0;
}
