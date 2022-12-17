#include <stdio.h>
int main()
{
    int a = 3;
    int *ptr = NULL;

    if (ptr != NULL)
    {
        // printf("The address of a is %p\n", ptr);
        printf("Pointer is not null pointer\n");
    }
    else
    {
        printf("the Pointer is null pointer and cannot be dereferenced..");
    }

    ptr = &a;
    // printf("The address of a is %p\n", ptr);
    printf("The value of a is %d\n", *ptr);
    printf("%d", ((void *)0));
    return 0;
}