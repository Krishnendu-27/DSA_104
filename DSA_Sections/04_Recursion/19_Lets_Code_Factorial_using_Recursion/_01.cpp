// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int result = 1;
int fact(int n){
   if(n > 0){
       result = result*n;
       fact(n-1);
   }
   return result;
}

int main() {
     int x = 5;
     printf("%d ",fact(x));
    return 0;
}