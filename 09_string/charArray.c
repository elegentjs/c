#include "../header.h"

int main(int argc, char const *argv[])
{
    char array[] = {'A', 'B', 'C', '\0'};
    char array2[] = "ABC";
    char emptyArray[] = ""; // 等价于： char emptyArray[] = {'\0'};

    printf("array : %s \n", array);
    printf("array2: %s \n", array2);

    printf("array  length: %d \n", strLength(array));
    printf("array2 length: %d \n", strLength(array2));

    return 0;
}
