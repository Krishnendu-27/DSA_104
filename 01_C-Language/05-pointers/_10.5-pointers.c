#include <stdio.h>

void increment(int n ){
    n = n+5;
}
void increment4(int *n ){
    *n = *n+4;
}

int main()
{
    /*
    To understand pointers, we first need to know about two operators that are extensively used while working with pointers. They are:

Addressof operator (&)
Dereference operator (*)
Addressof Operator (&)
The address-of operator is denoted by & ampersand symbol and gives you the memory address of a given variable when placed before a variable name as shown:

& var_name

Dereference Operator (*)
The dereference operator is denoted by * asterisk symbol and gives you the value stored at a given memory address stored inside a pointer. It is also placed before the pointer name as shown:

* ptr_name

The asterisk (*) serves multiple purposes in C:

As a dereference operator (unary operator)
As a multiplication operator (binary operator)
In pointer declaration (syntax, not an operator)

    */
	int x = 10;
    int *b;
    b  = &x;
  	printf("%p\n", &x);
  	printf("%d\n", *&x);
  	printf("%d\n", *b);
    int *p;
    p = &x;
    printf("%d\n", x); // 10
    printf("%d\n", *p); // 10
    printf("%p\n", p); // x adress
    printf("%p\n", &p); // p adress

    /*
    Size of Pointers
All pointer variables have the same size regardless of their type whether it is integer, character, double or any other type of pointer. This size depends on the system architecture. If the system is 64 bits, then pointer can be 64-bit long. If the system is 32 bits, then pointer can be 32 bit long.
    */
   int *p4;
    char *p2;
    double *p3;
    printf("%zu\n", sizeof(p4));
    printf("%zu\n", sizeof(p2));
    printf("%zu\n", sizeof(p3));

    // pass by value
    int n = 5;
    printf("%d\n" , n);
    increment(n);// it will not work becuse whatever happend in the fucntion is only hapend in that scope not the global scope
    printf("%d\n" , n);

    // pass by refrnce 
    int m1 = 4;
    printf("%d\n",m1);
    increment4(&m1);
    printf("%d\n",m1);
    printf("\n");
    printf("\n");
    printf("\n");

    int a1 = 22;
    int *p1 = &a1;
    printf("Integer pointer: %u\n", p1);
    p1++;
    printf("After increment: %u\n", p1);  // +4 bytes
    
    char c1 = 'a';
    char *r1 = &c1;
    printf("Char pointer: %u\n", r1);
    r1++;
    printf("After increment: %u\n", r1);  // +1 byte
    return 0;
}