#include <stdio.h>
#include "forinclude.c"
int main()
{
    int a = 4; //  here var a is overwrite
    printf("%d\n", a);
    printf("%d\n", sum(1, 3));
    return 0;
}