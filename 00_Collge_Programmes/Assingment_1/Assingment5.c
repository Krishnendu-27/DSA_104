// Arrow operator in Structure
#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct student_name {
    char student1[100];
    char student2[100];
};
int main() {
    // int *p;
    struct student_name calss1 = {
        "krish",
        "arya"
    };
    struct student_name * p = & calss1;
    printf("%s ", calss1.student1);
    strcpy(p -> student1, "ronit");
    printf("%s ", calss1.student1);
    return 0;
}