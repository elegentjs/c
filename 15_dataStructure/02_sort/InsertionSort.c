#include "head.h"

/**
 * InsertionSort
 * 直接插入排序也是基本的排序算法
 *  核心思路：
 *      渐进式完善排序，即从第二个元素开始往前比较元素放到合适的位置，直到所有都排序完成
 * 时间复杂度：最大：O(n * n); 平均：O(n * n); 最小：O(n)
 * 空间复杂度：O(1)
 * 是否稳定排序：是
 */

/**
 * 直接插入排序
 */
void insertionSort(int array[], int length) {
    for (int index = 1; index < length; index ++) {
        int val = array[index];
        int i = index - 1;
        // 移动元素
        for (; i >= 0; i --) {
            if (array[i] > val) {
                array[i + 1] = array[i];
            } else {
                break;
            }
        }

        array[i + 1] = val;
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
    insertionSort(array, length);
    double end = clock();

    display(array, length);

    printf("execute time: %f s \n", (end - start) / CLOCKS_PER_SEC);

    return 0;
}

