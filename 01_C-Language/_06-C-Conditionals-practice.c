//  take float as a input and check that the float is a integer or not

/*
#include <stdio.h>

int main() {
  float x;
  printf("enter a float number: ");
  scanf("%f" , &x);
  int y = (int)x;
if (x == y)
{
    printf("%f is a integer" , x);
}else{
    printf("%f is a float" , x);
}
  return 0;
}
*/

// take COST price and SELlling price as a input. 
// determine seller made  profit , lose , or no profit 
// How much he made profit , lose , or no profit

/*
#include <stdio.h>

int main() {
  int cost_price;
  int sell_price;

  printf("Enter the Cost price: $");
  scanf("%d" , &cost_price);
  printf("Enter the Sell price: $");
  scanf("%d" , &sell_price);

  int selling_value = sell_price - cost_price;

  if (cost_price == sell_price)
  {
    printf("The seller made not profit");
  }
  else if (cost_price > sell_price)
  {
    printf("The seller made Lose ");
}
else
  {
    printf("The seller made Profit ");
  }
  if (cost_price == sell_price)
  {
    printf("The seller made $%d so no profit" , selling_value);
  }
  else if (cost_price > sell_price)
  {
    printf("The seller made $%d so he lose" , selling_value);
}
else
  {
    printf("The seller made $%d so he profit" , selling_value);
  }
  return 0;
  }
*/

// take 3 number input and tell which is the greatest of them

#include <stdio.h>

int main() {
  int a , b , c;
printf("Enter the first  number");
scanf("%d" , &a);
printf("Enter the seconed  number");
scanf("%d" , &b);
printf("Enter the third  number");
scanf("%d" , &c);

if (a>b && a>c)
{
    printf(" %d is the bigest number among %d %d %d" , a , a , b, c);
}
else if (b>a && b>c)
{
    printf(" %d is the bigest number among %d %d %d" , b , a , b, c);
}
else if (c>a && c>b)
{
    printf(" %d is the bigest number among %d %d %d" , c , a , b, c);
}

  return 0;
}