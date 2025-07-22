#include <iostream>
#include <queue>
using namespace std;

void print(priority_queue<int> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    priority_queue<int> pq; // max-heap by defalut
    pq.push(2);
    pq.emplace(3);
    pq.emplace(4);
    pq.emplace(5);
    print(pq);

    priority_queue<int, vector<int>, greater<int>> pq2; // for lower
    // priority_queue<int, vector<int>, <int>> pq3;
    pq2.push(10);
    pq2.push(1);
    pq2.push(100);
    while (!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << endl;
    return 0;
}