#include<stdio.h>

/**
 * 
 * 打印Ascii码对照表
 * ASCII：Amercian Stand code for information interchange  
 */

int main() {
    for (int index = 0; index < 128; index ++) {
        printf("10进制：%d, 16进制：%x, ascii字符：%c\n", index, index, index);
    }

    return 0;
}