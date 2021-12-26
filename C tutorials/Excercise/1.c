#include <stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form
*/

int main(int argc, char const *argv[])
{   
    int a;
    printf("Enter the No:");
    scanf("%d", &a);
    for ( int i = 1; i <= 10; i++)
    {
        printf("%d\n", a*i);
    }
    
    
    return 0;
}
