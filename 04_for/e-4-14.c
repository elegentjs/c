#include<stdio.h>

/**
 *  打印身高体重对照表
 * 
 */

double weight(int);

int main(int argc, char const *argv[])
{
    puts("请输入最低身高，最高身高，间隔");
    int low, high, step;

    scanf("%d", &low);
    scanf("%d", &high);
    scanf("%d", &step);

    for (int index = low; index <= high; index += step) {
        printf("身高：%d  体重: %.2f \n", index, weight(index));
    }

    putchar('\n');

    return 0;
}

double weight(int height) {
    return (height - 100) * 0.9;

}
