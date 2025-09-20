#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

struct Node {
    int data;
    struct Node * next;
};
int min_el(struct Node * p) {
    int min = INT_MAX;
    while (p != NULL) {
        if (p -> data < min)
        {
            min = p -> data;
        }
        p = p -> next;
    }
    return min;
}
int min_el2(struct Node * p) {
    int x = 0;
    if (p == 0)
    {
        return INT_MAX;
    }
    x = min_el2(p -> next); // Recursive call
    return (p -> data < INT_MAX ? p -> data : x); // Return smaller of current and rest

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

    printf("%d ", min_el(p));
    printf("%d ", min_el2(p));
    return 0;
}