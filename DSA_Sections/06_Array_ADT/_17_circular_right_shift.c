#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6};
    int length = 6;
    printf("before shift\n");
    int val = A[length - 1];
    for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }
    for (int i = length - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }
    A[0] = val;

    printf("\n after shift\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}