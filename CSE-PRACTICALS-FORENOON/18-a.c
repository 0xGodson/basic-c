/*
Write and execute a C program to find the square and cube of a number using a function
*/

// program:
#include<stdio.h>
void squareNdCube(){
    int a,s,c;
    printf("\n Enter A Number: ");
    scanf("%d",&a);
    s=a*a;
    printf("\n Square of %d is = %d",a,s);
    c=s*a;
    printf("\n\n Cube of %d is = %d",a,c);
}
void main()
{
 squareNdCube();
}
