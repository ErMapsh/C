#include <iostream>
using namespace std;

// basic syntax of template
template <class T>
class vector
{
    T *arr;
    int size;

public:
    vector() {}

    vector(T *x)
    {
        // steps
    }
    // and many other methods
};

int main()
{
    vector<int> myVec1;
    vector<float> myVec2;
    return 0;
}
