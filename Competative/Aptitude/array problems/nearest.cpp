#include <iostream>
using namespace std;

int max(int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        
    }

    return max;
}

int Near(int a[], int n)
{   
    // cout<<"In Kth"<<endl;
    int b[n];

    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < n)
        {
            b[index] = a[i];
            index++;
        }
    }

    if (index == 0)
    {
        return -1;
    }
    
    int high = max(b, index);
    return high;
};

int main(int argc, char const *argv[])
{
    int arr[8] = {11, 15, 13, 14, 10, 12, 17, 11};
    int lenghtOfArray = sizeof(arr) / sizeof(arr[0]);

    /*
        result is nearest less number of arrays length;
    */
    cout<< Near(arr, lenghtOfArray);
    return 0;
}