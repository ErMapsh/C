/*
OOPs - Classes and objects

C++ --> initially called --> C with classes by stroustroup

class --> extension of structures (in C)

structures had limitations:
     - members are public
     - No methods

classes --> structures + more
classes --> can have methods and properties
classes --> can make few members as private & few as public

structures in C++ are typedef

you can also declare objects along with the class declarion like this:
class Employee{
           // Class definition
           } harry, rohan, lovish;

harry.salary = 8 makes no sense if salary is private
Nesting of member functions
*/


#include <iostream>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void get_bin(void);
    void one_compliment(void);
    void Display(void);
};

void binary ::get_bin()
{
    cout << "Enter the Binary number: ";
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Opps, Not binary Number..." << endl;
            exit(0);
        }
    }
}

void binary ::one_compliment()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary ::Display()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    binary binarynumber;
    binarynumber.get_bin();
    // binarynumber.chk_bin();
    binarynumber.Display();
    binarynumber.one_compliment();
    binarynumber.Display();
    return 0;
}