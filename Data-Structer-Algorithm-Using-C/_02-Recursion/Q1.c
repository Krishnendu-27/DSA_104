// write a C programe to find nC using recurion
/*  formualla
nCr= n! / r!(n−r)!
*/
#include <stdio.h>
#include <stdlib.h>

int ncr(int n , int r){
    if(n==r || r == 0) return 1;
    if(r<0 || r >n) return 0;
    return ncr(n-1 , r-1)+ncr(n-1,r);
    
    
}
int main() {
  printf("%d " , fact(5));
  printf("%d " , ncr(3,0));
  return 0;
}