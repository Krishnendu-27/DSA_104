#include <stdio.h>
#include <stdlib.h>
int max(int A[], int length) {
    int max = A[0];
    for (int i = 0; i < length; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}
int main() {
    int A[10] = {1, 2, 3, 4, 5, 6};
    printf("%d", max(A, 6));
    return 0;
}