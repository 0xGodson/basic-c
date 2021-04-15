#include <stdio.h>

int main(){
	int a,b,c,total;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
        scanf("%d",&c);

	total = a+b+c;
	printf("\n%d + %d + %d  = %d\n",a,b,c,total);
	return 0;
}
