#include <stdio.h>
#include <stdlib.h>

int get(int A[], int index, int length) {
    if (index >= 0 && index < length) {
        return A[index];
    }
}
int main() {
    int A[10] = {1, 2, 3, 4, 5, 6};
    printf("%d", get(A, 2, 6));
    return 0;
}