#include <stdio.h>

int main() {
//   if else 
int x = 8;
if (x %2 ==0) printf("its a even number\n"); // ots a valid if satement

if (x % 2 == 0) // its also a valid number 
{
    printf("ita a even number\n"); 
}
//  when ever we need to write more than one statement then we use {}
// for multiple condition we use else if
// take a input tell its divisiable by 5 or 3 
/*
if (x%5 == 0)
{
  printf("its divisiable by 5\n");
}
else if (x %3 == 0  )
{
  printf("its divisiable by 3\n");
}
else
{
  printf("its not divisable by 5 or 3\n");
}
*/

// another way 
// here use OR gate || so one this condtions if worked then okay AND gate && here bothe condition need to be true
if (x % 5 == 0 || x % 3 == 0) 
{
printf("its is divisel by 5 and 3");
}
// take 3 number input and see can it be a side of a triangle

/*
int a , b , c;
printf("Enter the first side number");
scanf("%d" , &a);
printf("Enter the seconed side number");
scanf("%d" , &b);
printf("Enter the third side number");
scanf("%d" , &c);
if (a + b > c && b+c > a && c+a > b)    
{
  printf("side A = %d side B = %d side C = %d can perform the triangle" , a ,b ,c );
  }
  else {
    printf("side A = %d side B = %d side C = %d can NOT perform the triangle" , a ,b ,c );
    }
    */
   /*
   if(x%2 == 0) printf("it is a even number");
   else printf("odd number");
   */
  // we write this in ternary 
  // condition ? if true : if false 
  (x%2 == 0)? printf("it is a even number\n"): printf("odd number");
  
  int a , b;
  printf("Enter the first  number");
  scanf("%d" , &a);
  printf("Enter the seconed  number");
  scanf("%d" , &b);

  char ch;
  printf("Enter the character ");
  scanf(" %c" , &ch);
  switch (ch)
  {
  case '+':
    printf("%d + %d is %d" , a,b,a+b);
    break;
  case '-':
    printf("%d - %d is %d" , a,b,a-b);
    break;
  case '*':
    printf("%d * %d is %d" , a,b,a*b);
    break;
  case '/':
    printf("%d / %d is %d" , a,b,a/b);
    break;
  
  default:
    break;
  }
  return 0;
}

