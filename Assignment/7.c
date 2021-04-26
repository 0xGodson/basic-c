#include <stdio.h>

void main(){
	
	double w1, c1, w2, c2, result;

        printf("Weight - Item1: ");
	scanf("%lf", &w1);
	printf("No. of item1: ");
	scanf("%lf", &c1);
	printf("Weight - Item2: ");
	scanf("%lf", &w2);
	printf("No. of item2: ");
	scanf("%lf", &c2);

	result = ((w1 * c1) + (w2 * c2)) / (c1 + c2);
	printf("\nAverage Value = %f\n", result);
}
