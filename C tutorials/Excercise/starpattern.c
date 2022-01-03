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

void Triangularstarpattern(int n);
void Reversedtriangularstarpattern(int n);


int main()
{
    int n, choice;
    printf("Enter No: ");
    scanf("%d", &n);

    printf("\n1.Triangular star pattern\n2.Reversed triangular star pattern\nWhat u want: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
       Triangularstarpattern(n);
        break;
    case 2:
        Reversedtriangularstarpattern(n);
        break;
    default:
        printf("Enter Correct Choice!!!");
        break;
    }
    

    return 0;
}


void Triangularstarpattern(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
}


void Reversedtriangularstarpattern(int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
}