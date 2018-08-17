#include<stdio.h>

/**
 * 逆序打印整数
 * 
 *  算法：整数除以10的余数即是最后一位
 * 
 */
int main(int argc, char const *argv[]) {
    puts("请输入一个整数，我们将逆序输出该整数");

    int i;
    int result = 0;
    scanf("%d", &i);
    
    while(i > 0) {
        printf("%d", i % 10);
        result = result * 10 + i % 10;
        printf("center result: %d \n", result);
        i /= 10;
    }
    
    puts("");
    printf("result : %d \n", result);

    return 0;
}
