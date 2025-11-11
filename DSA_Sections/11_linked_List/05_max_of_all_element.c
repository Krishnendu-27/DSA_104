#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

struct Node {
  int data;
  struct Node *next;
};
int max_el(struct Node *p) {
  // int max = INT_MIN;
  int max = p->data;

  while (p != NULL) {
    if (p->data > max) {
      max = p->data;
    }
    p = p->next;
  }
  return max;
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

  printf("%d ", max_el(p));
  return 0;
}
