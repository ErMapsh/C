#include <iostream>
using namespace std;
#include <string>

class Employe
{
public:
    string name;
    int salary;

    // Creating a constructor
    Employe(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    // Creating details of employee
    void printDetails()
    {
        cout << "The Name of Employe is " << this->name << " and his salary is " << this->salary << "$" << endl;
    }

    // To get employee password
    void getSecretPasswordOfEmploy()
    {
        cout << "The password is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

class Programmer : public Employe
{
public:
    int Error = 10;

    // Constructor explicitly calling base class constructor
    Programmer(string n, int s, int sp) : Employe(n, s, sp) {}

    void print()
    {
        cout << "Programmer Name: " << this->name << endl;
    }
};

int main()
{
    Programmer p("ErMapsh", 1444, 32156);
    p.print();

    return 0;
}
