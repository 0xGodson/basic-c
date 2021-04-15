#include <stdio.h>

int main(){
	int a,b;
	float total;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);

	total = a/(float)b;
	printf("\n%d / %d = %f\n",a,b,total);
	return 0;
}
