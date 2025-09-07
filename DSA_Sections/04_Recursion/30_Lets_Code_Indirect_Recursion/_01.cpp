// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int fact(int n){
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
    
    
}
int ncr(int n , int r)
{
    int fact_of_n = fact(n);
    int fact_of_r = fact(r);
    int fact_of_nr = fact(n-r);
    if (n<r)
    {
        printf("enter number less than N");
        return 0;
    }
    else
    {
        return fact_of_n/(fact_of_r * fact_of_nr);
    }
    
}
int ncr_recursive(int n , int r){
    if (r==0 || n == r)
    {
        return 1;
    }
    else
    {
        return ncr_recursive(n-1,r-1) + ncr_recursive(n-1 , r);
    }
    
    
}
int main() {
     printf("%d ", fact(5));
     printf("%d ", ncr(5, 4));
     printf("%d ", ncr_recursive(5, 4));
    return 0;
}