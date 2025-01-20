#include <stdio.h>

void main()
{
    /*
    5
    54
    543
    5432
    54321
    */
   
    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = n; j >= i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}