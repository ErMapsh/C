#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    pair<char, int> p2 = {'a', 1};
    cout << p2.first << " " << p2.second << endl;

    // pair of pair
    pair<int, pair<char, int>> p3 = {1, {'a', 2}};
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;

    /* vector of pair */
    cout << "----------Vector of pair---------" << endl;
    vector<pair<int, char>> vec = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
    vec.push_back({4, 'd'});
    vec.emplace_back(5, 'e'); // emplace back is faster than push_back
    // for (pair<int, char> value : vec)
    for (auto value : vec)
    {
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}