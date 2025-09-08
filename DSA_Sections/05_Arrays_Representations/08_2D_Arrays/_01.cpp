// Placeholder file for folder structure
#include <iostream>

#include <stdio.h>

#include <stdlib.h>

using namespace std;

int main() {
    // single pointer 
    int * A[3];
    A[0] = (int * ) malloc(4 * sizeof(int));
    A[1] = (int * ) malloc(4 * sizeof(int));
    A[2] = (int * ) malloc(4 * sizeof(int));
    A[1][2] = 15;
    printf("A[1][2] = %d\n", A[1][2]);
    // double pointer
    int ** B;
    B = (int ** ) malloc(3 * sizeof(int * ));

    B[0] = (int * ) malloc(3 * sizeof(int));
    B[1] = (int * ) malloc(3 * sizeof(int));
    B[2] = (int * ) malloc(3 * sizeof(int));

    B[2][2] = 50;
    printf("B[2][2] = %d\n", B[2][2]);
    return 0;
}