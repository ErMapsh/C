#include <stdio.h>
#include <stdlib.h>
int main()
{   
    // case 3: variable going out of scope
    int *ptr;

    {
        int i = 2;
        ptr = &i;
        printf("1.Address of ptr is %d\n", *ptr);
        free(*ptr);
    }

    // ptr now a dangling pointer
    printf("2.Address of ptr is %d\n", *ptr);// he cant able to print
    return 0;
}