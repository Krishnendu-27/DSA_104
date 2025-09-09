#include <stdio.h>

#include <stdlib.h>

#define MAX_LEN 100
struct details {
    char name[MAX_LEN];
    char roll;
    char class [MAX_LEN];
};
int main() {
    int n;
    printf("enter how many student details you enter");
    scanf("%d", & n);
    struct details A[n];

    if (n < 0) {
        return 0;
    }
    else {
        for (int i = 0; i < n; i++)
        {
            A[i].roll = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            printf("enter the name :");
            scanf("%s", A[i].name);
            printf("enter the class :");
            scanf("%s", A[i].class);
        }
    }


    for (int i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", A[i].name);
        printf("  Roll: %d\n", A[i].roll);
        printf("  Class: %s\n", A[i].class);
    }
    return 0;
}