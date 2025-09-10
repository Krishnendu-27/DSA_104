// nested structer
#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct adress
{
    char * city;
    char * po;
    char * ps;
    int pincode;
};
struct stduent_details {
    char name[100];
    int age;
    int roll;
    struct adress Adress;
};

int main() {
    struct stduent_details student2;
    student2.age = 10;
    strcpy(student2.name, "naruto");
    student2.roll = 2;
    student2.Adress.city = "konoha";
    student2.Adress.po = "cloud village";
    student2.Adress.po = "stone village";
    student2.Adress.city = "sun city";

    printf("the age of student2 %d\n", student2.age);
    printf("the name of student2 %s\n", student2.name);
    printf("the roll of student2 %d\n", student2.roll);
    printf("the city of student2 %s\n", student2.Adress.city);
    printf("the post office of student2 %s\n", student2.Adress.po);
    printf("the pollic office of student2 %s\n", student2.Adress.ps);
    printf("the city of student2 %s\n", student2.Adress.city);
    return 0;
}