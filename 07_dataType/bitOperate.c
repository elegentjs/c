#include<stdio.h>

/**
 * 位运算符
 * &：  按位与
 * |:  按位或
 * ^:  按位异或
 * ～： 按位求反
 * 
 * 位移运算符
 * 
 * << : 向左移位，右面空出的用0补充
 * >> : 向右移位
 * 
 * 避免对负数进行移位
 * 
 */

int countBits(unsigned x);
int intBits();
void printBits(unsigned x);

int main(int argc, char const *argv[])
{
    puts("请输入一个正整数：");
    
    int no;

    scanf("%d", &no);

    int bitCount = countBits(no);
    
    printf("bitCount: %d \n", bitCount);

    printf("intBits: %d \n", intBits());

    printBits(no);
    return 0;
}


int countBits(unsigned x) {
    int count = 0;

    while(x) {
        if (x & 1U) count ++;

        x >>= 1;
    }

    return count;

}

int intBits() {
    return countBits(~0U);
}

void printBits(unsigned x) {
    int i;
    for (i = intBits() - 1; i >= 0; i --) {
        putchar(x >> i & 1U ? '1' : '0');
    }

    putchar('\n');
}
