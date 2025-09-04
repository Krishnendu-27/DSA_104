// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
// declaration
void funA(int n);
void funB(int n);
//code
void funA(int n){
if(n>0){
    printf("%d ", n);
    funB(n-1);
}
}
void funB(int n){
if(n>0){
    printf("%d ", n);
    funA(n/2);
}
}
int main() {
     int x = 20;
     funA(x);
    return 0;
}