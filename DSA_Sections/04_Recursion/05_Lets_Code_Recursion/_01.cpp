// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void fun(int n){
   if(n>0){
     printf("%d " , n);
     fun(n-1);
   }
}
void fun2(int n){
   if(n>0){
     fun2(n-1);
     printf("%d " , n);
   }
}
int main() {
     int x = 5;
     fun(x);
     cout << endl;
     fun2(x);
    return 0;
}