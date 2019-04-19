#include <stdio.h>
#include <stdlib.h>

/**
 * 演示用结构体（struct）生成的链表数据结构
 */

typedef struct Node_tag {
    char *name;
    struct Node_tag *next;
} Node;

int main(int argc, char const *argv[])
{
    Node *head = malloc(sizeof(Node));
    
    head -> name = "The C programming language.";
    head -> next = malloc(sizeof(Node));
    head -> next -> name = "next";

    printf("&head .. %p \n", head);
    printf("&name .. %p \n", head -> name);
    printf("name .. %s \n", head -> name);
    printf("next name .. %s \n", head -> next -> name);


    free(head);

    return 0;
}
