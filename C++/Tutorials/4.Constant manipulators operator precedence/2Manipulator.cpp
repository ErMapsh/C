#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    /*
        Manipulator for width.
        for right justify 
    */
    int a = 3, b = 32, c = 3452;
    // without setw
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
    cout << "Value of c is " << c << endl;

    // with setw
    cout << "Value of a is " <<setw(4)<< a << endl;
    cout << "Value of b is " <<setw(4)<< b << endl;
    cout << "Value of c is " <<setw(4)<< c << endl;
    return 0;
}
