#include <iostream>
#include <stdlib.h>
using namespace std;

// call by address
void fun1(int A[], int n) {
    cout << endl << "call by address function" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

// dynamic array creator
int* fun2(int n) {
    cout << endl << "dynamic memory array " << endl;
    int* p = (int*) malloc(n * sizeof(int));
    return p;
}

int main() { 
    cout << "it's happened under main function\n";
    
    int A[5] = {1, 2, 3, 4, 5};
    for (int a : A) {
        cout << a << " ";
    }
    fun1(A, 5);

    int n;
    cout << "\nEnter size of dynamic array: ";
    cin >> n;

    int* a = fun2(n);  // allocate dynamic array

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Dynamic array elements: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl << "Hello World!" << endl;

    free(a); // free allocated memory
    return 0;
}
