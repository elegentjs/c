#include <stdio.h>

int main(int argc, char const *argv[])
{
    puts("请输入一个正整数：");
    
    int i, j;

    scanf("%d", &i);
    j = i;
    int result = 0;

    int len = 0;

    while(j > 0) {
        result = 10 * result + j % 10;
        j /= 10;
        len ++;
    }

    printf("%d逆向显示的结果是：%d \n", i, result);
    printf("%d的位数是：%d \n", i, len);

    return 0;
}
