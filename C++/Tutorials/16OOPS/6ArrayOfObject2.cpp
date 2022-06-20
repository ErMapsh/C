#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void SetDataBysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void Display()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main(int argc, char const *argv[])
{
    complex o1, o2, o3;

    o1.setData(1, 2);
    o1.Display();

    o2.setData(3, 4);
    o2.Display();

    o3.SetDataBysum(o1, o2);
    o3.Display();

    return 0;
}