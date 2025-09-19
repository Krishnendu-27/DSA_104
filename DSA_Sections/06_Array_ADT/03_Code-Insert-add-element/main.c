#include <stdio.h>
#include <stdlib.h>

int main() {
  // add in a an element in an array 
int A[10] = {1,2,3,4};
int x = 50;
int length_of_a = 4;
    if (length_of_a < 10) {
        A[length_of_a] = x;
        length_of_a++;
    } else {
        printf("Array is full, cannot add more elements.\n");
    }
for (int i = 0; i < length_of_a; i++)
{
  printf("%d ", A[i]);
}
// instering the arrray element 
int B[10] ={1,2,3};

  return 0;
};