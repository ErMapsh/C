#include <iostream>
using namespace std;
class Simp
{
private:
    int a, b, c;

public:
    Simp(int x, int y = 5, float z = 3.4)
    {
        a = x;
        b = y;
        c = z;
    }

    void Display()
    {
        cout << "The Value of a, b and c is " << a << "," << b << "," << c << endl;
    }
};

int main(int argc, char const *argv[])
{
    Simp simple(2, 6);
    simple.Display();

    Simp s(1);
    s.Display();
    return 0;
}