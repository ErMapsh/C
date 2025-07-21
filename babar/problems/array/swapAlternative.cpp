#include <iostream>
using namespace std;

void swapAleternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i < (n - 1))
        {
            // int temp = arr[i];
            // arr[i] = arr[i + 1];
            // arr[i + 1] = temp;
            swap(arr[i], arr[i + 1]);
        }
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
    int girls[5] = {1, 2, 3, 4, 5};
    int boys[5] = {11, 22, 33, 44, 55};
    printArray(girls, 5);
    swapAleternate(girls, 5);
    cout << "After swapping..." << endl;
    printArray(girls, 5);
    return 0;
}
