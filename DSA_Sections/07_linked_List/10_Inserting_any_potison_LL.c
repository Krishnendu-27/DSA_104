#include <stdio.h>

#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node * next;
};

struct Node * first = NULL;

// Display the linked list
void display(struct Node * p) {
    while (p != NULL) {
        printf("%d -> ", p -> data);
        p = p -> next;
    }
    printf("NULL\n");
}

// Count number of nodes
int count(struct Node * p) {
    int c = 0;
    while (p != NULL) {
        c++;
        p = p -> next;
    }
    return c;
}

// Insert at a given position (0-based index)
void insertAtPosition(int position, int value) {
    if (position < 0 || position > count(first)) {
        printf("Invalid position\n");
        return;
    }

    struct Node * t = (struct Node * ) malloc(sizeof(struct Node));
    t -> data = value;
    t -> next = NULL;

    if (position == 0) {
        t -> next = first;
        first = t;
    } else {
        struct Node * p = first;
        for (int i = 0; i < position - 1; i++) {
            p = p -> next;
        }
        t -> next = p -> next;
        p -> next = t;
    }
}

int main() {
    // Creating initial list: 50 -> 60 -> 70 -> 80
    first = (struct Node * ) malloc(sizeof(struct Node));
    first -> data = 50;
    first -> next = (struct Node * ) malloc(sizeof(struct Node));
    first -> next -> data = 60;
    first -> next -> next = (struct Node * ) malloc(sizeof(struct Node));
    first -> next -> next -> data = 70;
    first -> next -> next -> next = (struct Node * ) malloc(sizeof(struct Node));
    first -> next -> next -> next -> data = 80;
    first -> next -> next -> next -> next = NULL;

    printf("Before insertion:\n");
    display(first);

    // Insert 100 at position 2 (0-based index)
    insertAtPosition(2, 100);

    printf("After insertion at position 2:\n");
    display(first);

    return 0;
}