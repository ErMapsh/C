#include <iostream>
#include <vector>
using namespace std;

/*
    when we use vector classes, we need to import file
    #include <vector>

    Note:
    we cant resize a array size, but we can in vector.
*/

template <class T>
void Display(vector<T> &v) // template function
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> vct1; // i want to create int type of vector with 0 length vector

    int no, size;
    cout << "Enter The size of Vector: ";
    cin >> size;
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The element: ";
        cin >> no;
        vct1.push_back(no); // push element
    }

    Display(vct1);
    cout << endl;

    // vct1.pop_back();// pop element
    // Display(vct1);

    // iterator =--> its points to container
    vector<int>::iterator itr = vct1.begin(); // iterator points to first position (0) of vector
    vct1.insert(itr + 1, 555);                // is saying insert element at 0+1 index... like itr+2-->0+2=2
    Display(vct1);
    cout << endl;

    // we can also insert value multiple time
    vector<int>::iterator itra = vct1.begin();
    vct1.insert(itra + 1, 5, 20);
    Display(vct1);
    cout << endl;

    cout << "Total value count in vector is " << vct1.size() << endl; // give total value in vector

    cout << "Front Element is " << vct1.front() << endl;
    cout << "Back Element is " << vct1.back() << endl;

    cout<<"Clear the Vector "<<endl;
    vct1.clear();
    Display(vct1);
    return 0;
}