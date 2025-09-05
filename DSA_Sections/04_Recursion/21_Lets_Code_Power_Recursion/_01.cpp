// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int power(int m,int n){
if(n<=0){
    return 1;
}
return power(m, n-1)*m;
}
int power2(int m,int n){
    if(n==0) return 1;
    if(n%2 == 0){
        return power2( m * m  , n/2);
    }
    else {
        return m*power2(m*m,(n-1)/2);
    }
}
int main() {
    int x = 2,y=4;
    printf("%d ", power(x,y));
    printf("%d ", power2(x,y));
    return 0;
}