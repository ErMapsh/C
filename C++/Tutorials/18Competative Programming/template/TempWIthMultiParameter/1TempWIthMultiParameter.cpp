#include <iostream>
using namespace std;

template <class T1, class T2>
class myClass
{
    T1 data;
    T2 data2;

public:
    myClass(T1 data, T2 data2)
    {
        this->data = data;
        this->data2 = data2;
    }

    void Display()
    {
        cout << data << endl
             << data2 << endl;
    }
};
int main(int argc, char const *argv[])
{
    /*
        this is a best use of template, write a single class and use for different datatypes
    */
    myClass<float, int> MC(3.4, 5);
    MC.Display();
    cout << endl;

    myClass<int, char> MC1(100, 'c');
    MC1.Display();
    cout << endl;

    myClass<char, float> MC2('p', 5.22);
    MC2.Display();

    return 0;
}