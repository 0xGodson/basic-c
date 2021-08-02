// Write and execute a C program to calculate and display the total and average of N student marks 

// program
#include<stdio.h>
int main(){
  int i,n,Sum=0,numbers;
  float Average;
  printf("\n Enter How many students mark you want? ");
  scanf("%d",&n);
  printf("\n Enter the students mark one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
   }
  Average = Sum/n;
  printf("\nSum of the %d Numbers = %d",n, Sum);
  printf("\nAverage of the %d Numbers = %.2f",n, Average);
  return 0;
}
