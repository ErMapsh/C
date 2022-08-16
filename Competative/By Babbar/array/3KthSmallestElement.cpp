#include <iostream>
using namespace std;

void PrintArray(int b[], int n)
{   
    // cout<<"display"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout<<endl;
}

int min(int a[], int n){
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        
    }

    return min;
}

int KthElement(int a[], int n)
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

    // PrintArray(b, index);
    // return 0;
    int low = min(b, index);
    return low;
};

int main(int argc, char const *argv[])
{
    int a[] = {1, 20, 10, 200, 8, 13, 43, 5, 26, 7};
    int n = sizeof(a) / sizeof(a[0]);
    // cout<<n<<endl;
    cout<<"the min is " << KthElement(a,n);
    return 0;
}