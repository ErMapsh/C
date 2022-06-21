#include <iostream>
using namespace std;

class c2; // forward declaration

class c1
{
private:
    int num1;
    friend void swapNumber(c1 &o1, c2 &o2);

public:
    void setData(int x)
    {
        num1 = x;
    }

    void Display()
    {
        cout << "The value of number is " << num1 << endl;
    }
};

class c2
{
private:
    int num2;
    friend void swapNumber(c1 &o1, c2 &o2);

public:
    void setData(int x)
    {
        num2 = x;
    }

    void Display()
    {
        cout << "The value of number is " << num2 << endl;
    }
};

void swapNumber(c1 &o1, c2 &o2)
{
    /*
        we use value reference
    */
    int temp = o1.num1;
    o1.num1 = o2.num2;
    o2.num2 = temp;
}

int main(int argc, char const *argv[])
{
    c1 obj1;
    obj1.setData(4);

    c2 obj2;
    obj2.setData(8);

    cout << "before value swapping.." << endl;
    cout << "The value of object 1 is ";
    obj1.Display();
    cout << "The value of object 2 is ";
    obj2.Display();


    swapNumber(obj1, obj2);
    cout << "\nAfter swapping" << endl;
    cout << "The value of object 1 is ";
    obj1.Display();
    cout << "The value of object 2 is ";
    obj2.Display();
    return 0;
}