#include<stdio.h>

int main(int argc, char const *argv[])
{
    char array[] = {'A', 'B', 'C', '\0'};
    char array2[] = "ABC\0";
    char emptyArray[] = ""; // 等价于： char emptyArray[] = {'\0'};

    printf("array : %s \n", array);
    printf("array2: %s \n", array2);

    return 0;
}
