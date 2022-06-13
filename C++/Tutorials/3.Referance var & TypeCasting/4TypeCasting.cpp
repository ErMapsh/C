#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // converting data type to another data type
    // while changing a data type also size of datatype also change
    float a = 34.5;
    double b = 33424.23424;
    int c = 4;

    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << int(a) << endl;
    cout << "The value of a is " << (int)a << endl;

    cout << "The value of b is " << int(b) << endl;
    cout << "The value of b is " << (int)b << endl;

    cout << "The value of b is " << float(c) << endl;
    cout << "The value of b is " << (float)c << endl;

    return 0;
}
