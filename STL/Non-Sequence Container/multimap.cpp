#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    // can be duplicate keys
    multimap<string, string> m;
    m.emplace("ABC", "1");
    m.emplace("CDE", "2");
    m.emplace("CDE", "3");
    // m.erase("CDE"); // to all delete
    m.erase(m.find("CDE"));
    for (auto a : m)
    {
        cout << a.first << " " << a.second << endl;
    }
    return 0;
}