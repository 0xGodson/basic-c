#include <stdio.h>
#define a 9

int main(){
	const int b = 32;
	float cel,far;

	printf("Enter fahrenheit: ");
	scanf("%f",&far);
	cel = ((far-b)*5)/a;
	printf("\nCelsius of %f fahrenheit is = %f\n",far,cel);
	return 0;
}
