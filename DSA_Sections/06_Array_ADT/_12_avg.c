#include <stdio.h>
#include <stdlib.h>
float avg(int A[], int length) {
    float avg = 0;
    for (int i = 0; i < length; i++) {
        avg += A[i];
    }
    return avg / length;
}
int main() {
    int A[10] = {1, 2, 3, 4, 5, 6};
    printf("%.2f", avg(A, 6));
    return 0;
}