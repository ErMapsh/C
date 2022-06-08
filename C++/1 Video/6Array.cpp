#include <iostream>
using namespace std;

void displayArray(int *a, int count){
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(a[1])<<endl;

    for(int i = 0; i < count; i++){
        cout<<"mark of student "<<i+1 <<"th is "<<a[i]<<endl;
    }
}
int main(int argc, char const *argv[])
{
    //-------1Dimension-------
    // int array[] = {1, 3, 4, 5};
    // cout<<array[2]<<endl;
    // cout<<sizeof(array);

    // int mark[5];
    // int count = sizeof(mark)/sizeof(mark[1]);
    // // cout<<count<<":"<<sizeof(mark)<<":"<<sizeof(mark[1])<<endl;
    // for (int i = 0; i < count; i++)
    // {
    //     cout<<"Enter Number"<< i+1 <<":"<<endl; 
    //     cin>>mark[i];
    // }
    // displayArray(mark, count);
    
    //-------2Dimension-------
    int arr2d[2][3] = {{2, 3, 4}, {5, 6, 7}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr2d[" << i << "][" << j << "] is " << arr2d[i][j] << endl;
        }
    }

    return 0;
}