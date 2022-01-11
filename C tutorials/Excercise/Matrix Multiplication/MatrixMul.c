#include <stdio.h>
#include <stdlib.h>

int logic()
{

    return 0;
}

int main()
{
    printf("-----Matrix Multiplication-----\n\n");

    printf("Enter Value for Matrix for 1\n");
    printf("Enter No of Rows: ");
    int row1;
    scanf("%d", &row1);
    printf("Enter No of Coloumns: ");
    int coloum1;
    scanf("%d", &coloum1);

    printf("\nEnter Value for Matrix for 2\n");

    printf("Enter No of Rows: ");
    int row2;
    scanf("%d", &row2);
    printf("Enter No of Coloumns: ");
    int coloum2;
    scanf("%d", &coloum2);

    if ((row1 != row2) && (coloum1 != coloum2))
    {
        printf("We can't Multiply");
        exit(1);
    }
    else
    {
        printf("We can Multiply\n\n");

        // creating array
        int *ptr1 = (int *)malloc((row1 * coloum1) * sizeof(int));

        // for first matrix
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < coloum1; j++)
            {
                printf("Enter Value for arr1[%d][%d]: ", i, j);
                scanf("%d", &ptr1);
                // printf("The value for arr1[%d][%d] is ", i, j, arr1[i][j]);
            }
        }

        // display matrix 1
        printf("----Your First Matrix----\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < coloum1; j++)
            {
                printf("%d ", ptr1[i + j]);
            }
            printf("\n");
        }

        // for Second matrix

        // int *ptr2 = (int *)malloc((row1 * coloum1) * sizeof(int));
        // for (int i = 0; i < row1; i++)
        // {
        //     for (int j = 0; j < coloum1; j++)
        //     {
        //         printf("Enter Value for arr2[%d][%d]: ", i, j);
        //         scanf("%d", &ptr2[i + j]);
        //         // printf("The value for arr1[%d][%d] is ", i, j, arr1[i][j]);
        //     }
        // }

        // // display matrix 2
        // printf("----Your Second Matrix----\n");
        // for (int i = 0; i < row1; i++)
        // {
        //     for (int j = 0; j < coloum1; j++)
        //     {
        //         printf("%d ", ptr2[i + j]);
        //     }
        //     printf("\n");
        // }

        // // We got tow 2d arrays ptr1 and ptr2
        // int *ptr3 = (int *)malloc((row1 * row2) * sizeof(int));
        // printf("----Multiplication of Two Array----\n");
        // // accessing matrix first element
        // for (int i = 0; i < row1; i++)
        // {
        //     for (int j = 0; j < coloum1; j++)
        //     {
        //         printf("Element of Array1[%d][%d] is %d\n", i, j, ptr1[i + j]);
        //     }
        // }
        // printf("\n");
        // for (int i = 0; i < coloum2; i++)
        // {
        //     for (int j = 0; j < row2; j++)
        //     {
        //         printf("Element of Array1[%d][%d] is %d\n", j, i, ptr2[j + i]);
        //     }
        // }
    }

    return 0;
}
