#include <stdio.h>
int main()
{
    /*
    // Here error throwing
    int* a, b; // here pointer is assign only to a to not b.
    int c = 87;
    a = &c;
    b = &c;// he is not pointer thats why here we got error.

    printf("%d\n", *(a));
    printf("%p\n", *(b));
    */

    // solution on pointer
    typedef int *integerPointer;
    integerPointer a, b;
    int c = 78;
    a = &c;
    b = &c;
    // here we got right things
    printf("%d\n", *(a));
    printf("%d\n", *(b));
    return 0;
}