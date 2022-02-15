#include <stdio.h>

int display(int arr[], int U_size)
{
    /*
        we know we have array, but array is contiguous memory location so every index having already garbage value so we need to provide how much element we store in array that already reserve space and and we access that item in specific range. that is we did in this function we get array and how much non garbage element in this that user/programmer store.
    */

    for (int i = 0; i < U_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 1;
}

int Deletion(int arr[], int index, int size)
{
    /*
        while deletion of element, we cant directly remove element but we can using index of that element, we can also overwrite element by using index, so basically here we dont delete element, we just overwrite element of next element using below algo.

    */
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}

int main(int argc, char const *argv[])
{

    int arr[100] = {1, 3, 12, 18, 56};
    int used_size = 5, total_size = 100;

    display(arr, used_size);

    int data = Deletion(arr, 2, used_size);
    used_size--;
    display(arr, used_size);

    return 0;
}