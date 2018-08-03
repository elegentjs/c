#include<stdio.h>

unsigned strLength(const char charArray[]) {
    unsigned length = 0;

    while(charArray[length ++]);

    return length;
}

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
    
    int index = str_char(array, 'c');

    printf("index = %d \n", index);

    return 0;
}
