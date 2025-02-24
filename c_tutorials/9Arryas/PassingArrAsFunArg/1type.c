#include <stdio.h>

// 1.passing array directly
int sum(int arr[]);

int main()
{
    int result, array[] = {23, 33, 44, 55};
    result = sum(array);
    printf("Result = %d", result);
    return 0;
}

int sum(int arr[])
{
    // if u change the value of array, it gets reflected in main function.
    // means overall u cant change array value;
    int sum_of_array = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum_of_array += arr[i];
    }
    return sum_of_array;
}