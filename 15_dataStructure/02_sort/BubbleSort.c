#include "head.h"

/**
 * bubbleSort
 * 冒泡排序是最入门的排序算法
 *  核心思路：
 *      每轮两两比较，如果前比后小则两两交换，公比较n - 1轮。 
 * 时间复杂度：最大：O(n * n); 平均：O(n * n); 最小：O(n)
 * 空间复杂度：O(1)
 * 是否稳定排序：是
 */

void swap(int array[], int i, int j) {
    int temp = *(array + j);
    *(array + j) = *(array + i);
    *(array + i) = temp;
}


void bubbleSort(int array[], int length) {
    for (int index = 1; index < length; index ++) {
        int finished = 1;
        for (int i = 1; i < length - index + 1; i ++) {
            if (array[i - 1] > array[i]) {
                swap(array, i - 1, i);
                finished = 0;
            }
        }

        if (finished == 1) {
            break;
        }
    }

}


int main(int argc, char const *argv[]) {
    int length = 30000;
    int *array = randArray(length);

    printf("total length : %d \n", length);
    puts("before sort: ");

    display(array, length);

    puts("after sort: ");

    double start = clock();
    bubbleSort(array, length);
    double end = clock();

    display(array, length);

    printf("execute time: %f s \n", (end - start) / CLOCKS_PER_SEC);

    return 0;
}

