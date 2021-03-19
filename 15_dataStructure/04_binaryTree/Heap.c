#include "head.h"

/**
 * 特殊的完全二叉树-堆
 * 
 * 可分为大顶堆和小顶堆，大顶堆即任意节点都比左右子树大，
 * 小顶堆即任意节点都比左右子树小
 * 
 * 因为是完全二叉树，可用数组存储，且有以下特性：
 * 对于节点，如果数组下标为i, 则左子节点为 2i，右子节点为2i + 1
 * 
 * 堆的用途：
 * 1）堆排序
 * 2）优先级队列
 * 3）topN
 * 4）求中位数
 * 
 * 当删除元素或插入元素时，会破坏堆的定义。所以需要进行堆化，有两种方式：
 * 
 * 1）从下往上，跟父节点进行对比，然后交换
 * 2）从上往下，跟子几点进行对比，然后交换
 * 
 */


/**
 * 交换根节点和数组末尾元素的值
 */
void swap(int *heap, int len);

/**
 * 构建大顶堆
 */
void buildMaxHeap(int *heap, int len);

/**
 * 执行堆排序
 */
void heapSort(int *heap, int len);


int main(int argc, char const *argv[]) {
    int array[] = {10, 2, 3, 4, 50, 6, 7, 9};

    display(array, sizeof(array) / sizeof(int));

    heapSort(array, sizeof(array) / sizeof(int));

     puts("after heap sort: ");
     display(array, sizeof(array) / sizeof(int));

    return 0;
}

/**
 * 构建大顶堆
 *  从非叶子节点开始跟左子树和右子树节点比较，如果子节点比当前节点大则执行交换，
 *  直到所有节点都满足要求停止
 */
 void buildMaxHeap(int *heap, int len) {
     int i;
     int temp;
 
     for (i = len/2-1; i >= 0; i--)
     {
         if ((2*i+1) < len && heap[i] < heap[2*i+1])    /* 根节点大于左子树 */
         {
             temp = heap[i];
             heap[i] = heap[2*i+1];
             heap[2*i+1] = temp;
             /* 检查交换后的左子树是否满足大顶堆性质 如果不满足 则重新调整子树结构 */
             if ((2*(2*i+1)+1 < len && heap[2*i+1] < heap[2*(2*i+1)+1]) || (2*(2*i+1)+2 < len && heap[2*i+1] < heap[2*(2*i+1)+2]))
             {
                 buildMaxHeap(heap, len);
             }
         }
         if ((2*i+2) < len && heap[i] < heap[2*i+2])    /* 根节点大于右子树 */
         {
             temp = heap[i];
             heap[i] = heap[2*i+2];
             heap[2*i+2] = temp;
             /* 检查交换后的右子树是否满足大顶堆性质 如果不满足 则重新调整子树结构 */
             if ((2*(2*i+2)+1 < len && heap[2*i+2] < heap[2*(2*i+2)+1]) || (2*(2*i+2)+2 < len && heap[2*i+2] < heap[2*(2*i+2)+2]))
             {
                 buildMaxHeap(heap, len);
             }
         }
     }
 }
 

 void heapSort(int *heap, int len) {
     for (int i = len; i > 0; i--) {
         buildMaxHeap(heap, i);
         swap(heap, i);
     }
 }


/**
 * 交换数组根节点和末尾元素的值
 */
void swap(int *heap, int len) {
    int temp = *heap;
    *heap = *(heap + (len - 1));
    *(heap + (len - 1)) = temp;
}




