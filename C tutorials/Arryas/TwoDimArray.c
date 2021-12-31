#include <stdio.h>

int main()
{
    // Declaration with initialization
    int array[] = {5, 7, 3, 19, 4}; // we can also do in one dimensional array
    int TwoDArray[2][4] = {{3, 1, 9, 3},
                           {4, 1, 73, 123}}; // Two dimensional array

    // one dimensional array
    for (int i = 0; i < 5; i++)
    {
        printf("Number in array is %d\n", array[i]);
    }

    // Two dimensional array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Value in TwoDArray[%d][%d] is %d\n", i, j, TwoDArray[i][j]);
        }
    }

    return 0;
}
