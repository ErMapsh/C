#include <iostream>
using namespace std;
class BaseClass
{
private:
    int data1; // private members are not inheritable.
public:
    int data2;
    void setData(int x, int y); // but using public methods we can set private data from derived class.
    int GetData1();
    int GetData2();
};

void BaseClass ::setData(int x, int y)
{
    data1 = x;
    data2 = y;
}

int BaseClass ::GetData1()
{
    return data1;
}

int BaseClass ::GetData2()
{
    return data2;
}




// --------DerivedClass --> public member of base class become private member of derived class---------
class DerivedClass : private BaseClass
{
private:
    int data3;

public:
    void process();
    void Display();
};

void DerivedClass ::process(void)
{
    setData(10, 21);
    data3 = data2 * GetData1();
}

void DerivedClass ::Display(void)
{
    cout << "Value of data1 is " << GetData1() << endl; // we cant inherited private member of base class, but we get from base class public members/methods
    cout << "Value of data2 is " << data2 << endl;      // we can inherited public members of base class
    cout << "Value of data3 is " << data3 << endl;      // data3 is own member of this class
}





int main(int argc, char const *argv[])
{
    DerivedClass der;
    der.process(); // own class public methods
    der.Display(); // own class public methods
    return 0;
}