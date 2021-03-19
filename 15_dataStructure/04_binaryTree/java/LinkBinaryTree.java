import java.util.Scanner;

/**
 * 基于链表的二叉树实现
 * 需要实现的操作：
 * 1）初始化二叉树，采用递归方式实现（中序）
 * 2) 遍历（前序 / 中序 / 后序）
 */
public class LinkBinaryTree {

    private Node root;

    public LinkBinaryTree() {}


    /**
     * 初始化二叉树
     * 初始化规则：当输入的值大于0时，表示新建结点，当输入的值小于等于0时，表示结束新建结点
     */
    public Node create() {
        System.out.println("当输入的值大于0时，表示新建结点，当输入的值小于等于0时，表示结束新建结点");

        int val = nextInt();

        Node node;
        if (val <= 0) {
            node = null;
        } else {
            node = new Node();
            node.setVal(val);
            node.setLeft(create());
            node.setRight(create());
        }

        return node;
    }

    /**
     * 前序遍历
     * @param node
     */
    public void preOrder(Node node) {
        if (node != null) {
            System.out.println("node: " + node.getVal());
            preOrder(node.getLeft());
            preOrder(node.getRight());
        }
    }

    /**
     * 中序遍历
     * @param node
     */
    public void inOrder(Node node) {
        if (node != null) {
            inOrder(node.getLeft());
            System.out.println("node: " + node.getVal());
            inOrder(node.getRight());
        }
    }

    /**
     * 后序遍历
     * @param node
     */
    public void postOrder(Node node) {
        if (node != null) {
            postOrder(node.getLeft());
            postOrder(node.getRight());
            System.out.println("node: " + node.getVal());
        }
    }


    private int nextInt() {
        Scanner scanner = new Scanner(System.in);
        // 输入的数值
        return scanner.nextInt();
    }

    public static void main(String[] args) {
        LinkBinaryTree tree = new LinkBinaryTree();
        tree.root = tree.create();

        System.out.println("preOrder: =============");
        tree.preOrder(tree.root);

        System.out.println("inOrder: =============");
        tree.inOrder(tree.root);

        System.out.println("postOrder: =============");
        tree.postOrder(tree.root);
    }
}


/**
 * 二叉树结点
 */

class Node {
    private int val;
    private Node left;
    private Node right;

    public int getVal() {
        return val;
    }

    public void setVal(int val) {
        this.val = val;
    }

    public Node getLeft() {
        return left;
    }

    public void setLeft(Node left) {
        this.left = left;
    }

    public Node getRight() {
        return right;
    }

    public void setRight(Node right) {
        this.right = right;
    }

    @Override
    public String toString() {
        return String.valueOf(val);
    }
}
