#include "head.h"

typedef struct {
    int data[MAX_SIZE];
    int top; // 栈顶指针

} *Stack;


/**
 * 初始化一个栈
 */ 
Stack init() {
    Stack stack = malloc(sizeof(Stack));
    // 初始化栈顶指针为-1
    stack -> top = -1;

    return stack;
}

/**
 * 压栈
 */
Status push(Stack stack, int val) {
    if (stack -> top >= MAX_SIZE - 1) {
        return ERROR;
    }

    stack -> data[++(stack -> top)] = val;
    return OK;
}

/**
 * 出栈并返回出栈值
 */
Status pop(Stack stack, int *result) {
    if (stack -> top == -1) {
        return -1;
    }

    *result = stack -> data[(stack -> top) --];

    return OK;
}

/**
 * 不出栈，只返回栈顶元素
 */ 
Status peek(Stack stack, int *result) {
    if (stack -> top == -1) {
        return -1;
    }

    *result = stack -> data[stack -> top];

    return OK;
}

int main(int argc, char const *argv[]) {
    
    Stack stack = init();

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    push(stack, 6);
    push(stack, 7);
    push(stack, 8);

    display(stack -> data, stack -> top + 1);
    
    int *result = malloc(sizeof(int));
    pop(stack, result);

    printf("pop val: %d \n", *result);
    display(stack -> data, stack -> top + 1);

    pop(stack, result);

    printf("pop val: %d \n", *result);
    display(stack -> data, stack -> top + 1);


    pop(stack, result);

    printf("pop val: %d \n", *result);
    display(stack -> data, stack -> top + 1);


    pop(stack, result);

    printf("pop val: %d \n", *result);
    display(stack -> data, stack -> top + 1);


    peek(stack, result);

    printf("peek val: %d \n", *result);
    display(stack -> data, stack -> top + 1);

    peek(stack, result);

    printf("peek val: %d \n", *result);
    display(stack -> data, stack -> top + 1);

    return 0;
}






