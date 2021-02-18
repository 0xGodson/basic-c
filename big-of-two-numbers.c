#include <stdio.h>

int main()
{
        // declaring varialbles
        int a,b;

        // getting input
        printf("Enter a: ");
        scanf("%d",&a);
        printf("Enter b: ");
        scanf("%d",&b);

        // checking condition
        if(a > b)
        {
                printf("\n%d is greater than %d\n",a,b);
        }

        else if(a == b)
        {
                printf("\n%d and %d are equal\n",a,b);
        }

        else
        {
                printf("\n%d is greater than %d\n",b,a);
        }

        return 0;
}
