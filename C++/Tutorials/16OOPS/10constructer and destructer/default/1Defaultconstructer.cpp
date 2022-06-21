#include <iostream>
using namespace std;

class complex
{

private:
    int a, b;

public:
    /*
    Important things of Constructors in C++
    - Constructor is a special member function with the same name as of the class.
    - It is used to initialize the objects of its class
    - A constructor should be declared in the public section of the class
    - They are automatically invoked whenever the object is created
    - They cannot return values and do not have return types
    - It can have default arguments
    - We cannot refer to their address
    */

    complex(void); // This is a default constructor as it takes no parameter
    void Display()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)
{
    a = 10;
    b = 3;
}
int main(int argc, char const *argv[])
{
    complex c;
    c.Display();
    return 0;
}