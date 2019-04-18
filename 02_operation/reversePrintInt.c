#include<stdio.h>

/**
 * 根据输入的整数，逆序输出
 */

/**
 * 思路： 
 *     整数除10取余能得到个位数
 *      得到的第一个个位数为结果的最高位
 *      依次循环上述步骤可逆序得到所有的位数
 *      通过递进*10得到最终结果
 */
int reverse(int num) {
    int result = 0;
    while(num > 0) {
        result = result * 10 + num % 10; 
        num /= 10;
    }
    
    return result;
}


int main() {
    puts("please input a integer number, we'll print it's reverse number. ");

    int num;

    scanf("%d", &num);

    printf("inputed number is : %d \n", num);

    int result = reverse(num);

    printf("reversed result is : %d \n", result);

    return 0;
}