#include <stdio.h>
#define a 1.8

int main(){
	const int b = 32;
	float cel,far;

	printf("Enter celsius: ");
	scanf("%f",&cel);
	far = (cel*a)+b;
	printf("\nFahrenheit of %f celsius is = %f\n",cel,far);
	return 0;
}
