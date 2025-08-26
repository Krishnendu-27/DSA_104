#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
// Structure definition
struct Rectangle {
    int l;
    int b;
};

// Function to initialize the Rectangle
void initialize(struct Rectangle *p, int l, int b) {
    p->l = l;
    p->b = b;
}

// Function to change the length of Rectangle
void change_length(struct Rectangle *p, int newlength) {
    p->l = newlength;
}

// Function to calculate area of Rectangle
int area(struct Rectangle r) {
    return r.l * r.b;
}

// Main function
int main() {
    struct Rectangle r;
    initialize(&r, 20, 5);
    printf("%d\n",area(r)); // area with length 20
    
    change_length(&r, 40);
    printf("%d\n",area(r)); // area with length 40

    return 0;
}