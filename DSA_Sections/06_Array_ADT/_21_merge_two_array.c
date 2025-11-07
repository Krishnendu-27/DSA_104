#include <stdio.h>
#include <stdlib.h>

int main() {
  int A[] = {1,2,3,10,20,30};
  int length1 = sizeof(A) / sizeof(A[0]);
  int B[] = {4,5,6,6,88,1};
  int C[12];
  int i = 0, j = 0, k = 0;

  while(i<length1 && j<length1) 
  {
    if (A[i]<B[j])
    {
        C[k]= B[j] ;
        k++;
        j++;
    }
    else{
        C[i]= A[i];
        k++;
        i++;
      }
    
  }
    for (int i = 0; i < (length1*2)-1; i++) {
        printf("%d ", C[i]);
    }
  return 0;
}