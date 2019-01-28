#include "../header.h"

int str_char(const char str[], int c) {
    int index = -1;
    int arrayLen = strLength(str);

    for (int i = 0; i < arrayLen; i ++) {
        if (str[i] == c) {
            index = i;
            break;
        }
    }

    return index;
}

int main(int argc, char const *argv[])
{
    char array[] = "123123a1fad13c";
    
    puts("请输入待查找的字符：");

    char target;

    scanf("%c", &target);

    int index = str_char(array, target);

    printf("index = %d \n", index);

    return 0;
}
