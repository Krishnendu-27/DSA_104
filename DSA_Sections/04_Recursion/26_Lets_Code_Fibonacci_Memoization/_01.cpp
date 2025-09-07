// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int fun(int n){
    if (n == 1)  return 1; 
    if (n == 0) return 0;
    int result_previous = 1;
    int result_next = 1;
    int finalval = 0;
    for (int i = 2; i < n; i++)
    {
        finalval = result_previous + result_next;
        result_previous = result_next;
        result_next = finalval;
    }
    return finalval;
}
int fun2(int n){
    if(n<=1){
        return n;
    }
    else{
        return fun2(n-2) + fun2(n-1);
    }
}
int main() {
     printf("%d ", fun(6));
     printf("%d ", fun2(6));
    return 0;
} 