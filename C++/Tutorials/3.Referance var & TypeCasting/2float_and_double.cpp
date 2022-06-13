#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
        when we pass a value to functions like 34.4, c++ compiler 34.4 identify as is double not float, that time we can use f(float) or l(long double).
        34.4f is float not double
        sometime we have to pass a value with its type, then we can use that.
    */

    float a = 34.4;        // is saying double, but a is float.
    float d = 34.4f;       // f is says value is float and define a type of var
    long double e = 34.4l; // l is says value is long doublee and define a type of var
    cout << "The value of d is " << d << " and size of d is " << sizeof(d) << endl;
    cout << "The value of e is " << e << " and size of e is " << sizeof(e) << endl;
    return 0;
}
