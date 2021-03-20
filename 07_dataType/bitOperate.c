#include <stdio.h>

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
 *  理解移位操作不太容易，要时刻意识到在计算机中所有的数都是二进制，
 *  所以移位操作其实就是转换为二进制后的移位操作
 * 
 */

/**
 * 计算非0的比特位的个数
 * @param x 整数
 * @return
 */
int countBits(unsigned int x);

/**
 * 计算int型所占的位数（随机器而变，一般为32位，也可能是16位）
 * @return
 */
int intBits();

/**
 * 打印整型二进制格式
 * @param x
 */
void printBits(unsigned int x);


int main(int argc, char const *argv[]) {
    puts("请输入一个非负整数：");
    
    int no;

    scanf("%d", &no);

    printf("bitCount: %d \n", countBits(no));
    printf("intBits: %d \n", intBits());

    printBits(no);
    return 0;
}


int countBits(unsigned int x) {
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

void printBits(unsigned int x) {
    int i;
    for (i = intBits() - 1; i >= 0; i --) {
        putchar(x >> i & 1U ? '1' : '0');
    }

    putchar('\n');
}
