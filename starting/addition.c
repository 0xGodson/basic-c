#include <stdio.h>

int main(){
	int a,b,total;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);

	total = a+b;
	printf("\n%d + %d = %d\n",a,b,total);
	return 0;
}
