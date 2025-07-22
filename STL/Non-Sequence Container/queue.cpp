#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);
    print(q);

    queue<int> q2;
    q2.swap(q);
    print(q);
    print(q2);
    return 0;
}