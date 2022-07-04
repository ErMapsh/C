#include <iostream>
#include <functional>
#include <algorithm> // algorithms include
using namespace std;

template <class T>
void display(T &arr)
{
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // Function object (functor): function wrapped in a class so that it available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort(arr, arr + 6); // will sort with asscending order
    display(arr);

    sort(arr, arr + 6, greater<int>()); // 0 to 6 postion tak sort kro, in decending order
    display(arr);

    return 0;
}