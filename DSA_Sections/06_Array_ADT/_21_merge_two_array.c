#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[] = {1, 2, 3, 10, 20, 30};
    int B[] = {4, 5, 6, 6, 88, 100};
    
    int length1 = sizeof(A) / sizeof(A[0]);
    int length2 = sizeof(B) / sizeof(B[0]);
    int C[length1 + length2];

    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < length1 && j < length2) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements of A (if any)
    while (i < length1) {
        C[k++] = A[i++];
    }

    // Copy remaining elements of B (if any)
    while (j < length2) {
        C[k++] = B[j++];
    }

    // Print merged array
    printf("Merged Array: ");
    for (int x = 0; x < length1 + length2; x++) {
        printf("%d ", C[x]);
    }

    return 0;
}
