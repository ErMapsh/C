#include<stdio.h>

void main(){

    /*
    1
    21
    321
    4321
    54321
    */
    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j>0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    

}