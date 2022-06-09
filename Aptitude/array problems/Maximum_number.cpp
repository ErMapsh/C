#include <iostream>
#include <malloc.h>
using namespace std;

int MaximumIndex(int *arr, int no)
{
    // display array
    printf("...Array...\n");
    for (int i = 0; i < no; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // maximum number find
    int max = arr[0];
    for (int j = 1; j < no; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
    }
    printf("Maximum Number is %d", max);
    return 0;
}

int main(int argc, char const *argv[])
{
    int no = 5;
    int *arr = (int *)malloc(no * sizeof(int));
    for (int i = 0; i < no; i++)
    {
        int enteredNo;
        printf("Enter %d number:", i + 1);
        scanf("%d", &arr[i]);
    }

    MaximumIndex(arr, no);
    return 0;
}
