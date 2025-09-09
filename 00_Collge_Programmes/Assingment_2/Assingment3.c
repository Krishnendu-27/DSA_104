#include <stdio.h>

#include <stdlib.h>

int main() {
    int rows1, cols1;
    int A[100][100];
    int B[100][100];
    int result[100][100];
    printf("enter the row number of 1st matrix: ");
    scanf("%d", & rows1);
    printf("enter the collume number of 1st matrix: ");
    scanf("%d", & cols1);
    int rows2, cols2;
    printf("enter the row number of 2nd matrix: ");
    scanf("%d", & rows2);
    printf("enter the collume number of 2nd matrix: ");
    scanf("%d", & cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }
    else {
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++) {

                printf("A[%d][%d]: ", i, j);
                scanf("%d", & A[i][j]);
            }

        }
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                printf("B[%d][%d]: ", i, j);
                scanf("%d", & B[i][j]);
            }

        }
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                result[i][j] = 0; // Initialize to 0
                for (int k = 0; k < cols1; k++)
                {
                    result[i][j] += A[i][k] * B[k][j];
                }

            }

        }
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                printf("%d ", result[i][j]);

            }
            printf("\n");
        }

    }
    return 0;
}