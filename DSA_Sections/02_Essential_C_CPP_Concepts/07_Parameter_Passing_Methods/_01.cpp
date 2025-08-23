#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 void swap_by_refernce(int &x, int &y){
 int temp;
 temp = x;
 x = y;
 y = temp;
 }
 void swap_by_value(int x, int y){
 int temp;
 temp = x;
 x = y;
 y = temp;
 }
 void swap_by_adress(int *x, int* y){
 int temp;
 temp = *x;
 *x = *y;
 *y = temp;
 }
int main()
{   
    int x = 1,y=2;
    int a = 1,b=2;
    int c = 1,d = 2;
    cout << "before x is "<< x << " y is " << y << endl;
    swap_by_value(x,y);
    cout << "the swap_by_value" << " x is " <<x  << " y is " << y << endl;
    
    cout << "before a is "<< a << " b is " << b << endl;
    swap_by_refernce(a,b);
    cout << "the swap_by_refernce" << " a is " <<a  << " b is " << b << endl;
    
    cout << "before c is "<< c << " d is " << d << endl;
   swap_by_adress(&c,&d);
    cout << "the swap_by_adress" << " c is " <<c  << " d is " << d << endl;
    cout << "Hello World!" << endl;
    return 0;
}