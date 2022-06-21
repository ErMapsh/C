#include <iostream>
using namespace std;

class Y; // forward declaration

class X
{
private:
    int num;
    friend void add(X o1, Y o2);

public:
    void setValue(int value)
    {
        num = value;
    }
};

class Y
{
private:
    int data;
    friend void add(X o1, Y o2);

public:
    void setValue(int value)
    {
        data = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and Y object give me " << o1.num + o2.data << endl;
}

int main(int argc, char const *argv[])
{
    X a;
    a.setValue(3);

    Y b;
    b.setValue(6);

    add(a, b);
    return 0;
}