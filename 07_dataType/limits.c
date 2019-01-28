#include <stdio.h>
#include <limits.h>

/**
 * 展示char, short, int, long的数据范围
 * 
 */
int main(int argc, char const *argv[])
{
    printf("char : %d ~ %d , bit: %d \n", CHAR_MIN, CHAR_MAX, CHAR_BIT);
    printf("short : %d ~ %d , \n", SHRT_MIN, SHRT_MAX);
    printf("int : %d ~ %d \n", INT_MIN, INT_MAX);
    printf("long : %ld ~ %ld , bit: %d \n", LONG_MIN, LONG_MAX, LONG_BIT);

    return 0;
}
