#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void MergeSort(int *a, int *b, int *c, int m, int n)
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        c[k] = a[i];
        k++;
        i++;
    }

    while (j < n)
    {
        c[k] = b[j];
        k++;
        j++;
    }

    printArray(c, m + n);
}
int main(int argc, char const *argv[])
{
    int a[4] = {2, 11, 21, 42};
    int b[3] = {34, 42, 91};
    int c[7] = {};

    printf("After Merge Sorting..\n");
    MergeSort(a, b, c, 4, 3);
    return 0;
}