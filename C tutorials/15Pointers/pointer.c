#include <stdio.h>

int main()
{
    printf("Pointer Basics\n"); 
    // Defining int var and poiner var
    int a = 76;
    int *ptr1 = &a;// here &a is memory location of varibale a in ram. it should be in hexadecimal.
    int *ptr2 = NULL;// this is null pointer, dont store any address of another var.

    // Printing Address of  var
    printf("The Address of a is %p\n", &a);
    printf("The Address of pointer is %p\n", &ptr1);
    printf("The Address of a is %p\n\n", ptr1);

    // Printing garbage value of var
    printf("The Address of some garbage is %p\n", &ptr2);
    printf("The Value of a is %d\n", *ptr1);
    printf("The Value of a is %d\n", a);
    // printf("The Value of ptr2 is %d\n", *ptr2);
    return 0;
}