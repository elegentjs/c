#include <stdio.h>

/**
 * 输入一个正整数，分别打印它的二进制，八进制，十六进制
 * 
 */

int countBits(unsigned);

void printNumber(unsigned);

int main(int argc, char const *argv[])
{
    puts("Please input a Integer number: ");

    int number;

    scanf("%d", &number);
    printNumber(number);

    return 0;
}

int countBits(unsigned number) {

    int total = 0;

    while (number) {
        if (number & 1U) {
            total ++;
            number >>= 1;
        }
    }

    return total;
}


void printNumber(unsigned number) {
    int length = countBits(~0U);

    printf("binary: ");
    for (int index = length; index >= 0; index --) {
      putchar(number >> index & 1U ? '1' : '0');  
    }

    puts("");

    printf("oct: %o\n", number);
    printf("hex: %x\n", number);
}
