#include<stdio.h>

/**
 * 计算输入的字符串的长度
 */

unsigned strLength(const char charArray[]) {
    unsigned length = 0;

    while(charArray[length ++]);

    return length;
}

int main(int argc, char const *argv[])
{
    puts("请输入一个字符串, 我们将统计字符的个数。");    
    
    char s[100];

    scanf("%s", s);

    printf("%s 的长度是： %u. \n", s, strLength(s));

    return 0;
}
