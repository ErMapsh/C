

#include <stdio.h>
void main()
{
    /*
        1
       21
      321
     4321
    54321
    */
   
    int num;
    printf("Enter Number:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        // to display Blank space
        for (int j = 1; j <= num - i; j++)
        {
            printf("%s", " ");
        }

        // to display digit
        for (int k = i; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}
