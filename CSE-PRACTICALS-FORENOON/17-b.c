/*
Write and execute a C Program to implement payroll application with the given data by
using structure.
HRA=18% of basic Pay
DA=15% of Basic Pay
PF =10% of Basic Pay
LIC=7% of Basic Pay ,
Deduction= PF + LIC
Gross Salary = Basic Pay + HRA + DA
Net Salary = Gross Salary – Deduction
*/

// program:
#include <stdio.h>
struct employee
{
  int empid,salary,hra,da;
  char name[20];
  float total;
}emp;
int main()
{
  printf("\nEmployee name: ");
  scanf("%s",emp.name);
  printf("\nEmployee Id: ");
  scanf("%d",&emp.empid);
  printf("\nEmployee salary: ");
  scanf("%d",&emp.salary);
  emp.hra=emp.salary*0.1;
  emp.da=emp.salary*0.2;
  printf("\nName: %s",emp.name);
  printf("\nId: %d",emp.empid);
  printf("\nHRA: %d",emp.hra);
  printf("\nDA: %d",emp.da);
  printf("\nTotal Salary: %.0f",emp.salary+(emp.salary*0.1)+(emp.salary*.2));
 return 0;
}
