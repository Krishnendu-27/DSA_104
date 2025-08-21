#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int A[5] = {2,3,4,5,6};
    int *p;
    p=A;
   // for accessing the array normaly
   
    for(int x= 0;x<5;x++){
     printf("%d\n",A[x]);
     cout << A[x] << endl;
    }
    cout << "this is the example of acesa array by pointer" << endl;
    for(int x= 0;x<5;x++){
     cout << p[x] << endl;
    }
    cout << "now dynamic way to acesa the array" << endl;
   
   int *o;
   o = (int *)malloc(5*sizeof(int));
   o[0] = 0;
   o[1] = 2;
   o[2] = 4;
   o[3] = 8;
   o[4] = 16;
   
   for(int x= 0;x<5;x++){
     cout << o[x] << endl;
    }
   free(o); // for c
   delete [] o; // for c++
    o = NULL;
    cout << "Hello World!" << endl;
    return 0;
}