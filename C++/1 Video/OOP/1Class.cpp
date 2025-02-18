#include <iostream>
using namespace std;

// class - is teplate or blueprint
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

    void printDetails()
    {
        cout << "The Name of Employe is " << this->name << " and his salary is " << this->salary << "$" << endl;
    }

    void getSecretPasswordOfEmploy()
    {
        cout << "the password is " << this->secretPassword << endl;
        this->getPrivateFun();
    }

private:
    int secretPassword;

    void getPrivateFun()
    {
        cout << "this function not accessble direclty but can though public method" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employe hr("ErMapsh", 10000, 45454);
    // hr.name = "ermapsh";
    // hr.salary = 10000;
    // cout<<"The Name of Employe"<<hr.name<<"and his salary is "<<hr.salary<<"$"<<endl;
    hr.printDetails();
    cout << hr.name << endl;
    // cout << hr.secretPassword << endl; // we cant get private variable directly but class funtion can be
    hr.getSecretPasswordOfEmploy();
    // hr.getPrivateFun(); //
    return 0;
};
