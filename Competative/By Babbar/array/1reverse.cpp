// #include <iostream>
// using namespace std;

// void Reverse(int a[], int n){
//     int temp;
//     for (int i = 0; i < (n-1)/2; i++)
//     {
//         temp = a[i];
//         a[i] = a[n-1-i];
//         a[n-1-i] = temp;
//     };
// }

// void printArray(int a[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<< a[i] << " ";
//     }
//     cout<<endl;
// }

// int main(int argc, char const *argv[])
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(a)/sizeof(a[0]);
//     // cout << n <<endl;

//     cout<<"Before ---> ";
//     printArray(a, n);

//     Reverse(a, n);

//     cout<<"After ----> ";
//     printArray(a, n);

//     return 0;
// }

#include <iostream>
using namespace std;

struct myArray
{
    int min;
    int max;
};

myArray getMinMax(int a[], int n)
{
    struct myArray pair;

    int i;

    if (n == 1)
    {
        pair.max = a[0];
        pair.min = a[0];
        return pair;
    }
    
    pair.min = a[0];
    pair.max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < pair.min)
        {
            pair.min = a[i];
        }

        if (a[i] > pair.max)
        {
            pair.max = a[i];
        }
    }

    return pair;
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 20, 10, 200, 2, 13, 43, 5, 26, 7};
    int n = sizeof(a) / sizeof(a[0]);

    struct myArray MinMax = getMinMax(a, n);

    cout << "Minimum is" << MinMax.min << endl;
    cout << "Maximum is" << MinMax.max << endl;

    return 0;
}