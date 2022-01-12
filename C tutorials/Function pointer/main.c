#include<stdio.h>

int sum(int a, int b){
    return a+b;
}
int main()
{
    // printf("The sum is %d", sum(2,3));  // for test

    // funtion ptr
    int (*fptr)(int, int); // meaning of that
    // return type of function (*name of pointer) (and he takes two int argument)
    fptr = &sum;
    int deref = (*fptr)(5, 7);
    printf("%d", deref);
    return 0;
}