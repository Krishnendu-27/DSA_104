#include <stdio.h>

// write a function to find the common divisor using 2 number
int comonLCM(int *a,int *b){
    int c;
    if (*a>*b)
    {
        c = *b;
    }
    else {
        c = *a;
    }
    
for (int i = 1; i <= c; i++)
{
   
    if (*a%i == 0 && *b%i == 0)
  {
    printf("%d ", i);
  }
  
}
}

int main() {
  int a = 24, b = 60;
  comonLCM(&a,&b);
  return 0;
}