// WRITE A PROGRAM TO FIND WHETHER THE GIVEN YEAR IS LEAP YEAR OR NOT

// program:
#include <stdio.h>
void main ()
{
 int year;
 printf("Enter a year: ");
 scanf("%d",&year);
 if(year%4 == 0)
 {
 if(year%100 == 0)
 {
 if (year%400 == 0)
 printf("%d is a leap year.", year);
 else
 printf("%d is not a leap year.", year);
 }
 else
 printf("%d is a leap year.", year );
 }
 else
 printf("%d is not a leap year.", year);
}
