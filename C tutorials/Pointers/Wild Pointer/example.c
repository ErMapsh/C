#include<stdio.h>
int main()
{
    int a = 3;
    int *ptr; //here ptr is begin a wild pointer
    ptr = &a; // ptr no lognger valid
    
    return 0;
}