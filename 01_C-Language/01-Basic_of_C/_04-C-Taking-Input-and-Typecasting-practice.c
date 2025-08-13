#include <stdio.h>

int main() {
  int firtstNum , secondNum;
  printf("Enter the first Numebr");
  scanf("%d" , &firtstNum);
  printf("Enter the secoend Numebr");
  scanf("%d" , &secondNum);
  int total = firtstNum + secondNum;
  printf("The total of %d and %d is %d" , firtstNum,secondNum , total);
  return 0;
}