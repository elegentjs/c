#include "../header.h"

/**
 * 输入一个正整数，分别打印它的二进制，八进制，十六进制
 */


void printNumber(unsigned int);

int main(int argc, char const *argv[])
{
    puts("Please input a Integer number: ");

    int number;

    scanf("%d", &number);
    printNumber(number);

    return 0;
}

void printNumber(unsigned int number) {
    printf("binary: %s\n", binaryStr(number));
    printf("oct: %o\n", number);
    printf("hex: %x\n", number);
}
