#include<stdio.h>

unsigned strLen(const char array[]) {
    unsigned len = 0;

    while(array[len ++]);

    return len;
}

void reverseStr(const char array[]) {
    int arrayLen = strLen(array);

    for (int index = arrayLen - 1; index >= 0; index --) {
        putchar(array[index]);
    }
    putchar('\n');
}

int main(int argc, char const *argv[])
{
    puts("请输入一段字符串，我们将逆序打印输出。");

    char s[1000];

    scanf("%s", s);

    reverseStr(s);

    return 0;
}
