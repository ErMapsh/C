#include <stdio.h>

void main()
{
    /*
    12345
    12345
    12345
    12345
    12345

    */

    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // for creating blank space
        for (int j = 1; j <= n; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}