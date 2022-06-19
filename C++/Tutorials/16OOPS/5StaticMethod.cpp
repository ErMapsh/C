#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void Display(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count;

int main(int argc, char const *argv[])
{
    /*
    When a static method is created, they become independent of any object and class. Static methods can only access static data members and static methods.
    and we can access static methods diretly using class
    */

    Employee mahesh, ErMapsh, Mapsh;
    mahesh.setData();
    mahesh.Display();
    Employee::getCount();

    ErMapsh.setData();
    ErMapsh.Display();
    Employee::getCount();

    Mapsh.setData();
    Mapsh.Display();
    Employee::getCount();

    return 0;
}