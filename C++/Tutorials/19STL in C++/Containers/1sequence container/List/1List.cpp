#include <iostream>
#include <list>
using namespace std;

template <class T>
void Display(list<T> &ls) // template function
{
    list<int>::iterator iter = ls.begin(); // making pointer to point a list
    // cout << "size of list : " << ls.size() << endl; // return the total count
    for (iter = ls.begin(); iter != ls.end(); iter++)
    {
        /*
            ls.begin() --> points to first element of list
            ls.end() --> return the end+1 element of list
        */
        cout << *iter << "  ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(8);

    list<int>::iterator iter = list1.begin(); // points to the first position
    // cout << *iter;
    Display(list1);
    list1.pop_back();
    // list1.pop_front();
    // list1.remove(2);
    Display(list1);

    list<int> List2(3); // list of length is 3 with garbage value
    list<int>::iterator iter2 = List2.begin();
    *iter2 = 21;
    iter2++;
    *iter2 = 12;
    iter2++;
    *iter2 = 20;
    Display(List2);

    // --------List1 sort--------
    // list1.sort();
    // Display(list1);

    // --------Merging two list---------
    list1.merge(List2);
    list1.sort();
    Display(list1);

    // --- reverse the list------
    list1.reverse();
    Display(list1);
    return 0;
}