// print the odd number with increment ,
//  if else
/*
#include <stdio.h>

int main() {
  for (int i = 0; i <= 100; i++)
  {
    if (i % 2 != 0)
    {
        printf("%d " , i);
    }
    
  }
  
  return 0;
}
*/
// increment
/*
#include <stdio.h>

int main() {
  for (int i = 1; i < 100; i= i+2)
  {
   printf("%d " , i)
  }
  
  return 0;
}
*/
// print table of 19 

/*
#include <stdio.h>

int main() {
    int j = 19;
  for (int i = 1; i <= 10; i++)
  {
    printf("%d " , j*i);
  }
  
  return 0;
}
*/

// print ap till n treems like 4 7 10 13 16 19 22 25 28 31 34

/*
#include <stdio.h>

int main() {
    int n ,f , l;
    // printf("print first num: ");
    // scanf("%d" , &f);
    // printf("print last num: ");
    // scanf("%d" , &l);
    printf("print n number: ");
    scanf("%d" , &n);
  for (int i = 4; i <= 3*n-1; i= i+3)
  {
    printf("%d ", i);
  }
  
  return 0;
}
*/
// print 2 4 8 16 32 64 like this
/*
#include <stdio.h>

int main() {
    int j = 2;
    int n = 10;
  for (int i = 1; i <= n; i++)
  {
      printf("%d " , j);
      j = j*2;
  }
  return 0;
}
*/
// print 3 12 48 192 768
/*
#include <stdio.h>

int main() {
    int j = 3;
    int n = 10;
  for (int i = 1; i <= n; i++)
  {
      printf("%d " , j);
      j = j*4;
  }
  return 0;
}
*/
// write a programe that prime or not
/*
#include <stdio.h>

int main() {
  int n = 50;
for (int i = 2; i <= n; i++)
{
    int isprime = 1;
   for (int j = 2; j < n/2; j++)
   {
    if (i%j == 0)
    {
        isprime = 0;
        break;
    }
    
   }
   if (isprime == 1)
   {
    printf("%d is a prime number\n",i );
   }
   
}
return 0;
}

*/

// print digit  a given number
/*
#include <stdio.h>

int main() {
  int j = 12542;
  int digit = 1;
  for (int i = 0; i < j; i++)
  {
    if (j <0)
    {
      break;
    }
    else {
      j = j/10;
      digit++;
    }
  }
  // while (j>0)
  // {
  //   j/10;
  //   digit++;
  // }
  
  printf("%d " , digit);
  return 0;
}
*/

// print sum of all number and facttorial 
// 5! = 5 * 4 * 3 * 2 * 1 = 120

#include <stdio.h>
/*
int main() {
  int n = 10;
  int sum = 0;
  int multi = 1;
  // int j = 1;
  for (int i = 1; i <= n; i++)
  {
   sum = sum + i;
  }
for (int  j = 1; j <= n; j++)
{
  multi =  multi*j;
}

  
  printf("\n%d " , sum);
  printf("\n%d " , multi);
  return 0;
}
*/

// print all the sum of even digit

/*
#include <stdio.h>
int main() {
  int n;
  scanf("%d ",&n);
  int sum1 = 0;
  for (int  i = 0; i <= n; i= i+2)
  {
      sum1 = sum1 +i;
    
  }
  printf("%d ", sum1);
  return 0;
}
*/

// print reserve of  a given number

/*
#include <stdio.h>

int main() {
  int n = 122345;
  int r = 0;
  while(n>0){
  int ld = n%10;
  n = n/10;
  r = r*10;
  r = r+ld;
}

  printf("%d ", r);
  return 0;
}
  */

  // print the ACII value  of a number
  /*
  #include <stdio.h>
  
  int main() {
    char a = 'a';
    printf("%d\n" , a);
while (a  <= 'z')
{
  printf("%c ACII value is %d\n", a,a);

  a++;
}

    
    return 0;
  }
    */

  // solid ractangle with * of 3 by 5
