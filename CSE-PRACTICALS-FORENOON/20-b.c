/*
Write and execute a C program to generate salary slip of employees using structures and pointers
*/

// program:
#include<stdio.h>
struct emp
{
int empno ;
char name[10] ;
int bpay, allow, ded, npay ;
} e[10] ;
void main()
{
 int i, n ;
 printf("Enter the number of employees : ") ;
 scanf("%d", &n) ;
 for(i = 0 ; i < n ; i++)
 {
 printf("\nEnter the employee number : ") ;
 scanf("%d", &e[i].empno) ;
 printf("\nEnter the name : ") ;
 scanf("%s", e[i].name) ;
 printf("\nEnter the basic pay, allowances & deductions : ") ;
 scanf("%d %d %d", &e[i].bpay, &e[i].allow, &e[i].ded) ;
 e[i].npay = e[i].bpay + e[i].allow - e[i].ded ;
 }
printf("\nEmp. No. Name \t Bpay \t Allow \t Ded \t Npay \n\n") ;
for(i = 0 ; i < n ; i++)
{
printf("%d \t %s \t %d \t %d \t %d \t %d \n", e[i].empno,e[i].name, e[i].bpay, e[i].allow, e[i].ded, e[i].npay) ;
}
}
