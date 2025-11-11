#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node *next;
};
// creating linekd list node
struct Node *creatnode(int val) {
  struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
  newnode->data = val;
  newnode->next = NULL;
  return newnode;
};
// printing linked list
void printList(struct Node *head) {
  while (head != NULL) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("NULL");
}
// creating linekd list
struct Node *createLinkList(int arr[], int length) {
  if (length == 0) {
    return NULL;
  }
  struct Node *head = creatnode(arr[0]);
  struct Node *current = head;
  for (int i = 1; i < length; i++) {
    current->next = creatnode(arr[i]);
    current = current->next;
  }
  return head;
};
int main() {
  /*
  structruct Node *first = creatnode(5);
  struct Node *seconed = creatnode(10);
  first->next = seconed;
  struct Node *third = creatnode(100);
  seconed->next = third;
  */
  int arr[] = {1, 4, 5, 63, 8, 5, 8, 74, 2, 5};
  int length = 10;
  struct Node *p = createLinkList(arr, length);
  printList(p);
  return 0;
}
