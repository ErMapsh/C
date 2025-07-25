#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /** there are diff builtin are there, for different data type */
    int a = 12;
    long int b = 14;
    long long int c = 13;
    cout << __builtin_popcount(a) << endl;
    cout << __builtin_popcountl(b) << endl;
    cout << __builtin_popcountll(c) << endl;
    return 0;
}