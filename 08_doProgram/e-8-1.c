#include<stdio.h>

#define diff(x, y) ((x) - (y))

int main(int argc, char const *argv[])
{
    int x = 1;
    int y = 10;

    printf("x - y = %d \n", diff(x, y));
    
    return 0;
}
