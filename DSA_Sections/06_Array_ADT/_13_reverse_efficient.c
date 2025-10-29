#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6};
    int length = 6;
    int temp = 0;
    for (int i = 0; i < length - 1; i++) {
        for (int j = length - 1 - i; j > i; j--) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            break;
        }
    }
    for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}