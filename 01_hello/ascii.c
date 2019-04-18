#include <stdio.h>

/**
 * 
 * 打印Ascii码对照表
 * ASCII：Amercian Stand code for information interchange  
 * 
 * 为了用字节编码常见字符而发明的，
 * 是美国人发明的，而西方字符比较少主要就是a~z, A-Z英文字母，
 * 所以美国人只用了一个字节的一半就编码了常见字符，称为ASCII编码
 * 
 * 常见的ASCII编码： 
 *     十进制       字符
 *       0         \0
 *       6         ACK
 *       10         LF(\n)
 *       13         CR(\r)
 *       48         0
 *       57         9
 *       65         A
 *       90         Z
 *       97         a
 *       122        z   
 *                   
 */

int main() {
    for (int index = 0; index < 128; index ++) {
        printf("10进制：%d, 16进制：%x, 8进制：%o, ascii字符：%c\n", index, index, index, index);
    }

    return 0;
}