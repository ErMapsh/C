#include <stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form
*/

int main(int argc, char const *argv[])
{   
    int a;
    printf("Enter the No:");
    scanf("%d", &a);

    // int j=1;
    // while(j <= 10)
    // {
    //     printf("%d\n", a*j);
    //     j+=1;
    // }
    
    for ( int i = 1; i <= 10; i++)
    {
        printf("%d\n", a*i);
    }
    
    
    return 0;
}
