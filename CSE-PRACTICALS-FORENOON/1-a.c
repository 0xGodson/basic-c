// CHECK WHETHER A GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT?

// program:
#include<stdio.h>
#include<math.h>
void main(){
int number, sum = 0, rem = 0, cube = 0, temp;
printf ("Enter a number: ");
scanf("%d", &number);
temp = number;
while (number != 0)
{
rem = number % 10;
cube = pow(rem, 3);
sum = sum + cube;
number = number / 10;
}
if (sum == temp)
printf ("The given number is an Armstrong number");
else
printf ("The given number is not an Armstrong number ");
}
