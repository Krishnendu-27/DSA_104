#include <stdio.h>

#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};
struct Node *scarching(struct Node *p, int key) {
  while (p != NULL) {
    if (p->data == key) {
      return p; // return the pointer (address)
    }
    p = p->next;
  }
  return NULL; // not found
}

int main() {
  struct Node *p;
  p = (struct Node *)malloc(sizeof(struct Node));
  p->data = 50;
  p->next = (struct Node *)malloc(sizeof(struct Node));
  p->next->data = 60;
  p->next->next = (struct Node *)malloc(sizeof(struct Node));
  p->next->next->data = 70;
  p->next->next->next = (struct Node *)malloc(sizeof(struct Node));
  p->next->next->next->data = 80;

  struct Node *result = scarching(p, 60);

  if (result != NULL) {
    printf("Node found at address: %p\n", (void *)result);
    printf("Node data: %d\n", result->data);
  } else {
    printf("Node not found.\n");
  }
  return 0;
}
