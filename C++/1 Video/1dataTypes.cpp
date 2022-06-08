#include <iostream> // preprocessor program
using namespace std;

int main()
{
    // cout << "hello world" << endl; // console out
    // cout << "Next Line" << endl; // here endl is endline

    // DataTypes
    short MarksInMaths = 18; // CamelCaseNotation
    int a;
    float const b = 4.5;//we cant change constant
    long c;
    long long d;
    double e = 46.333;
    e = 59;//we can change normal variable values like e but not const var
    long double e1 = 4099;
    string name = "ErMapsh"; // string addtional datatype in C++

    // cout << sizeof(a) << endl;
    // cout << "The Marks in maths is " << MarksInMaths << endl;
    cout << "The Score is " << b << endl;
    return 0;
}
