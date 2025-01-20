#include <stdio.h>
int strRev();

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; // define and initilisation
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d", size);
    strRev(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

int strRev(int *arg, int size)
{
    // printf("%d\n", *(arg));
    // printf("%d\n", size);

    for (int i = 0; i < size / 2; i++)
    {
        int temp = *(arg + i);
        arg[i] = *(arg + (size - i - 1));
        arg[size - i - 1] = temp;
    }
    return *arg;
}

// Without using function
/*
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; // define and initilisation
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d", size);

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/