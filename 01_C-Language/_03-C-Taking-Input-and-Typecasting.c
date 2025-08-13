#include <stdio.h>

int main() {
  //   int x;
  // printf("enter a number ");
  // scanf("%d" , &x); // its called  ampertion
  // printf("the square of %d is %d" , x , x*x);
  //                                                        Moduler operator
  int y =10; 
/* its all called arthmetic operator
  printf(x+y);
  printf(x-y);
  printf(x*y);
  printf(x/y);
  printf(x%y); // here x is dividend(large number ) and y is a divisor(small number) , its give output based on x divided by y 
*/
/*
// some mislancous has in C using for % 
// 1. a % b and a a<b then answer will be a
int a = 20 , b = 50;
int c = a%b;
printf("%d\n" , c);
// 2. when a % (-b), then the answer will be normal a % b 
b = -50;
int d = a % b;
printf("%d\n" , d);
// 3. when (-a) % b , then the answer  will be a%b just add a - in the fornt
a = -50 , b = 3;
int e = a%b;
printf("%d\n" , e);
// 4. when (-a) % (-b) , then the answer  will be a%b just add a - in the fornt
*/
// question 1 return half of number input from user
//  int f ;
//  printf("enter a number: ");
//  scanf("%d" , &f);
//  float h = (float)f; // here we typecast the value so now out input became float
//  float g = h/2;
//  printf("%f" , g);
//                                                                    hierarchy of operators
/*


---


---

## 🔢 **C/C++ Operator Precedence (High → Low)**

| **Level** | **Category**        | **Operators**                                                        | **Associativity**       | **Meaning**                                                                         |                                     |            |
| --------- | ------------------- | -------------------------------------------------------------------- | ----------------------- | ----------------------------------------------------------------------------------- | ----------------------------------- | ---------- |
| **1**     | Grouping & Postfix  | `()`, `[]`, `.`, `->`, `expr++`, `expr--`                            | Left to Right           | Highest precedence – function calls, member access, array indexing, postfix inc/dec |                                     |            |
| **2**     | Unary               | `++expr`, `--expr`, `+`, `-`, `!`, `~`, `(type)`, `*`, `&`, `sizeof` | Right to Left           | Prefix operations, type cast, address-of/dereference, NOTs                          |                                     |            |
| **3**     | Multiplicative      | `*`, `/`, `%`                                                        | Left to Right           | Multiplication, division, modulo – higher than addition/subtraction                 |                                     |            |
| **4**     | Additive            | `+`, `-`                                                             | Left to Right           | Addition and subtraction – after multiplication/division                            |                                     |            |
| **5**     | Bitwise Shifts      | `<<`, `>>`                                                           | Left to Right           | Bit shifting left/right                                                             |                                     |            |
| **6**     | Relational          | `<`, `<=`, `>`, `>=`                                                 | Left to Right           | Comparisons – higher than equality checks                                           |                                     |            |
| **7**     | Equality            | `==`, `!=`                                                           | Left to Right           | Equality checks                                                                     |                                     |            |
| **8**     | Bitwise AND         | `&`                                                                  | Left to Right           | Bitwise AND                                                                         |                                     |            |
| **9**     | Bitwise XOR         | `^`                                                                  | Left to Right           | Bitwise XOR                                                                         |                                     |            |
| **10**    | Bitwise OR          | \`                                                                   | \`                      | Left to Right                                                                       | Bitwise OR                          |            |
| **11**    | Logical AND         | `&&`                                                                 | Left to Right           | Logical AND                                                                         |                                     |            |
| **12**    | Logical OR          | \`                                                                   |                         | \`                                                                                  | Left to Right                       | Logical OR |
| **13**    | Ternary Conditional | `?:`                                                                 | Right to Left           | Ternary if-else condition                                                           |                                     |            |
| **14**    | Assignment          | `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `&=`, \`                          | =`, `^=`, `<<=`, `>>=\` | Right to Left                                                                       | Assignment and compound assignments |            |
| **15**    | Comma               | `,`                                                                  | Left to Right           | Lowest precedence – evaluates left to right                                         |                                     |            |

---

### 🧠 Notes to Understand the Flow:

* Think of **levels as "power"**: Level 1 is the most powerful (evaluated first), Level 15 is the weakest (evaluated last).
* Inside an expression like `a + b * c`, **multiplication (`*`) happens before addition (`+`)** because it's level 3 vs level 4.
* Use **parentheses `()`** to override the default order and make your code clearer.

---

*/
// example 
int i = 2*6/2;
// printf("%d" , i); // here first do the 6*2 mens 12 then its divided by 2 so 6  

//                                                                        charcter data type
char h = '1'; // what ever writen between '' called a character its cannot be a sentece a word or anything only without spaece. its stroe value in ASCII

printf("%c\n" , h);
printf("%d\n" , h); // implicit type casting
// fun fact : a = 97 , A = 65 , O = 48 in ASCII

int m = (int) h; // explicit type casting
printf("%d" , m);

int n = 0;
printf("%c" , n);

  return 0;
} 