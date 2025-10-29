#include <stdio.h>
#include <stdlib.h>
int set(int A[], int index, int elment, int length) {
    if (index >= 0 && index < length) {
        A[index] = elment;
    }
}
int main() {
    int A[10] = {1, 2, 3, 4, 5, 6};
    printf("before array length: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", A[i]);
    }
    set(A, 4, 58, 6);
    printf("\n");
    printf("after array length: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}