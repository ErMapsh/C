

#include <stdio.h>

void main()
{   /*
        1
       12
      123
     1234
    12345
    
    */

    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // for creating blank space
        for (int j = 1; j <= n - i; j++)
        {
            printf("%s", " ");
        }

        // for creating int
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }
}