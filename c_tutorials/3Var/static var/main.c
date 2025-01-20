#include <stdio.h>

int b = 3;
void returnvalue()
{
    return 0;
}

int func1(int b1)
{

    // printf("the address of b inside func1 is %p\n", &b);
    // printf("The value of b inside fucn1 is %d\n", b);// checking golbal variable

    //--static var---
    static int myvar = 60;
    // static int myvar1 = returnvalue();// we got error beacause static var want const literals
    printf("The value of my var is %d\n", myvar);
    myvar++;

    return b1 * myvar;
}
int main()
{
    int b = 34;
    int val = func1(b);
    int *ptr = &val;
    // printf("the address of b inside main function is %p\n", &b);
    // printf("The value of func1 is %d\n", val);

    func1(b); // dont forgot that changing value of var
    func1(b);
    func1(b);
    func1(b);
    return 0;
}