#include "head.h"

/**
 * quickSort
 * 快速排序是最常用的排序算法，是必须掌握的排序算法，面试必问
 *  核心思路：
 *      分治法，每轮找到基准元素的位置，保证左侧的都比它小，右侧的大于等于它，这样基准元素的位置就确定了。然后再分治法。
 *   分区算法的核心是通过两个指针往中间比较
 *  
 * 时间复杂度：最大：O(n * n); 平均：O(n * logn); 最小：O(n * logn)
 * 空间复杂度：O(1)
 * 是否稳定排序：否
 */

void swap(int array[], int i, int j) {
    int temp = *(array + j);
    *(array + j) = *(array + i);
    *(array + i) = temp;
}

/**
 *  执行分区算法，找到pivot对应的位置
 */
int partition(int array[], int left, int right) {
    if (left >= right) {
        return left;
    }

    int pivot = array[left];

    int i = left;
    int j = right;

    while (i < j) {
        while(array[j] >= pivot && i < j) {
            j --;
        }

        while(array[i] <= pivot && i < j) {
            i ++;
        }

        if (i < j) {
            swap(array, i, j);
        }
    }
    
    array[left] = array[i];
    array[i] = pivot;

    return i;

}


void quickSort(int array[], int left, int right) {
    if (left >= right) {
        return;
    }

    int part = partition(array, left, right);

    quickSort(array, left, part - 1);
    quickSort(array, part + 1, right);
}


int main(int argc, char const *argv[]) {
    int length = 100;
    int *array = randArray(length);

    printf("total length : %d \n", length);
    puts("before sort: ");

    display(array, length);

    puts("after sort: ");

    double start = clock();
    quickSort(array, 0, length - 1);
    double end = clock();

    display(array, length);

    printf("execute time: %f s \n", (end - start) / CLOCKS_PER_SEC);

    return 0;
}

