#include <iostream>
using namespace std;

class Employe
{
private:
    int id;
    float salary;

public:
    Employe(){};
    Employe(int x)
    {
        id = x;
        salary = 50;
    }

    void setData(int x, int y)
    {
        id = x;
        salary = y;
    }

    void Display()
    {
        cout << "The id of employe is " << id << " and salary having " << salary << "." << endl;
    }
};

/*
------- syntax for inheritance ---------
class {{Derived-Class}} : {{Visibility-Mode}} {{base class}}{

    class methods/members etc;
}

Notes:
0. Private Member of any class never inherited.
1. Default visibility mode is private.
2. Public Visibility Mode: Public member of the based class become public members of derived class.
3. Private Visibility Mode: Public member of the based class become Private members of derived class.
*/

class Programmer : Employe
{
private:
    int ProgrammingLanguagesKnown;
    string Lang[10];

public:
    Programmer() {}
    Programmer(int a)
    {

        ProgrammingLanguagesKnown = a;
    }

    void LanguageKnow()
    {
        cout << endl
             << "The Programming Language Known is " << ProgrammingLanguagesKnown << endl;
        cout << "Enter The known " << ProgrammingLanguagesKnown << " Programming Language." << endl;
        for (int i = 0; i < ProgrammingLanguagesKnown; i++)
        {
            cin >> Lang[i];
        }
    }

    void showAllLang()
    {
        cout << "\nThe Langauges are..." << endl;
        for (int i = 0; i < ProgrammingLanguagesKnown; i++)
        {
            cout << Lang[i] << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    Employe e1(5);
    e1.setData(73, 200000);
    e1.Display();

    Programmer p2(3);
    p2.LanguageKnow();
    p2.showAllLang();

    // p2.setData(73, 200000);
    return 0;
}