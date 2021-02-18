#include <stdio.h>

int main()
{
        // declaring variable
        int year;

        // getting input
        printf("Enter the year: ");
        scanf("%d",&year);

        // checking condition
        if (year % 4 == 0)
        {
                printf("%d is a Leap year\n",year);
        }
        else
        {
                printf("%d is not a Leap year\n",year);
        }
        return 0;
}
