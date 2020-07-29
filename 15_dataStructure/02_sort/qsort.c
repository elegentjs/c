# include "head.h"

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}


int main(int argc, char const *argv[])
{
    int length = 100;
    int *array = randArray(length);

    printf("total length : %d \n", length);
    puts("before sort: ");

    display(array, length);

    puts("after sort: ");

    double start = clock();
    qsort(array, length, sizeof(int), compare);
    double end = clock();

    display(array, length);

    printf("execute time: %f s \n", (end - start) / CLOCKS_PER_SEC);

    return 0;
}
