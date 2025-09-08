// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int A[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    int B[10];
    for (int i = 0; i < 10; i++)
    {
        B[i] = i+1;
    }
    cout <<endl;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", B[i]);
    }
    
    
    printf("\n%d" , *(A+2)); 
    return 0;
}

