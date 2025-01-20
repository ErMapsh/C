#include <stdio.h>
int main()
{
    int arr[] = {3, 4, 31, 1, 5, 7, 65};

    printf("The value in array at array[3] is %d.\n", arr[3]);
    printf("The value in array at array[0] is %d.\n", &arr[0]);
    printf("The value in array at array[1] is %d.\n", &arr[1]);
    // here add size of data type size of pointer

    // Using a dereferencing
    printf("The value in array at array[0] is %d.\n", arr + 1);

    // Pointers
    printf("\nThe value of in array at array[0] is %d.\n", *(&arr[0]));
    printf("The value of in array at arrays base adress is %d.\n", *(arr));
    printf("The value in array at array[1] is %d.\n", *(&arr[1]));

    // Using a dereferencing
    printf("The value in array at array[2] is %d.\n", *(arr + 2));


    // we dont directly increase arr
    int *ptr = arr;// ptr access fisrt element of address
    printf("%d\n", ptr);
    ptr++;
    printf("%d\n", ptr);
    ptr--;
    printf("%d\n", ptr); 

    free(ptr);
    return 0;
}