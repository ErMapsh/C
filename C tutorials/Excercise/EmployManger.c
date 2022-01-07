#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen.
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically

    // EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user

    int *ptr, n = 3, charn;

    for (int i = 0; i < n; i++)
    {

        printf("\n---------------Enter Id for Employe %d------------\n", i + 1);
        printf("Enter no of characters in your eId: ");
        scanf("%d", &charn);
        printf("Your eId have %d lengthy\n", charn);

        ptr = (int *)calloc(charn, sizeof(charn));

        for (int j = 0; j < charn; j++)
        {
            printf("Enter Your eId character No %d:", j + 1);
            scanf("%s", ptr + j);
        }

        printf("Enter eid of Employe: ");
        for (int k = 0; k < charn; k++)
        {
            printf("%c", *(ptr + k));
        }
        free(ptr);
    }
    return 0;
}
