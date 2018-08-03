#include<stdio.h>

unsigned strLen(const char array[]) {
    unsigned len = 0;

    while(array[len ++]);

    return len;
}

/**
 *  执行数组反转
 */
void reverseStr(char array[]) {
    int arrayLen = strLen(array) - 1;

    for (int index = 0; index < arrayLen / 2; index ++) {
        int temp = array[index];
        array[index] = array[arrayLen - index - 1];
        array[arrayLen - index - 1] = temp;
    }
    
}

int main(int argc, char const *argv[])
{
    puts("请输入一段字符串，我们将逆序打印输出。");

    char s[1000];

    scanf("%s", s);

    reverseStr(s);

    printf("%s \n", s);

    return 0;
}
