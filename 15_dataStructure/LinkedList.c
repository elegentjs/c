#include <stdio.h>
#include <stdlib.h>

/**
 * 线性表：链表
 * 
 * 演示链表的 add/remove/search/iterator
 * 
 */

typedef struct Node
{
    char *name;
    struct Node *next;
} Node;

void display(Node *);
void add(char *);
Node *findTail(Node *);

int main(int argc, char const *argv[])
{
    Node *head = malloc(sizeof(Node));
    head -> name = "head";

    Node *tail = findTail(head);

    printf("name : %s \n", tail -> name);


    return 0;
}


void display(Node *head) {
    Node *node = head;
    while (node != NULL) {
        printf("node : %s \n", node -> name);
        node = node -> next;
    }
}

Node *findTail(Node *head) {
    Node *node = head;
    while (1) {
        if (node -> next == NULL) {
            break;
        }
    }

    return node;
}

void add(char *name) {

}