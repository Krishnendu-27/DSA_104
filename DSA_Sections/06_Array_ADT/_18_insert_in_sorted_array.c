#include <stdio.h>
#include <stdlib.h>
int main() {
  int A[10] = {1,2,4,5,6,8,9,15};
  int length = 8;
  for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }
  printf("\n");
  int i = length-1;
  int x = 12;
  while (A[i]>x)
  {
    A[i+1] = A[i];
    i--;
  }
  A[i+1] = x;
  length++;
  
  for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }
  return 0;
}