// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
double fun(int x, int n){
    static double S = 1;
    if(n == 0){
        return S;
    }
    
        S = 1 + ((x * S) / n);
    
    return fun(x,n-1);

}
int main() {
     printf("%lf ", fun(5,10));
    return 0;
}