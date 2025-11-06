#include <stdio.h>
#include <stdlib.h>

int main() {
  int A[10] = {1,-2,4,-5,6,-8,9,22,-15};
  int length = 8;
  int i = 0;
  int j = length-1;
  for (int i = 0; i < length; i++) {
      printf("%d ", A[i]);
  }
  while (i < j)
  {
    while (A[i] > 0)
    {
        i++;
    }
    while (A[j]<= 0)
    {
        j--;
    }
    if (i<j)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    
  }
  printf("\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }
  return 0;
}