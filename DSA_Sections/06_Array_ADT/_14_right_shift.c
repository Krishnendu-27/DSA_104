#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6};
    int length = 6;
    printf("before shift\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }
    for (int i = 1; i <= length; i++) {
        A[i - 1] = A[i];
    }

    printf("\n after shift\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}