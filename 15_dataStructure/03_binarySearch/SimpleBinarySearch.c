# include "head.h"

/**
 * 
 * 最简单的二分查找
 * 
 * 限制：有序集合，并且必须是顺序存储结构
 * 
 */


int binarySearch(int array[], int length, int target) {
    if (array == NULL || length == 0) {
        return -1;
    }

    int low = 0;
    int high = length - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (array[mid] == target) {
            return mid;
        }

        if (target > array[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("run here. \n");
    return -1;
}


int main(int argc, char const *argv[])
{

    int length = 10;
    int array[] = {2, 3, 41, 3, 21, 0, 98, 10, 5, 4};

    printf("total length : %d \n", length);
    puts("before sort: ");

    display(array, length);

    puts("after sort: ");

    double start = clock();
    qsort(array, length, sizeof(int), compare);
    double end = clock();

    display(array, length);

    printf("execute time: %f s \n", (end - start) / CLOCKS_PER_SEC);

    int target = 21;
    int index = binarySearch(array, length, target);

    printf("find target value: %d in index: %d \n", target, index);

    return 0;
}

