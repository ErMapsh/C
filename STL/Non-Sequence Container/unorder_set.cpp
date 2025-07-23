#include <iostream>
#include <unordered_set>
using namespace std;

int main(int argc, char const *argv[])
{
    /* set is content unique values with unorder way */
    unordered_set<int> s = {2, 3, 4, 5};
    // s.emplace(1);
    // remove duplicatess

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}