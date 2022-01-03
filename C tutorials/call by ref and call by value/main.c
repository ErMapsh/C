#include <stdio.h>

void addSub(int *x, int *y);

int main()
{
    /*
    Quick Quiz:
    Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.
    a = 4
    b = 3

    after running the function, the values of a and b should be:
    a = 7
    b = 1
    */

    int a = 4, b = 3;
    printf("a is %d, b is %d\n", a, b);
    addSub(&a, &b);
    return 0;
}

void addSub(int *x, int *y)
{
    // printf("%d and %d", *x, *y);
    printf("after this, your a become is %d and b become is %d", *x + *y, *x - *y);
}   