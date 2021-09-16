#include <stdio.h>
#include <stdlib.h>
#define max 20
int opt, a[20],i,top=0,n;
void main()
{
void create(),push(),pop(),disp();
int wish;
do
{
printf("\nMENU");
printf("\n1.Create\n2.Push\n3.pop\n4.Display\n5.Exit\n");
printf("\nEnter your option: ");
scanf("%d",&opt);
switch(opt)
{
case 1:create();break;
case 2:push();break;
case 3:pop();break;
case 4:disp();break;
case 5:exit(0);
}
printf("\nDo u want to continue(1/0):");
scanf("%d",&wish);
}while(wish==1);}
void create()
{
printf("\n Enter the limit of stack");
scanf("%d",&n);if(n<max)
{
printf("\nEnter the items");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
top=n-1;
}
else
printf("\nUnable to create the stack");
}
void push()
{
int x;
if(top<max){
printf("\nEnter the element to be pushed:");
scanf("%d",&x);
top=top+1;
a[top]=x;
n=top;
}
else
printf("\n Stack is full");
}
void pop()
{
if(top<0)
printf("\n Stack is empty");
else
{
printf("\nThe element popped is %d",a[top]);
top=top-1;
n=top;
}}
void disp()
{
if(top<0)
printf("\n Stack is empty");
else
{
printf("\n The elements in the stack are:");
for(i=top;i>=0;i--)
printf("\n%d",a[i]);
}
}
