#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[] = {1, 20, 10, 200, 2, 13, 43, 5, 26, 7};
    int n = sizeof(a)/sizeof(a[0]);

    int min, max;

    min = max = a[0];
    for (int i = 0; i < n; i++)
    {   
        if(a[i] < min ){
            min = a[i];
        }

        if (a[i] > max){
            max = a[i];
        }
    }
    
    cout<<"min is "<< min<<endl;
    cout<<"max is "<<max<<endl;
    return 0;
}