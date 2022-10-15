#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
class SimpleCalculater
{
protected:
    float a, b;

public:
    void SetSimpData()
    {
        cout << "Enter The value of a : ";
        cin >> a;
        cout << "Enter The value of b : ";
        cin >> b;
    }

    void PerformSimpOperation()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};

class ScientificCalculater
{
protected:
    int c;

public:
    void SetSciData()
    {
        cout << "Enter The value of c : ";
        cin >> c;
    }

    void performOperationsScientific()
    {
        cout << "The value of cos(a) is: " << cos(c) << endl;
        cout << "The value of sin(a) is: " << sin(c) << endl;
        cout << "The value of exp(a) is: " << exp(c) << endl;
        cout << "The value of tan(a) is: " << tan(c) << endl;
    }
};

class HybridCal : public SimpleCalculater, public ScientificCalculater
{
};

int main(int argc, char const *argv[])
{
    HybridCal h;
    h.SetSimpData();
    h.PerformSimpOperation();
    cout<<endl;
    h.SetSciData();
    h.performOperationsScientific();
    return 0;
}