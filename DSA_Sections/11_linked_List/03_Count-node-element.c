#include <stdio.h>

#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};
// Recursive function to count elements
int count_element(struct Node * p) {
    if (p == NULL)
        return 0;
    else
        return 1 + count_element(p -> next);
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

    printf("%d ", count_element(p));
    return 0;
}