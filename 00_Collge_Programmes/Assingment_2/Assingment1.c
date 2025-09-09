// Addition of Two Matrices Using Array.

#include <stdio.h>

#include <stdlib.h>

int main() {
    int rows, cols;
    printf("enter the row number: ");
    scanf("%d", & rows);
    printf("enter the collume number: ");
    scanf("%d", & cols);

    int A[100][100], B[100][100], sum[100][100];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("A[%d][%d]", i, j);
            scanf("%d", & A[i][j]);
        }

    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("B[%d][%d]", i, j);
            scanf("%d", & B[i][j]);
        }

    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }

    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}