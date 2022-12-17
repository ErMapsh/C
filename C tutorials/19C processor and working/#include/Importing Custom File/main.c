#include <stdio.h>
#include "forinclude.c"
#include "../forImportingAnother.c"

int main()
{
    int a = 4; //  here var a is overwrite

    printf("a value is %d\n", a);
    printf("Sum is %d\n", sum(2, 3));
    printf("Sub is %d\n", sub(10, 2));
    
    return 0;
}