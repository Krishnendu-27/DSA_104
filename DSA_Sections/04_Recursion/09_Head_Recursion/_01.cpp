// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
// using tail recurion
void fun(int n){
    if(n>0) {
        fun(n-1);
        printf("%d ", n);
    }

}
// using loop 
void fun1(int n){
    int x = 1;
   while(n>0){
    printf("%d ",x);
    x++;
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