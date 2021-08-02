/*
Given FOUR strings s1: BE, s2: HELPFUL, s3: TO and s4: OTHERS.
Develop and execute a C program to concatenate the strings and display the result as BE
HELPFUL TO OTHERS.
*/

// program:
#include <stdio.h>
#include <string.h>
void main(){
    char s1[50] = "BE ";
    char s2[50] = "HELPFUL ";
    char s3[50] = "TO ";
    char s4[50] = "OTHERS";
    strcat(s1,s2);
    strcat(s1,s3);
    strcat(s1,s4);
    printf("%s ",s1);
}
