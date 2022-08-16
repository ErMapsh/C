#include <iostream>
using namespace std;

void Reverse(int a[], int n){
    int temp; 
    for (int i = 0; i < (n-1)/2; i++)
    {   
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    };
}   

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a)/sizeof(a[0]);
    // cout << n <<endl;

    cout<<"Before ---> ";
    printArray(a, n);

    Reverse(a, n);

    cout<<"After ----> ";
    printArray(a, n);
    
    return 0;
}