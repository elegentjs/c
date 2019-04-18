#include <stdio.h>

/**
 * 
 * reverse print array
 * 
 */

void reverseArray(int[], int);

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    reverseArray(array, 9);

    return 0;
}

void reverseArray(int array[], int length) {
    for (int index = length - 1; index >=0; index --) {
        printf("%5d", array[index]);
    }

    putchar('\n');
}

