// Code as described/written in the video
#include <stdio.h>

// passing directly array
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}

// passing array as pointer
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
}

// how we can use 2d matrix thats it
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at arr2[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[] = {1, 2 , 3 ,4}, arr1[] = {4, 3, 2, 1}, arr2[2][2] = {{2, 13}, {9, 3}};

    // --- array---
    printf("--Passing array directly ----\n");
    func1(arr);
    printf("\n");

    // -- pointer--
    printf("--Passing pointer directly ----\n");
    func2(arr1);
    printf("\n");

    // -- 2d matrix---
    printf("--Passing 2d array directly ----\n");
    func3(arr2);
    return 0;
}
