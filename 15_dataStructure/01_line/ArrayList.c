#include "head.h"

/**
 * 演示线性表（基于顺序存储结构, 即数组）
 * 
 * 
 * add -> 在指定位置添加元素
 * remove -> 删除指定位置的元素
 * update -> 替换指定位置的元素
 * get -> 获取指定位置的元素
 * display -> 遍历顺序存储结构线性表
 * search  -> 根据关键字查询在线性表中的索引位置
 * 
 */

typedef struct {
    int data[MAX_SIZE];
    int length;
} ArrayList;

/**
 * 在指定位置添加元素
 * check： 1）不可超数组的最大长度
 *         2）添加的位置只可  index >= 0 && index <= list -> length 
 * 
 * 插入之前需要将插入位置后面的元素每个都后移一格，腾出插入位置
 * 
 * 最后将待插入元素插入到指定位置
 * 
 */
Status add(ArrayList *list, int index, int element) {

    if (list -> length >= MAX_SIZE) {
        return ERROR;
    }

    if (index < 0 || index > (list -> length)) {
        return ERROR;
    }

    // index位置后的都挪位
    for (int i = list -> length; i > index; i --) {
        list -> data[i] = list -> data[i - 1];
    }

    // 插入
    list -> data[index] = element;
    
    // 数组当前数据长度 +1
    list -> length ++;

    return OK;
}


/**
 * 移除指定位置的元素
 * 
 * check: 1) 当前数组为空，不能移除
 *        2）index < 0 或 index >= length, 不能移除
 * 
 *  将index后至 length - 1的所有元素都前移一位
 * 
 */
Status delete(ArrayList *list, int index) {
    // 当前数组数据长度
    int length = list -> length;

    if (length == 0) {
        return ERROR;
    }

    if (index < 0 || index >= length) {
        return ERROR;
    }

    for (int i = index; i < length - 1; i ++) {
        list -> data[i] = list -> data[i + 1];
    }

    list -> length --;

    return OK;

}


/**
 * 更新指定位置的元素
 * 
 *  check: 1）数组不能为空
 *         2）index不能越界 
 * 
 * 将对应索引位上的值替换为新值
 */
Status update(ArrayList *list, int index, int target) {
    if (list -> length == 0 || index < 0 || index >= list -> length) {
        return ERROR;
    }

    list -> data[index] = target;

    return OK;
}


/**
 * 返回指定位置的元素
 * 
 * check: 1) 数组为空，返回异常
 *        2）index 必须是 >= 0 and < list -> length   
 * 
 *  返回指定
 */
Status get(ArrayList *arrayList, int index, int *result) {
    if (arrayList -> length == 0 || index < 0 || index > arrayList -> length - 1) {
        return ERROR;
    }
    
    *result = arrayList -> data[index];
    return OK;
}


/**
 * 查找指定关键字的索引位
 * 
 * check: 1) 数组为空，返回异常
 *        
 * 找不到指定的元素result = -1
 * 找到指定的元素result设置为对应的索引位
 * 
 */ 
Status search(ArrayList *list, int target, int *result) {
    if (list -> length == 0) {
        return ERROR;
    }

    for (int i = 0; i < list -> length; i ++) {
        if (list -> data[i] == target) {
            *result = i;
            break;
        }

    }

    return OK;


}



int main(int argc, char const *argv[])
{
    ArrayList *list =  malloc(sizeof(ArrayList));

    puts("新增10个数字： 1 ～ 10");
    add(list, 0, 1);
    add(list, 0, 2);
    add(list, 0, 3);
    add(list, 0, 4);
    add(list, 0, 5);
    add(list, 0, 6);
    add(list, 0, 7);
    add(list, 0, 8);
    add(list, 0, 9);
    add(list, 0, 10);

    puts("打印当前线性表");
    display(list -> data, list -> length);

    puts("获取第一个元素，并打印对应值");
    int result;
    get(list, 0, &result);
    printf("result : %d \n", result);

    puts("移除线性表中第二个值，并打印移除操作后的线性表");
    delete(list, 1);
    display(list -> data, list -> length);


    puts("更新线性表中第三个值，更改为14，并打印更新操作后的线性表");
    update(list, 2, 14);
    display(list -> data, list -> length);


    puts("在线性表中查找目标值5，并打印线性表中对应索引");
    int *index = malloc(sizeof(int));
    search(list, 5, index);
    printf("5在线性表中的索引位是：%d\n", *index);


    return 0;
}


