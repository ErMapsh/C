#include <iostream>
#include <malloc.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 6;
    int arr[n] = {17, 18, 2, 4, 46, 8};
    int maxNo = arr[0];
    int RightElement = arr[n - 1];
    for (int i = 1; i < n - 1; i++)
    {
        if(arr[i] > maxNo){
            maxNo = arr[i];
        }
    }
    cout << "The sum of leaders is "<< maxNo + RightElement <<endl;

    return 0;
}
