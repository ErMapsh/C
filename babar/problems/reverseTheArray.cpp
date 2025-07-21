#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(arr, 10);
    reverse(arr, 10);
    printArray(arr, 10);
    return 0;
}