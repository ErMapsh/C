#include <stdio.h>

int main()
{
    /* Declaration with initialization */
    int array[] = {5, 7, 3, 19, 4}; // we can also do in one dimensional array
    int TwoDArray[2][4] = {{3, 1, 9, 3},
                           {4, 1, 73, 123}}; // Two dimensional array

    // one dimensional array
    printf("\n-----1D array-----\n");
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d] is %d\n", i, array[i]);
    }

    /* Two dimensional array */
    printf("\n-----2D array-----\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("TwoDArray[%d][%d] is %d\n", i, j, TwoDArray[i][j]);
        }
    }

    char names[3][10] = {"John", "Doe", "Smith"};
    printf("\n-----2D array of strings-----\n%c", names[1][2]);

    return 0;
}
