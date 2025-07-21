#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vec)
{
    cout << "vector :" << vec.size() << " " << vec.capacity() << endl;
    for (int v : vec)
    {
        cout << v << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    /* way to create vector */
    vector<int> noninit;          // declared but not init
    vector<int> samevalue(2, 10); // size of array is -> 2 but both having value is 10
    vector<int> vec = {1, 2};     // declared but not initialize
    vector<int> vec1(vec);        // copy the vector to vector1

    printVector(vec);
    cout << "vector size: " << vec.size() << endl;
    cout << "vector capacity: " << vec.capacity() << endl;
    vec.push_back(3); // when we push back element in vector the size got * 2 -> if size not available means   -> vec.size() * 2 = 4
    vec.push_back(4); // -> if size is present for one element then its okk no need to create more space
    vec.push_back(5); // but now there no size for another element then vec.size() * 2 = 8
    printVector(vec);
    vec.pop_back();
    printVector(vec);

    cout << "Front: " << vec.front() << endl;
    cout << "Back: " << vec.back() << endl;

    cout << "vector capacity: " << vec.capacity() << endl;
    // printVector(vec);
    cout << "value at index 2: " << vec.at(2) << endl
         << endl;
    // cout << "value at index 2: " << vec[2] << endl;

    cout << "---erase, insert, clear, empty---" << endl;
    vector<int> more = {1, 2, 3, 4, 5, 6, 7};
    more.erase(more.begin());
    printVector(more);
    more.erase(more.begin() + 1, more.begin() + 3);
    printVector(more);
    cout << "more vector capacity: " << more.capacity() << endl;

    /* insert */
    vector<int> insert(more);
    insert.insert(insert.begin() + 2, 100); // after insertion element gonna right shift by 1
    printVector(insert);

    /* clear & empty-> capacity remain same */
    cout << "insert is empty: " << insert.empty() << endl;
    insert.clear();
    printVector(insert);
    cout << "insert is empty: " << insert.empty() << endl;
    cout << "iterator: " << *(more.begin()) << " : " << *(more.end() - 1) << endl;
    return 0;
}