#include<stdio.h>

// this function stores somewhere in memory in stack
int sum(int a, int b){
    return a+b;
}
int main()
{   
    printf("Function stores in stack at %p.\n", &sum);
    // printf("The sum is %d", sum(2,3));  // for test

    // ----funtion ptr----
    int (*fptr)(int, int); /* meaning of that
    return type of function (*name of pointer) (and he takes two int argument) */

    fptr = &sum;

    int deref = (*fptr)(5, 7);

    printf("Sum is %d.", deref);
    return 0;
}