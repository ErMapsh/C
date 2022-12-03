#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int GiveMeMid(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return i;
        }
    }
    return -1;
}

void Merge(int *a, int high)
{
    int i = 0, k = 0, j;
    int mid = GiveMeMid(a, high);
    j = mid + 1;
    int b[100];

    while (i <= mid && j < high)
    {
        // printf("%d %d %d\n", i, j, k);
        // printf("-->%d %d\n", a[i], a[j]);

        if (a[i] <= a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else if (a[i] > a[j])
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }

    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }

    while (j < high)
    {
        // printf("%d %d %d\n", i, j, k);
        b[k] = a[j];
        k++;
        j++;
    }

    for (int i = 0; i < high; i++)
    {
        a[i] = b[i];
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {2, 11, 21, 34, 1, 42, 91};

    int size = sizeof(a) / sizeof(a[0]);
    // printf("%d\n", size);
    printArray(a, size);
    Merge(a, size);
    printf("After Merge Sorting..\n");
    printArray(a, size);

    return 0;
}