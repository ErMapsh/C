    /*

    *
   **
  ***
 ****
*****

    */

#include <stdio.h>

void main()
{

    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {   
        //for creating blank space
        for (int j = 1; j <= n - i; j++)
        {
            printf("%s", " ");
        }
        
        // for creating int
        for (int k = 1; k <= i; k++)
        {
            printf("%s", "*");
        }
        
        printf("\n");
    }
}