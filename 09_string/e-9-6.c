#include <stdio.h>

void put_stringn(const char array[], int no) {
    for (int index = 0; index < no; index ++) {
        printf("%s\n", array);
    }
}

int main(int argc, char const *argv[])
{
    char array[] = "你好啊,吃过饭了没！";

    put_stringn(array, 10);

    return 0;
}
