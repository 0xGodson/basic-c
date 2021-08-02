// Write and execute a ‘C’ program to read an array of ‘N’ integers and print its elements in reverse order

// program
#include<stdio.h>
#define MAX 30
void main() {
   int size, i, arr[MAX];
   int *ptr;
   ptr = &arr[0];
   printf("\nEnter the size of array : ");
   scanf("%d", &size);
   printf("\nEnter %d integers into array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
   }
   ptr = &arr[size - 1];
   printf("\nElements of array in reverse order are :\n");
   for (i = size - 1; i >= 0; i--) {
      printf("%d  ",*ptr);
      ptr--;
   }
}
