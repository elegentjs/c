#include "head.h"

/**
 * 演示线性表（基于顺序存储结构）
 * 
 */

typedef struct {
    int data[MAX_SIZE];
    int length;
} ArrayList;

Status get(ArrayList arrayList, int index, int *result) {
    if (arrayList.length == 0 || index < 0 || index > arrayList.length - 1) {
        return ERROR;
    }
    
    *result = arrayList.data[index];
    return OK;
}

Status add(ArrayList *list, int index, int element) {

    if (list -> length >= MAX_SIZE) {
        return ERROR;
    }

    if (index < 0 || index > list -> length) {
        return ERROR;
    }


    for (int i = list -> length; i > index; i --) {
        list -> data[i] = list -> data[i - 1];
    }

    list -> data[index] = element;
    list -> length ++;

    return OK;
}

int main(int argc, char const *argv[])
{
    ArrayList *list =  malloc(sizeof(ArrayList));

    add(list, 0, 1);
    add(list, 0, 2);
    add(list, 0, 3);
    add(list, 0, 4);
    add(list, 0, 5);
    add(list, 0, 6);

    display(list -> data, list -> length);
    return 0;
}


