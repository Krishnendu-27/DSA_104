#include <stdio.h>

int main() {
//   calculate volume of a sphere
float PI = 3.1415;
float volume , radius;
radius =  radius*radius*radius;
printf("Enter the radius of the Sphere: ");
scanf("%f", &radius);
volume = (4.00f/3.00f) * PI * radius*radius*radius;
printf("the volume of Sphere is %f when radius is %f" , volume , radius);
  return 0;
}