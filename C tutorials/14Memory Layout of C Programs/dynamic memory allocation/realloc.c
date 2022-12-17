#include <stdio.h>
#include <stdlib.h> //Dynamic allocation functions are defined into stdlib

int main()
{
    
    // use of malloc
    int *ptr, n;

    printf("Enter the size of array you want to create: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int)); // its gives int array there array[0] address assign to ptr.

    // input: if u not defined input in calloc then value of that array element initialised at 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    // Display
    for (int i = 0; i < n; i++)
    {
        printf("The value of ptr[%d] is %d\n", i, ptr[i]);
    }

    printf("\n\n");

    

    // use fo realloc
    printf("Enter the size of new array you want to create: ");
    scanf("%d", &n);

    ptr = (int *) realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of ptr[%d] is %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}