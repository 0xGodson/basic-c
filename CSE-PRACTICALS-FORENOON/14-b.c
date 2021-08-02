// Write and execute a C program to check whether the given year is leap year or not

// program:
#include <stdio.h>
void main()
{
int n,a[100],i;
void sortarray(int*,int);
printf("\nEnter the Number of Elements in an array : ");
scanf("%d",&n);
printf("\nEnter the Array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sortarray(a,n);
printf("\nAfter Sorting....\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
void sortarray(int* arr,int num)
{
int i,j,temp;
for(i=0;i<num;i++)
for(j=i+1;j<num;j++)
if(arr[i] > arr[j])
{ temp=arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
