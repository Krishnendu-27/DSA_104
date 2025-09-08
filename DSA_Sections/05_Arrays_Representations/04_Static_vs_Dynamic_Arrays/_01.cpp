// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    // static
    int A[5];
    printf("the static way\n");
    for (int i = 0; i < 5; i++)
    {
        A[i] = i+2;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    // dynamic
    printf("\nthe Dynamic way\n");
    int *p;
    p = (int *) malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        p[i] = i*2;
    }    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;
}