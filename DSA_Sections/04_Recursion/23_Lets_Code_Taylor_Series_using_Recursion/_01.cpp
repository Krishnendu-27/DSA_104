// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
double tailor(double x , double n){
    static double p = 1, f = 1;
    double r;
    if(n == 0){
        return 1;
    }
    else{
        r = tailor(x,n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}
int main() {
     printf("%lf" , tailor(4,14));
    return 0;
}