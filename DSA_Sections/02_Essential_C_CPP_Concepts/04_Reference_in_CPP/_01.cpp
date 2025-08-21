#include<iostream>
using namespace std;

int main()
{ 
    int b = 15;
    int &c = b;
    int *badress;
    int *cadress;
    badress = &b;
    cadress = &c;
    cout << "the b is " << b << endl;
    cout << "the adreess b is " << badress << endl;
    cout << "the adreess c is " << cadress << endl;
     cout << "the c is " << c << endl;
    cout << "Hello World!" << endl;
    return 0;
}