#include <stdio.h>

int BubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) // for pass
    {
        for (int j = 0; j < n - 1 - i; j++) // for comparision in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void Display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {12, 54, 7, 87, 23, 9};
    int n = 6;
    printf("Before Sorting..\n");
    Display(arr, n);
    printf("After Sorting..\n");
    BubbleSort(arr, n);
    Display(arr, n);
    return 0;
}