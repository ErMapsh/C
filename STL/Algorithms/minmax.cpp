#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "min: " << min(12, 3) << endl;
    cout << "min: " << max(12, 33) << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Min element: " << *(min_element(vec.begin(), vec.end())) << endl;
    cout << "Max element: " << *(max_element(vec.begin(), vec.end())) << endl;
    return 0;
}