// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int *p  = ( int*) malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        p[i] = i+2;
    }
    int *q =(int *) malloc(10*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", q[i]);
    }
    free(p);
    p = q;
    q = NULL;
    cout <<endl;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;
}