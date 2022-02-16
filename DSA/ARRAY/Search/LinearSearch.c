#include <stdio.h>

int LinearSearch(int arr[], int size, int no)
{

    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == no)
        {

            flag = 1;
            return i;
        }
    }

    if (flag != 1)
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    /*In Linear search we have to search a element using algo
    linear search can be work with sorted array or unsorted array
    */
    int arr[10] = {2, 4, 7, 9, 12, 15, 26, 38, 44, 51};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d\n", size);

    int no;
    printf("Enter Ur Luck no: ");
    scanf("%d", &no);

    int result = LinearSearch(arr, size, no);
    // printf("%d", result);
    if (result)
    {
        printf("-->Your Lucky number found at index %d\n", result);
    }
    else
    {
        printf("Search is end, Your Lucky number not found!");
    }

    return 0;
}