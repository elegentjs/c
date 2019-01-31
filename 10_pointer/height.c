#include <stdio.h>

/**
 * 通过指针操作身高
 * 
 */
int main(int argc, char const *argv[])
{
    int a = 170;
    int b = 180;
    int c = 185;
    int d = 190;

    int *pa = &a;
    int *pb = &b;

    printf("a的身高：%d \n", *pa);
    printf("b的身高：%d \n", *pb);

    *pb += 20;

    printf("b的身高：%d \n", *pb);


    return 0;
}
