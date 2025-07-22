#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.emplace(3);

    stack<int> s2;
    s2.swap(s);
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
    cout << "SIZE of stack 1: " << s.size() << endl;
    cout << "SIZE of stack 2: " << s2.size() << endl;
    return 0;
}