#include <stdio.h>

void addSub(int *x, int *y);

int main()
{
    /*
    Quick Quiz:
    Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.
    a = 5
    b = 3

    after running the function, the values of a and b should be:
    a = 8
    b = 2
    */

    int a = 5, b = 3;
    printf("a is %d, b is %d\n", a, b);
    addSub(&a, &b);
    printf("after this, your a become is %d and b become is %d\n", a, b);
    return 0;
}

void addSub(int *x, int *y)
{
    // printf("%d and %d", *x, *y);
    int add = *x + *y;
    int sub = *x - *y;
    *x = add, *y = sub; // here value of a become change of a and b
}