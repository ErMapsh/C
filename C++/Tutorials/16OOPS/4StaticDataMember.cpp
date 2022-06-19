#include <iostream>
using namespace std;
/*
When a static data member is created, there is only a single copy of the data member which is shared between all the objects of the class.
*/
class Employe
{

private:
    int EmployeId;
    static int count; // static var in class also called class variable

public:
    void setData(void)
    {
        cout << "Enter your Employe id:" << endl;
        cin >> EmployeId;
        count++;
    }

    void Display(void)
    {
        cout << "The id of this employee is " << EmployeId << " and this is employee number " << count << endl;
    }
};

// Count is the static data member of class Employee
// satic variable declaration always written outside of class
int Employe ::count; // Default value is 0

int main(int argc, char const *argv[])
{
    Employe mahesh, ErMapsh, Mapsh;

    mahesh.setData();
    mahesh.Display();

    ErMapsh.setData();
    ErMapsh.Display();

    Mapsh.setData();
    Mapsh.Display();
    return 0;
}