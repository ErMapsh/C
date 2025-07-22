#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> m = {{"message", 1}, {"code", 2}}; // key are sorted in asc order
    m["new"] = 3;
    m.emplace("camera", 2);
    m.erase("message");
    cout << "count of camera: " << m.count("camera") << endl;

    if (m.find("camera") != m.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    for (auto value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}