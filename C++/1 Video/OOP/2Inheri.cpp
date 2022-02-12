#include <iostream>
using namespace std;
#include <string>

class Employe
{
public:
    string name;
    int salary;

    // creating a constructer
    Employe(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    // creating details of employee
    void printDetails()
    {
        cout << "The Name of Employe is " << this->name << " and his salary is " << this->salary << "$" << endl;
    }

    // to get employe password
    void getSecretPasswordOfEmploy()
    {
        cout << "the password is " << this->secretPassword;
    }

private:
    int secretPassword;
};

class Programmer : public Employe
{
public:
    int Error = 10;
};

int main(int argc, char const *argv[])
{
    // Employe ErMapsh("ErMapsh", 1444, 32156);
    // ErMapsh.printDetails();

    return 0;
}
