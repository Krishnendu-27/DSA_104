// Placeholder file for folder structure
#include <stdio.h>

#include <stdlib.h>

struct Array
{
    int * A; 
    int size;
    int length;
};
void Display(struct Array a) {
    int i;
    printf("the elements are");
    for (int i = 0; i < a.length; i++)
    {
        printf("%d ", a.A[i]);
    }
    printf("\n");
}
int main() {
    struct Array arr;
    printf("enter the array length: ");
    scanf("%d", & arr.length);
    printf("enter the array size: ");
    scanf("%d", & arr.size);
    if (arr.length > arr.size) {
        printf("Error: length cannot be greater than size.\n");
        return 1;
    }

    arr.A = (int * ) malloc(arr.size * sizeof(int));
    if (arr.A == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("\n enter the number for array: \n");
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", & arr.A[i]);
    }

    Display(arr);
    free(arr.A);
    return 0;
}