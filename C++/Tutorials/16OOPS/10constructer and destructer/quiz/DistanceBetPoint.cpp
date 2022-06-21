#include <iostream>
#include <cmath>
using namespace std;

class Point
{

private:
    int a, b;
    friend void DistanceBetTwoPoints(Point o1, Point o2);

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

void DistanceBetTwoPoints(Point o1, Point o2)
{   
    float result = sqrt(pow(o2.a - o1.a, 2) + pow(o2.b - o1.b, 2));
    cout << "The Distance between Two Points:" << result << endl;
    // cout << pow(4, 2);
}

int main(int argc, char const *argv[])
{
    Point p1(3, 5);
    p1.Display();

    Point p2(-2, 3);
    p2.Display();
    
    DistanceBetTwoPoints(p1, p2);
    return 0;
}