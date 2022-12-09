#include <stdio.h>
#include <malloc.h>

int main()
{
    int a = 345;
    float b = 8.3;

    void *ptr; // undefined pointer type

    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));

    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));

    // here i created void pointer
    void *ptr1 = (void *)malloc(5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *((int *)ptr1) + i);
        printf("%f\n", *((float *)ptr1) + i);
    }
    printf("\n");

    // example --> Void pointer is possible to dereference thats why we have to to have to type cast to another
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d value: ", i);
        scanf("%d", ((int *)ptr1) + i);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", *((int *)ptr1) + j);
    }

    // ----with char---
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d value: ", i);
        scanf(" %c", ((char *)ptr1) + i);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("%c\t", *((char *)ptr1) + j);
    }

    free(ptr1);
    ptr = NULL;
    ptr1 = NULL;

    return 0;
}
