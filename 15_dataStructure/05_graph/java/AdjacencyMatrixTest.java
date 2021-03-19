import java.util.Arrays;

/**
 * 图的存储方法：邻接矩阵存储方法
 * 即使用二维数组存储顶点与其他顶点之间的关系
 *
 * 生成的二维数组的第一位是顶点，第二位是该顶点与其他顶点的关系，
 * 假设顶点数是N，则生成的矩阵为N * N
 *
 * 邻接矩阵法最大的问题是存在空间浪费，它占用的空间是顶点数的平方，但很多场景下是顶点多，但顶点之间的关系少，
 * 如微信好友，微信有几亿用户，但每个用户的好友仅几十至几百，这样就会存在巨大的空间浪费，
 * 针对这种情况，可用邻接表存储法，这种方法跟哈希表类似
 *
 * @author liupj
 */
public class AdjacencyMatrixTest {

    public static void main(String[] args) {
        MatrixGraph graph = new MatrixGraph(4);
        graph.init();

        graph.display();
    }
}


class MatrixGraph {

    // 存储顶点和顶点关系的二维数组
    private int[][] datas;

    /**
     * constructor
     * @param count 顶点个数
     */
    public MatrixGraph(int count) {
        datas = new int[count][count];
    }

    /**
     * 初始化一个图，共有4个顶点，A，B，C，D，对应数组的下标为：0，1，2，3
     * 顶点之间的关系为：
     * A -> B，C, D (0 -> 1,2,3)
     * B -> A, D (1 -> 0, 3)
     * C -> A (2 -> 0)
     * D -> A, B (3 -> 0, 1)
     */
    public void init() {
        datas[0][1] = 1;
        datas[0][2] = 1;
        datas[0][3] = 1;

        datas[1][0] = 1;
        datas[1][3] = 1;

        datas[2][0] = 1;

        datas[3][0] = 1;
        datas[3][1] = 1;
    }


    public int[][] getDatas() {
        return datas;
    }


    public void display() {
        for (int index = 0; index < datas.length; index ++) {
            System.out.println(Arrays.toString(datas[index]));
        }
    }

}
