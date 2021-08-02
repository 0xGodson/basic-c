// Write and execute a C program to populate a two dimensional array with height and weight of persons and compute the Body Mass Index of the individuals

// program
#include<stdio.h>
float BMI(float weight, float height) {
   return weight/height*2;
}
int main() {
   float weight,height;
   printf("\nWeight: ");
   scanf("%f",&weight);
   printf("\nHeight: ");
   scanf("%f",&height);
   float bmi = BMI(weight,height);
   printf("BMI index is : %.2f ",bmi);
   return 0;
}
