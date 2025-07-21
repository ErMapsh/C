#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> d = {1, 2, 3, 4};
    for (int value : d)
    {
        cout << value << " ";
    }
    cout << endl;
    d.push_front(12);
    cout << d.front();
    cout << endl;
    cout << d[2];
    cout << endl;
    return 0;
}