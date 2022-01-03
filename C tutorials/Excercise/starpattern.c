/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter No: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}
