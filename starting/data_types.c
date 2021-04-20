#include <stdio.h>

int main(){
	unsigned int a;
	float b;
	long double c;
	signed char character;

	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%f",&b);
	printf("Enter c:");
	scanf("%Lf",&c);
	printf("Enter d:");
	scanf(" %c",&character);
}
