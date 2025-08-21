#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 struct R {
  int l;
  int w;
 };
int main()
{
   // normal static way
    struct R r1;
    r1.l = 20;
    r1.w = 10;
    printf("%d\n", r1.l * r1.w);
   // Dynamic way 
   struct R *r2;
  r2 = (struct R*) malloc (sizeof(struct R));
  r2 -> l = 8;
  r2 -> w = 10;
  printf("%d\n", r2 -> l * r2 -> w);
    cout << "Hello World!" << endl;
    return 0;
}