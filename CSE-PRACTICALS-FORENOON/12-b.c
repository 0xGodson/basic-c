// Write and execute a C program to sort the given names in alphabetical order

// program
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20], t[20];
    int i, j;
    printf("Enter any string (5 names):\n");
    for(i=0; i<5; i++)
        scanf("%s", str[i]);
    for(i=1; i<5; i++)
    {
        for(j=1; j<5; j++)
        {
            if(strcmp(str[j-1], str[j])>0)
            {
                strcpy(t, str[j-1]);
                strcpy(str[j-1], str[j]);
                strcpy(str[j], t);
            }
        }
    }
    printf("\nStrings (Names) in alphabetical order:\n");
    for(i=0; i<5; i++)
        printf("%s\n", str[i]);
    return 0;
}
