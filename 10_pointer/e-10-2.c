#include <stdio.h>

void swap(int *x, int *y) {
    if (*x > *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
}

void sort3(int *x, int *y, int *z) {
    swap(x, y);
    swap(x, z);
    swap(y, z);
}

int main(int argc, char const *argv[])
{
    puts("输入三个整数，程序将按从小到大的顺序排列。");
    
    int i, j, k;

    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &k);

    sort3(&i, &j, &k);

    printf("%4d%4d%4d\n", i, j, k);

    return 0;
}
