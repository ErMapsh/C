#include <stdio.h>

int InsertionSort(int *arr, int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (arr[j] >= key && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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
    InsertionSort(arr, n);
    Display(arr, n);
    return 0;
}