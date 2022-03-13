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
void MergeSort(int *a, int *b, int high)
{
    int i = 0, k = 0;
    int mid = GiveMeMid(a, high);
    // printf("mid is %d\n", mid);
    int j = mid + 1;

    while (i <= mid && j < high)
    {   
        // printf("%d %d %d\n", i, j, k);
        
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else if (a[i] == a[j])
        {
            b[k] = a[i];
            k++;
            i++;
            j++;
        }
        else if (a[i] > a[j])
        {
            b[k] = a[j];
            j++;
            k++;
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
}

int main(int argc, char const *argv[])
{
    int a[] = {2, 11, 21, 34, 1, 42, 91};
    int b[] = {};

    int size = sizeof(a) / sizeof(a[0]);
    // printf("%d\n", size);
    printArray(a, size);
    MergeSort(a, b, size);
    printf("After Merge Sorting..\n");
    printArray(b, size);

    return 0;
}