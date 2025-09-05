// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int result = 0;
int sum(int n){
    if(n > 0){
        result = result + n;
        sum(n-1);
    }
    /* other solution
    if(n == 0){
    return 0;
    else{
    return sum(n-1)+n
    }
    }
    */
    return result;
}
int main() {
     int x = 5;
    printf("%d " , sum(x));
    return 0;
}