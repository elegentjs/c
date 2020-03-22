#include "../header.h"

int strcopy(char *d, const char *s) {
    while(*d++ = *s++)
        ;
    return 0;
}

int main(int argc, char const *argv[])
{
    char d[100];
    strcopy(d, "你好！C Program Language");

    printf("result : %s \n", d);

    return 0;
}
