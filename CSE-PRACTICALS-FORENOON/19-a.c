/*
Write and execute a C program to generate numbers between 20 and 100 which are
divisible by 2 and not divisible by 3 and 5
*/

// program:
#include<stdio.h>
int main()
{
int i,n;
for(i=20;i<100;i++)
{
n=i;
if((n%2==0)&&(n%3!=0)&&(n%5!=0))
{
printf("\n the values are %d",n);
}
}
return 0;
}
