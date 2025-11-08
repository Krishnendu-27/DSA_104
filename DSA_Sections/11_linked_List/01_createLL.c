#include <stdio.h>

#include <stdlib.h>
// define the structure
struct Node {
  int data;
  struct Node *next;
};

int main() {
  struct Node *p;
  p = (struct Node *)malloc(sizeof(struct Node));
  p->data = 50; // first node

  p->next = (struct Node *)malloc(sizeof(struct Node));
  p->next->data = 60;

  p->next->next = (struct Node *)malloc(sizeof(struct Node));
  p->next->next->data = 70;

  // Terminate the list
  p->next->next->next = NULL;

  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }

  return 0;
}
