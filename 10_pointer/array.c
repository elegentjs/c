#include "../header.h"

/**
 * 数组与指针
 * 
 *  重要：不带[]的数组名就表示指向该数组的第一个元素的指针
 * 
 */
int main(int argc, char const *argv[])
{
    int array[] = {10, 20, 30, 40, 50};

    int *p = array;

    for (int index = 0; index < 5; index ++)  {
        printf("array[%d] = %d, p[%d] = %d, *(p + %d) = %d \n", index, array[index], index, p[index], index, *(p +  index));
    }

    return 0;
}
