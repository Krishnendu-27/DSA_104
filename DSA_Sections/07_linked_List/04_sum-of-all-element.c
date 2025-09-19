#include <stdio.h>

#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};
// sum all the element in the LL
int sum_element(struct Node * p) {
    if (p == NULL)
        return 0;
    else
        return sum_element(p->next) + p->data;
}

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

    printf("%d ", sum_element(p));
    return 0;
}