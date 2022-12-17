#include<stdio.h>
int main()
{
    int a = 3;
    int *ptr; //here ptr is begin a wild pointer
    // ptr = &a; // ptr no longer invalid
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr) + 1);
    printf("%d\n", *(ptr) + 2);
    printf("%d\n", *(ptr) + 3);
    

    return 0;
}