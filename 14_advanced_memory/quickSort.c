#include "../header.h"

/**
 *  演示快速排序算法
 * 
 *  算法原理：
 * 
 *      1）指定一个pivot(基准点)， 基准点可以是第一个，也可以采用随机，头尾取中等方式
 *      2）从头和尾往中间搜寻，将数据分为两类，一部分小于pivot， 另一部分大于pivot
 *      3）对分割的两段数据分别做1～2操作
 * 
 *  而3操作可以采用递归的方式完成
 */


void quickSort(int*, int);


int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5, 100, 67, 45};

    quickSort(array, 8);

    display(array, 8);

    return 0;
}


void quickSortInternal(int *data, int start, int end) {

    int leftIndex = start;
    int rightIndex = end;

    // 基准点
    int pivot = *(data + (leftIndex + rightIndex) / 2);

    while(leftIndex <= rightIndex) {
        // 从左开始遍历，直到找到元素比基准元素大的元素
        for (; *(data + leftIndex) < pivot; leftIndex ++)
        ;

        // 从右开始遍历，直到找到元素比基准元素小的元素
        for (; *(data + rightIndex) > pivot; rightIndex --)
        ;

        if (leftIndex <= rightIndex) {
            int temp = *(data + leftIndex);
            *(data + leftIndex) = *(data + rightIndex);
            *(data + rightIndex) = temp;

            leftIndex ++;
            rightIndex --;
        }
    }

    if (rightIndex > start) {
        quickSortInternal(data, start, rightIndex);
    }

    if (leftIndex < end) {
        quickSortInternal(data, leftIndex, end);
    }

}

void quickSort(int *data, int length) {
    quickSortInternal(data, 0, length - 1);
}
