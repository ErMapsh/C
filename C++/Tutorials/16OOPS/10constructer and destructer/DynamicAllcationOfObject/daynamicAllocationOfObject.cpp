#include <iostream>
using namespace std;

class BankDeposit
{
private:
    int principal; // initial value
    int years;
    float interestRate;
    float ReturnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float i); // i can be a value like 0.04
    BankDeposit(int p, int y, int i);   // i can be a value like 4
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float i)
{
    principal = p;
    years = y;
    interestRate = i;

    ReturnValue = principal;
    for (int j = 0; j < y; j++)
    {
        ReturnValue = ReturnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int i)
{
    principal = p;
    years = y;
    interestRate = float(i) / 100;

    ReturnValue = principal;
    for (int j = 0; j < y; j++)
    {
        ReturnValue = ReturnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal << ". Return value after " << years << " years is " << ReturnValue << endl;
}

int main(int argc, char const *argv[])
{
    BankDeposit bd1, bd2, bd3;
    int p, y, I;
    float i;

    cout << "Enter the value of p, y and i: " << endl;
    cin >> p >> y >> i;
    bd1 = BankDeposit(p, y, i);
    bd1.show();

    cout << "Enter the value of p, y and I: " << endl;
    cin >> p >> y >> I;
    bd2 = BankDeposit(p, y, I);
    bd2.show();

    return 0;
}