#include <iostream>
using namespace std;

class Point
{

private:
    int a, b;

public:
    Point(int x, int y)
    {
        a = x;
        b = y;
    }

    void Display()
    {
        cout << "The point is (" << a << ", " << b << ")" << endl;
    }
};
int main(int argc, char const *argv[])
{
    Point p1(3, 5);
    p1.Display();

    Point p2(-2, 3);
    p2.Display();

    return 0;
}