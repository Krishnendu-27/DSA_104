// transpose of matrix
#include <stdio.h>
#include <stdlib.h>

int main() {
  int row , cols;
  int A[100][100];
  int AT[100][100];
  printf("enter the row number: ");
  scanf("%d", &row);
  printf("enter the colume number: ");
  scanf("%d", &cols);
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < cols;j++)
    {
      printf("A[%d][%d]: " , i , j);
      scanf("%d", &A[i][j]);
    }
    
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      AT[j][i] = A[i][j];
    }
    
  }
  printf("\n Original matrix \n ");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d  ", A[i][j]);
    }
    printf("\n");
  }
  printf("\nafter transpose matrix\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d  ", AT[i][j]);
    }
    printf("\n");
  }
  
  
  return 0;
}