#include <stdio.h>

void main()
{
    /*
    1
    12
    123
    1234
    12345
    */
    int i, j, n;
    printf("Enter Number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}