#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Array
{
    int ArrSize;
    int Use;
    int *arr;
} Array;

void CreationOfArray(Array *arr)
{
    printf("Enter the size of your array: ");
    int n;
    scanf("%d", &n);
    arr->Use = n;
    // printf("%d\n", n);
    arr->arr = (int *)malloc(sizeof(int) * 10);
    printf("\nEnter the data of your Array.......\n");
    int i;
    for (i = 0; i < arr->Use; i++)
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
    for (int i = 0; i < arr->Use; i++)
    {
        printf("%d ", arr->arr[i]);
    }
    printf("\n");
}

int InsetionWithMaintainOrder(Array *arr)
{

    if (arr->Use >= arr->ArrSize)
    {
        return -1;
    }

    int index, data;
    printf("Enter the value That You want to insert: ");
    scanf("%d", &data);
    printf("Enter the Index: ");
    scanf("%d", &index);
    // printf("%d", arr->Use);

    for (int i = arr->Use - 1; i >= index; i--)
    {
        arr->arr[i + 1] = arr->arr[i];
    }
    arr->Use++;
    arr->arr[index] = data;
    return 1;
}

int InsetionWithNotMaintainOrder(Array *arr)
{
    int index, data;
    printf("Enter the value That You want to insert: ");
    scanf("%d", &data);
    printf("Enter the Index : ");
    scanf("%d", &index);

    arr->arr[index] = data;
    return 1;
}

int main(int argc, char const *argv[])
{
    Array arr;
    CreationOfArray(&arr);
    Display(&arr);

    while (1)
    {
        int n;
        printf("---Insertion Operation in Array---\n1.Insertion at index with maintain order\n2.insertion at index without maintain order\n3.Display\n4.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            InsetionWithMaintainOrder(&arr);
            break;
        case 2:
            InsetionWithNotMaintainOrder(&arr);
            break;
        case 3:
            Display(&arr);
            break;
        case 4:
            exit(1);
            break;
        }
        printf("\n");
    }

    return 0;
}
