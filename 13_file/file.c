#include <stdio.h>

int main(int args, const char *argv[]) {
    FILE *fp;

    fp = fopen("/Users/liupeijun/Downloads/initData.sql", "r");

    if (fp == NULL) {
        printf("文件打开失败\n");
    } else {

        char line[1000];

        while(fscanf(fp, "%s", line) != EOF) {
            printf("%s\n", line);
        }

        fclose(fp);
    }

    return 0;
}