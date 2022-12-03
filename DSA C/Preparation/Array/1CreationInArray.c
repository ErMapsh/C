#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Array
{
    int ArrSize;
    int *arr;
} Array;

void CreationOfArray(Array *arr)
{
    printf("Enter the size of your array: ");
    int n;
    scanf("%d", &n);
    arr->ArrSize = n;
    // printf("%d\n", n);
    arr->arr = (int *)malloc(sizeof(int) * arr->ArrSize);
    printf("\nEnter the data of your Array.......\n");
    int i;
    for (i = 0; i < arr->ArrSize; i++)
    {
        int data;
        printf("Enter the %d of element: ", i + 1);
        scanf("%d", &data);
        arr->arr[i] = data;
    }
}

void Display(Array *arr)
{
    printf("Your array is : ");
    for (int i = 0; i < arr->ArrSize; i++)
    {
        printf("%d ", arr->arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    Array arr;
    printf("---Operation in Array---\n");
    CreationOfArray(&arr);
    Display(&arr);

    return 0;
}