#include <stdio.h>

/**
 * 输入两个数，打印第一个数是第二个数的百分比
 * 
 */
int main(int argc, char const *argv[])
{
    float i, j;

    puts("请输入两个数：");

    printf("第一个数：");
    scanf("%f", &i);

    printf("第二个数：");
    scanf("%f", &j);

    printf("百分比：不保留小数点 %.0f %% \n", (i / j) * 100);
    printf("百分比：保留两位小数点 %.2f %% \n", (i / j) * 100);
    printf("百分比：默认保留小数点 %f %% \n", (i / j) * 100);

    return 0;
}
