#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 struct Square{
     int r;
 };
 // call by adress
 void square3(struct Square *r1){
     r1->r = r1->r*r1->r*r1->r*r1->r;
 }
 // call by value
 void square1(struct Square r1){
    r1.r = r1.r*r1.r*r1.r*r1.r;
 }
 int square2(struct Square r1){
    return r1.r = r1.r*r1.r*r1.r*r1.r;
 }
int main(){
    struct Square r={5};
    printf("in the beganing square of Square is %d\n", r);
    square1(r);
    printf("total square1 function of Square is %d\n", r);
    printf("total square2 function of Square is %d\n", square2(r));
    square3(&r);
    printf("total square3 of call by adress function of Square is %d\n", r);
    cout << "Hello World!" << endl;
    return 0;
}