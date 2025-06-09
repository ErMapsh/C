#include <stdio.h>
void display();
void printArray();

// 2.using pointer we can access element
int main()
{
    int arr[] = {11, 21, 13, 41};
    for (int i = 0; i < 4; i++)
    {
        display(&arr[i]);
    }
    printArray(arr);
    return 0;
}

void display(int *ptr)
{
    printf("%d\n", *(ptr));
}

void printArray(int *arr)
{
    for (int i = 0; i < 4; i++)
    {
        display(&arr[i]);
    }
}