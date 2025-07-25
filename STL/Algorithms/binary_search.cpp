#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "2's kitna:" << binary_search(vec.begin(), vec.end(), 2) << endl;
    cout << "10's kitna:" << binary_search(vec.begin(), vec.end(), 10) << endl;
    return 0;
}