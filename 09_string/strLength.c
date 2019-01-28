#include "../header.h"

int main(int argc, char const *argv[])
{
    puts("请输入一个字符串, 我们将统计字符的个数。");    
    
    char s[100];

    scanf("%s", s);
    printf("%s 的长度是： %u. \n", s, strLength(s));

    return 0;
}
