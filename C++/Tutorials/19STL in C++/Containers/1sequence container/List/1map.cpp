#include <iostream>
#include <map>
#include <string>
using namespace std;

template <class T1, class T2>
void Display(map<T1, T2> &marksMap)
{
    map<string, int>::iterator iter; // iterator for points to map
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << endl;
}

// map is associative array
int main(int argc, char const *argv[])
{
    map<string, int> marksMap;
    marksMap["ErMapsh"] = 73;
    marksMap["Adity"] = 100;
    marksMap["Mahesh"] = 8;

    /* data automatically sort in map like this
        marksMap = {
            "Adity" = 100,
            "ErMapsh" = 73,
            "Mahesh" = 8
        }

    */
    Display(marksMap);

    // insert operation
    marksMap.insert({{"Anant", 56}, {"Harry", 98}});
    Display(marksMap);

    // other methods
    cout<< "The size is "<< marksMap.size()<<endl;
    cout<< "The Max size is "<< marksMap.max_size()<<endl;
    cout<< "The empyty's return value is "<< marksMap.empty()<<endl;

    // clear 
    marksMap.clear();
    Display(marksMap);
    return 0;
}