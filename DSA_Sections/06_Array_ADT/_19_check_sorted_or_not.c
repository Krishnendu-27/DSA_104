#include <stdio.h>
#include <stdlib.h>

int main() {
  int A[10] = {1,2,4,5,6,8,9,22,15};
  int length = 8;

    int flag = 0;
  for (int i = 0; i < length-1; i++)
  {
    if (A[i]>A[i+1])
    {
        flag = 1;
    }
    else{
        flag=0;
    }
    
  }
  if (flag==1)
  {
   printf("it is a not sorted array");
  }
  else{
printf("It is a sorted array");
  }
  
  return 0;
}