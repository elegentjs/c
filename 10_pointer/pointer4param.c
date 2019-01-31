#include <stdio.h>

void upperHeight(int *height) {
    if (*height < 180) {
        *height = 180;
    }

}

int main(int argc, char const *argv[])
{
    int a = 170;
    int b = 180;

    upperHeight(&a);
    upperHeight(&b);

    printf("a : %d \n", a);
    printf("b : %d \n", b);

    return 0;
}
