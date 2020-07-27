# include "head.h"

/**
 * 基于数组的循环队列
 * 
 * 关键是确定好队列空和队列满的判定条件
 * 
 * 空的条件很简单：即 head == tail
 * 满的条件比较复杂：从图形上看就是当tail紧靠着head的时候，tail在前，head在后。
 * 
 * 即：(tail + 1) % n = head
 * 
 * 另外，因为是循环队列，索引head和tail不可无限增长，当到达数组length - 1后，下一个head或tail又变成了0
 * 
 * 
 */

/**
 * 定义循环队列结构体
 */ 
typedef struct {
    int data[MAX_SIZE];
    int head;
    int tail;
} *CircularQueue;

/**
 * 初始化一个循环队列
 */
CircularQueue init() {
    CircularQueue q = malloc(sizeof(CircularQueue));
    q -> head = 0;
    q -> tail = 0;

    return q;
}

/**
 * 入列
 */
Status enqueue(CircularQueue q, int e) {
    // 队列已满
    if ((q -> tail + 1) % MAX_SIZE == q -> head) {
        return ERROR;
    }

    q -> data[q -> tail] = e;
    q -> tail = (q -> tail + 1) % MAX_SIZE;

    return OK;
}


/**
 * 出列
 */
int dequeue(CircularQueue q) {
    // 空的
    if (q -> head == q -> tail) {
        return ERROR;
    }

    int result = q -> data[q -> head];
    q -> head = (q -> head + 1) % MAX_SIZE;

    return result;
}



int main(int argc, char const *argv[]) {
    CircularQueue q = init();

    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    enqueue(q, 5);
    enqueue(q, 6);
    enqueue(q, 7);
    enqueue(q, 8);
    enqueue(q, 9);

    puts("打印当前队列中元素：");
    display(q -> data, 9);

    puts("");

    puts("出列");
    
    int e = dequeue(q);
    printf("出列元素：%d \n", e);
    e = dequeue(q);
    printf("出列元素：%d \n", e);
    e = dequeue(q);
    printf("出列元素：%d \n", e);
    e = dequeue(q);
    printf("出列元素：%d \n", e);
    e = dequeue(q);
    printf("出列元素：%d \n", e);

    return 0;

}