# include "head.h"

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
        for (int i = index; i < length; i ++) {
            if (array[i - 1] > array[i]) {
                swap(array, i - 1, i);
            }
        }
    }

}


int main(int argc, char const *argv[]) {
    int array[] = {4, 5, 3, 1, 19, 59, 43, 23, 10, 0, -1};
    int length = sizeof(array) / sizeof(int);

    printf("total length : %d \n", length);
    puts("before sort: ");

    display(array, length);

    puts("after sort: ");
    bubbleSort(array, length);
    display(array, length);

    return 0;
}

