#include <stdio.h>
// make a function of swap by call by refernce
void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 5;
  printf("%p\n", &a); // by "&a" it give the adress and the "%p" its the format spefifier for print hexa decimal
  //so store adress we have pointers
  int* x = &a; // it store in x a adress now x show a adress
  printf("%p\n", x);
  printf("%d\n", *x); // it give the value of a becuase it store a adress so now x have acess the a variable value also

//   pointers have power to change othrs variable value 
*x = 52;
printf("%d\n", a); // now a changed because we cange that  whatevers adress store in x go that variable and store 52 so its overwrite the previous value 5 that store in a
int c = 50;
int b = 100;
printf("%d \n",c);
printf("%d \n",b);
 swap(&c,&b);
printf("%d \n",c);
printf("%d \n",b);
// difernce between single pointer * or double pointers ** 
// * -> stores adresss
// ** -> stores adress of a pointer in a pointer 


  return 0;
} 