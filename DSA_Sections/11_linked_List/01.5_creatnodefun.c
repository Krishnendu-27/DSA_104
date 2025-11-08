#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node *next;
};
struct Node *creatnode(int val) {
  struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
  //  struct Node *newnode = struct node* malloc(sizeof(struct Node));
  newnode->data = val;
  newnode->next = NULL;
  return newnode;
};
void printList(struct Node *head) {
  while (head != NULL) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("NULL");
}
int main() {
  struct Node *first = creatnode(5);
  struct Node *seconed = creatnode(10);
  first->next = seconed;
  struct Node *third = creatnode(100);
  seconed->next = third;

  printList(first);

  return 0;
}
