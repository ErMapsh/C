#include <iostream>
using namespace std;

class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};
class D : public B
{
    int a;

public:
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};

int main(int argc, char const *argv[])
{
    B b;
    b.say();

    D d;
    d.say(); // D's new say() method will override base class's say() method
}