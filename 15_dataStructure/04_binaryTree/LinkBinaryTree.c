#include "head.h"

/**
 * 演示基于链表的二叉树的创建，新增，修改，删除，查找，遍历操作
 * 基于链表的二叉树是最主流的二叉树实现方式
 * 
 * 二叉树有以下术语：
 * 
 * 树的层树
 * 树的深度
 * 节点的高度
 * 节点的深度
 */


/**
 * 初始化一个binaryTree。
 * 初始化过程：
 *  采用递归初始化，先初始化根结点，再初始化左子树，初始化左子树的时候一直先初始化左叶子结点，除非输入0或负数才开始
 *  初始化右子树
 */
Node *createNode() {
    int val;
    printf("请输入结点值，要求整数，当输入为0或负数时表示当前结点不创建。\n");
    scanf("%d", &val);

    if (val <= 0) {
        return NULL;
    }
    
    Node *node = (Node*) malloc(sizeof(Node));
    node -> val = val;

    node -> left = createNode();
    node -> right = createNode();

    return node;
}

int main(int argc, char const *argv[]) {

    Node *root = createNode();
    puts("初始化完成！");

    puts("开始前序遍历：");
    preOrder(root);
    puts("");

    puts("开始中序遍历：");
    inOrder(root);
    puts("");

    puts("开始后序遍历：");
    postOrder(root);
    puts("");

    return 0;
}