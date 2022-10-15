/*
For a protected member:
                            Public derivation    Private Derivation    Protected Derivation

    1. Private members      Not Inherited        Not Inherited         Not Inherited
    2. Protected members    Protected            Private               Protected
    3. Public members       Public               Private               Protected
*/

#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;

public:
    int c;
};

class Derived : protected Base
{
public:
    void setData()
    {
        a = 34;
        c = 2;
        // b is not accessiable because is private. not inheritable
    }

    void display()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    d.setData();
    d.display();
    return 0;
}
