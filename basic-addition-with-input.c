#include <stdio.h>

int main()
{
        // declaring variable here
        int a,b;  
        int total;

        // to get input use scanf function
        printf("Enter a: ");
        scanf("%d",&a);
        printf("Enter b: ");
        scanf("%d",&b);

        // performing addition
        total = a + b;
        printf("\n%d + %d = %d\n",a,b,total);
 
}
