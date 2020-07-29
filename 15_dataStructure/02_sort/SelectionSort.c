#include "head.h"

/**
 * SelectionSort
 * 选择排序也是基本的排序算法
 *  核心思路：
 *      依此让每个位置元素为最终元素
 * 时间复杂度：最大：O(n * n); 平均：O(n * n); 最小：O(n * n)
 * 空间复杂度：O(1)
 * 是否稳定排序：否，因为会存在元素交换
 */

/**
 * 选择排序
 */
void selectionSort(int array[], int length) {
    for (int i = 0; i < length; i ++) {
        int current = array[i];
        int targetIndex = i;
        for (int j = i + 1; j < length; j ++) {
            if (array[j] < array[targetIndex]) {
                targetIndex = j;
            }
        }

        array[i] = array[targetIndex];
        array[targetIndex] = current;
    }

}


int main(int argc, char const *argv[]) {
    int length = 100;
    int *array = randArray(length);

    printf("total length : %d \n", length);
    puts("before sort: ");

    display(array, length);

    puts("after sort: ");

    double start = clock();
    selectionSort(array, length);
    double end = clock();

    display(array, length);

    printf("execute time: %f s \n", (end - start) / CLOCKS_PER_SEC);

    return 0;
}

