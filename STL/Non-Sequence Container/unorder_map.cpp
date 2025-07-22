#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    /* time complexity of unorder_map is O(1) expect map is O(logn),
    if there is any collision then its could be O(n) in some scenario
     */

    unordered_map<string, int> um;
    um.emplace("abc", 1);
    um.emplace("cde", 2);
    um.emplace("fgh", 3);

    um.erase("fgh");

    for (auto i : um)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}