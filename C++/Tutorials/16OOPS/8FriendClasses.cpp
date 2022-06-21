#include <iostream>
using namespace std;

// forward declaration
class Complex;

class calculater
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

class Complex
{
private:
    int a;
    int b;
    // :: this called scope resolution
    // friend int calculater ::sumRealComplex(Complex o1, Complex o2);
    // friend int calculater ::sumCompComplex(Complex o1, Complex o2);
    friend class calculater; // if there are lots of function like above lines

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void PrintNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculater ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculater ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2, sumOfObject;
    c1.setdata(2, 3);
    c1.PrintNumber();

    c2.setdata(5, 8);
    c2.PrintNumber();

    calculater calc;
    int x = calc.sumRealComplex(c1, c2);
    cout << x << endl;
    int y = calc.sumCompComplex(c1, c2);
    cout << y << endl;
    return 0;
}