#include <iostream>
#include <vector>
using namespace std;

void printVecRev(vector<int>::reverse_iterator a, vector<int>::reverse_iterator b)
{
    for (auto autoit = a; autoit != b; autoit++)
    {
        cout << *(autoit) << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int>::iterator it;
    for (it = vec.begin(); it < vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // insetad of create iterator we can aslo do this
    for (auto autoit = vec.rbegin(); autoit != vec.rend(); autoit++)
    {
        cout << *(autoit) << " ";
    }
    cout << endl;
    printVecRev(vec.rbegin(), vec.rend());
    return 0;
}