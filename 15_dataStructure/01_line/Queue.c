# include "head.h"

/**
 * 最简单的队列（基于数组）
 */

/**
 * 定义队列结构体
 */
typedef struct {
    int data[MAX_SIZE];
    int head;
    int tail;
} *Queue;

Queue init() {
    Queue queue = malloc(sizeof(Queue));
    queue -> head = 0;
    queue -> tail = 0;

    return queue;
}


/**
 * 入列
 */
Status enqueue(Queue q, int e) {
    // 队列满了
    if (q -> tail == MAX_SIZE) {
        return ERROR;
    }

    q -> data[q -> tail ++] = e;
    return OK;
}

/**
 * 出列
 */
int dequeue(Queue q) {
    // 队列为空
    if (q -> head == q -> tail) {
        return ERROR;
    }

    int result = q -> data[q -> head ++];
    return result;
}


int main(int argc, char const *argv[])
{
    Queue q = init();
    
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
