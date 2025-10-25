#include <stdio.h>
#include <stdlib.h>
struct Array {
    int A[10];
    int size;
    int length;
};

void display(struct Array * arr) {
    for (int i = 0; i < arr -> length; i++)
        printf("%d ", arr -> A[i]);
    printf("\n");
}
int delete_element(struct Array *arr, int index){
    int x = 0;
if (index < 0 || index >= arr -> length) {
        printf("Invalid index\n");
        return -1;
    }

    x = arr->A[index];
    for (int i = index; i < arr->length-1; i++)
    {
        arr->A[i] = arr->A[i+1];
    }
    arr->length--;
    return x;


    
}
int main() {
  struct Array a1 = {{1,2,10,4,5},10,5};
  
  int deleted = delete_element(&a1, 4);
if (deleted != -1)
    printf("Deleted: %d\n", deleted);
  display(&a1);
  return 0;
}