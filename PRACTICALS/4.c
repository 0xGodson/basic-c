// DESIGN A CALCULATOR TO PERFORM THE OPERATIONS, NAMELY, ADDITION, SUBTRACTION, MULTIPLICATION,DIVISION AND SQUARE OF A NUMBER.

// program:
#include<stdio.h>
void main()
{
int a,b,result,sq1,sq2,ch;
float divide;
printf("Enter two integers:");
scanf("%d%d",&a,&b);
printf("Menu \n 1.add \n 2.subtract \n 3.multiply \n 4.divide \n 5.square\n");
printf("\n Enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
result=a+b;
printf("Sum= %d\n",result);
break;
}
case 2:
{
result=a-b;
printf("Difference= %d\n",result);
break;
}
case 3:
{
result=a*b;
printf("Multiplication= %d\n",result);
break;
}
case 4:
{
result=a/(float)b;
printf("Division= %.2f\n",result);
break;
}
case 5:
{
sq1=a*a;
printf("Square= %d\n",sq1);
sq2=b*b;
printf("Second square= %d\n",sq2);
break;
}
}
}
