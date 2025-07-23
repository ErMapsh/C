#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    /* set is content unique values  */
    set<int> s = {2, 3, 4, 5};
    // s.emplace(1);
    // remove duplicatess

    // lower_bound means values should not less than given number
    cout << *(s.lower_bound(3)) << endl;
    cout << *(s.lower_bound(1)) << endl;
    cout << *(s.lower_bound(6)) << endl
         << endl;

    //  value should be greater than given number
    cout << *(s.upper_bound(3)) << endl;
    cout << *(s.upper_bound(1)) << endl
         << endl;
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}