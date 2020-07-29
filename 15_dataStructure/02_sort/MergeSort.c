#include "head.h"

/**
 * MergeSort
 * 归并排序属于高级排序，排序性能非常稳定
 *  核心思路：
 *      使用分治思想，将待排序集合分为两部分，两部分分别排序后再执行有序集合的合并，
 *      它的缺点是非本地排序，合并时需要占用额外的内存空间
 * 时间复杂度：最大：O(n * logn); 平均：O(n * logn); 最小：O(n * logn)
 * 空间复杂度：O(N)
 * 是否稳定排序：是
 */

/**
 * 声明merge函数
 */
void merge(int array[], int left, int mid, int right);

/**
 * 归并排序
 */
void mergeSort(int array[], int left, int right) {
    int mid = 0;

    if (left < right) {
        mid = (left + right) / 2;

        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        merge(array, left, mid, right);
    }


}

/**
 * 将两段有序数组进行合并
 */
void merge(int array[], int left, int mid, int right) {
    // 申请临时数组空间，用来存储合并后的数组
    int *tmp = (int *) malloc((right - left + 1) * sizeof(int));

    int left_low = left;
    int left_high = mid;
    int right_low = mid + 1;
    int right_high = right;

    // 临时数组的索引位
    int i;

    // 两段数据同时比较
    for (i = 0; left_low <= left_high && right_low <= right_high; i ++) {
        if (array[left_low] < array[right_low]) {
            tmp[i] = array[left_low ++];
        } else {
            tmp[i] = array[right_low ++];
        }
    }

    // 第一个数组还没结束时，全部补充到临时数组的末尾
    if (left_low <= left_high) {
        for (int j = left_low; j <= left_high; j ++) {
            tmp[i ++] = array[j];
        }
    }

    // 第二个数组还没结束时，全部补充到临时数组的末尾
    if (right_low <= right_high) {
        for (int j = right_low; j <= right_high; j ++) {
            tmp[i ++] = array[j];
        }
    }


    // 将临时数组按序赋值给原数组对应位置，并free临时数组
    for (int k = 0; k < right - left + 1; k ++) {
        array[left + k] = tmp[k];
    }

    //free(tmp);
    tmp = NULL;
}



int main(int argc, char const *argv[]) {
    int length = 100;
    int *array = randArray(length);

    printf("total length : %d \n", length);
    puts("before sort: ");

    display(array, length);

    puts("after sort: ");

    double start = clock();
    mergeSort(array, 0, length - 1);
    double end = clock();

    display(array, length);

    printf("execute time: %f s \n", (end - start) / CLOCKS_PER_SEC);

    return 0;
}

