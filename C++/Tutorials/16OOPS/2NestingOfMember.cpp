#include <iostream>
using namespace std;

class binary
{
private:
    string s;

public:
    void get_bin(void);
    void chk_bin(void);
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

void binary :: one_compliment()
{
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

void binary :: Display(){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    binary binarynumber;
    binarynumber.get_bin();
    binarynumber.chk_bin();
    binarynumber.Display();
    binarynumber.one_compliment();
    binarynumber.Display();
    return 0;
}