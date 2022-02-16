#include <stdio.h>


int main(int argc, char const *argv[])
{
    /*
        array must be sorted in binary search,
        we need to maintain low, mid, high  in binary search.
    */

    int arr[10] = {2, 4, 7, 9, 12, 15, 26, 38, 44, 51};
    int low, mid, high, element = 44, size;
    size = sizeof(arr) / sizeof(arr[0]);
    low = 0;
    high = size - 1;
    if (element == arr[low])
    {
        printf("we got element at index no 0\n");
    }
    else if (element == arr[high])
    {
        printf("we got element at index no %d\n", size - 1);
    }
    else
    {

        while (low<=high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == element)
            {
                printf("we got element at index no %d\n", mid);
                break;
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
    }

    return 0;
}