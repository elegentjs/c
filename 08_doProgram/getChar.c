#include <stdio.h>

/**
 * getchar
 * 从标准输入流中读取下一个字符
 * 读取过程中或输入结束时(ctrl + D)，返回EOF
 * 
 */

int main(int argc, char const *argv[])
{
    int c;
    int array[100] = {0};

    while(1) {
        c = getchar();

        if (c == EOF) break;

        switch(c) {
            case '0': array[0] ++; break;
            case '1': array[1] ++; break;
            case '2': array[2] ++; break;
            case '3': array[3] ++; break;
            case '4': array[4] ++; break;
            case '5': array[5] ++; break;
            case '6': array[6] ++; break;
            case '7': array[7] ++; break;
            case '8': array[8] ++; break;
            case '9': array[9] ++; break;
        }

    } 

    puts("字符出现的次数分别为：");

    for (int index = 0; index < 10; index ++) {
        printf("'%d' : %d \n", index, array[index]);
    }


    return 0;
}
