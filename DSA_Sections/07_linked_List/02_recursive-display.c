#include <stdio.h>

#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};
void recusrive_call(struct Node * p) {
    if (p != NULL) {
        printf("%d ", p -> data);
        recusrive_call(p -> next);
    }
}
int main() {
    struct Node * p;
    p = (struct Node * ) malloc(sizeof(struct Node));
    p -> data = 50; // first node

    p -> next = (struct Node * ) malloc(sizeof(struct Node));
    p -> next -> data = 60;

    p -> next -> next = (struct Node * ) malloc(sizeof(struct Node));
    p -> next -> next -> data = 70;

    // Terminate the list
    p -> next -> next -> next = NULL;

    recusrive_call(p);
    return 0;
}