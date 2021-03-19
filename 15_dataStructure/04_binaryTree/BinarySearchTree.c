#include "head.h"

/**
 * 二叉搜索树
 * 
 * 支持动态数据集合的快速插入，删除，查找操作，为实现快速查找而生
 * 
 * 特点：
 *   树中的任意结点，左子树中的每个结点的值都小于该结点
 *   右子树结点的值都大于这个结点的值
 * 
 * 执行插入操作时递归查找位置
 * 
 */




/**
 * 执行插入操作
 * 
 */
void insert(Node **tree, int data) {
    Node *node = (Node*) malloc(sizeof(Node));
    node -> val = data;

    if (*tree == NULL) {
        *tree = node;
        return;
    }

    Node *p = *tree;

    while (p != NULL)
    {
        if (data > p -> val) {
            if (p -> right == NULL) {
                p -> right = node;
                return;
            }

            p = p -> right;
        } else {
            if (p -> left == NULL) {
                p -> left = node;
                return;
            }

            p = p -> left;
        }
    }

}

/**
 * 查找跟目标元素相等的结点，返回对应结点
 */
Node *find(Node *node, int target) {
    while (node != NULL) {
        if (target < node -> val) {
            node = node -> left;
        } else if (target > node -> val) {
            node = node -> right;
        } else {
            return node;
        }
    }

    return NULL;
}

/**
 * 删除节点
 * 先找到该节点以及它的父节点，再分三种不同的情况处理
 * 1）该节点是个叶子节点
 * 2）该节点仅有一个左子树或右子树
 * 3）该节点有两个子树
 */
void delete(Node *node, int target) {
    Node *p = node;
    Node *pp = NULL;

    while (p != NULL && p -> val != target) {
        pp = p;

        if (target < p -> val) {
            p = p -> left;
        } else {
            p = p -> right;
        }
    }

    if (p == NULL) {
        printf("cannot find target node for value: %d. \n", target);
        return;
    }


    // 要删除的节点有两个子节点
    if (p -> left != NULL && p -> right != NULL) {
        Node *min = p -> right;
        Node *minp = p;

        while (min -> left != NULL) {
            minp = min;
            min = min -> left;
        }

        p -> val = min -> val;

        if (minp -> left == min) {
            minp -> left = NULL;
        } else {
            minp -> right = NULL;
        }

        return;
    }


    // 要删除的节点无子节点
    if (p -> left == NULL && p -> right == NULL) {
        // 待删除节点是父节点的左子节点
        if (pp -> left == p) {
            pp -> left = NULL;
        } else {
            pp -> right = NULL;
        }

        return;
    }

    // 要删除的节点只有一个子节点
    Node *child;
    if (p -> left != NULL) {
        child = p -> left;
    } else {
        child = p -> right;
    }

    // 待删除节点是父节点的左子节点
    if (pp -> left == p) {
        pp -> left = child;
    } else {
        pp -> right = child;
    }

}



int main(int argc, char const *argv[]) {
    Node *root;
    Node **r = &root;

    insert(r, 20);
    insert(r, 19);
    insert(r, 18);
    insert(r, 25);
    insert(r, 30);
    insert(r, 23);
    insert(r, 45);

    puts("前序遍历:");
    preOrder(root);

    puts("中序遍历:");
    inOrder(root);

    puts("后序遍历:");
    postOrder(root);

    int targetVal;
    printf("input a value to search: \n");
    scanf("%d", &targetVal);

    Node *target = find(*r, targetVal);
    
    if (target == NULL) {
        printf("cannot find %d in binary search tree. \n", targetVal);
    } else {
        printf("find %d in binary search tree", targetVal);
    }

    delete(root, 45);

    puts("删除后中序遍历:");
    inOrder(root);
    return 0;
}
