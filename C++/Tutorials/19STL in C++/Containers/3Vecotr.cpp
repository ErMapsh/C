#include <iostream>
#include <vector>
using namespace std;

template <class T>
void Display(vector<T> &v) // template function
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "   ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    vector<float> floatVector(3, 5.7); // with 3 legnth
    vector<float> fV2(9, 9.8);         // with 9 legnth

    floatVector.swap(fV2);
    Display(floatVector);
    Display(fV2);
    return 0;
}