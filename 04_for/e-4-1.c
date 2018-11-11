#include<stdio.h>

/**
 * 逆序输出正整数
 * 算法思路：
 * 
 *  每次除10取余可以得到个位的数字，然后依次乘十
 */
int main(int argc, char const *argv[])
{
    puts("请输入一个正整数：");
    
    int i, j;

    scanf("%d", &i);
    j = i;
    int result = 0;

    while(j > 0) {
        result = 10 * result + j % 10;
        j /= 10;
    }

    printf("%d逆向显示的结果是：%d \n", i, result);

    return 0;
}
