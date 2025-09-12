//  c progreame tro chek the string is palindrom or not using recurison
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ispalindromnormal(char eg[] ){
  int len1 = strlen(eg);
    int flag = 1;
  for (int i = 0; i < len1; i++)
  {
    if (eg[i] != eg[len1 - 1 - i])
    {
        flag = 0;
        break;
    }
    
  }
return flag;
}
int main() {
   
  char eg1[] = "abcd";
  char eg2[] = "abcddcba";
  if(ispalindromnormal(eg2)== 1){
    printf("%s is a palindrom", eg2);
  }
  else{
    printf("%s is not a palindrom", eg2);
  }
  return 0;
}