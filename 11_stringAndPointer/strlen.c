#include <stdio.h>
#include <string.h>

int main(int argc, const char *arg[]) {

    char *s = "hello, world";

    int count = strlen(s);

    printf("%s 's length: %d \n", s, count);

    return 0;
}