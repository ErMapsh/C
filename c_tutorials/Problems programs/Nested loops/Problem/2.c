

#include <stdio.h>

void main()
{
    /*
    A
    AB
    ABC
    ABCD
    ABCDE
    */
    int i, j, n;
    printf("Enter Number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", j+64);// here we use ascii value for printing characters
        }
        printf("\n");//to next line
    }
}