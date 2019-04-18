#include <stdio.h>

int main() {
    puts("请输入一个整数，我将执行移位计算：");

    // 待移位数字
    int num;

    // 移位方向（1: 左； 2: 右）
    int direction;

    // 移位位数
    int bitNum;

    printf("待移位数字：");
    scanf("%d", &num);

    printf("移位方向：(1: 左；2: 右)");
    scanf("%d", &direction);

    printf("移位位数：");
    scanf("%d", &bitNum);

    int result;

    if (direction == 1) {
        result = num << bitNum;
    } else {
        result = num >> bitNum;
    }

    printf("移位结果： %d \n", result);
}