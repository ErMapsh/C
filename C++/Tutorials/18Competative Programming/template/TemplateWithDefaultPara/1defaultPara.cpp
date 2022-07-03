#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char> // default parameter
class myClass
{
    T1 a;
    T2 b;
    T3 c;

public:
    myClass(T1 a, T2 b, T3 c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void Display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main(int argc, char const *argv[])
{
    myClass mc(2, 3.4, 'c'); // if default
    mc.Display();

    myClass<float, char, char> mc1(3.4, 'c', 'b'); // if we dont want default
    mc1.Display();
    return 0;
}