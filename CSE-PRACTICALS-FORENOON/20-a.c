/*
Write and execute a C program to find the sum of ‘N’ natural number using function
*/

// program:
#include<stdio.h>
int sum(int n){
   int add = 0;
   for(int i=1; i<=n; i++)
   {
     add += i;
   }
   return add;
}
int main(){
   int range, result;
   printf("Upto which number you want to find sum: ");
   scanf("%d", &range);
   result = sum(range);
   printf("The sum of %d numbers is %d",range,result);
}
