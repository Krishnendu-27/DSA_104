#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[] = {1,2,4,5,9,7,3,5};
    int key = 9;
    int n = sizeof(a) / sizeof(a[0]);
    int found = 0;  // flag

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            // Transposition: swap with previous element if not at index 0
            if (i > 0) {
                int temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
                printf("Element found, new index = %d\n", i - 1);
            } else {
                printf("Element found at index 0\n");
            }
            found = 1;
            break; // stop searching after finding the key
        }
    }

    if (!found)
        printf("-1\n");

    // Optional: display array after transposition
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
