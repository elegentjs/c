#include <stdio.h>
#include <time.h>

/**
 * 打印当前时间
 */
int main(int argc, const char *args[]) {

    time_t mills;
    struct tm *local;

    time(&mills);
    printf("current mills: %ld \n", mills);

    local = localtime(&mills);

    printf("year: %d \n", local -> tm_year + 1900);
    printf("month: %d \n", local -> tm_mon + 1);
    printf("day: %d \n", local -> tm_mday);


    return 0;
}