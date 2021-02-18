#include <stdio.h>

int main()
{
        // declaring variables
        int i,num,sum;

        // getting Input
        printf("Enter a number: ");
        scanf("%d",&num);

        // adding numbers
        for (i=1; i<=num;i++)
        {
                sum = sum + i;
        }

        // printing the result
        printf("Sum of %d numbers = %d\n",num,sum);

        return 0;
}
