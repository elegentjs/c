#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_SIZE 1000

/**
 * 读取输入行，最后打印出最长的行
 */

// 读取一行，并返回该行的长度
int getlines(char*);

// 将当前行复制到目标行
void copy(char* from, char* to);

int main(int argc, char const *argv[])
{
    int length;
    int max = 0;
    char* line = (char*) malloc(MAX_LINE_SIZE * sizeof(char));
    char* longest = (char*) malloc(MAX_LINE_SIZE * sizeof(char));

    while((length = getlines(line)) > 0){
        if (length > max) {
            max = length;
            copy(line, longest);
        }
    }

    printf("longes string : %s \n", longest);
    
    return 0;
}

int getlines(char* line) {
    int c;
    int index;
    for (index = 0; (c = getchar()) != EOF && c != '\n'; index ++) {
        *(line + index) = c;
    }

    if (c == '\n') {
        *(line + index) = c;
        index ++;
    }

    *(line + index) = '\0';
    return index;
} 

void copy(char* from, char* to) {
    while(*to++ = *from++);
}

