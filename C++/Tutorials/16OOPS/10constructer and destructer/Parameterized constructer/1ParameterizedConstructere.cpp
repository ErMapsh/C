#include <iostream>
using namespace std;

class complex
{

private:
    int a, b;

public:
    complex(int x, int y); // This is a parameterized constructor as it takes parameter
    void Display()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
int main(int argc, char const *argv[])
{   
    // Implict call 
    complex c(1, 2);
    c.Display();

    // explicit call
    complex c2 = complex(2,4);
    c2.Display();
    return 0;
}