// solution as a function template
#include <iostream>
using namespace std;

template <class T1, class T2>
float funAvg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{

    cout << "The avg is " << funAvg(2, 4) << endl;
    cout << "The avg is " << funAvg(2, 3.5) << endl;
    cout << "The avg is " << funAvg(2.89, 3.5) << endl;
    int a = 3, b = 5;
    Swap(a, b);
    cout << a << endl
         << b;
    return 0;
}