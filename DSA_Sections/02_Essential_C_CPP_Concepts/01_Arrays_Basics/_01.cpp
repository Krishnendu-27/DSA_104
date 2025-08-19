// Placeholder file for folder structure.

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A[5]= {1,2,45,69,8};
    printf("%d\n", A[0]);
    printf("the size is %d\n", sizeof(A)/ sizeof(A[0]));
    for(int i = 0;i<5;i++){
     printf("%d\n", A[i]);
    }
    int B[7]= {1,2,5,99};
    printf("the value of B array 6 index: %d\n", B[6]);
    for(int x:B){
    cout << x << endl;
    }
    int C[10];
    int sizeC = sizeof(C) / sizeof(C[0]);
    for(int i = 0; i < sizeC; i++){
        cin >> C[i];
    }
    
    cout << "The elements of array C are:" << endl;
    for(int i = 0; i < sizeC; i++){
        cout << C[i] << endl;
    }
    return 0;
}