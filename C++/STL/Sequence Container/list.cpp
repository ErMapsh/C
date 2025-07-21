#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l)
{
    if (l.empty())
    {
        cout << "Empty list" << endl;
        return;
    }

    for (int item : l)
    {
        cout << item << "";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    list<int> l;
    list<int> l1 = {1, 2, 3};
    printList(l);
    printList(l1);
    return 0;
}