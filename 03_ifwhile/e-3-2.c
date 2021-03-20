#include <stdio.h>

/**
 * 在c语言中true: 1; false: 0
 *
 * c中无布尔类型，布尔表达式的值用int表示，true: 1, false: 0
 *
 * 
 */
int main(int argc, char const *argv[])
{
    int i = 1 == 1;
    int j = 1 != 1;

    printf("i : %d . \n", i);
    printf("j : %d . \n", j);
    return 0;
}
