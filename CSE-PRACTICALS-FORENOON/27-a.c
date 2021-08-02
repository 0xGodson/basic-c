// Write and execute a C program to find the area of a circle

// program
#include <stdio.h>
#include <math.h>
int main()
{
  float radius, area;
  printf("Enter the radius of a circle: ");
  scanf("%f", &radius);
  area = 3.14159*radius*radius;
  printf("Area of the circle = %.2f\n", area); 
  return 0;
}
