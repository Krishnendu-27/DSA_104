// Placeholder file for folder structure
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void func(int n){
if (n>0){
    printf("%d ", n);
    func(n-1);
    func(n-1);
}

}
int main() {
     int x = 4;
     func(x);
    return 0;
}