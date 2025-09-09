// Structure pointer in function arguments
#include <stdio.h>

#include <stdlib.h>

struct Rectangle
{
    int l;
    int b;
};
int area(struct Rectangle r1) {
    return r1.l * r1.b;
};
int main() {
    struct Rectangle box1;
    box1.l = 10;
    box1.b = 10;
    printf("the area of box 1: %d\n", area(box1));
    return 0;
}