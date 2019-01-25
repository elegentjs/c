#include "../header.h"

#define NUMBER 10

/**
 * 顺序查找法
 * 从数组的头开始依次搜索，直到找到目标元素为止
 */
int search(const int array[], int target);

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    puts("数组如下：");
    display(array, NUMBER);

    puts("请输入要查找的元素：");
    int target;
    scanf("%d", &target);

    int index = search(array, target);

    printf("要查找的元素%d在数组中的下标是：%d \n", target, index);

    return 0;
}

/**
 * 顺序查找指定元素，找到则返回对应数组下标，找不到则返回 -1
 * 
 */
int search(const int array[], int target) {
    int result = ERROR;
    for (int index = 0; index < NUMBER; index ++) {
        if (array[index] == target) {
            result = index;
            break;
        }
    }

    return result;
}