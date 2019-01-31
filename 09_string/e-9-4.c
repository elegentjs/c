#include "../header.h"

int str_chnum(const char str[], int c) {
    int count = 0;
    int arrayLen = strLength(str);

    for (int i = 0; i < arrayLen; i ++) {
        if (str[i] == c) {
            count ++;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    char array[] = "123c23a1fad13c";
    
    int count = str_chnum(array, 'c');

    printf("count = %d \n", count);

    return 0;
}
