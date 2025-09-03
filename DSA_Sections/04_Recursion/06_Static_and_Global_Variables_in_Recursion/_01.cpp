// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int a = 0;
int fun1(int n){
    if(n>0){
        return fun1(n-1)+n;
    }
    return 0;
}
int fun(int n){
    static int x = 0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main() {
    int x = 5;
    printf("%d ", fun(x));
    printf("%d ", fun1(x));
    return 0;
}