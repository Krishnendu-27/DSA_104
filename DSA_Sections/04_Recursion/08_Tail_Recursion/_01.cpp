// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
// using tail recurion
void fun(int n){
    if(n>0) {
        printf("%d ", n);
        fun(n-1);
    }

}
// using loop 
void fun1(int n){
   while(n>0){
    printf("%d ",n);
    n--;
    }
}

int main() {
    int x = 5;
    fun(x);
    cout <<endl;
    fun1(x);
    return 0;
}