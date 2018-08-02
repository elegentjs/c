#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    puts("请输入一个整数，将输入它的绝对值：");


    int i, result;
    
    scanf("%d", &i);

    if (i < 0) {
        result = i * -1;
    } else {
        result = i;
    }

    printf("%d的绝对值是：%d \n", i, result);

    return 0;
}
