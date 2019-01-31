#include <stdio.h>

/**
 * 输入长方形的长宽，用*打印出来，但中间是空心的
 */
int main(int argc, char const *argv[])
{
    puts("请输入长方形的长和宽:");

    int length, width;

    puts("长：");
    scanf("%d", &length);

    puts("宽：");
    scanf("%d", &width);

    printf("输入的长和宽分别为：%d, %d \n", length, width);

   for (int i = 0; i < width; i ++) {
       for (int j = 0; j < length; j ++) {
           // 当前是第一行或最后一行
           int isFirstLineOrLastLine = i == 0 || i == width - 1;

           // 当前是第一字符或最后一个字符
           int isFirstCharOrLastChar = j == 0 || j == length - 1;

           if (isFirstLineOrLastLine || isFirstCharOrLastChar) {
                printf("*");
           } else {
               printf(" ");
           }
       }

       putchar('\n');
   }

    return 0;
}
