#include "../header.h"

char strcopy(char *d, const char *s) {
    while(*d++ = *s++);
}

int main(int argc, char const *argv[])
{
    char d[100];
    strcopy(d, "你好！C Program Language");

    printf("result : %s \n", d);

    return 0;
}
