#include <stdio.h>

int calculation(int x, int y){
    printf("%d %d\n", x, y);
    return 0;
}
int main()
{
    int m1[2][2] = {{1, 2}, {3, 4}};
    int m2[2][2] = {{5, 6}, {7, 8}};

    // Matrix1 and overwriting data
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("Enter Value for m1[%d][%d]: ", i, j);
    //         scanf("%d", &m1[i][j]);
    //     }
    // }


    // display
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value for m1[%d][%d] is %d\n", i, j, m1[i][j]);
        }
    }

    printf("\n\n");

    // Matrix2 and overwriting data
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("Enter Value for m1[%d][%d]: ", i, j);
    //         scanf("%d", &m2[i][j]);
    //     }
    // }

    // display
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value for m1[%d][%d] is %d\n", i, j, m2[i][j]);
        }

    }


    // behind the logic for multiplication of matrix
    // 1 2   5 6
    // 3 4   7 8
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

         m1[i][j];
         m2[j][i];
        } 
    }
    
    return 0;
}