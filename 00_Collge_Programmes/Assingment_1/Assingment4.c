#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct student_detail {
    char name[100];
    int roll;
};
struct address {
    char city[100];
    char po[100];
};
int main() {
    struct student_detail s1;
    struct address s1_address;
    printf("enter the student 1 details: \n");
    printf("enter the name: ");
    scanf("%s", s1.name);
    printf("enter the roll: ");
    scanf("%d", & s1.roll);

    // struct adress * p;
    // p = &s1_adress;
    scanf("%s", s1_address.city);
    // strcpy(s1_address.city, "Kolkata");
    // strcpy(s1_address.po, "Lauhati");
    scanf("%s", s1_address.po);
    printf("\nstudent 1 details: \n");
    printf("  Name is: %s\n", s1.name);
    printf("  Roll is: %d\n", s1.roll);
    printf("  city is: %s\n", s1_address.city);
    printf("  post office is: %s\n:", s1_address.po);
    return 0;
}