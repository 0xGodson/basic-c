// Develop and execute a ‘C’ program to find the sum of the digits of a given number using while statement

// program:
#include <stdio.h>
int main(){
   int n, t, sum = 0, remainder;
   printf("Enter an integer:");
   scanf("%d", &n);
   t = n;
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
   printf("Sum of digits of %d = %d", n, sum);
   return 0;
}
