#include <stdio.h>

/**
 * 打印输入格式化
 * 
 *  %5d  -> 表示至少显示5位的十进制数
 *  %5.1f -> 表示至少显示5位的浮点数，但小数点后只显示1位
 * 
 *  %09.9f -> 0标志位，如果是0，位数不足时用0补足，不写表示用空格补足；-表示左对齐
 */
int main(int argc, char const *argv[])
{
    int a, b, c, sum;

    double avg;

    puts("请输入三个整数：");

    printf("整数1: ");
    scanf("%d", &a);
    
    printf("整数2: ");
    scanf("%d", &b);

    printf("整数3: ");
    scanf("%d", &c);

    sum = a + b + c;

    avg = (double) sum / 3;

    printf("合计： %5d \n", sum);
    printf("平均：%5.1f \n", avg);


    //展示各种格式化
    printf("[%%d]: [%d] \n", 123);
    printf("[%%.4d]: [%.4d] \n", 123);
    printf("[%%4d]: [%4d] \n", 123);
    printf("[%%04d]: [%04d] \n", 123);
    printf("[%%-4d]: [%-4d] \n", 123);

    printf("\n");

    printf("[%%f]: [%f] \n", 123.13);
    printf("[%%.1f]: [%.1f] \n", 123.13);
    printf("[%%6.1f]: [%6.1f] \n", 123.13);
    printf("[%%06.1f]: [%06.1f] \n", 123.13);


    return 0;
}
