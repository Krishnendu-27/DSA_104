#include <stdio.h>

#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};
int main() {
    struct Node * p;
    p = (struct Node * ) malloc(sizeof(struct Node));
    p -> data = 50;
    p -> next = (struct Node * ) malloc(sizeof(struct Node));
    p -> next -> data = 60;
    p -> next -> next = (struct Node * ) malloc(sizeof(struct Node));
    p -> next -> next -> data = 70;
    p -> next -> next -> next = (struct Node * ) malloc(sizeof(struct Node));
    p -> next -> next -> next -> data = 80;

    struct Node * t = (struct Node * ) malloc(sizeof(struct Node));
    t -> data = 10;
    t -> next = p;
    p = t;

    while (p != NULL)
    {
        printf("%d -> ", p -> data);
        p = p -> next;
    }


    return 0;
}