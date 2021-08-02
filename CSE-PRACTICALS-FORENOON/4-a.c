// Write and execute a program in C to display the name of the day, depending upon the number entered from the keyboard using switch statement

// program
#include <stdio.h>
void main(){
int i;
printf("enter the no :");
scanf("%d",&i);
switch(i){
case 1: printf("Monday....\n");
    break;
case 2: printf("Tuesday...\n");
break;
case 3: printf("Wednesday.\n");
 break;
case 4: printf("Thursday..\n");
break;
case 5: printf("Friday....\n");
break;
case 6: printf("saturday..\n");
break;
case 7: printf("sunday...\n");
break;
default:
      printf("please enter the no betwen 1 to 7  ");
      break;
}
}
