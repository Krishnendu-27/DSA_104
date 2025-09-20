#include <stdio.h>

#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};
struct Node * first;
struct Node *improved_scarch(struct Node *p, int key){
    struct Node *q;
    while(p != NULL){
        if (key == p->data)
        {
            if (q != NULL)
            {
                q->next = p->next;
                p->next = first;
                first = p;

            }
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
} 

void printList(struct Node * p) {
    while (p != NULL) {
        printf("%d -> ", p -> data);
        p = p -> next;
    }
    printf("NULL\n");
}
int main() {

    first = (struct Node * ) malloc(sizeof(struct Node));
    first -> data = 10;
    first -> next = (struct Node * ) malloc(sizeof(struct Node));
    first -> next -> data = 20;
    first -> next -> next = (struct Node * ) malloc(sizeof(struct Node));
    first -> next -> next -> data = 30;
    first -> next -> next -> next = (struct Node * ) malloc(sizeof(struct Node));
    first -> next -> next -> next -> data = 40;
    first -> next -> next -> next -> next = NULL;
    printf("Before improved search:\n");
    printList(first);
    struct Node * found = improved_scarch(first, 30);

    if (found != NULL) {
        printf("\nNode with key 30 found and moved to front.\n");
    } else {
        printf("\nKey not found.\n");
    }

    printf("\nAfter improved search:\n");
    printList(first);


    return 0;
}