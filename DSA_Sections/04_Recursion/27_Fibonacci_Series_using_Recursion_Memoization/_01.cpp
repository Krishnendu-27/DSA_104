// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int F[10];
int fibo(int n){
    if (n<=1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n-1]== -1)
        {
            F[n-1] = fibo(n-1);
        }
        if (F[n-2]== -1)
        {
            F[n-2] = fibo(n-2);
        }
        return F[n-1] + F[n-2];
    }
    
    
}
int main() {
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    
     printf("%d " , fibo(6));
    return 0;
}