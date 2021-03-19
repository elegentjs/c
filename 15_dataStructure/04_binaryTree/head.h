# include <stdio.h>
# include <stdlib.h>
#include <time.h>

#define ERROR 0
#define OK 1
#define TRUE 1
#define FALSE 0
#define MAX_SIZE 100

/**
 * 数组元素打印
 * @param array 需要打印的数组
 * @param length 数组长度
 */
void display(int array[], int length);

void display(int array[], int length) {
    for (int index = 0; index < length; index ++) {
        printf("%2d ", array[index]);
    }   

    puts("");
}


int *randArray(int length) {
    int *array = (int*)malloc(length);

    for(int index = 0; index < length; index ++) {
        int num = rand() % 1000 + 1;
        array[index] = num;
    }

    return array;
}

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

/**
 * 使用结构体定义二叉树结点
 * 分别有三个属性：
 * val: 存储的值
 * left: 左子结点指针
 * right: 右子结点指针
 */
typedef struct Node {
    int val;
    struct Node *left;
    struct Node *right;
} Node;

/**
 * 前序遍历：先遍历本结点，再遍历左子树和右子树
 */
void preOrder(Node *root) {
    if (root == NULL) {
        return;
    }

    printf("%d -> ", root -> val);
    preOrder(root -> left);
    preOrder(root -> right);
}

/**
 * 中序遍历：左子树，中结点，右子树
 */
void inOrder(Node *root) {
    if (root == NULL) {
        return;
    }

    inOrder(root -> left);
    printf("%d -> ", root -> val);
    inOrder(root -> right);
}

/**
 * 后序遍历：左子树，右子树，中结点
 */
void postOrder(Node *root) {
    if (root == NULL) {
        return;
    }

    postOrder(root -> left);
    postOrder(root -> right);
    printf("%d -> ", root -> val);
}
