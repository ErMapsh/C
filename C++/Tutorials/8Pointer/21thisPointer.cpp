#include <iostream>
using namespace std;
/* this is keyword which is pointer which points to object which invovkes the member function */

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }

    A &PointerOfObject()
    {
        return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main(int argc, char const *argv[])
{

    A a;
    a.setData(4);
    a.PointerOfObject().getData(); // here we getting tha a object like *address and then dereferancing them
    a.getData();
    return 0;
}