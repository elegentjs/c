#include "../header.h"

/**
 *  计算任意数组的长度
 */

int main(int argc, char const *argv[])
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("array length: %d \n", arrayLen(array));

    return 0;
}
