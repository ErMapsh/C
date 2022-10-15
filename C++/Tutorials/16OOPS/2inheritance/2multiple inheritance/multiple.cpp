// Syntax in multiple inheritance:
// overall derived class is build with more than 1 Base class
/*
class DerivedC: visibility-mode baseClass1, visibility-mode baseClass1
{
    Class body of class "DerivedC"
};
*/

#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1Int;

public:
    void setBase1Int(int x)
    {
        base1Int = x;
    }
};

class Base2
{
protected:
    int base2Int;

public:
    void setBase2Int(int x)
    {
        base2Int = x;
    }
};

class Base3
{
protected:
    int base3Int;

public:
    void setBase3Int(int x)
    {
        base3Int = x;
    }
};

// derived class from two base class
class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of base1Int are " << base1Int << endl;
        cout << "The value of base2Int are " << base2Int << endl;
        cout << "The value of base3Int are " << base3Int << endl;
        cout << "The sum of these values is " << base1Int + base2Int + base3Int << endl;
    }
};

int main(int argc, char const *argv[])
{
    Derived d;
    d.setBase1Int(1);
    d.setBase2Int(2);
    d.setBase3Int(3);
    d.show();
    return 0;
}
