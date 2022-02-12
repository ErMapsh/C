#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //-------1Dimension-------
    // int array[] = {1, 3, 4, 5};
    // // cout<<array[2];

    // int mark[5];
    // for (int i = 0; i < sizeof(mark)/sizeof(mark[1]); i++)
    // {
    //     cout<<"Enter Number "<<i<<":";
    //     cin>>mark[i];
    // }

    // for (int i = 0; i < sizeof(mark)/sizeof(mark[1]); i++)
    // {
    //     cout<<"Marks of "<<i<<"th student is "<<mark[i]<<endl;
    // }

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