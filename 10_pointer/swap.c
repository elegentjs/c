#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(int argc, char const *argv[])
{
    puts("请输入两个整数，程序将进行调换");

    int a, b;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("a = %d \n", a);
    printf("b = %d \n", b);

    return 0;
}
