#include <stdio.h>
int *MyfunDangling()
{
    int a = 34; // here a is local variable and scope of local variable is upto return.
    int b = 3;
    int sum = a+b;
    return &sum;
}
int main()
{   
    // case 2 : Function return local variable   
    int *ptr = MyfunDangling();// Ptr points to invalid location
    printf("%p", ptr);
    return 0;
}