#include<iostream>
#include<stdio.h>
using namespace std;
 struct Rectangle {
    int l;
    int w;
};
// function to calculate area
int area(struct Rectangle r) {
    int c = r.l * r.w;
    return c;
}
int main()
{
    struct Rectangle r1={20,7};
    printf("area previous %d\n", r1.l * r1.w);
    r1.l = 60;
    r1.w = 2;
   // printf("Area current= %d\n", area(r1));
   cout << "Area current " << area(r1) << endl;
    printf("Hello world!");
    return 0;
}