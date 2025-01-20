#include <stdio.h>
int *MyfunDangling()
{
    int a = 34; // here a is local variable and scope of local variable is upto return.
    int b = 3;
    int sum = a + b;
    printf("%p\n", &sum);
    return &sum; // here scope of variable has end after calling done, all a, b and sum (function) has destroy for main so there is no sum var address in main memory for when actually time for return
}
int main()
{
    // case 2 : Function return local variable
    int *ptr = MyfunDangling(); // Ptr points to invalid address cause there is no address for sum(sum got destroyed) 
    printf("%p", ptr);
    return 0;
}