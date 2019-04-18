#include<stdio.h>

/**
 * 输入指定的长度和宽度，打印矩形（用*号）
 * 填满*号
 */
void printFullRectangle(int length, int width) {
    for(int i = 0; i < width; i ++) {
        for (int j = 0; j < length; j ++) {
            printf("*");
        }

        putchar('\n');
    }
}

/**
 * 输入指定的长度和宽度，打印矩形（用*号）
 * 只有四周有*号，中间为空
 * 
 *  此种迭代方式跟满的不同，除了第一行和最后一行打印满，
 *  其余的行只打印开头和末尾
 * 
 */
void printBlankRectangle(int length, int width) {
    for(int i = 0; i < width; i ++) {
        for (int j = 0; j < length; j ++) {
            if (i == 0 || i == width - 1) {
                printf("*");
            } else {
                if (j == 0 || j == length - 1) {
                    printf("*");
                } else {
                    putchar(' ');
                }
            }
        }

        putchar('\n');
    }
}

int main() {
    puts("请输入矩形的长度和宽度： ");

    int length, width;

    scanf("%d", &length);
    scanf("%d", &width);

    puts("满矩形：");
    printFullRectangle(length, width);

    puts("空矩形：");
    printBlankRectangle(length, width);

    return 0;
}