#include <stdio.h>
#include <math.h>

void greet(void) {
    printf("Hello from the greet function!\n");
}
// parametar function
int OddEven(int a){
    if (a%2 ==0)
    {
        printf("%d a EVEN number\n", a);
    }
    else 
    {
        printf("%d a ODD number\n", a);
    }
    return 0;
}
int combo(int n, int r){
    int nr = n-r; 
    int factOfN=1;
    int factOfR=1;
    int factOfNR=1;
    for (int i = 1; i <=n; i++)
    {
        factOfN = factOfN*i;
    }
    for (int j = 1; j <=r; j++)
    {
        factOfR = factOfR*j;
    }
    
    for (int k = 1; k <=nr; k++)
    {
        factOfNR = factOfNR*k;
    }
    
    return factOfN/ (factOfR * factOfNR);
}
// all fact function for pascale tavle
int facttable(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        // Print Pascal numbers in the row
        for (int j = 0; j <= i; j++) {
            int result = combo(i, j);
            printf("%4d", result);  // Fixed width for better alignment
        }

        printf("\n");
}
}
//pascale table
// int pastable(int n,int r){
//     // need ncr
    
    
// }
int main() {

    facttable(6);

    //   when we want to do a block of task many times in defrenet time palce we use function
    /*
    function function_name(parametar){
        code
    }
    */
//    we can creat many fucntion we want it call creat outside of main 
// data type is importnt its return the value regarding the data we want
// main function only can write onece
// when we call function then its excute otherwise it ignore
//  function must write in before main beacuse otherwise it can not called by our compiler because

/*
Reasoning:

Sequential Processing:
The C compiler reads and processes source code sequentially from top to bottom. When it encounters a function call, it needs to know the function's signature (return type, name, and parameters) to ensure the call is valid and to generate correct machine code.

Forward Declaration:
If a function is defined after it is called (e.g., main() calls a function defined later in the file), the compiler would encounter the call before it knows anything about the function. This would result in a compilation error. To resolve this, you need a function prototype (or forward declaration) at the top of the file (or before the first call). This prototype informs the compiler about the function's signature, allowing it to proceed with compilation even if the full definition appears later.

Common Practices:

Function Prototypes at the Top:
Many C programs use function prototypes at the beginning of the file (often after #include statements) and then define the functions later in the file. This provides a clear overview of all functions used in the file and allows for flexible ordering of function definitions.

Functions Defined Before Use:
Alternatively, you can define functions fully before they are called. If main() is at the end of the file, and all other functions are defined above it, no explicit prototypes are needed for those functions called within main().

Example:
C

#include <stdio.h>

// Function prototype (forward declaration)
void greet(void); 

int main() {
    greet(); // Call to the function
    return 0;
}

// Function definition
void greet(void) {
    printf("Hello from the greet function!\n");
}
In this example, greet() is called in main() before its definition. The function prototype void greet(void); at the top of the file allows the compiler to understand the greet() call in main().
*/

// example of a great function
greet();
// call of parametar fucntion 
// here the 55 took the place of int a we can give diferent value 
OddEven(55); // its called pass by value
OddEven(100);
// in function the orde of value matter most 
//  a function can call another function 
// we can also use some built in function like sqrt , power 
// for this we need to took input #include <math.h>

int val = sqrt(484);
printf("484 is the sqrt of %d\n",val);
// so if you dont enter the correct quare root then its goes the closet root value
// example 500 ans will be 22 becuse 22 sqare is 484

int combinattion = combo(5,4);
printf("combinattion of 5 and 4 is %d\n" , combinattion);

// function prototype
// sum of 2 number
int sum();
int result = sum(8,6);
printf("reesult is %d\n", result);
  return 0;
}
int sum(int a,int b) {
    return a+b;
}