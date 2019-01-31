#include "../header.h"


int main(int argc, char const *argv[])
{
    char *s = "你好，C program language.";

    int length = strLength(s);

    printf("%s 长度： %d \n", s, length);

    return 0;
}
