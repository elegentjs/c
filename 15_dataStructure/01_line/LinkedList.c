#include "head.h"

/**
 * 演示线性表（基于链式存储结构, 即链表）
 * 
 * 
 * add -> 在指定位置添加元素
 * delete -> 删除指定位置的元素
 * update -> 替换指定位置的元素
 * get -> 获取指定位置的元素
 * display -> 遍历线性表
 * search  -> 根据关键字查询在线性表中的索引位置
 * reverse -> 反转链表，即原来的tail变为第一个数据元素，head指向它，数据倒转
 * 
 */

/**
 * 定义节点结构体，存储节点值，同时存储两个指针，分别指向上一个节点和下一个节点
 */
typedef struct Node {
    struct Node *next;
    struct Node *prev;
    int val;
} Node;

/**
 * 定义链表结构体，存储当前链表节点元素个数（不包含头节点，头节点只有指向第一个节点的指针，且无数据域）,
 * 同时存储两个特殊节点指针，一个是head, 表示头节点
 * 一个是tail，表示尾节点（尾节点的next为NULL）
 */ 
typedef struct {
    Node *head;
    Node *tail;
    int length;
} LinkedList;


/**
 * 判断索引位是否越界
 */ 
Status checkIndex(LinkedList *list, int index) {
 if (list == NULL || index < 0 || index > list -> length) {
        return ERROR;
    }

    return OK;
}

/**
 * 找到目标节点
 */ 
Node *findNode(LinkedList *list, int index) {
     if (checkIndex(list, index) == ERROR) {
        return ERROR;
    }

    Node *node = list -> head;

    Node *result = NULL;
    int i = 0;
    while (node != NULL) {
        node = node -> next;

        if (i == index) {
            result = node;
            break;
        }

        i ++;
    }

    return result;
}


/**
 * 在指定位置插入元素节点
 */ 
Status add(LinkedList *list, int index, int val) {
    if (checkIndex(list, index) == ERROR) {
        return ERROR;
    }

    Node *head = list -> head;
    Node *tail = list -> tail;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode -> val = val;

    // 链表总元素 + 1
    list -> length ++;

    // 插入到队首，新元素的next为原首元素, 原首元素的prev为新元素，head指向新元素
    if (index == 0) {
        Node *oldNode = head -> next;
        head -> next = newNode;

        // 链表为空
        if (oldNode == NULL) {
            newNode -> next = NULL;
        } else {
            newNode -> next = oldNode;
            oldNode -> prev = newNode;
        }

        return OK;
    } 

    // 插入到链表的末尾，先找到末尾节点（next为NULL）, 将尾节点的next设置为新元素，新元素的prev设置为尾节点，新元素的next
    // 设置为NULL，新元素设置为新的尾节点
    if (list -> length == index) {
        tail -> next = newNode;
        newNode -> prev = tail;
        newNode -> next = NULL;
        list -> tail = newNode;

        return OK;
    }

    // 一般情况, 先取得对应的node, 新节点的prev = node, 新节点next = node -> next。 node的next变为新元素，
    // node -> next -> prev = 新元素
    Node *targetNode = findNode(list, index);

    newNode -> prev = targetNode;
    newNode -> next = targetNode -> next;
    targetNode -> next = newNode;
    targetNode -> next -> prev = newNode;

    return OK;
}

/**
 * 删除指定位置的节点
 */ 
Status delete(LinkedList *list, int index) {
    if (list == NULL || index < 0 || index >= list -> length) {
        return ERROR;
    }

    Node *target = findNode(list, index);

    list -> length --;

    // 是首节点
    Node *firstNode = list -> head -> next;
    if (target == firstNode) {
        firstNode -> next -> prev = NULL;
        list -> head -> next = firstNode -> next;
        return OK;
    }

    // 是尾节点
    if (target == list -> tail) {
        list -> tail = target -> prev;
        target -> prev -> next = NULL;
        return OK;
    }

    // 一般情况
    target -> prev -> next = target -> next;
    target -> next -> prev = target -> prev;
    return OK;
}

/**
 * 更新链表节点，更改val值
 */ 
Status update(LinkedList *list, int index, int val) {
    Node *node = findNode(list, index);

    if (node != NULL) {
        node -> val = val;
    }

    return OK;
}

/**
 * 创建一个空链表，
 * 只有一个节点，作为头节点和尾节点，且它无数据域，next,prev指针为NULL
 */
LinkedList *initEmpty() {
    Node *head, *node, *end;

    LinkedList *list = (LinkedList*) malloc(sizeof(LinkedList));

    head = (Node*) malloc(sizeof(Node));
    end = head;

    list -> head = head;
    list -> length = 0;
    end -> next = NULL;

    return list;
}


void displayLinkedList(LinkedList *list) {
    Node *node = list -> head;

    while(node -> next != NULL) {
        node = node -> next;
        printf("%d ", node -> val);
    }

    puts("");
}


/**
 * 反转链表
 * 
 */ 
Status reverse(LinkedList *list) {
    Node *current = list -> head -> next;
    Node *prev = NULL;
    Node *next = NULL;
    Node *newHead = malloc(sizeof(Node));

    list -> tail = current;
    list -> head = newHead;

    while (current != NULL) {
        next = current -> next;

        if (next == NULL) {
            newHead -> next = current;
        }

        current -> next = prev;
        prev = current;
        current = next;
    }

    puts("reverse Done!");
    
    return OK;
}


int main(int argc, char const *argv[])
{
    puts("请输入数字创建链表");
    LinkedList *list = initEmpty();

    puts("打印链表结果：");
    displayLinkedList(list);


    puts("打印链表元素长度");
    printf("链表元素总长度：%d \n", list -> length);


    add(list, 0, 100);
    add(list, 0, 101);
    add(list, 0, 102);
    add(list, 0, 103);
    add(list, 0, 104);
    add(list, 0, 105);
    add(list, 0, 106);
    add(list, 0, 107);
    add(list, 0, 108);
    add(list, 0, 109);

    puts("打印链表结果：");
    displayLinkedList(list);

    puts("打印链表元素长度");
    printf("链表元素总长度：%d \n", list -> length);

    delete(list, 0);

    puts("打印链表结果：");
    displayLinkedList(list);

    puts("打印链表元素长度");
    printf("链表元素总长度：%d \n", list -> length);


    // 更新节点值，将第一个值更改为1000
    puts("更新节点值，将第一个值更改为1000");
    update(list, 0, 1000);

    puts("打印链表结果：");
    displayLinkedList(list);

    puts("打印链表元素长度");
    printf("链表元素总长度：%d \n", list -> length);

    puts("反转链表");
    reverse(list);
    puts("打印链表结果：");
    displayLinkedList(list);

    puts("打印链表元素长度");
    printf("链表元素总长度：%d \n", list -> length);

    return 0;
}