/*
  #include <stdio.h>
  
  int main() {
    for (int i = 0; i <3; i++)
    {
      // printf("*");
      for (int j = 1; j <=5; j++)
      {
        printf("*");
      }
      printf("\n");
    }
    
    return 0;
  }
*/

// print a squar of * in 4 by 4

/*
#include <stdio.h>

int main() {
  int r,c;
  printf("Enter a row number");
  scanf("%d", &r);
  printf("Enter a collums number");
  scanf("%d", &c);
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
  */

// print 1234 pattern
/*
#include <stdio.h>

int main() {
  for (int i = 1; i <= 4; i++)
  {
    for (int  j = 1; j <= 5; j++)
    {
      printf("%d" , i);
    }
    printf("\n");
  }
  
  return 0;
}
*/

// print ABCD in 5 times 
/*
#include <stdio.h>

int main() {
  for (int i = 0; i < 5; i++)
  {
    for (char j = 'a'; j <= 'd'; j++)
    {
      printf("%c " , j);
    }
    printf("\n");
  }
  
  return 0;
}
*/

// print patteren 
// *
// **
// ***
// ****
// *****

/*
#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
*/

// print pattren 
// 1
// 12
// 123
// 1234
// 12345

/*
#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d" , j);
    }
    printf("\n");
  }
  
  return 0;
}
*/
//print 
// A
// AB
// ABC
// ABCD
// ABCD
/*
#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%c ", j+64);
      }
      printf("\n");
      }
      
      return 0;
      }
*/
 
// print the pattern
// 1
// AB
// 123
// ABCD
// 12345
/*
#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (i%2==0)
      {
        printf("%c ", j+64);
      }
      else {
        printf("%d ", j);
      }
    }
    printf("\n");
  }
  
  return 0;
}
*/
// printthe pattern
// ****
// ***
// **
// *
/*
#include <stdio.h>

int main() {
  for (int i = 5; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
*/

// print the pattern
// 1
// 23
// 456
// 78910
/*
#include <stdio.h>

int main() {
  int a = 1;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <=i; j++)
    {
      printf("%d" , a);
      a++;
    }
    printf("\n");
  }
  
  return 0;
}
*/

// print the pattern
// 123
// 456
// 789
/*
#include <stdio.h>

int main() {
  int a = 1;
  for (int i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= 3; j++)
    {
      printf("%d", a);
      a++;
    }
    printf("\n");
  }

  return 0;
}
*/
// print the patern
// 123
// 45
// 6
/*
#include <stdio.h>

int main() {
  int a = 1;
  for (int i = 3; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }
  
  return 0;
}
*/

// print 
// 1
// 01
// 101
// 0101
/*
#include <stdio.h>

int main() {
  for (int i = 1; i <= 4; i++)
  {
    for (int k = 1; k <= i; k++)
    {
      if ((i+k)%2 ==0)
      {
        printf("1");
      }
      else {
        printf("0");
      }

    }
    printf("\n");
    
  }
  
  return 0;
}
*/

// print the pattern
//      *
//      *
//  * * * * *
//      * 
//      * 
/*
#include <stdio.h>

int main() {
  int m = 5;
  int midc = m/2 +1;
  for (int i = 1; i <= m; i++)
  {
  for (int j = 1; j <= m; j++)
  {
    if (i == midc || j == midc )
    {
      printf(" * ");
    }
    else{
      printf("   ");
    }
  }
  printf("\n");

  
}
  return 0;
}
*/

// print the pattern

// *   *
//  * *
//   * 
//  * *
// *   *
/*
#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++)
  {
  for (int j = 1; j <= 5; j++) 
  {
    if (i==j || i+j == 6)
    {
      printf("*");
    }
    printf(" ");
  }
  printf("\n");
}

  return 0;
}
*/
// print pattern 
// *****
// *   *
// *   *
// *****
#include <stdio.h>

int main() {
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <=5; j++)
    {
     if (i==1 || i==4 || j==1 || j == 5)
     {
      printf("*");
     }
     else{
      printf(" ");
     }
    }
    printf("\n");
  }
  
  return 0;
}