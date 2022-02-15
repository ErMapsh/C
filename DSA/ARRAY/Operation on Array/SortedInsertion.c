#include <stdio.h>

void showDisplay(int arr[], int u_size)
{
    // Code for Traversal
    for (int i = 0; i < u_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int SortedInsertion(int arr[], int T_size, int U_size, int element, int indexno)
{
    if (U_size >= T_size)
    {
        // this condition will when u got last index of array as used size and its notify array is full
        return -1;
    }

    // shifting element to rhs by one
    for (int i = U_size - 1; i >= indexno; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[indexno] = element;
    return 1;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 3, 5, 79, 81}; // this array will created in stack

    int u_size = 5, t_size = 100, at_index = 3, element = 55;
    showDisplay(arr, u_size);
    int data = SortedInsertion(arr, t_size, u_size, element, at_index); // adding one element here
    // printf("%d\n", data);
    if (data == 1)//if insertion function return 1 means operation success then show updated array 
    {   
        printf("Insertion Successfull.........\n");
        u_size += 1;
        showDisplay(arr, u_size);
    }else{
        printf("Insertion fail..\n");
    }

    return 0;
}