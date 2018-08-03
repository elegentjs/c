#include<stdio.h>

int minOf(const int[], int);

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5, 6, 0, 10, -1, 3};

    int target = minOf(array, 10);


    printf("数组中最小的元素是：%d \n", target);

    return 0;
}



int minOf(const int array[], int no) {
    int min = array[0];
    for (int index = 1; index < no; index ++) {
        if (array[index] < min) {
            min = array[index];
        }
    }

    return min;
}