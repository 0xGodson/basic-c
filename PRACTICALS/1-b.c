// PROGRAM USING, I/O STATEMENTS AND EXPRESSIONS

// program:
#include<stdio.h>
#define pi 3.14
void main(){
float r,area,perimeter;
printf("\n Enter r value: ");
scanf("%f",&r);
area=pi*r*r;
printf("\nArea: %f",area);
perimeter=2*pi*r;
printf("\nPerimeter: %f",perimeter);
}
