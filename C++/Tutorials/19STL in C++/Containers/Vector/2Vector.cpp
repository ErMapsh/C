#include <iostream>
#include <vector>
using namespace std;

template <class T>
void Display(vector<T> &v) // template function
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<char> chara(5);  // 5 element character vector
    vector<double> Doub(3); // 3 element character vector
    Display(chara);         // vector main kuch hai hi nahi to kya console out krega

    chara.push_back('c');
    Display(chara);

    vector<int> integer(5, 10); // 5 elements with value 10
    Display(integer);
    return 0;
}