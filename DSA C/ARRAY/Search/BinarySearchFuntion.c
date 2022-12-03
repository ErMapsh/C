#include <stdio.h>

int BinarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    if (element == arr[low])
    {   
        return 0;
    }
    else if (element == arr[high])
    {

        return size - 1;
    }
    else
    {
        // searching in array
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == element)
            {
                return mid;
            }
            else if (arr[mid] > element)
            {
                high = mid - 1;
            }
            else if (arr[mid] < element)
            {
                low = mid + 1;
            }
        }

        // searching ends
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    /*
        array must be sorted in binary search,
        we need to maintain low, mid, high  in binary search.
        we need to run while loop upto low is not begin higher than high, means search space gona end
    */

    int arr[10] = {2, 4, 7, 9, 12, 15, 26, 38, 44, 51};
    int element, size;
    size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter Element That u want to search: ");
    scanf("%d", &element);
    
    int result = BinarySearch(arr, size, element);

    if (result != -1)
    {
        printf("we got element at index no %d\n", result);
    }
    else
    {
        printf("We dont got element in array, Try Again");
    }
    return 0;
}