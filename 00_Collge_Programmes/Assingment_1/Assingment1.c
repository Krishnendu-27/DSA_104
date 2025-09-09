// Structure in C.
#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct stduent_details {
    char name[100];
    int age;
    int roll;
};
int main() {
    struct stduent_details student1;
    student1.age = 18;
    strcpy(student1.name, "krish");
    student1.roll = 1;

    printf("name of the studnt is: %s\n", student1.name);
    printf(" age of the studnt is: %d\n", student1.age);
    printf("roll of the studnt is: %d\n ", student1.roll);
    return 0;
}