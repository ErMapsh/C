#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "abc";
    next_permutation(str.begin(), str.end());
    cout << str << endl;
    next_permutation(str.begin(), str.end());
    cout << str << endl;
    next_permutation(str.begin(), str.end());
    cout << str << endl;
    next_permutation(str.begin(), str.end());
    cout << str << endl
         << endl;

    prev_permutation(str.begin(), str.end());
    cout << str << endl;
    return 0;
}