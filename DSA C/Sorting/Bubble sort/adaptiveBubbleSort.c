#include <stdio.h>

int BubbleSort(int *arr, int n)
{
    int sorted;
    for (int i = 0; i < n - 1; i++) // for pass
    {
        printf("We got sorted array at %d\n", i + 1);
        sorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // for comparision in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sorted = 0;
            }
        }

        if (sorted)
        {
            return 1;
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
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printf("After Sorting..\n");
    BubbleSort(arr, n);
    Display(arr, n);
    return 0;
}