#include <stdio.h>
#include <stdlib.h>
int sum(int A[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += A[i];
    }
    return sum;
}
int main() {
    int A[10] = {1, 2, 3, 4, 5, 6};
    printf("%d", sum(A, 6));
    return 0;
}