#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string name = "ErMapsh";
    cout << "Name is " << name << endl;
    cout << "Length of Name is " << name.length() << endl;
    cout << "The short Name is " << name.substr(2, 7) << endl;
    cout << "Profession is " << name.substr(0, 2) << endl;
    return 0;
}
